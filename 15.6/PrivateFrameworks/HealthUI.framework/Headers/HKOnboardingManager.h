// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKONBOARDINGMANAGER_H
#define HKONBOARDINGMANAGER_H

@class NSString, HKHealthStore, UINavigationController, NSArray, NSMutableDictionary;
@protocol UINavigationControllerDelegate, HKOnboardingPageViewControllerDelegate, HKOnboardingManagerDataSource, HKOnboardingManagerDelegate;

#import <Foundation/Foundation.h>

#import "HKOnboardingSequence.h"
#import "HKDateCache.h"

@interface HKOnboardingManager : NSObject <UINavigationControllerDelegate, HKOnboardingPageViewControllerDelegate>



@property (nonatomic) NSUInteger currentPageIndex; // ivar: _currentPageIndex
@property (retain, nonatomic) HKOnboardingSequence *currentSequence; // ivar: _currentSequence
@property (nonatomic) NSInteger currentStepIndex; // ivar: _currentStepIndex
@property (weak, nonatomic) NSObject<HKOnboardingManagerDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKOnboardingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL firstTimeOnboarding; // ivar: _firstTimeOnboarding
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (nonatomic) NSInteger onboardingType; // ivar: _onboardingType
@property (nonatomic) NSUInteger presentedPagesCount; // ivar: _presentedPagesCount
@property (retain, nonatomic) NSArray *steps; // ivar: _steps
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *userInfo; // ivar: _userInfo


-(NSInteger)upgradingFromAlgorithmVersionForOnboardingType:(NSInteger)arg0 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)initWithOnboardingType:(NSInteger)arg0 isFirstTimeOnboarding:(BOOL)arg1 healthStore:(id)arg2 dateCache:(id)arg3 ;
-(id)onboardingNavigationController;
-(id)viewControllerForPage:(id)arg0 ;
-(void)_didStepBackward;
-(void)dismissOnboarding;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)onboardingCancelled;
-(void)pushPageAnimated:(BOOL)arg0 ;
-(void)stepForward;
-(void)stepToNextPage;
-(void)stepToNextState;


@end


#endif