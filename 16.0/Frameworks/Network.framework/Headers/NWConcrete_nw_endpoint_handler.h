// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_ENDPOINT_HANDLER_H
#define NWCONCRETE_NW_ENDPOINT_HANDLER_H

@class NSString;
@protocol OS_nw_endpoint_handler, OS_nw_object, OS_nw_endpoint, OS_nw_parameters, OS_nw_context, OS_nw_association, OS_nw_path, OS_xpc_object, NWConcrete_nw_endpoint_mode_handler, OS_nw_path_evaluator;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_endpoint_handler.h"

@interface NWConcrete_nw_endpoint_handler : NSObject <OS_nw_endpoint_handler>

 {
    *unk report_callback;
    NSObject<OS_nw_object> *callback_context;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_association> *association;
    NSObject<OS_nw_path> *current_path;
    NWConcrete_nw_endpoint_handler *parent_handler;
    nw_endpoint_handler_event_s event;
    NSObject<OS_xpc_object> *inactive_agent_uuids;
    NSObject<OS_xpc_object> *inactive_agent_dictionaries;
    NSObject<OS_xpc_object> *triggered_agent_uuids;
    os_unfair_lock_s lock;
    int mode;
    int state;
    NSUInteger start_time;
    *void fallback_timer;
    unsigned int top_id;
    uint8_t last_child_id;
    unsigned char id_chain;
    char id_str;
    NSObject<NWConcrete_nw_endpoint_mode_handler> *mode_handler;
    NSObject<OS_nw_path_evaluator> *override_evaluator;
    int privacy_stance;
    BOOL dry_run;
    BOOL triggering_voluntary_agents;
    BOOL reuse_association;
    BOOL has_better_path;
    BOOL has_finished_transport;
    BOOL logging_disabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif