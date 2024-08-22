// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCLOUDPAIREDMETADATA_H
#define HMDCLOUDPAIREDMETADATA_H

@class HMFObject, NSString, NSDictionary, NSArray;
@protocol HMFLogging;


#import "HMDNetworkRouterFirewallRuleAccessoryIdentifier.h"

@interface HMDCloudPairedMetadata : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *baseAccessoryIdentifier; // ivar: _baseAccessoryIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *versionConfigurations; // ivar: _versionConfigurations


+(id)__decodeVersionConfigurationWithVersionString:(id)arg0 versionConfigurationValue:(id)arg1 baseAccessoryIdentifier:(id)arg2 ;
+(id)_decodeVersionConfigurationsFromJSONDictionary:(id)arg0 baseAccessoryIdentifier:(id)arg1 allowUnzippedData:(BOOL)arg2 ;
+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithBaseAccessoryIdentifier:(id)arg0 data:(id)arg1 ;
-(id)initWithBaseAccessoryIdentifier:(id)arg0 data:(id)arg1 allowUnzippedData:(BOOL)arg2 ;
-(id)initWithBaseAccessoryIdentifier:(id)arg0 versionConfigurations:(id)arg1 ;


@end


#endif