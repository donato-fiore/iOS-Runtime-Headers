// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_ENDPOINT_TRANSFORM_H
#define NWCONCRETE_NW_ENDPOINT_TRANSFORM_H

@class NSString;
@protocol OS_nw_endpoint_transform, OS_nw_array, OS_xpc_object, OS_nw_endpoint;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_endpoint_handler.h"

@interface NWConcrete_nw_endpoint_transform : NSObject <OS_nw_endpoint_transform>

 {
    NSObject<OS_nw_array> *child_endpoint_handlers;
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;
    NSObject<OS_xpc_object> *fallback_modes;
    NSObject<OS_nw_array> *blocked_protocols;
    unsigned int next_child_endpoint_index;
    NWConcrete_nw_endpoint_handler *connected_child;
    NSObject<OS_nw_endpoint> *primary_endpoint;
    *void child_timer;
    NSUInteger last_timeout_ms;
    unsigned int first_protocol;
    unsigned int connected_protocol;
    unsigned int connected_protocol_index;
    BOOL quic_deferred;
    BOOL quic_application_deferred;
    BOOL quic_denied;
    BOOL quic_alternative_present;
    BOOL quic_updated_alternative;
    BOOL quic_speculative_attempt;
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