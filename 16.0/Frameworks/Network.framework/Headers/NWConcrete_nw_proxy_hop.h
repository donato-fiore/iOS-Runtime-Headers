// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_PROXY_HOP_H
#define NWCONCRETE_NW_PROXY_HOP_H

@class NSString;
@protocol OS_nw_proxy_hop, OS_nw_endpoint, OS_nw_protocol_options;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_proxy_hop : NSObject <OS_nw_proxy_hop>

 {
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_protocol_options> *options;
    *__CFArray raw_public_keys;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif