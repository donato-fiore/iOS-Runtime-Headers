// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_CONNECTION_GROUP_H
#define NWCONCRETE_NW_CONNECTION_GROUP_H

@class NSString;
@protocol OS_nw_connection_group, OS_dispatch_queue, OS_nw_error, OS_nw_parameters, OS_nw_group_descriptor, OS_nw_path_evaluator, OS_nw_listener, OS_nw_array;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_connection_group.h"

@interface NWConcrete_nw_connection_group : NSObject <OS_nw_connection_group>

 {
    NSObject<OS_dispatch_queue> *client_queue;
    unsigned int client_qos_class;
    NWConcrete_nw_connection_group *internally_retained_object;
    id *state_changed_handler;
    int state;
    NSObject<OS_nw_error> *last_error;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_group_descriptor> *group_descriptor;
    NSObject<OS_nw_path_evaluator> *group_evaluator;
    id *membership_change_handler;
    NSObject<OS_nw_listener> *listener;
    NSObject<OS_nw_listener> *unicast_listener;
    NSObject<OS_nw_array> *connections;
    NSObject<OS_nw_array> *send_requests;
    unsigned char group_uuid;
    id *receive_handler;
    id *new_connection_handler;
    char * description;
    char * redacted_description;
    unsigned int log_id;
    os_unfair_lock_s lock;
    unsigned int maximum_message_size;
    unsigned int connection_limit;
    unsigned int new_connection_limit;
    unsigned short initial_port;
    BOOL started;
    BOOL reject_oversized_messages;
    BOOL is_server;
    BOOL has_listener_started;
    BOOL is_listener_ready;
    BOOL is_unicast_listener_ready;
    BOOL is_first_connection_ready;
    BOOL has_user_cancelled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif