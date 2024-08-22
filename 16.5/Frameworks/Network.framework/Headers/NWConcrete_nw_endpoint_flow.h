// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_ENDPOINT_FLOW_H
#define NWCONCRETE_NW_ENDPOINT_FLOW_H

@class NSString;
@protocol OS_nw_endpoint_flow, OS_nw_path, OS_nw_read_request, OS_nw_protocol_definition, OS_nw_path_flow_registration, OS_dispatch_queue, OS_nw_error, OS_nw_fd_wrapper, OS_nw_channel, OS_nw_array, OS_xpc_object, OS_nw_endpoint;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_endpoint_flow.h"
#import "NWConcrete_nw_endpoint_handler.h"

@interface NWConcrete_nw_endpoint_flow : NSObject <OS_nw_endpoint_flow>

 {
    NSObject<OS_nw_path> *connected_path;
    NSObject<OS_nw_path> *flow_path;
    NWConcrete_nw_endpoint_flow *internally_retained_object;
    BOOL is_root_flow_handler;
    BOOL is_leaf_flow_handler;
    BOOL is_empty_root;
    BOOL initialized_protocol_callbacks;
    BOOL started;
    BOOL setup_protocols;
    BOOL started_protocols;
    BOOL did_join_protocols;
    BOOL is_viable;
    BOOL is_connected;
    BOOL has_connected;
    BOOL initial_payload_sent;
    BOOL assigned_initial_writes;
    BOOL is_channel;
    BOOL is_multipath;
    BOOL multipath_nat64_query_outstanding;
    BOOL custom_protocols_only;
    BOOL is_flow_divert;
    BOOL multilayer_packet_logging;
    BOOL has_progress_target;
    BOOL path_is_direct;
    BOOL should_ignore_path_result;
    BOOL reported_do_not_reuse;
    BOOL in_setup_protocols;
    BOOL connected_child_handles_requests;
    BOOL connected_child_failed;
    NWConcrete_nw_endpoint_flow *clone_from_flow;
    nw_protocol_identifier protocol_identifier;
    nw_protocol_callbacks protocol_callbacks;
    nw_listen_protocol_callbacks listen_callbacks;
    nw_flow_protocol shared_protocol;
    NSObject<OS_nw_read_request> *new_flow_read_requests;
    ? transport_protocol;
    ? joined_protocol;
    ? proxy_protocol;
    ? bottom_protocol;
    *nw_protocol_identifier ip_protocol_identifier;
    NSObject<OS_nw_protocol_definition> *multiplexed_message_definition;
    ? multiplexed_message_protocol;
    *tcp_info tcp_info;
    *tcp_connection_info tcp_connection_info;
    *nw_data_transfer_snapshot data_transfer_snapshot;
    NSUInteger snapshot_length;
    unsigned int snapshot_count;
    NSObject<OS_nw_path_flow_registration> *flow_registration;
    NSObject<OS_dispatch_queue> *client_queue;
    id *read_close_handler;
    id *write_close_handler;
    *nw_hash_table multiplexed_flow_table;
    NSObject<OS_nw_error> *last_error;
    os_unfair_lock_s lock;
    NSObject<OS_nw_fd_wrapper> *connected_fd_wrapper;
    unsigned int pending_write_bytes;
    int pre_connected_fd;
    NSObject<OS_nw_channel> *channel;
    ? socket_protocol;
    *_DNSServiceRef_t sleep_proxy_ref;
    NWConcrete_nw_endpoint_handler *child_endpoint_handler;
    NWConcrete_nw_endpoint_handler *connected_endpoint_handler;
    NSObject<OS_nw_array> *candidate_endpoint_handlers;
    NSObject<OS_xpc_object> *flow_divert_token;
    NSObject<OS_nw_endpoint> *flow_divert_endpoint;
    NSObject<OS_nw_endpoint> *saved_original_endpoint;
    unsigned short protocol_log_id_num;
    BOOL keepalive_event_enabled;
    NSUInteger first_keepalive_time;
    unsigned int keepalive_count;
    unsigned int configured_keepalive_count;
    unsigned int configured_keepalive_interval;
    unsigned int adaptive_read_count;
    unsigned int adaptive_write_count;
    id *adaptive_read_event_handler;
    id *adaptive_write_event_handler;
    id *keepalive_event_handler;
    id *metadata_changed_event_handler;
    NSObject<OS_nw_array> *connected_metadata;
    NSObject<OS_nw_array> *connection_wide_metadata;
    NSUInteger sent_application_byte_count;
    NSUInteger received_application_byte_count;
    unsigned char connection_uuid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)applyWithHandler:(id)arg0 toChildren:(id)arg1 ;
-(id)init;
-(void)cancelWithHandler:(id)arg0 forced:(BOOL)arg1 ;
-(void)dealloc;
-(void)startWithHandler:(id)arg0 ;
-(void)updatePathWithHandler:(id)arg0 ;


@end


#endif