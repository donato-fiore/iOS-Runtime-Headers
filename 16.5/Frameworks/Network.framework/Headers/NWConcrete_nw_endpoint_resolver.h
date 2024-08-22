// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_ENDPOINT_RESOLVER_H
#define NWCONCRETE_NW_ENDPOINT_RESOLVER_H

@class NSString;
@protocol OS_nw_endpoint_resolver, OS_nw_resolver, OS_nw_array, OS_nw_dictionary, OS_nw_endpoint;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_endpoint_handler.h"

@interface NWConcrete_nw_endpoint_resolver : NSObject <OS_nw_endpoint_resolver>

 {
    NSObject<OS_nw_resolver> *resolver;
    int last_resolver_status;
    unsigned int next_child_endpoint_index;
    BOOL transport_finished;
    BOOL failed_to_start_next_child;
    BOOL started_desperate_ivan;
    BOOL waiting_for_desperate_ivan;
    NWConcrete_nw_endpoint_handler *connected_child;
    NSObject<OS_nw_array> *child_endpoint_handlers;
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;
    *void child_timer;
    *void trigger_agent_timer;
    *void desperate_ivan_timer;
    NSObject<OS_nw_dictionary> *resolve_flow_registrations;
    NSObject<OS_nw_array> *path_resolved_endpoints;
    NSObject<OS_nw_array> *resolver_resolved_endpoints;
    NSObject<OS_nw_endpoint> *modified_endpoint;
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