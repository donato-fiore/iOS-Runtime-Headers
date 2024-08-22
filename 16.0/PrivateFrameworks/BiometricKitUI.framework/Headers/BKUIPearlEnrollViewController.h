// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIPEARLENROLLVIEWCONTROLLER_H
#define BKUIPEARLENROLLVIEWCONTROLLER_H

@class UIViewController, UIScrollView, NSLayoutConstraint, _UIBackdropView, UILabel, NSString, NSDate, NSTimer, UIButton, UILayoutGuide, NSArray, UIView, NSMutableArray;
@protocol BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, BKUIPearlEnrollViewDelegate, BKUIPearlAudioStateDelegate, BKUIPearlEnrollOperationsDelegate, OS_dispatch_queue, OS_dispatch_semaphore, BKUIPearlEnrollViewControllerDelegate;


#import "BKUIPearlInstructionView.h"
#import "BKUIPearlEnrollAudioManager.h"
#import "BioStreamsEventHelper.h"
#import "BKUIPearlEnrollViewBottomContainer.h"
#import "BKUIButtonTray.h"
#import "BKUIPearlEnrollView.h"
#import "BKUIPeriocularEnableSplashViewController.h"
#import "BKUIPearlEnrollControllerPreloadedState.h"

@interface BKUIPearlEnrollViewController : UIViewController <BKEnrollOperationDelegate, BKEnrollPearlOperationDelegate, BKUIPearlEnrollViewDelegate, BKUIPearlAudioStateDelegate, BKUIPearlEnrollOperationsDelegate>

 {
    UIScrollView *_scrollView;
    NSLayoutConstraint *_nextStateButtonContainerHorizontalPositionConstraint;
    _UIBackdropView *_darkTrayBackdrop;
    _UIBackdropView *_lightTrayBackdrop;
    NSLayoutConstraint *_buttonTrayToNextStateButtonContainerTopConstraint;
    UILabel *_debugLabel;
    NSString *_statusString;
    BOOL _suspended;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_semaphore> *_stateSema;
    NSDate *_stateStart;
    BOOL _animatingState;
    NSDate *_lastFaceFoundDate;
    int _pendingSubstate;
    BOOL _substatePending;
    NSTimer *_substateDelayTimer;
}


@property (retain, nonatomic) BKUIPearlInstructionView *animatingInstructionView; // ivar: _animatingInstructionView
@property (retain, nonatomic) BKUIPearlEnrollAudioManager *audioManager; // ivar: _audioManager
@property (retain, nonatomic) BioStreamsEventHelper *bioStreamEventHelper; // ivar: _bioStreamEventHelper
@property (retain, nonatomic) BKUIPearlEnrollViewBottomContainer *bottomContainer; // ivar: _bottomContainer
@property (retain, nonatomic) BKUIButtonTray *buttonTray; // ivar: _buttonTray
@property (nonatomic) BOOL darkBackground; // ivar: _darkBackground
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BKUIPearlEnrollViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BKUIPearlEnrollView *enrollView; // ivar: _enrollView
@property (retain, nonatomic) NSLayoutConstraint *enrollViewHeightConstraint; // ivar: _enrollViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *enrollViewTopConstraint; // ivar: _enrollViewTopConstraint
@property (nonatomic) BOOL enrollmentAlreadyHasExistingPeriocularTemplate; // ivar: _enrollmentAlreadyHasExistingPeriocularTemplate
@property (nonatomic) NSUInteger enrollmentConfiguration;
@property (retain, nonatomic) UIButton *escapeHatchButton; // ivar: _escapeHatchButton
@property (nonatomic) NSInteger glassesMidFlowUpsell; // ivar: _glassesMidFlowUpsell
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inBuddy; // ivar: _inBuddy
@property (nonatomic) BOOL inBuddyGlassesFollowUp; // ivar: _inBuddyGlassesFollowUp
@property (nonatomic) BOOL inDemo; // ivar: _inDemo
@property (nonatomic) BOOL inSheet; // ivar: _inSheet
@property (retain, nonatomic) UILayoutGuide *instructionBaselineLayoutGuide; // ivar: _instructionBaselineLayoutGuide
@property (retain, nonatomic) BKUIPearlInstructionView *instructionView; // ivar: _instructionView
@property (retain, nonatomic) NSArray *instructionViewConstraints; // ivar: _instructionViewConstraints
@property (retain, nonatomic) NSLayoutConstraint *instructionViewTopConstraint; // ivar: _instructionViewTopConstraint
@property (nonatomic) BOOL isDisplayZoomEnabled; // ivar: _isDisplayZoomEnabled
@property (retain, nonatomic) BKUIPeriocularEnableSplashViewController *midFlowPeriocularSplashController; // ivar: _midFlowPeriocularSplashController
@property (retain, nonatomic) UIButton *nextStateButton; // ivar: _nextStateButton
@property (retain, nonatomic) UIView *nextStateButtonContainer; // ivar: _nextStateButtonContainer
@property (retain, nonatomic) NSLayoutConstraint *nextStateButtonContainerBottomConstraintShort; // ivar: _nextStateButtonContainerBottomConstraintShort
@property (retain, nonatomic) NSLayoutConstraint *nextStateButtonContainerBottomConstraintTall; // ivar: _nextStateButtonContainerBottomConstraintTall
@property (retain, nonatomic) NSMutableArray *operationHandlers; // ivar: _operationHandlers
@property (retain, nonatomic) BKUIPearlEnrollControllerPreloadedState *preloadedState; // ivar: _preloadedState
@property (nonatomic) int previousState; // ivar: _previousState
@property (retain, nonatomic) NSString *progressString; // ivar: _progressString
@property (retain, nonatomic) UIButton *retryMatchOperationButton; // ivar: _retryMatchOperationButton
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) int substate; // ivar: _substate
@property (readonly) Class superclass;


+(BOOL)_shouldShowAccessibilityOptionForState:(int)arg0 poseStatus:(id)arg1 ;
+(BOOL)_shouldShowEscapeHatchForState:(int)arg0 inBuddy:(BOOL)arg1 inDemo:(BOOL)arg2 ;
+(void)preloadWithCompletion:(id)arg0 ;
-(BOOL)hasPeriocularIdentityEnrolled;
-(BOOL)isFinalEnrollment;
-(BOOL)isGlassesEnrollmentOnly;
-(BOOL)isModalInPresentation;
-(BOOL)midFlowPeriocularSplashShowing;
-(BOOL)useNextButton;
-(CGFloat)percentOfPillsCompleted;
-(NSInteger)preferredStatusBarStyle;
-(id)_escapeHatchTitleForState:(int)arg0 ;
-(id)_nextStateButtonTitleForState:(int)arg0 ;
-(id)_nextStateButtonTitleForState:(int)arg0 subState:(int)arg1 ;
-(id)currentOperationHandler;
-(id)getEnrollview;
-(id)initWithPreloadedState:(id)arg0 ;
-(void)_cancelEnrollOperationForEscapeHatchButtonTap;
-(void)_enableEnrollUI;
-(void)_endEnrollFlowWithError:(id)arg0 ;
-(void)_handleEnrollStateOnAppear;
-(void)_handleGlassesSkipAction;
-(void)_logRemovePeriocularFailure:(id)arg0 ;
-(void)_setSuspended:(BOOL)arg0 ;
-(void)_setupUI;
-(void)_updateDebugLabel;
-(void)_updateLeftBarButtonItem;
-(void)animateInstruction;
-(void)animateToSuccessCompletionLayout:(NSInteger)arg0 ;
-(void)animateWithOrientation:(NSInteger)arg0 ;
-(void)cancelEnroll;
-(void)cancelEnrollForRotationIfNeeded:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didBecomeActive:(id)arg0 ;
-(void)didEnterBackground:(id)arg0 ;
-(void)didReachLargeNudgePeakForEnrollView:(id)arg0 ;
-(void)didReachSmallNudgePeakForEnrollView:(id)arg0 ;
-(void)endEnrollFlowWithError:(id)arg0 ;
-(void)enrollOperation:(id)arg0 finishedWithIdentity:(id)arg1 animateImmediately:(BOOL)arg2 ;
-(void)enrollView:(id)arg0 didNudgeInDirection:(NSUInteger)arg1 nudgeCount:(NSUInteger)arg2 ;
-(void)enrollView:(id)arg0 willNudgeInDirection:(NSUInteger)arg1 nudgeCount:(NSUInteger)arg2 ;
-(void)finalizeInstructionAnimation;
-(void)forceDarkBackground:(BOOL)arg0 animated:(BOOL)arg1 ;
// -(void)navigateToMidFlowPeriocularSplashScreenWithPrepareAction:(id)arg0 completionAction:(unk)arg1  ;
-(void)nextStateButtonPressed:(id)arg0 ;
-(void)pearlEnrollControllerCompleted;
-(void)prepareBottomContainerForAnimationToState:(int)arg0 fromState:(int)arg1 subState:(int)arg2 advancing:(BOOL)arg3 ;
-(void)prepareForAnimationToState:(int)arg0 fromState:(int)arg1 ;
-(void)prepareForAnimationToState:(int)arg0 fromState:(int)arg1 subState:(int)arg2 advancing:(BOOL)arg3 ;
-(void)primeWithExternalizedAuthContext:(id)arg0 ;
-(void)primeWithPasscode:(id)arg0 ;
-(void)refreshEscapeHatchForCurrentState;
-(void)removeGlassesUI;
-(void)restartEnroll;
-(void)retryPressed;
-(void)returnToEnroll;
-(void)setCustomDetailString:(id)arg0 forState:(int)arg1 ;
-(void)setCustomInstructionString:(id)arg0 forState:(int)arg1 ;
-(void)setEnrollMovieViewHidden:(BOOL)arg0 ;
-(void)setExistingIdentity:(id)arg0 ;
-(void)setStatus:(id)arg0 ;
-(void)setUseNextButton:(BOOL)arg0 ;
-(void)setupDebugLabel;
-(void)showMaskAndGlassesTutorialWithCompletion:(id)arg0 ;
-(void)startEnroll;
-(void)toggleDebug;
-(void)toggleDebugAndSave;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)transitionToSuccessFromPeriocularSplash;
-(void)updateButtonsVisibility;
-(void)updatePeriocularEnrollmentSettings:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willResignActive:(id)arg0 ;


@end


#endif