// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_RESOLVER_H
#define NWCONCRETE_NW_RESOLVER_H

@class NSString;
@protocol OS_nw_resolver, OS_nw_parameters, OS_nw_endpoint, OS_nw_context, OS_dispatch_group, OS_dnssd_getaddrinfo, OS_dispatch_queue, OS_nw_array, OS_nw_path, OS_nw_interface;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_resolver.h"

@interface NWConcrete_nw_resolver : NSObject <OS_nw_resolver>

 {
    int status;
    os_unfair_lock_s lock;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_context> *context;
    NSObject<OS_dispatch_group> *cancel_group;
    NSObject<OS_dnssd_getaddrinfo> *gai;
    unsigned int dns_service_id;
    *_DNSServiceRef_t dns_service;
    *_DNSServiceRef_t dns_service_secondary_pointer;
    unsigned int forced_protocol;
    int dns_error;
    unsigned short flags;
    id *update_block;
    id *cancel_handler;
    NSObject<OS_dispatch_queue> *client_queue;
    *void query_timer;
    *void delayed_reporting_timer;
    NSObject<OS_nw_array> *endpoint_array;
    id *alternative_handler;
    NSObject<OS_nw_array> *services;
    NSObject<OS_nw_array> *alternative_endpoints;
    NSObject<OS_nw_array> *alternative_protocols;
    NSObject<OS_nw_path> *path;
    NSObject<OS_nw_interface> *path_required_interface;
    NWConcrete_nw_resolver *internally_retained_object;
    unsigned char selected_resolver_config;
    int result_protocol;
    int result_provider;
    char log_str;
    unsigned int unique_id;
    BOOL is_custom_resolver;
    BOOL used_local_cache;
    BOOL ipv4_used_resolver_cache;
    BOOL ipv6_used_resolver_cache;
    BOOL local_only;
    BOOL suppress_logging;
    BOOL has_ipv4;
    BOOL has_ipv6;
    BOOL svcb_requested;
    BOOL svcb_received;
    BOOL svcb_dohuri;
    BOOL is_standalone;
    BOOL has_oblivious_config;
    BOOL config_allows_failover;
    BOOL oblivious_config_fell_back;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif