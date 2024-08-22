// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTONBOARDINGRECORDISPRESENT_H
#define HKFEATUREAVAILABILITYREQUIREMENTONBOARDINGRECORDISPRESENT_H

@class NSString;
@protocol HKFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityOnboardingRecordRequirement.h"

@interface HKFeatureAvailabilityRequirementOnboardingRecordIsPresent : HKFeatureAvailabilityOnboardingRecordRequirement <HKFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(id)requirementIdentifier;
-(id)isSatisfiedWithOnboardingRecord:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;


@end


#endif