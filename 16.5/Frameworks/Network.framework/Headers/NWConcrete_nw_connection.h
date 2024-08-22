// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_CONNECTION_H
#define NWCONCRETE_NW_CONNECTION_H

@class NSString;
@protocol OS_nw_connection, OS_nw_endpoint, OS_nw_parameters, OS_nw_context, OS_dispatch_queue, OS_dispatch_workloop, OS_nw_write_request, OS_nw_read_request, OS_nw_endpoint_handler, OS_nw_array, OS_dispatch_group, OS_nw_establishment_report;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_connection.h"

@interface NWConcrete_nw_connection : NSObject <OS_nw_connection>

 {
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NSObject<OS_dispatch_queue> *request_queue;
    NSObject<OS_dispatch_workloop> *workloop;
    NWConcrete_nw_connection *_internal_reference;
    NSUInteger start_time;
    int state;
    *netcore_stats_tcp_report stats_report;
    int stats_reason;
    BOOL should_report_stats;
    BOOL stats_reported;
    BOOL should_report_generic_stats;
    BOOL generic_stats_reported;
    BOOL hit_max_timestamps;
    BOOL should_report_activities;
    BOOL should_report_probe_parent_stats;
    BOOL should_report_probe_stats;
    BOOL attempted_probe;
    BOOL created_from_protocol;
    BOOL cancelled;
    BOOL prohibit_set_queue;
    BOOL batching;
    BOOL endpoint_handler_connected;
    BOOL blocked_tracker;
    NSObject<OS_nw_write_request> *batched_sends;
    NSObject<OS_nw_read_request> *batched_receives;
    int reported_viable;
    int alternate_path_state;
    os_unfair_lock_s lock;
    NSObject<OS_nw_endpoint_handler> *parent_endpoint_handler;
    NSObject<OS_nw_endpoint_handler> *transport_endpoint_handler;
    NSObject<OS_nw_write_request> *initial_write_requests;
    NSObject<OS_nw_read_request> *initial_read_requests;
    NSObject<OS_nw_endpoint_handler> *dry_run_endpoint_handler;
    NSObject<OS_nw_endpoint_handler> *ready_dry_run_endpoint_handler;
    unsigned int client_qos_class;
    NSObject<OS_dispatch_queue> *client_queue;
    id *client_handler;
    id *cancel_handler;
    id *viability_changed_handler;
    id *better_path_available_handler;
    id *alternate_path_state_handler;
    id *path_changed_handler;
    metadata_changed_registration_list_s metadata_changed_registration_list;
    unsigned int interface_time_delta;
    unsigned int connected_fallback_generation;
    NSUInteger pending_expected_progress_target;
    NSUInteger estimated_bytes_download;
    NSUInteger estimated_bytes_upload;
    *nw_connection_timestamp_s timestamps;
    unsigned short num_timestamps;
    unsigned short used_timestamps;
    NSObject<OS_nw_array> *attempted_endpoints;
    nw_connection_throughput_monitor_s throughput_monitor;
    id *low_throughput_handler;
    NSObject<OS_nw_array> *activities;
    NSObject<OS_nw_array> *probes;
    NSObject<OS_dispatch_group> *cancel_group;
    NSObject<OS_nw_establishment_report> *establishment_report;
    NSObject<OS_nw_array> *data_transfer_reports;
    NSObject<OS_nw_array> *errors;
    unsigned int top_id;
    unsigned char top_uuid;
    unsigned char parent_uuid;
    unsigned char group_uuid;
    unsigned char logging_sequence_number;
    int privacy_stance;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif