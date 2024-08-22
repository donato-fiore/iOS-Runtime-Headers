// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTONBOARDINGRECORDISNOTPRESENTFORMUTUALLYEXCLUSIVEFEATURE_H
#define HKFEATUREAVAILABILITYREQUIREMENTONBOARDINGRECORDISNOTPRESENTFORMUTUALLYEXCLUSIVEFEATURE_H

@class NSString;
@protocol HKObservableFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityRequirementOnboardingRecordIsNotPresent.h"

@interface HKFeatureAvailabilityRequirementOnboardingRecordIsNotPresentForMutuallyExclusiveFeature : HKFeatureAvailabilityRequirementOnboardingRecordIsNotPresent <HKObservableFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(id)requirementIdentifier;
-(void)registerObserver:(id)arg0 forDataSource:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 fromDataSource:(id)arg1 ;


@end


#endif