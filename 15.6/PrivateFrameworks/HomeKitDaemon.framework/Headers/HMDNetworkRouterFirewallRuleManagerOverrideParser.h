// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGEROVERRIDEPARSER_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGEROVERRIDEPARSER_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMDNetworkRouterFirewallRuleManagerOverrideParser : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_parseOverrideNetworkDeclarationsWithProductGroup:(id)arg0 productNumber:(id)arg1 productNumberDictionary:(id)arg2 accessoryIdentifier:(id)arg3 ;
+(id)_parseOverridePairedMetadataWithProductGroup:(id)arg0 productNumber:(id)arg1 productNumberDictionary:(id)arg2 accessoryIdentifier:(id)arg3 ;
+(id)logCategory;
+(id)parseFromData:(id)arg0 ;


@end


#endif