// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDPAIREDMETADATAVERSIONCONFIGURATION_H
#define HMDCLOUDPAIREDMETADATAVERSIONCONFIGURATION_H

@class HMFObject, NSString, NSDictionary;
@protocol HMFLogging;


#import "HMDNetworkRouterFirewallRuleAccessoryIdentifier.h"
#import "HMDCloudPairedMetadataDiagnostics.h"

@interface HMDCloudPairedMetadataVersionConfiguration : HMFObject <HMFLogging>



@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDCloudPairedMetadataDiagnostics *diagnostics; // ivar: _diagnostics
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithAccessoryIdentifier:(id)arg0 diagnostics:(id)arg1 ;
-(id)initWithAccessoryIdentifier:(id)arg0 jsonDictionary:(id)arg1 ;


@end


#endif