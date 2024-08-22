// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_PAC_RESOLVER_H
#define NWCONCRETE_NW_PAC_RESOLVER_H

@class NSString;
@protocol OS_nw_pac_resolver, OS_nw_context;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_pac_resolver : NSObject <OS_nw_pac_resolver>

 {
    id *result_block;
    NSObject<OS_nw_context> *context;
    *__CFURL endpointURL;
    *__CFURL pacURL;
    *__CFString pacScript;
    *__CFData auditToken;
    *__CFString bundleIdentifier;
    char logging_id_str;
    BOOL https_is_opaque;
    BOOL use_tls;
    BOOL should_trust_invalid_certs;
    BOOL is_dry_run;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif