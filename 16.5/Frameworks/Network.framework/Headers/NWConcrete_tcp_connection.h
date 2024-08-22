// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_TCP_CONNECTION_H
#define NWCONCRETE_TCP_CONNECTION_H

@class NSString;
@protocol OS_tcp_connection, OS_xpc_object, OS_nw_connection, OS_nw_error, OS_nw_path, OS_nw_endpoint, OS_nw_parameters, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NWConcrete_tcp_connection.h"

@interface NWConcrete_tcp_connection : NSObject <OS_tcp_connection>

 {
    NSObject<OS_xpc_object> *tc_context;
    NSObject<OS_nw_connection> *tc_nwconn;
    NSObject<OS_nw_error> *tc_last_nw_error;
    NSObject<OS_nw_path> *tc_nw_current_path;
    NSObject<OS_nw_endpoint> *tc_network_endpoint;
    NSObject<OS_nw_parameters> *tc_network_parameters;
    NSObject<OS_dispatch_queue> *tc_client_queue;
    id *tc_event;
    id *tc_cancel_handler;
    NSObject<OS_dispatch_source> *tc_connection_attempt_timer;
    NWConcrete_tcp_connection *tc_internally_retained_object;
    NSUInteger tc_id;
    NSUInteger tc_attempt_timeout_nanos;
    int tc_error;
    int tc_dup_fd;
    os_unfair_lock_s tc_lock;
    int tc_usage_model;
    NSInteger tc_quality;
    unsigned int tc_keepalive_count;
    unsigned int tc_keepalive_interval;
    unsigned int tc_adaptive_read_count;
    unsigned int tc_adaptive_write_count;
    unsigned int tc_minimum_throughput;
    unsigned char tc_state;
    unsigned char tc_by;
    BOOL tc_event_read_close_delivered;
    BOOL tc_event_write_close_delivered;
    BOOL tc_event_connected_delivered;
    BOOL tc_event_disconnected_delivered;
    BOOL tc_better_route;
    BOOL tc_not_viable;
    BOOL tc_attempt_timeout_should_generate_event;
    BOOL tc_allow_socket_access;
    BOOL tc_sent_connected;
    BOOL tc_sent_tls_finished;
    BOOL tc_state_has_been_preparing;
    BOOL tc_client_owns_dup_fd;
    BOOL tc_started;
    BOOL tc_keepalive_events;
    BOOL tc_adaptive_read_events;
    BOOL tc_adaptive_write_events;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif