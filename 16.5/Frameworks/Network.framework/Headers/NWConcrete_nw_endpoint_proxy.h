// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_ENDPOINT_PROXY_H
#define NWCONCRETE_NW_ENDPOINT_PROXY_H

@class NSString;
@protocol OS_nw_endpoint_proxy, OS_nw_array, OS_nw_error;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_endpoint_handler.h"

@interface NWConcrete_nw_endpoint_proxy : NSObject <OS_nw_endpoint_proxy>

 {
    NSObject<OS_nw_array> *child_endpoint_handlers;
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;
    unsigned int next_child_endpoint_index;
    NWConcrete_nw_endpoint_handler *connected_child;
    NSObject<OS_nw_array> *proxy_configs;
    NSObject<OS_nw_array> *parsed_proxy_configs;
    *__CFURL url;
    NSObject<OS_nw_array> *pac_resolvers;
    NSObject<OS_nw_error> *child_error;
    *void child_timer;
    BOOL has_privacy_proxy;
    BOOL privacy_proxy_fail_closed;
    BOOL privacy_proxy_fail_closed_for_unreachable_hosts;
    BOOL allow_non_privacy_proxy_children;
    BOOL privacy_proxy_detected_unreachable_host;
    BOOL direct_prohibited;
    BOOL synthesized_url;
    BOOL pac_failed_missing_url;
    BOOL overrode_to_https;
    BOOL has_pac;
    BOOL transport_finished;
    BOOL proxy_flow_finished;
    BOOL is_known_tracker;
    BOOL is_custom_proxy;
    BOOL is_pac_connection;
    BOOL is_http_scheme;
    BOOL is_https_scheme;
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