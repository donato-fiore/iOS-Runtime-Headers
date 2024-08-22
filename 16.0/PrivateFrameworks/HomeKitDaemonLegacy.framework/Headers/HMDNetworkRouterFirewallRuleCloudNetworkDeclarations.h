// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERFIREWALLRULECLOUDNETWORKDECLARATIONS_H
#define HMDNETWORKROUTERFIREWALLRULECLOUDNETWORKDECLARATIONS_H

@class HMFObject, NSString, NSDate, NSDictionary, NSArray;
@protocol HMFLogging;


#import "HMDNetworkRouterFirewallRuleAccessoryIdentifier.h"

@interface HMDNetworkRouterFirewallRuleCloudNetworkDeclarations : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *baseAccessoryIdentifier; // ivar: _baseAccessoryIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastModifiedTime; // ivar: _lastModifiedTime
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly, nonatomic) NSArray *ruleConfigurations; // ivar: _ruleConfigurations
@property (readonly, copy) NSDictionary *ruleConfigurationsByVersionString; // ivar: _ruleConfigurationsByVersionString
@property (readonly) Class superclass;


+(id)__decodeRuleConfigurationWithVersionString:(id)arg0 ruleConfigurationValue:(id)arg1 baseAccessoryIdentifier:(id)arg2 ;
+(id)__decodeRuleConfigurationsFromJSONDictionary:(id)arg0 baseAccessoryIdentifier:(id)arg1 allowUnzippedData:(BOOL)arg2 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithBaseAccessoryIdentifier:(id)arg0 data:(id)arg1 ;
-(id)initWithBaseAccessoryIdentifier:(id)arg0 data:(id)arg1 allowUnzippedData:(BOOL)arg2 ;
-(id)initWithBaseAccessoryIdentifier:(id)arg0 name:(id)arg1 lastModifiedTime:(id)arg2 ruleConfigurationsByVersionString:(id)arg3 ;


@end


#endif