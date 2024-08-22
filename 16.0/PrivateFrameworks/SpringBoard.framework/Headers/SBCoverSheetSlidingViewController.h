// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCOVERSHEETSLIDINGVIEWCONTROLLER_H
#define SBCOVERSHEETSLIDINGVIEWCONTROLLER_H

@class UIViewController, SBFFrameRateAssertion, UIViewFloatAnimatableProperty, UIViewController<SBCoverSheetSlidingViewControllerContentViewController>, NSString, CSLockScreenSettings, CSCoverSheetTransitionSettings;
@protocol SBCoverSheetSystemGestureDelegatePositionProviding, PTSettingsKeyObserver, BSInvalidatable, OS_dispatch_group, SBCoverSheetSlidingViewControllerDelegate;


#import "SBScreenEdgePanGestureRecognizer.h"
#import "SBHomeGestureSettings.h"
#import "SBIndirectPanGestureRecognizer.h"
#import "SBCoverSheetPositionView.h"
#import "SBFluidScrunchGestureRecognizer.h"
#import "SBCoverSheetSystemGesturesDelegate.h"

@interface SBCoverSheetSlidingViewController : UIViewController <SBCoverSheetSystemGestureDelegatePositionProviding, PTSettingsKeyObserver>

 {
    SBFFrameRateAssertion *_frameRateAssertion;
    id<BSInvalidatable> *_suppressTouchCancellation;
    NSInteger _dismissGestureState;
}


@property (nonatomic) BOOL canBePulledDown; // ivar: _canBePulledDown
@property (nonatomic) BOOL canBePulledUp; // ivar: _canBePulledUp
@property (retain, nonatomic) UIViewFloatAnimatableProperty *catchupProperty; // ivar: _catchupProperty
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // ivar: _completionGroup
@property (readonly, nonatomic) UIViewController<SBCoverSheetSlidingViewControllerContentViewController> *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBCoverSheetSlidingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBScreenEdgePanGestureRecognizer *dismissAddendumGestureRecognizer; // ivar: _dismissAddendumGestureRecognizer
@property (retain, nonatomic) SBScreenEdgePanGestureRecognizer *dismissGestureRecognizer; // ivar: _dismissGestureRecognizer
@property (nonatomic) NSInteger dismissalSlidingMode; // ivar: _dismissalSlidingMode
@property (nonatomic) NSInteger dismissalTransformMode; // ivar: _dismissalTransformMode
@property (nonatomic) NSInteger groupCount; // ivar: _groupCount
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // ivar: _homeGestureSettings
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectDismissGestureRecognizer; // ivar: _indirectDismissGestureRecognizer
@property (nonatomic) BOOL indirectPresentGestureCalledBegin; // ivar: _indirectPresentGestureCalledBegin
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectPresentGestureRecognizer; // ivar: _indirectPresentGestureRecognizer
@property (nonatomic) CGFloat initialTouchOffsetFromScreenEdge; // ivar: _initialTouchOffsetFromScreenEdge
@property (nonatomic) CGPoint lastTouchLocation; // ivar: _lastTouchLocation
@property (retain, nonatomic) CSLockScreenSettings *lockScreenSettings; // ivar: _lockScreenSettings
@property (nonatomic) BOOL performingCatchUpForPresentation; // ivar: _performingCatchUpForPresentation
@property (retain, nonatomic) SBCoverSheetPositionView *positionView; // ivar: _positionView
@property (nonatomic, setter=_logPresentGestureState:) NSInteger presentGestureState; // ivar: _presentGestureState
@property (retain, nonatomic) UIViewFloatAnimatableProperty *progressProperty; // ivar: _progressProperty
@property (nonatomic) BOOL roundsCorners; // ivar: _roundsCorners
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *scrunchDismissGestureRecognizer; // ivar: _scrunchDismissGestureRecognizer
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *systemApertureTransitionOverlayViewController; // ivar: _systemApertureTransitionOverlayViewController
@property (retain, nonatomic) SBCoverSheetSystemGesturesDelegate *systemGesturesDelegate; // ivar: _systemGesturesDelegate
@property (weak, nonatomic) CSCoverSheetTransitionSettings *transitionSettings; // ivar: _transitionSettings


