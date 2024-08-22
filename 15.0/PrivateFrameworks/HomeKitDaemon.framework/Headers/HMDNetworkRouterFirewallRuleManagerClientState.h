// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERCLIENTSTATE_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERCLIENTSTATE_H

@protocol HMDNetworkRouterFirewallRuleManagerClient;

#import <Foundation/Foundation.h>


@interface HMDNetworkRouterFirewallRuleManagerClientState : NSObject

@property (weak, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerClient> *client; // ivar: _client
@property (copy, nonatomic) id *startupCompletion; // ivar: _startupCompletion




@end


#endif