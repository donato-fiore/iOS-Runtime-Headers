// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTCOUNTRYISSUPPORTEDONLOCALDEVICE_H
#define HKFEATUREAVAILABILITYREQUIREMENTCOUNTRYISSUPPORTEDONLOCALDEVICE_H

@class NSString;
@protocol HKFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityOnboardingEligibilityRequirement.h"

@interface HKFeatureAvailabilityRequirementCountryIsSupportedOnLocalDevice : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKFeatureAvailabilityRequirement>



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