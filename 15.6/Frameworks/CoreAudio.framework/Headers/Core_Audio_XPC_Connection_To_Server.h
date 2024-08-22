// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CORE_AUDIO_XPC_CONNECTION_TO_SERVER_H
#define CORE_AUDIO_XPC_CONNECTION_TO_SERVER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface Core_Audio_XPC_Connection_To_Server : NSObject

@property (retain, nonatomic) NSXPCConnection *current_connection; // ivar: _current_connection
@property BOOL definitely_die; // ivar: _definitely_die
@property BOOL first_contact; // ivar: _first_contact
@property (nonatomic) weak_ptr<HAL_Server_Lifetime_Events> lifetime_event_handler; // ivar: _lifetime_event_handler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *lifetime_event_queue; // ivar: _lifetime_event_queue
@property int notify_token; // ivar: _notify_token
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property BOOL registered_for_notification; // ivar: _registered_for_notification
@property BOOL server_is_dead; // ivar: _server_is_dead


+(id)server;
-(BOOL)do_ping:(id)arg0 ;
-(id)_lazy_get_connection;
-(id)get_async_proxy:(id)arg0 ;
-(id)get_proxy:(id)arg0 ;
-(id)init;
-(id)lazy_get_connection;
-(void)add_connection:(id)arg0 ;
-(void)create;
-(void)dealloc;
-(void)handle_server_death;
-(void)handle_server_resurrection;
-(void)register_for_resurrection_notification;
-(void)remove_connection;
-(void)send_server_died;
-(void)send_server_resurrected;


@end


#endif