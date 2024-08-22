// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIPROUDLOCKCONTAINERVIEWCONTROLLER_H
#define SBUIPROUDLOCKCONTAINERVIEWCONTROLLER_H

@class UIViewController, UIView, _UILegibilitySettings;
@protocol SBUIProudLockContainerViewControllerOrientationProvider, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIProudLockContainerViewControllerDelegate;


#import "SBUIProudLockIconView.h"

@interface SBUIProudLockContainerViewController : UIViewController <SBUIProudLockContainerViewControllerOrientationProvider>

 {
    NSInteger _desiredIconState;
    NSUInteger _desiredCoachingCondition;
    int _unlockSource;
    SBUIProudLockIconView *_testProudLockIconView;
    id<SBUIProudLockContainerViewControllerOrientationProvider> *_orientationProvider;
}


@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (weak, nonatomic) NSObject<SBUIProudLockContainerViewControllerLockStatusProvider> *authenticationInformationProvider; // ivar: _authenticationInformationProvider
@property (readonly, nonatomic) UIView *cameraCoveredView;
@property (nonatomic) BOOL canLeaveCoachingCondition; // ivar: _canLeaveCoachingCondition
@property (nonatomic) BOOL canShowCameraCovered; // ivar: _canShowCameraCovered
@property (nonatomic) BOOL canShowCoachingCondition; // ivar: _canShowCoachingCondition
@property (nonatomic) BOOL canShowScanningState; // ivar: _canShowScanningState
@property (nonatomic) ? configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<SBUIProudLockContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger forceCount; // ivar: _forceCount
@property (nonatomic, getter=isGuidanceTextVisible) BOOL guidanceTextVisible; // ivar: _guidanceTextVisible
@property (nonatomic) BOOL hasSeenFaceSinceScreenOn; // ivar: _hasSeenFaceSinceScreenOn
@property (readonly, nonatomic) BOOL isPortrait;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic, getter=isScreenOn) BOOL screenOn; // ivar: _screenOn
@property (nonatomic) BOOL shouldShowScanningState; // ivar: _shouldShowScanningState
@property (nonatomic) BOOL suppressNotLooking; // ivar: _suppressNotLooking
@property (nonatomic) BOOL suppressScanningState; // ivar: _suppressScanningState
@property (copy, nonatomic) id *unlockCompletion; // ivar: _unlockCompletion


-(BOOL)_canShowWhileLocked;
-(BOOL)_canTransitionToState:(NSInteger)arg0 ;
-(BOOL)_isBiometricLockedOut;
-(BOOL)_isShowingCoachingCondition:(NSUInteger)arg0 ;
-(NSInteger)_actualIconState;
-(NSInteger)_iconViewStateForCoachingCondition:(NSUInteger)arg0 ;
-(NSUInteger)_effectiveCoachingConditionForCondition:(NSUInteger)arg0 ;
-(NSUInteger)_effectiveCoachingConditionForCondition:(NSUInteger)arg0 orientation:(NSInteger)arg1 ;
-(id)_proudLockIconView;
-(id)initWithAuthenticationInformationProvider:(id)arg0 ;
-(id)orientationProvider;
-(id)testProudLockIconView;
-(void)_allowCameraCoveredImmediately:(BOOL)arg0 ;
-(void)_allowCoachingCondition;
-(void)_allowCoachingConditionImmediately:(BOOL)arg0 ;
-(void)_allowLeavingCoachingCondition;
-(void)_allowScanningState;
-(void)_clearCoachingCondition;
-(void)_dontCallThis_showLockIfNeededAnimated:(BOOL)arg0 force:(BOOL)arg1 completion:(id)arg2 ;
-(void)_dontCallThis_updateCoachingCondition:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_handleBiometricEvent:(NSUInteger)arg0 ;
-(void)_performForcedUpdate:(id)arg0 ;
-(void)_provideFeedbackForCoachingCondition:(NSUInteger)arg0 ;
-(void)_reallyAllowCameraCovered;
-(void)_reallyAllowCoachingConditionAnimated:(BOOL)arg0 ;
-(void)_reallyAllowLeavingCoachingCondition;
-(void)_setCoachingCondition:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_setCoachingCondition:(NSUInteger)arg0 animated:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)_setCoachingCondition:(NSUInteger)arg0 animated:(BOOL)arg1 skipScanningState:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)_setCounterTransformForOrientation:(NSInteger)arg0 ;
-(void)_setIconState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_setIconState:(NSInteger)arg0 animated:(BOOL)arg1 options:(NSInteger)arg2 force:(BOOL)arg3 completion:(id)arg4 ;
-(void)_setLocalTransformForOrientation:(NSInteger)arg0 ;
-(void)_startScanningStateTimer;
-(void)_updateIconViewStateAnimated:(BOOL)arg0 ;
-(void)_updateIconViewStateAnimated:(BOOL)arg0 force:(BOOL)arg1 completion:(id)arg2 ;
-(void)_updateLockForFaceInView;
-(void)_updateLockForMatchStarted;
-(void)_updateScanningState;
-(void)handleBiometricEvent:(NSUInteger)arg0 ;
-(void)handlePhoneUnlockWithWatchError:(id)arg0 ;
-(void)loadView;
-(void)reset;
-(void)setOrientationProvider:(id)arg0 ;
-(void)setTestProudLockIconView:(id)arg0 ;
-(void)updateForScreenWillTurnOff;
-(void)updateLockForBiometricMatchFailure;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif