// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_NAT64_PREFIXES_RESOLVER_H
#define NWCONCRETE_NW_NAT64_PREFIXES_RESOLVER_H

@class NSString;
@protocol OS_nw_nat64_prefixes_resolver, OS_nw_parameters, OS_nw_context, OS_dispatch_queue, OS_nw_path_evaluator;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_nat64_prefixes_resolver.h"

@interface NWConcrete_nw_nat64_prefixes_resolver : NSObject <OS_nw_nat64_prefixes_resolver>

 {
    os_unfair_lock_s lock;
    unsigned int ifindex;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NWConcrete_nw_nat64_prefixes_resolver *internally_retained_object;
    unsigned int dns_service_id;
    *_DNSServiceRef_t dns_service;
    int dns_error;
    id *update_handler;
    id *cancel_handler;
    NSObject<OS_dispatch_queue> *client_queue;
    *in6_addr ipv6_addrs;
    NSObject<OS_nw_path_evaluator> *evaluator;
    int address_count;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif