// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_RESOLVER_SERVICE_H
#define NWCONCRETE_NW_RESOLVER_SERVICE_H

@class NSString;
@protocol OS_nw_resolver_service, OS_nw_endpoint, OS_dnssd_getaddrinfo, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_resolver_service : NSObject <OS_nw_resolver_service>

 {
    NSObject<OS_nw_endpoint> *service_host;
    NSObject<OS_nw_endpoint> *alternative_origin;
    NSObject<OS_dnssd_getaddrinfo> *gai;
    unsigned short priority;
    unsigned short port;
    unsigned short flags;
    NSObject<OS_dispatch_data> *ech_config;
    BOOL sensitive_redacted;
    BOOL host_matches_origin;
    BOOL port_matches_origin;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif