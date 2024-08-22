// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCLOUDPAIREDMETADATADIAGNOSTICS_H
#define HMDCLOUDPAIREDMETADATADIAGNOSTICS_H

@class HMFObject, NSDictionary, NSURL;


#import "HMDNetworkRouterFirewallRuleAccessoryIdentifier.h"

@interface HMDCloudPairedMetadataDiagnostics : HMFObject

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, nonatomic) NSUInteger consentVersion; // ivar: _consentVersion
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly, nonatomic) NSURL *privacyPolicyURL; // ivar: _privacyPolicyURL
@property (readonly, nonatomic) NSURL *uploadDestination; // ivar: _uploadDestination
@property (readonly, nonatomic) NSUInteger uploadType; // ivar: _uploadType


+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithAccessoryIdentifier:(id)arg0 jsonDictionary:(id)arg1 ;
-(id)initWithAccessoryIdentifier:(id)arg0 privacyPolicyURL:(id)arg1 uploadDestination:(id)arg2 consentVersion:(NSUInteger)arg3 uploadType:(NSUInteger)arg4 ;


@end


#endif