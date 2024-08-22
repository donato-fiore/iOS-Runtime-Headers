// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYALLOWEDHOSTSPREVIEWHELPER_H
#define HMDACCESSORYALLOWEDHOSTSPREVIEWHELPER_H

@class HMFObject, NSDate, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerClient;


#import "HMDHome.h"
#import "HMDNetworkRouterFirewallRuleManager.h"

@interface HMDAccessoryAllowedHostsPreviewHelper : HMFObject <HMDNetworkRouterFirewallRuleManagerClient>

 {
    HMDHome *_home;
    HMDNetworkRouterFirewallRuleManager *_firewallRuleManager;
    os_unfair_lock_s _lock;
    NSDate *_expires;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)helperForHome:(id)arg0 ;
-(id)attributeDescriptions;
-(id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg0 ;
-(void)fetchAllowedHostsForAccessory:(id)arg0 completion:(id)arg1 ;


@end


#endif