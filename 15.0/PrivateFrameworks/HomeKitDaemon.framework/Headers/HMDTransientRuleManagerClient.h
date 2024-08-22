// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDTRANSIENTRULEMANAGERCLIENT_H
#define HMDTRANSIENTRULEMANAGERCLIENT_H

@class NSString;
@protocol HMDNetworkRouterFirewallRuleManagerClient;

#import <Foundation/Foundation.h>


@interface HMDTransientRuleManagerClient : NSObject <HMDNetworkRouterFirewallRuleManagerClient>

 {
    NSString *_description;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDescription:(id)arg0 ;


@end


#endif