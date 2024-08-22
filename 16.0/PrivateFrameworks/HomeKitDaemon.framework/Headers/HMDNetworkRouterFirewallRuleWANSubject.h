// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULEWANSUBJECT_H
#define HMDNETWORKROUTERFIREWALLRULEWANSUBJECT_H

@class HMFObject, NSArray;


#import "HMDNetworkRouterFirewallRuleWANAddressRange.h"

@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleWANAddressRange *addressRange; // ivar: _addressRange
@property (readonly, nonatomic) NSArray *addresses; // ivar: _addresses
@property (readonly, nonatomic) NSArray *hostnames; // ivar: _hostnames


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithHostnames:(id)arg0 addresses:(id)arg1 addressRange:(id)arg2 ;
-(id)prettyJSONDictionary;


@end


#endif