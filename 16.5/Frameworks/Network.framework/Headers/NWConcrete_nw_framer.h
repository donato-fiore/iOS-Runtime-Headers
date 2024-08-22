// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_FRAMER_H
#define NWCONCRETE_NW_FRAMER_H

@class NSString;
@protocol OS_nw_framer, OS_nw_protocol_definition, OS_nw_endpoint, OS_nw_parameters, OS_nw_context, OS_nw_dictionary, OS_nw_protocol_metadata, OS_nw_array;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_framer : NSObject <OS_nw_framer>

 {
    NSObject<OS_nw_protocol_definition> *parent_definition;
    nw_protocol_callbacks callbacks;
    nw_protocol protocol;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_dictionary> *connection_state;
    NSObject<OS_nw_protocol_metadata> *pending_inbound_message;
    id *start;
    id *parse_input;
    id *write_output;
    id *wakeup;
    id *stop;
    id *cleanup;
    id *copy_metadata;
    NSUInteger handshake_milliseconds;
    NSUInteger handshake_rtt_milliseconds;
    nw_frame_array_s inbound_frames;
    nw_frame_array_s outbound_frames;
    NSUInteger input_needed;
    NSUInteger input_body_remaining;
    nw_frame_array_s received_input_frames;
    nw_frame_array_s pending_input_frames;
    unsigned int pending_input_frame_count;
    NSObject<OS_nw_array> *output_data_array;
    id *wakeup_block;
    nw_frame_array_s received_output_frames;
    NSObject<OS_nw_protocol_metadata> *pending_output_message;
    unsigned int pending_output_message_length;
    unsigned int pending_output_frames;
    unsigned int pending_output_cursor;
    unsigned short prepended_log_id_num;
    BOOL supports_external_data;
    BOOL output_frame_as_message;
    BOOL in_start;
    BOOL called_start;
    BOOL ready;
    BOOL flow_controlled;
    BOOL waiting_for_flow_control;
    BOOL in_input_callout;
    BOOL in_input_available;
    BOOL new_input_available;
    BOOL in_output_callout;
    BOOL pending_input_should_mark_complete;
    BOOL pending_output_message_complete;
    BOOL pending_output_connection_complete;
    BOOL pending_output_finished;
    BOOL failed;
    BOOL pass_through_input;
    BOOL pass_through_output;
    BOOL input_suspended;
    BOOL wait_for_early_data;
    BOOL block_lower_metadata;
    BOOL input_available_unacknowledged;
    BOOL output_blocked;
    char log_str;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif