// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTFEATUREFLAGISENABLED_H
#define HKFEATUREAVAILABILITYREQUIREMENTFEATUREFLAGISENABLED_H

@class NSString;
@protocol HKFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityMustBeTrueRequirement.h"

@interface HKFeatureAvailabilityRequirementFeatureFlagIsEnabled : HKFeatureAvailabilityMustBeTrueRequirement <HKFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(id)requirementIdentifier;


@end


#endif