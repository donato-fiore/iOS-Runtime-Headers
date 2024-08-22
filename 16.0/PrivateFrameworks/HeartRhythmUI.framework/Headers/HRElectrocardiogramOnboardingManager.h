// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRELECTROCARDIOGRAMONBOARDINGMANAGER_H
#define HRELECTROCARDIOGRAMONBOARDINGMANAGER_H

@class HKFeatureAvailabilityStore, NSString, HKOnboardingManager;
@protocol HKOnboardingManagerDataSource, HKOnboardingManagerDelegate, HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate, HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate, HRElectrocardiogramOnboardingManagerDelegate;

#import <Foundation/Foundation.h>


@interface HRElectrocardiogramOnboardingManager : NSObject <HKOnboardingManagerDataSource, HKOnboardingManagerDelegate, HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate, HROnboardingElectrocardiogramUpdateCompleteViewControllerDelegate>



@property (readonly, nonatomic) HKFeatureAvailabilityStore *availabilityStore; // ivar: _availabilityStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HRElectrocardiogramOnboardingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFirstTimeOnboarding; // ivar: _isFirstTimeOnboarding
@property (readonly, nonatomic) BOOL isSampleInteractive; // ivar: _isSampleInteractive
@property (readonly, nonatomic) HKOnboardingManager *onboardingManager; // ivar: _onboardingManager
@property (readonly, nonatomic) NSInteger provenance; // ivar: _provenance
@property (readonly) Class superclass;


+(BOOL)hasOverriddenOnboardingSettings;
+(NSInteger)algorithmVersionForSample:(id)arg0 ;
+(id)electrocardiogramPossibleResultsViewControllerForAlgorithmVersion:(NSInteger)arg0 forOnboarding:(BOOL)arg1 ;
+(id)electrocardiogramPossibleResultsViewControllerForSample:(id)arg0 ;
+(id)electrocardiogramPossibleResultsViewControllerForSample:(id)arg0 forAlgorithmVersion:(NSInteger)arg1 ;
-(NSInteger)availableAlgorithmVersion;
-(NSInteger)upgradingFromAlgorithmVersion;
-(NSInteger)upgradingFromAlgorithmVersionForOnboardingManager:(id)arg0 ;
-(id)availableOnboardingStepsForOnboardingManager:(id)arg0 ;
-(id)initWithOnboardingType:(NSInteger)arg0 isFirstTimeOnboarding:(BOOL)arg1 healthStore:(id)arg2 dateCache:(id)arg3 provenance:(NSInteger)arg4 delegate:(id)arg5 isSampleInteractive:(BOOL)arg6 ;
-(id)onboardingManager:(id)arg0 customViewControllerForPage:(id)arg1 ;
-(id)onboardingManager:(id)arg0 sequenceForStep:(NSInteger)arg1 onboardingType:(NSInteger)arg2 ;
-(id)onboardingNavigationController;
-(void)didBeginOnboardingForOnboardingManager:(id)arg0 ;
-(void)didCancelOnboardingForOnboardingManager:(id)arg0 ;
-(void)didCompleteOnboardingForOnboardingManager:(id)arg0 ;
-(void)didTapOnElectrocardiogram:(id)arg0 ;
-(void)didTapOnShowDevicesInWatchApp;
-(void)dismissOnboarding;
-(void)onboardingManager:(id)arg0 willMoveToPage:(id)arg1 ;
-(void)recordOnboardingAsCompleted;


@end


#endif