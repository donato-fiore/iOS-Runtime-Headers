// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTSEEDISNOTEXPIRED_H
#define HKFEATUREAVAILABILITYREQUIREMENTSEEDISNOTEXPIRED_H

@class NSString;
@protocol HKFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityOnboardingEligibilityRequirement.h"

@interface HKFeatureAvailabilityRequirementSeedIsNotExpired : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(id)isSatisfiedWithOnboardingEligibility:(id)arg0 error:(*id)arg1 ;


@end


#endif