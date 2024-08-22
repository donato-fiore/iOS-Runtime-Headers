// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CORE_AUDIO_DAEMON_H
#define CORE_AUDIO_DAEMON_H

@class NSString, NSMutableSet;
@protocol Core_Audio_Hardware, XPC_IO_Gateway, NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface Core_Audio_Daemon : NSObject <Core_Audio_Hardware, XPC_IO_Gateway, NSXPCListenerDelegate>



@property (nonatomic) shared_ptr<HAL::Aggregate::Manager> aggregate_device_manager; // ivar: _aggregate_device_manager
@property (nonatomic) BOOL allow_connection_free_requests; // ivar: _allow_connection_free_requests
@property (nonatomic) function<int ()> client_pid_getter; // ivar: _client_pid_getter
@property (nonatomic) shared_ptr<std::shared_mutex> creation_mutex; // ivar: _creation_mutex
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) shared_ptr<AMCP::System::All_Control_Value_Observer> default_device_all_control_value_observer; // ivar: _default_device_all_control_value_observer
@property (nonatomic) shared_ptr<HAL::Default_Device::Manager> default_device_manager; // ivar: _default_device_manager
@property (readonly, copy) NSString *description;
@property (nonatomic) shared_ptr<Daemon_Guts> guts; // ivar: _guts
@property (readonly) NSUInteger hash;
@property (nonatomic) shared_ptr<Server_Side_Client_IO_Host> host; // ivar: _host
@property (retain, nonatomic) NSMutableSet *io_listener_connections; // ivar: _io_listener_connections
@property (nonatomic) BOOL is_alive; // ivar: _is_alive
@property (nonatomic) shared_ptr<HAL::Object_State::Manager> object_state_manager; // ivar: _object_state_manager
@property (nonatomic) function<std::unique_ptr<HALIO::Client_Power_Settings_Base> ()> powerSettingsFactory; // ivar: _powerSettingsFactory
@property (nonatomic) shared_ptr<HALS_PowerManager::System_Interface> power_manager_interface; // ivar: _power_manager_interface
@property (retain, nonatomic) NSMutableSet *property_listener_connections; // ivar: _property_listener_connections
@property (retain, nonatomic) NSMutableSet *remote_connections; // ivar: _remote_connections
@property (nonatomic) queue scratch_queue; // ivar: _scratch_queue
@property (nonatomic) shared_ptr<AMCP::Utility::Settings_Storage> settings_storage; // ivar: _settings_storage
@property (readonly) Class superclass;


-(*void)get_portal;
-(?)create_power_manager;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)create_io_listener_connection:(id)arg0 ;
-(id)create_listener_connection:(id)arg0 ;
-(id)init;
-(id)initWithMCPType:(NSInteger)arg0 ;
-(id)send_io_message:(struct XPC_Message_Payload )arg0 ;
-(int)get_client_pid;
-(struct Device_Token )device_token_from_user_info_item:(id)arg0 ;
-(struct function<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)> )get_begin_continuing_config_change_observer_proc:(BOOL)arg0 ;
-(struct function<void (unsigned int, bool, const std::tuple<std::vector<unsigned int>, std::vector<unsigned int>, boost::container::flat_map<unsigned int, std::tuple<boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>, boost::container::flat_map<AMCP::Address, AMCP::Thing, AMCP::Address::Is_Exact_Before>>>> &)> )get_end_config_change_observer_proc;
-(void)add_device_token_to_user_info:(struct Device_Token )arg0 user_info:(id)arg1 ;
-(void)add_property_listener:(id)arg0 reply:(id)arg1 ;
-(void)audio_object_get_property_data:(unsigned int)arg0 token:(struct Device_Token )arg1 at:(struct AudioObjectPropertyAddress )arg2 with:(id)arg3 reply:(id)arg4 ;
-(void)audio_object_get_property_info:(unsigned int)arg0 token:(struct Device_Token )arg1 at:(struct AudioObjectPropertyAddress )arg2 reply:(id)arg3 ;
-(void)audio_object_set_property_data:(unsigned int)arg0 token:(struct Device_Token )arg1 at:(struct AudioObjectPropertyAddress )arg2 with:(id)arg3 value:(id)arg4 reply:(id)arg5 ;
-(void)call_all_remote_listeners:(id)arg0 ;
-(void)call_all_remote_listeners_async:(id)arg0 ;
-(void)create_aggregate_device:(id)arg0 reply:(id)arg1 ;
-(void)create_config_change_observers;
-(void)create_device_for_client_io:(struct Transport_Token )arg0 with:(unsigned int)arg1 reply:(id)arg2 ;
-(void)create_io_client_for_endpoint:(id)arg0 reply:(id)arg1 ;
-(void)create_property_observer;
-(void)dealloc;
-(void)destroy_aggregate_device:(unsigned int)arg0 reply:(id)arg1 ;
-(void)handle_io_message:(struct Transport_Token )arg0 with:(struct Device_Token )arg1 incoming:(id)arg2 ;
-(void)handle_io_message:(struct Transport_Token )arg0 with:(struct Device_Token )arg1 incoming:(id)arg2 reply:(id)arg3 ;
-(void)ping:(int)arg0 reply:(id)arg1 ;
-(void)release_resources;
-(void)sendPropertiesChanged:(unsigned int)arg0 count:(NSUInteger)arg1 addresses:(struct AudioObjectPropertyAddress *)arg2 ;
-(void)start_all_client_io;
-(void)stop_all_client_io:(*void)arg0 ;


@end


#endif