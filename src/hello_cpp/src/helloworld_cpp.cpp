#include "rclcpp/rclcpp.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc,argv);
  auto node = rclcpp::Node::make_shared("helloword_cpp");
  RCLCPP_INFO(node->get_logger(),"yorosiku");
  rclcpp::shutdown();
  return 0;
}
