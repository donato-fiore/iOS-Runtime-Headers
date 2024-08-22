// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNETWORKROUTERLANFIREWALLCONFIGURATION_H
#define HMDNETWORKROUTERLANFIREWALLCONFIGURATION_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HMDNetworkRouterLANFirewallRuleList.h"
#import "HMDNetworkRouterLANFirewall.h"

@interface HMDNetworkRouterLANFirewallConfiguration : NSObject <NSCopying, HAPTLVProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDNetworkRouterLANFirewallRuleList *ruleList; // ivar: _ruleList
@property (readonly) Class superclass;
@property (retain, nonatomic) HMDNetworkRouterLANFirewall *type; // ivar: _type


+(id)configurationFromFirewallRuleConfiguration:(id)arg0 ;
+(id)configurationWithFullAccess;
+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithType:(id)arg0 ruleList:(id)arg1 ;
-(id)serializeWithError:(*id)arg0 ;
-(void)addRulesFromFirewallConfiguration:(id)arg0 ;


@end


#endif