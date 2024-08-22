// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYALLOWEDHOST_H
#define HMDACCESSORYALLOWEDHOST_H

@class HMFObject, NSSet, NSString;
@protocol NSSecureCoding;


#import "HMDNetworkRouterFirewallRuleWAN.h"

@interface HMDAccessoryAllowedHost : HMFObject <NSSecureCoding>

 {
    HMDNetworkRouterFirewallRuleWAN *_cachedWANRule;
}


@property (readonly) NSSet *addresses;
@property (readonly) NSString *jsonWANRule; // ivar: _jsonWANRule
@property (readonly) NSString *name;
@property (readonly) NSUInteger purpose;
@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleWAN *wanRule;


+(BOOL)supportsSecureCoding;
+(id)allowedHostForFullWANAccess;
+(id)allowedHostsFromFirewallRuleConfiguration:(id)arg0 ;
+(id)allowedHostsFromJSONFirewallWANRules:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONFirewallWANRule:(id)arg0 ;
-(id)initWithWANRule:(id)arg0 ;
-(void)_encodeForSPIEntitledXPCTransportWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif