// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_ENDPOINT_FALLBACK_H
#define NWCONCRETE_NW_ENDPOINT_FALLBACK_H

@class NSString;
@protocol OS_nw_endpoint_fallback, OS_nw_interface;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_endpoint_handler.h"

@interface NWConcrete_nw_endpoint_fallback : NSObject <OS_nw_endpoint_fallback>

 {
    NSUInteger fallback_usage_cap;
    NSUInteger fallback_cap_interval;
    NSUInteger fallback_timeout_nanos;
    NWConcrete_nw_endpoint_handler *primary_child;
    NWConcrete_nw_endpoint_handler *fallback_child;
    int result;
    NSObject<OS_nw_interface> *primary_interface;
    NSObject<OS_nw_interface> *fallback_interface;
    *void fallback_timer;
    *void post_transport_timer;
    *void usage_cap_timer;
    NSUInteger fallback_timer_start;
    unsigned int fallback_disposition;
    BOOL received_primary_cancelled_error;
    BOOL weak_fallback;
    BOOL no_fallback_timer;
    BOOL fallback_is_forced;
    BOOL fallback_is_preferred;
    BOOL fallback_based_on_interface_type;
    BOOL started_fallback;
    BOOL primary_child_in_progress;
    BOOL fallback_child_in_progress;
    BOOL primary_child_indefinite_failed;
    BOOL fallback_child_indefinite_failed;
    BOOL fallback_is_cellular;
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