// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OS_XPC_REMOTE_CONNECTION_H
#define OS_XPC_REMOTE_CONNECTION_H

@class OS_remote_service, NSString;
@protocol OS_xpc_object, OS_nw_connection, OS_nw_listener, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "OS_xpc_remote_channel.h"
#import "OS_xpc_remote_message.h"
#import "OS_xpc_remote_pending_stream.h"
#import "OS_xpc_remote_stream.h"
#import "OS_xpc_remote_outstanding_reply.h"
#import "OS_xpc_remote_listener.h"

@interface OS_xpc_remote_connection : NSObject <OS_xpc_object>

 {
    char * remote_service_name;
    NSObject<OS_nw_connection> *root_connection;
    NSObject<OS_nw_listener> *root_listener;
    BOOL root_channel_helo_received;
    OS_xpc_remote_channel *root_channel;
    BOOL reply_channel_helo_received;
    OS_xpc_remote_channel *reply_channel;
    BOOL server_mode;
    unsigned char protocol_version_number;
    NSUInteger protocol_feature_flags;
    OS_xpc_remote_message *msgq_stqh_first;
    OS_xpc_remote_message *msgq_stqh_last;
    OS_xpc_remote_pending_stream *pending_streams_stqh_first;
    OS_xpc_remote_pending_stream *pending_streams_stqh_last;
    OS_xpc_remote_stream *streams_stqh_first;
    OS_xpc_remote_stream *streams_stqh_last;
    OS_xpc_remote_outstanding_reply *outstanding_replies_stqh_first;
    OS_xpc_remote_outstanding_reply *outstanding_replies_stqh_last;
    NSUInteger next_msg_id;
    NSUInteger first_msg_id;
    NSUInteger local_service_version;
    NSUInteger remote_service_version;
    unsigned int traffic_class;
    int error;
    OS_remote_service *remote_service;
    int preexisting_socket;
    NSObject<OS_nw_connection> *preexisting_connection;
    BOOL requires_nw_listener_create_workaround;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *event_handler; // ivar: _event_handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internal_queue; // ivar: _internal_queue
@property (retain, nonatomic) OS_xpc_remote_listener *listener; // ivar: _listener
@property (nonatomic) BOOL send_in_progress; // ivar: _send_in_progress
@property int state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target_queue; // ivar: _target_queue
@property (nonatomic) int type; // ivar: _type


-(void)dealloc;


@end


#endif