// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PARAMETERS_H
#define NWCONCRETE_NW_PARAMETERS_H

@class NSString;
@protocol OS_nw_parameters, OS_xpc_object, OS_dispatch_data, OS_nw_array, OS_nw_proxy_config, OS_nw_endpoint;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_path_parameters.h"
#import "NWConcrete_nw_protocol_stack.h"

@interface NWConcrete_nw_parameters : NSObject <OS_nw_parameters>

 {
    ? value;
    NWConcrete_nw_path_parameters *path_parameters;
    char * e_bundle_id;
    char * proxy_bundle_id;
    NSObject<OS_xpc_object> *tls_session_id;
    NSObject<OS_xpc_object> *extra_parent_ids;
    NSObject<OS_dispatch_data> *initial_data_payload;
    NWConcrete_nw_protocol_stack *default_stack;
    NSObject<OS_nw_array> *transforms;
    NSObject<OS_nw_array> *proxy_options;
    NSObject<OS_nw_array> *custom_proxy_configs;
    NSObject<OS_nw_proxy_config> *effective_proxy_config;
    NSObject<OS_nw_endpoint> *url_endpoint;
    NSObject<OS_xpc_object> *metadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif