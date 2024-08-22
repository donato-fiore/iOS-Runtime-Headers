// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRCARDIOFITNESSONBOARDINGFLOWMANAGER_H
#define HKHRCARDIOFITNESSONBOARDINGFLOWMANAGER_H

@class HKHealthStore, HKMobileCountryCodeManager;
@protocol OS_dispatch_queue, HKFeatureAvailabilityProviding;

#import <Foundation/Foundation.h>

#import "HKHRCardioFitnessFeatureStatusManager.h"

@interface HKHRCardioFitnessOnboardingFlowManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSObject<HKFeatureAvailabilityProviding> *featureAvailabilityStore; // ivar: _featureAvailabilityStore
@property (retain, nonatomic) HKHRCardioFitnessFeatureStatusManager *featureStatusManager; // ivar: _featureStatusManager
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKMobileCountryCodeManager *mobileCountryCodeManager; // ivar: _mobileCountryCodeManager


-(BOOL)userCanContinueOnboardingWithDateOfBirthComponents:(id)arg0 ;
-(id)fetchUserCanContinueOnboardingWithCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 featureAvailabilityStore:(id)arg1 featureStatusManager:(id)arg2 ;
-(void)fetchUserCanContinueOnboardingAtCurrentLocationWithCompletion:(id)arg0 ;
-(void)markOnboardingCompleteWithCountryCode:(id)arg0 countryCodeProvenance:(NSInteger)arg1 notificationEnablement:(id)arg2 completion:(id)arg3 ;


@end


#endif