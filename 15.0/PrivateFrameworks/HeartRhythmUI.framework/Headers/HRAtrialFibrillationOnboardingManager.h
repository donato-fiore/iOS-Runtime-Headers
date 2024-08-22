// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRATRIALFIBRILLATIONONBOARDINGMANAGER_H
#define HRATRIALFIBRILLATIONONBOARDINGMANAGER_H

@class NSString, HKFeatureAvailabilityStore, NPSManager, HKOnboardingManager;
@protocol HKOnboardingManagerDataSource, HKOnboardingManagerDelegate, HRAtrialFibrillationOnboardingManagerDelegate;

#import <Foundation/Foundation.h>


@interface HRAtrialFibrillationOnboardingManager : NSObject <HKOnboardingManagerDataSource, HKOnboardingManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HRAtrialFibrillationOnboardingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKFeatureAvailabilityStore *featureAvailabilityStore; // ivar: _featureAvailabilityStore
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NPSManager *nanoPreferenceSyncManager; // ivar: _nanoPreferenceSyncManager
@property (readonly, nonatomic) HKOnboardingManager *onboardingManager; // ivar: _onboardingManager
@property (readonly, nonatomic) NSInteger provenance; // ivar: _provenance
@property (readonly) Class superclass;


-(id)availableOnboardingStepsForOnboardingManager:(id)arg0 ;
-(id)initWithOnboardingType:(NSInteger)arg0 isFirstTimeOnboarding:(BOOL)arg1 healthStore:(id)arg2 dateCache:(id)arg3 provenance:(NSInteger)arg4 delegate:(id)arg5 ;
-(id)onboardingManager:(id)arg0 sequenceForStep:(NSInteger)arg1 onboardingType:(NSInteger)arg2 ;
-(id)onboardingNavigationController;
-(void)_setOnboardingCompletedForCountryCode:(id)arg0 ;
-(void)_wrapUpOnboardingWithNotificationsEnabled:(BOOL)arg0 ;
-(void)didBeginOnboardingForOnboardingManager:(id)arg0 ;
-(void)didCancelOnboardingForOnboardingManager:(id)arg0 ;
-(void)didCompleteOnboardingForOnboardingManager:(id)arg0 ;
-(void)dismissOnboarding;
-(void)onboardingManager:(id)arg0 willMoveToPage:(id)arg1 ;


@end


#endif