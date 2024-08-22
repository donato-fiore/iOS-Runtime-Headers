// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CORE_AUDIO_PROPERTY_LISTENER_GATEWAY_H
#define CORE_AUDIO_PROPERTY_LISTENER_GATEWAY_H

@class Gateway;
@protocol Core_Audio_Property_Listener, OS_dispatch_queue;



@interface Core_Audio_Property_Listener_Gateway : Gateway <Core_Audio_Property_Listener>



@property (readonly, nonatomic) *void list;
@property (nonatomic) *void list_ptr; // ivar: _list_ptr
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notification_queue; // ivar: _notification_queue


-(?)initWithObjectMap;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
// -(NSUInteger)add_listener_for_property_id:(struct Property_Identity )arg0 with_listener_block:(id)arg1 and_queue:(unk)arg2  ;
-(NSUInteger)add_listener_for_property_id:(struct Property_Identity )arg0 with_listener_proc:(*unk)arg1 and_user_data:(*void)arg2 ;
-(void)dealloc;
-(void)handle_property_changes:(id)arg0 ;
-(void)handle_property_changes:(id)arg0 reply:(id)arg1 ;
-(void)handle_server_disconnected;
-(void)handle_server_reconnected;
-(void)notify_listeners_of_object:(unsigned int)arg0 about_changes_to_properties:(*void)arg1 ;
-(void)release_resources;
// -(void)remove_listener_for_property_id:(struct Property_Identity )arg0 with_listener_block:(id)arg1 and_queue:(unk)arg2  ;
-(void)remove_listener_for_property_id:(struct Property_Identity )arg0 with_listener_proc:(*unk)arg1 and_user_data:(*void)arg2 ;
-(void)remove_listener_with_token:(NSUInteger)arg0 ;
-(void)remove_listeners_for_device_id:(unsigned int)arg0 ;
-(void)synchronously_notify_listeners_of_object:(unsigned int)arg0 about_changes_to_properties:(*void)arg1 ;


@end


#endif