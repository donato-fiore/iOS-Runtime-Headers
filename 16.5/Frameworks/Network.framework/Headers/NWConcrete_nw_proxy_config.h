// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PROXY_CONFIG_H
#define NWCONCRETE_NW_PROXY_CONFIG_H

@class NSString;
@protocol OS_nw_proxy_config, OS_nw_dictionary, OS_xpc_object, OS_nw_endpoint, OS_nw_agent, OS_nw_authentication_credential;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_proxy_config : NSObject <OS_nw_proxy_config>

 {
    NSObject<OS_nw_dictionary> *stacks;
    NSObject<OS_xpc_object> *proxied_transports;
    NSObject<OS_xpc_object> *required_protocols;
    NSObject<OS_xpc_object> *remove_protocols;
    NSObject<OS_nw_endpoint> *endpoint;
    unsigned char identifier;
    unsigned char fallback_agent_uuid;
    NSObject<OS_nw_agent> *agent;
    NSObject<OS_nw_authentication_credential> *credential;
    NSObject<OS_xpc_object> *pac_script;
    NSObject<OS_xpc_object> *exceptions;
    int mode;
    int type;
    int multipath_service;
    unsigned int generation;
    unsigned short config_epoch;
    BOOL is_privacy_proxy;
    BOOL privacy_proxy_fail_open;
    BOOL prohibit_direct;
    BOOL supports_bonjour;
    BOOL match_address_family;
    BOOL prohibit_unsatisfied_paths;
    BOOL exclude_simple_hostnames;
    BOOL force_tfo;
    BOOL force_multipath;
    BOOL apply_tfo;
    BOOL disable_tfo_cookie;
    BOOL override_opaque_https;
    BOOL is_fallback;
    BOOL supports_udp_associate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif