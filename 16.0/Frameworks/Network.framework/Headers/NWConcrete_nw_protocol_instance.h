// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_PROTOCOL_INSTANCE_H
#define NWCONCRETE_NW_PROTOCOL_INSTANCE_H

@class NSString;
@protocol OS_nw_protocol_instance, OS_nw_endpoint, OS_nw_parameters, OS_nw_association, OS_nw_context, OS_nw_array, OS_nw_path_flow_registration, OS_nw_path;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_protocol_definition.h"
#import "NWConcrete_nw_protocol_options.h"
#import "NWConcrete_nw_protocol_metadata.h"

@interface NWConcrete_nw_protocol_instance : NSObject <OS_nw_protocol_instance>

 {
    NWConcrete_nw_protocol_definition *parent_definition;
    nw_protocol_callbacks callbacks;
    nw_protocol protocol;
    *nw_listen_protocol listen_handler;
    *void destroy_timer;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NWConcrete_nw_protocol_options *options;
    NSObject<OS_nw_association> *association;
    NSUInteger reserve_header_size;
    NSUInteger reserve_footer_size;
    NSUInteger maximum_content_size;
    unsigned int protocol_outbound_data_limit;
    *void handle;
    NSObject<OS_nw_context> *context;
    nw_frame_array_s inbound_frames;
    nw_frame_array_s outbound_frames;
    unsigned int empty_frame_pool_count;
    nw_frame_array_s empty_frame_pool;
    nw_frame_array_s pending_inbound_frames;
    unsigned int pending_inbound_frame_count;
    unsigned int pending_inbound_frame_bytes;
    nw_frame_array_s pending_outbound_frames;
    NSObject<OS_nw_array> *outbound_data_requests;
    *nw_hash_table flows_table;
    *nw_hash_table custom_flow_mapping_table;
    NSUInteger last_accepted_flow;
    NWConcrete_nw_protocol_metadata *new_flow_metadata;
    id *wakeup;
    id *wakeup_block;
    NSObject<OS_nw_path_flow_registration> *flow_registration;
    NSObject<OS_nw_path> *current_path;
    *nw_hash_table paths_table;
    NSUInteger default_path;
    NSUInteger primary_path;
    NSUInteger current_setup_path;
    NSObject<OS_nw_endpoint> *current_setup_path_endpoint;
    NSObject<OS_nw_endpoint> *current_setup_path_local_endpoint;
    NSObject<OS_nw_parameters> *current_setup_path_parameters;
    NSObject<OS_nw_endpoint> *derived_ipv4_endpoint;
    int level;
    unsigned short paths_log_id_num;
    BOOL initialized;
    BOOL started;
    BOOL ready;
    BOOL connection_used;
    BOOL output_connected;
    BOOL limit_outbound_data;
    BOOL datagram;
    BOOL reported_send_error;
    BOOL supports_external_data;
    BOOL link_flow_controlled;
    BOOL waiting_for_link_flow_control;
    BOOL processing_input;
    BOOL processing_output;
    BOOL pending_input_finished;
    BOOL waiting_for_listener_accept;
    BOOL new_flow_is_control;
    BOOL prohibit_joining;
    BOOL should_destroy;
    BOOL timer_enabled;
    BOOL input_acknowledged;
    BOOL reads_suspended;
    BOOL failed_to_get_output;
    BOOL needs_output_available;
    BOOL needs_finalize_output;
    BOOL ignore_future_path_changes;
    BOOL wait_for_early_data;
    BOOL previous_should_fallback;
    BOOL previous_fallback_is_weak;
    BOOL reporting_all_done;
    BOOL suppress_logging;
    char log_str;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)getProtocolStructure;
-(id)init;
-(void)dealloc;


@end


#endif