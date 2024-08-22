// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNETWORKROUTERFIREWALLRULECONFIGURATION_H
#define HMDNETWORKROUTERFIREWALLRULECONFIGURATION_H

@class HMFObject, NSString, NSArray, NSDate, NSDictionary;
@protocol HMFLogging;


#import "HMDNetworkRouterFirewallRuleAccessoryIdentifier.h"

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=hasFullAccessToLAN) BOOL fullAccessLAN; // ivar: _fullAccessLAN
@property (readonly, nonatomic, getter=hasFullAccessToWAN) BOOL fullAccessWAN; // ivar: _fullAccessWAN
@property (readonly, nonatomic) BOOL hasAirplayRules;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *lanRules; // ivar: _lanRules
@property (readonly, nonatomic) NSDate *lastModifiedTime; // ivar: _lastModifiedTime
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *wanRules; // ivar: _wanRules


+(BOOL)__decodeFullAccessFromNetworkDeclarations:(id)arg0 key:(id)arg1 fullAccess:(*BOOL)arg2 ;
+(BOOL)__decodeNetworkDeclarationsFromJSONDictionary:(id)arg0 networkDeclarations:(*id)arg1 ;
+(id)__decodeRulesFromNetworkDeclarations:(id)arg0 key:(id)arg1 class:(Class)arg2 required:(BOOL)arg3 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithAccessoryIdentifier:(id)arg0 jsonDictionary:(id)arg1 ;
-(id)initWithAccessoryIdentifier:(id)arg0 lastModifiedTime:(id)arg1 fullAccessLAN:(BOOL)arg2 lanRules:(id)arg3 fullAccessWAN:(BOOL)arg4 wanRules:(id)arg5 ;


@end


#endif