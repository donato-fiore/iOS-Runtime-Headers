// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNETWORKROUTERFIREWALLRULEWANADDRESSRANGE_H
#define HMDNETWORKROUTERFIREWALLRULEWANADDRESSRANGE_H

@class HMFObject, HMFNetAddress;



@interface HMDNetworkRouterFirewallRuleWANAddressRange : HMFObject

@property (readonly, nonatomic) HMFNetAddress *addressEnd; // ivar: _addressEnd
@property (readonly, nonatomic) HMFNetAddress *addressStart; // ivar: _addressStart


-(id)attributeDescriptions;
-(id)initWithAddressStart:(id)arg0 addressEnd:(id)arg1 ;
-(id)prettyJSONDictionary;


@end


#endif