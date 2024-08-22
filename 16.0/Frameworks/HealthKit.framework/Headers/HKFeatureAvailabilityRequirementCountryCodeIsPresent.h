// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTCOUNTRYCODEISPRESENT_H
#define HKFEATUREAVAILABILITYREQUIREMENTCOUNTRYCODEISPRESENT_H

@class NSString;
@protocol HKFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityOnboardingEligibilityRequirement.h"

@interface HKFeatureAvailabilityRequirementCountryCodeIsPresent : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(id)requirementIdentifier;
-(id)isSatisfiedWithOnboardingEligibility:(id)arg0 error:(*id)arg1 ;


@end


#endif