// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTACTIVEREMOTEDEVICEISPRESENT_H
#define HKFEATUREAVAILABILITYREQUIREMENTACTIVEREMOTEDEVICEISPRESENT_H

@class NSString;
@protocol HKObservableFeatureAvailabilityRequirement;


#import "HKFeatureAvailabilityOnboardingEligibilityRequirement.h"

@interface HKFeatureAvailabilityRequirementActiveRemoteDeviceIsPresent : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKObservableFeatureAvailabilityRequirement>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) Class superclass;


+(id)requirementIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(id)isSatisfiedWithOnboardingEligibility:(id)arg0 error:(*id)arg1 ;
-(void)registerObserver:(id)arg0 forDataSource:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 fromDataSource:(id)arg1 ;


@end


#endif