-(BOOL)_canShowWhileLocked;
-(BOOL)_isPresentingInterstitialForGestureRecognizer:(id)arg0 ;
-(BOOL)_isTransitioning;
-(BOOL)_mathForGestureRecognizerPointsDown:(id)arg0 position:(*CGFloat)arg1 velocity:(*CGFloat)arg2 instantVelocity:(*CGFloat)arg3 averageVelocity:(*CGFloat)arg4 ;
-(BOOL)_shouldEndPresentedForEndingGestureRecognizer:(id)arg0 ;
-(BOOL)_shouldRubberBandForGestureRecognizer:(id)arg0 ;
-(BOOL)canTransitionToPresented:(BOOL)arg0 ;
-(BOOL)isAnyGestureActivelyRecognized;
-(BOOL)isBottomMostSlider;
-(BOOL)isDismissGestureActive;
-(BOOL)isPresentGestureActive;
-(BOOL)isTransitioning;
-(BOOL)mathForGestureRecognizerPointsDown:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutorotate;
-(BOOL)wantsFullScreenLayout;
-(CGFloat)_viewVelocity;
-(NSInteger)participantState;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_grabberRecognizer;
-(id)activeGestureRecognizer;
-(id)coverSheetIdentifier;
-(id)initWithContentViewController:(id)arg0 canBePulledDown:(BOOL)arg1 canBePulledUp:(BOOL)arg2 dismissalPreemptingGestureRecognizer:(id)arg3 ;
-(struct CGPoint )_adjustedTouchLocationForCurrentDismissalMode:(struct CGPoint )arg0 ;
-(struct CGPoint )_averageVelocityForGesture:(id)arg0 ;
-(struct CGPoint )_finalLocationForTransitionToPresented:(BOOL)arg0 ;
-(struct CGPoint )_locationForGesture:(id)arg0 ;
-(struct CGPoint )_velocityForGesture:(id)arg0 ;
-(struct CGRect )_animationTickedWithProgress:(CGFloat)arg0 velocity:(CGFloat)arg1 forPresentationValue:(BOOL)arg2 ;
-(struct CGRect )_updatePositionViewForProgress:(CGFloat)arg0 forPresentationValue:(BOOL)arg1 ;
-(void)_addSystemGestureRecognizers;
-(void)_animationTickForPresentationValue:(BOOL)arg0 ;
-(void)_beginTransitionFromAppeared:(BOOL)arg0 ;
-(void)_cancelTransitionForGesture:(id)arg0 ;
-(void)_commitTransitionToAppeared:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_createProperties;
-(void)_dismissCoverSheetAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_dismissGestureBeganWithGestureRecognizer:(id)arg0 ;
-(void)_dismissGestureChangedWithGestureRecognizer:(id)arg0 ;
-(void)_endTransitionToAppeared:(BOOL)arg0 ;
-(void)_finishTransitionToPresented:(BOOL)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_handleDismissGesture:(id)arg0 ;
-(void)_handleIndirectPresentGesture:(id)arg0 ;
-(void)_handlePresentGesture:(id)arg0 ;
-(void)_logDismissGestureState:(NSInteger)arg0 forAddendumGesture:(BOOL)arg1 ;
-(void)_logPresentGestureState:(NSInteger)arg0 ;
-(void)_positionSubviewsForContentFrame:(struct CGRect )arg0 forPresentationValue:(BOOL)arg1 ;
-(void)_presentCoverSheetAnimated:(BOOL)arg0 forUserGesture:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_presentGestureBeganWithGestureRecognizer:(id)arg0 ;
-(void)_presentOrDismissGestureChangedWithGestureRecognizer:(id)arg0 ;
-(void)_presentOrDismissGestureEndedWithGestureRecognizer:(id)arg0 ;
-(void)_removeSystemGestureRecognizers;
-(void)_setCornerRounded:(BOOL)arg0 ;
-(void)_startCatchupAnimationWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_studyLogForCompletionOfTransitionToPresented:(BOOL)arg0 ;
-(void)_studyLogForGestureRecognizerState:(NSInteger)arg0 bounds:(struct CGRect )arg1 position:(CGFloat)arg2 velocity:(CGFloat)arg3 ;
-(void)_transitionToViewControllerAppearState:(int)arg0 ;
-(void)_transitionToViewControllerAppearState:(int)arg0 forUserGesture:(BOOL)arg1 ;
-(void)_transitionToViewControllerAppearState:(int)arg0 ifNeeded:(BOOL)arg1 forUserGesture:(BOOL)arg2 ;
-(void)_updateCoverSheetDismissSettings:(id)arg0 ;
-(void)_updateForLocation:(struct CGPoint )arg0 interactive:(BOOL)arg1 ;
-(void)_updateHomeGestureSettings:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)loadView;
-(void)setDismissGesturesEnabled:(BOOL)arg0 ;
-(void)setPresented:(BOOL)arg0 forUserGesture:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif