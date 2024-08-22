// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_PATH_H
#define NWCONCRETE_NW_PATH_H

@class NSString;
@protocol NSCopying, OS_nw_path, OS_nw_parameters, OS_nw_endpoint, OS_nw_group_descriptor, OS_nw_browse_descriptor, OS_nw_advertise_descriptor, OS_nw_array, OS_nw_interface, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_path : NSObject <NSCopying, OS_nw_path>

 {
    os_unfair_lock_s lock;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_group_descriptor> *group_descriptor;
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;
    NSObject<OS_nw_array> *discovered_endpoints;
    NSObject<OS_nw_array> *resolved_endpoints;
    NSObject<OS_nw_array> *flows;
    NSObject<OS_nw_endpoint> *override_local_endpoint;
    NSObject<OS_nw_interface> *override_interface;
    NSObject<OS_nw_interface> *direct;
    NSObject<OS_nw_interface> *delegate;
    NSObject<OS_nw_interface> *fallback_interface;
    unsigned char client_id;
    unsigned char flow_registration_id;
    unsigned char fallback_agent;
    NSObject<OS_xpc_object> *fallback_agent_domains;
    NSObject<OS_xpc_object> *fallback_agent_types;
    NSObject<OS_nw_array> *resolver_configs;
    NSObject<OS_nw_array> *gateways;
    NSObject<OS_nw_array> *group_members;
    NSObject<OS_xpc_object> *network_agent_dictionary;
    NSObject<OS_nw_array> *proxy_configs;
    NSObject<OS_xpc_object> *proxy_settings;
    char * reason_description;
    nw_path_necp_result policy_result;
    unsigned int effective_mtu;
    unsigned int effective_traffic_class;
    unsigned int interface_time_delta;
    unsigned int fallback_generation;
    int status;
    int reason;
    unsigned short custom_ethertype;
    unsigned char custom_ip_protocol;
    necp_client_result_estimated_throughput estimates;
    ipv6_prefix nat64_prefixes;
    unsigned char recommended_mss;
    BOOL weak_fallback;
    BOOL no_fallback_timer;
    BOOL fallback_is_forced;
    BOOL fallback_is_preferred;
    BOOL is_local;
    BOOL is_direct;
    BOOL has_ipv4;
    BOOL has_ipv6;
    BOOL has_nat64;
    BOOL traffic_mgmt_background;
    BOOL necp_satisfied;
    BOOL override_viable;
    BOOL changed_from_previous;
    BOOL probe_connectivity;
    BOOL link_quality_abort;
    BOOL checked_dns;
    BOOL is_listener;
    BOOL is_interpose;
    BOOL specific_listener;
    BOOL override_is_expensive;
    BOOL override_is_constrained;
    BOOL override_uses_wifi;
    BOOL override_uses_cellular;
    BOOL override_interface_scoped;
    BOOL merged_proxy_configs;
    BOOL has_kext_filter;
    BOOL has_pf_rules;
    BOOL has_application_level_firewall;
    BOOL has_parental_controls;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)redactedDescription;
-(void)dealloc;


@end


#endif