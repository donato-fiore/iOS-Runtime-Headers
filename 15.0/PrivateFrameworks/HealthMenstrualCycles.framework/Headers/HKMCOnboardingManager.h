// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMCONBOARDINGMANAGER_H
#define HKMCONBOARDINGMANAGER_H

@class HKHealthStore, HKObserverSet, HKKeyValueDomain, HKFeatureAvailabilityStore, NSString, NSNumber, HKQuantity;
@protocol HKFeatureAvailabilityProvidingObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKMenstrualCyclesStore.h"

@interface HKMCOnboardingManager : NSObject <HKFeatureAvailabilityProvidingObserver>

 {
    HKHealthStore *_healthStore;
    HKObserverSet *_observers;
    HKMenstrualCyclesStore *_menstrualCyclesStore;
    HKKeyValueDomain *_keyValueDomain;
    HKFeatureAvailabilityStore *_featureAvailabilityStore;
    NSObject<OS_dispatch_queue> *_observerQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *highestOnboardingVersionCompleted;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKQuantity *userEnteredCycleLength;
@property (readonly, nonatomic) HKQuantity *userEnteredPeriodLength;


-(BOOL)_resetOnboardingCharacteristicsWithError:(*id)arg0 ;
-(BOOL)_resetOnboardingKeyValueDomainWithError:(*id)arg0 ;
-(BOOL)_setLegacyOnboardingCompletedVersion:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)isAnyOnboardingVersionCompleted;
-(BOOL)isCurrentOnboardingVersionCompleted;
-(BOOL)isOnboardingCompletedForVersion:(NSInteger)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 queue:(id)arg1 ;
-(void)_saveUserEnteredCycleLength:(id)arg0 userEnteredPeriodLength:(id)arg1 userEnteredLastPeriodStartDay:(id)arg2 addedCycleFactors:(id)arg3 deletedCycleFactors:(id)arg4 completion:(id)arg5 ;
-(void)_setCurrentOnboardingVersionCompletedWithCompletion:(id)arg0 ;
-(void)_triggerHealthKitSync;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetCycleFactorsOnboarding:(id)arg0 ;
-(void)resetOnboarding:(id)arg0 ;
-(void)setCycleFactorsUpgradeOnboardingCompletedWithAddedCycleFactors:(id)arg0 deletedCycleFactors:(id)arg1 completion:(id)arg2 ;
-(void)setOnboardingCompletedWithUserEnteredCycleLength:(id)arg0 userEnteredPeriodLength:(id)arg1 userEnteredLastPeriodStartDay:(id)arg2 addedCycleFactors:(id)arg3 deletedCycleFactors:(id)arg4 completion:(id)arg5 ;


@end


#endif