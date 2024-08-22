// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERGESTUREMANAGER_H
#define SBFLUIDSWITCHERGESTUREMANAGER_H

@class SBAppSwitcherDefaults, NSHashTable, NSString, NSTimer, UINotificationFeedbackGenerator, UIView, SBFHomeGrabberSettings, UIHoverGestureRecognizer, NSMutableSet, _UIPassthroughTapGestureRecognizer, SBFZStackParticipant;
@protocol SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, BSDescriptionProviding, PTSettingsKeyObserver, SBGrabberTongueDelegate, SBHomeGrabberDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBPanSystemGestureRecognizerDelegate, SBLayoutStateTransitionObserver, SBFluidSwitcherGestureWorkspaceTransactionDelegate, SBFluidSwitcherDragAndDropManagerDelegate, SBSystemApertureZStackPolicyAssistantDelegate, SBFluidSwitcherGestureManagerDelegate;

#import <Foundation/Foundation.h>

#import "SBFluidSwitcherPanGestureRecognizer.h"
#import "SBFluidSwitcherGestureWorkspaceTransaction.h"
#import "SBAppSwitcherSettings.h"
#import "SBGrabberTongue.h"
#import "SBSwitcherForcePressSystemGestureRecognizer.h"
#import "SBDisplayItemLayoutAttributesCalculator.h"
#import "SBDragAndDropWorkspaceTransaction.h"
#import "SBFluidSwitcherDragAndDropManager.h"
#import "SBFluidScrunchGestureRecognizer.h"
#import "SBHomeGestureSettings.h"
#import "SBIndirectPanGestureRecognizer.h"
#import "SBLayoutStateTransitionCoordinator.h"
#import "SBReachabilitySettings.h"
#import "SBPanSystemGestureRecognizer.h"
#import "SBFluidSwitcherViewController.h"
#import "SBSwitcherController.h"
#import "SBSystemApertureZStackPolicyAssistant.h"

@interface SBFluidSwitcherGestureManager : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, BSDescriptionProviding, PTSettingsKeyObserver, SBGrabberTongueDelegate, SBHomeGrabberDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBPanSystemGestureRecognizerDelegate, SBLayoutStateTransitionObserver, SBFluidSwitcherGestureWorkspaceTransactionDelegate, SBFluidSwitcherDragAndDropManagerDelegate, SBSystemApertureZStackPolicyAssistantDelegate>



@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *activateReachabilityGestureRecognizer; // ivar: _activateReachabilityGestureRecognizer
@property (retain, nonatomic) SBFluidSwitcherGestureWorkspaceTransaction *activeGestureTransaction; // ivar: _activeGestureTransaction
@property (retain, nonatomic) SBAppSwitcherDefaults *appSwitcherDefaults; // ivar: _appSwitcherDefaults
@property (retain, nonatomic) SBAppSwitcherSettings *appSwitcherSettings; // ivar: _appSwitcherSettings
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *clickAndDragHomeGestureRecognizer; // ivar: _clickAndDragHomeGestureRecognizer
@property (retain, nonatomic) NSHashTable *currentHomeGrabberViews; // ivar: _currentHomeGrabberViews
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBGrabberTongue *deckGrabberTongue; // ivar: _deckGrabberTongue
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *deckInSwitcherPanGestureRecognizer; // ivar: _deckInSwitcherPanGestureRecognizer
@property (retain, nonatomic) SBSwitcherForcePressSystemGestureRecognizer *deckSwitcherForcePressRecognizer; // ivar: _deckSwitcherForcePressRecognizer
@property (retain, nonatomic) NSTimer *delayedHomeGrabberUpdateTimer; // ivar: _delayedHomeGrabberUpdateTimer
@property (weak, nonatomic) NSObject<SBFluidSwitcherGestureManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBDisplayItemLayoutAttributesCalculator *displayItemLayoutAttributesCalculator; // ivar: _displayItemLayoutAttributesCalculator
@property (readonly, nonatomic) SBDragAndDropWorkspaceTransaction *dragAndDropWorkspaceTransaction; // ivar: _dragAndDropWorkspaceTransaction
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *dragRevealContinuousExposeStripOverflowGestureRecognizer; // ivar: _dragRevealContinuousExposeStripOverflowGestureRecognizer
@property (retain, nonatomic) UINotificationFeedbackGenerator *edgeProtectFeedbackGenerator; // ivar: _edgeProtectFeedbackGenerator
@property (retain, nonatomic) UIView *exclusionTrapezoidDebugView; // ivar: _exclusionTrapezoidDebugView
@property (retain, nonatomic) SBFluidSwitcherDragAndDropManager *fluidDragAndDropManager; // ivar: _fluidDragAndDropManager
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *fluidScrunchGestureRecognizer; // ivar: _fluidScrunchGestureRecognizer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings; // ivar: _homeGestureSettings
@property (retain, nonatomic) SBFHomeGrabberSettings *homeGrabberSettings; // ivar: _homeGrabberSettings
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverGestureRecognizer; // ivar: _hoverGestureRecognizer
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectBottomEdgePanGestureRecognizer; // ivar: _indirectBottomEdgePanGestureRecognizer
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectDismissFloatingApplicationGestureRecognizer; // ivar: _indirectDismissFloatingApplicationGestureRecognizer
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *indirectFloatingAppScrunchGestureRecognizer; // ivar: _indirectFloatingAppScrunchGestureRecognizer
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectRevealContinuousExposeStripOverflowGestureRecognizer; // ivar: _indirectRevealContinuousExposeStripOverflowGestureRecognizer
@property (retain, nonatomic) SBIndirectPanGestureRecognizer *indirectRevealContinuousExposeStripsGestureRecognizer; // ivar: _indirectRevealContinuousExposeStripsGestureRecognizer
@property (nonatomic) BOOL interactivelyPresentingTongue; // ivar: _interactivelyPresentingTongue
@property (retain, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // ivar: _layoutStateTransitionCoordinator
@property (retain, nonatomic) SBGrabberTongue *leftEdgeFloatingAppGrabberTongue; // ivar: _leftEdgeFloatingAppGrabberTongue
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *liveWindowResizeGestureRecognizer; // ivar: _liveWindowResizeGestureRecognizer
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *moveFloatingApplicationGestureRecognizer; // ivar: _moveFloatingApplicationGestureRecognizer
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *pinFloatingApplicationGestureRecognizer; // ivar: _pinFloatingApplicationGestureRecognizer
@property (nonatomic) BOOL playedEdgeProtectHaptic; // ivar: _playedEdgeProtectHaptic
@property (retain, nonatomic) SBReachabilitySettings *reachabilitySettings; // ivar: _reachabilitySettings
@property (retain, nonatomic) SBGrabberTongue *rightEdgeFloatingAppGrabberTongue; // ivar: _rightEdgeFloatingAppGrabberTongue
@property (retain, nonatomic) SBPanSystemGestureRecognizer *sceneResizePanGestureRecognizer; // ivar: _sceneResizePanGestureRecognizer
@property (nonatomic) BOOL shouldRubberbandGrabberViewForReduceMotion; // ivar: _shouldRubberbandGrabberViewForReduceMotion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *suppressionAssertions; // ivar: _suppressionAssertions
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *swipeUpFloatingAppGestureRecognizer; // ivar: _swipeUpFloatingAppGestureRecognizer
@property (weak, nonatomic) SBFluidSwitcherViewController *switcherContentController; // ivar: _switcherContentController
@property (weak, nonatomic) SBSwitcherController *switcherController; // ivar: _switcherController
@property (retain, nonatomic) _UIPassthroughTapGestureRecognizer *tapToBringItemContainerForwardGestureRecognizer; // ivar: _tapToBringItemContainerForwardGestureRecognizer
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *unpinSplitViewApplicationGestureRecognizer; // ivar: _unpinSplitViewApplicationGestureRecognizer
@property (nonatomic) BOOL usesHomeAffordanceRulesForGrabberTongue; // ivar: _usesHomeAffordanceRulesForGrabberTongue
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant
@property (retain, nonatomic) SBSystemApertureZStackPolicyAssistant *zStackSystemAperturePolicyAssistant; // ivar: _zStackSystemAperturePolicyAssistant


-(BOOL)_areContinuousExposeStripsHidden;
-(BOOL)_areContinuousExposeStripsOccluded;
-(BOOL)_edgeLocationIsOutsideFloatingApplicationGrabberFreeRegion:(CGFloat)arg0 ;
-(BOOL)_hasActiveModalFloatingApplication;
-(BOOL)_isBannerOccludingRegionAtReferencePoint:(struct CGPoint )arg0 ;
-(BOOL)_isEdgeLocationInHomeAffordanceRegion:(CGFloat)arg0 ;
-(BOOL)_isTransactionRunningForGestureRecognizer:(id)arg0 ;
-(BOOL)_shouldAllowDeckBottomEdgeGestureToRecognizeFromEdges:(NSUInteger)arg0 ;
-(BOOL)_shouldAllowFloatingApplicationGesture:(id)arg0 gestureType:(NSUInteger)arg1 failureReason:(*id)arg2 ;
-(BOOL)_shouldBeginBottomEdgePanGesture:(id)arg0 ;
-(BOOL)_shouldBeginClickAndDragHomeGesture:(id)arg0 ;
-(BOOL)_shouldBeginDeckForcePressGesture:(id)arg0 ;
-(BOOL)_shouldBeginDeckInSwitcherPanGesture:(id)arg0 ;
-(BOOL)_shouldBeginFloatingApplicationMoveGesture:(id)arg0 ;
-(BOOL)_shouldBeginFloatingApplicationPinGesture:(id)arg0 ;
-(BOOL)_shouldBeginFloatingApplicationPresentGesture:(id)arg0 ;
-(BOOL)_shouldBeginFloatingApplicationSwipeUpGesture:(id)arg0 ;
-(BOOL)_shouldBeginFluidScrunchGesture:(id)arg0 ;
-(BOOL)_shouldBeginHoverGesture:(id)arg0 ;
-(BOOL)_shouldBeginIndirectFloatingAppScrunchGesture:(id)arg0 ;
-(BOOL)_shouldBeginIndirectHomePanGesture:(id)arg0 ;
-(BOOL)_shouldBeginLiveWindowResizeGesture:(id)arg0 ;
-(BOOL)_shouldBeginReachabilityGesture:(id)arg0 ;
-(BOOL)_shouldBeginRevealContinuousExposeStripOverflowGesture:(id)arg0 ;
-(BOOL)_shouldBeginRevealContinuousExposeStripOverflowPanGesture:(id)arg0 ;
-(BOOL)_shouldBeginRevealContinuousExposeStripsIndirectGesture:(id)arg0 ;
-(BOOL)_shouldBeginRevealContinuousExposeStripsOrOverflowIndirectGesture:(id)arg0 ;
-(BOOL)_shouldBeginSplitViewApplicationUnpinGesture:(id)arg0 ;
-(BOOL)_shouldBeginTapToBringItemContainerForwardGesture:(id)arg0 ;
-(BOOL)_shouldClickAndDragHomeGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldDeckInSwitcherPanGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldFloatingApplicationMoveGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldFloatingApplicationPinGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldFloatingApplicationSwipeUpGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldIndirectFloatingAppScrunchGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldLiveResizeGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldLiveResizeItemContainerGestureWithPointer:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldLiveResizeItemContainerGestureWithTouch:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldProtectEdgeLocation:(CGFloat)arg0 ;
-(BOOL)_shouldReachabilityGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldRevealContinuousExposeStripOverflowPanGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldSceneResizeGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldSplitViewApplicationUnpinGesture:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)_shouldSuppressEdgeProtect;
-(BOOL)_shouldSuppressEdgeProtectToAllowSwipesImmediatelyAfterTransition;
-(BOOL)_shouldTapToBringItemContainerForward:(id)arg0 receiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)grabberTongue:(id)arg0 shouldAllowSecondSwipeWithEdgeLocation:(CGFloat)arg1 ;
-(BOOL)grabberTongue:(id)arg0 shouldDismissTongueOnSecondSwipeWithEdgeLocation:(CGFloat)arg1 ;
-(BOOL)grabberTongue:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)grabberTongue:(id)arg0 shouldShowTongueOnFirstSwipeWithEdgeLocation:(CGFloat)arg1 ;
-(BOOL)grabberTongueOrPullEnabled:(id)arg0 forGestureRecognizer:(id)arg1 ;
-(BOOL)isDragAndDropTransactionRunning;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg0 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg0 ;
-(BOOL)shouldSuppressTongueViewForGrabberTongue:(id)arg0 ;
-(BOOL)switcherOwnsHomeGesture;
-(CGFloat)additionalEdgeSpacingForHomeGrabberView:(id)arg0 ;
-(Class)_fluidSwitcherGestureTransactionClassForGestureType:(NSInteger)arg0 ;
-(NSInteger)_currentUnlockedEnvironmentMode;
-(NSInteger)_floatingConfigurationForActivatedEdge:(NSUInteger)arg0 ;
-(NSInteger)_gestureTypeForGestureRecognizer:(id)arg0 ;
-(NSUInteger)indirectPanSystemGestureTypeForGrabberTongue:(id)arg0 ;
-(id)_currentFloatingAppLayout;
-(id)_currentLayoutState;
-(id)_deviceApplicationSceneEntityForFloatingApplicationGrabberTongue;
-(id)_firstFloatingAppLayout;
-(id)_grabberTongueForGestureRecognizer:(id)arg0 ;
-(id)_indirectPresentFloatingAppGestureRecognizerForEdge:(NSUInteger)arg0 ;
-(id)acquireSystemApertureSuppressionAssertionForBundleIdentifier:(id)arg0 sceneWithIdentifier:(id)arg1 ;
-(id)customGestureRecognizerForGrabberTongue:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)dragAndDropManager:(id)arg0 displayItemForDraggingWindowWithGestureRecognizer:(id)arg1 ;
-(id)dragAndDropManager:(id)arg0 sourceViewProviderForDraggingWindowWithGestureRecognizer:(id)arg1 ;
-(id)homeGestureBottomEdgeRecognizer;
-(id)indirectPanGestureRecognizerForGrabberTongue:(id)arg0 ;
-(id)initWithSwitcherController:(id)arg0 delegate:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(struct CGRect )_floatingApplicationBounds;
-(void)_configureChamoisGestureRecognizersIfNeeded;
-(void)_configureFloatingApplicationGestureRecognizers;
-(void)_configureScrunchGesture;
-(void)_configureTapToBringItemContainerForwardGesture;
-(void)_configureTransitionRequest:(id)arg0 forGestureBegin:(id)arg1 ;
-(void)_handleClickAndDragHomeGesture:(id)arg0 ;
-(void)_handleDeckSwitcherForcePressGesture:(id)arg0 ;
-(void)_handleDeckSwitcherPanGesture:(id)arg0 ;
-(void)_handleFloatingAppPresentGesture:(id)arg0 ;
-(void)_handleFluidGesture:(id)arg0 ;
-(void)_handleHoverGesture:(id)arg0 ;
-(void)_handleScrunchGesture:(id)arg0 ;
-(void)_handleSwitcherGestureBegan:(id)arg0 ;
-(void)_handleSwitcherPanGestureBegan:(id)arg0 ;
-(void)_handleSwitcherPanGestureChanged:(id)arg0 ;
-(void)_handleSwitcherPanGestureEnded:(id)arg0 ;
-(void)_handleTapToBringItemContainerForward:(id)arg0 ;
-(void)_handleWindowDragGestureRecognizer:(id)arg0 ;
-(void)_hideGrabberAnimated:(BOOL)arg0 ;
-(void)_setUpGestureRecognizers;
-(void)_startFluidSwitcherTransactionForGestureRecognizer:(id)arg0 ;
-(void)_updateDeckSwitcherForcePressGesturePresence;
-(void)_updateDeckSwitcherInSwitcherAndReachabilityGesturePresence;
-(void)_updateExclusionTrapezoidDebugView;
-(void)_updateHomeGrabberViewsWithAnimationMode:(NSInteger)arg0 ;
-(void)_updateReachabilityGestureSettings;
-(void)_updateSwitcherBottomEdgeGesturePresence;
-(void)_updateSystemApertureZStackPolicyAssistant;
-(void)_updateSystemApertureZStackPolicyAssistantWithLayoutState:(id)arg0 ;
-(void)_updateZStackParticipantWithReason:(id)arg0 ;
-(void)completeGestureWithTransitionRequest:(id)arg0 ;
-(void)configureIndirectBottomEdgePanGestureRecognizer;
-(void)dealloc;
-(void)dragAndDropManager:(id)arg0 didBeginDraggingWindowWithSceneIdentifier:(id)arg1 ;
-(void)dragAndDropManager:(id)arg0 didBeginGesture:(id)arg1 ;
-(void)dragAndDropManager:(id)arg0 didEndGesture:(id)arg1 ;
-(void)dragAndDropManager:(id)arg0 didPlatterizeWindowDragWithSceneIdentifier:(id)arg1 ;
-(void)dragAndDropManager:(id)arg0 didUpdateGesture:(id)arg1 ;
-(void)dragAndDropManager:(id)arg0 willEndDraggingWindowWithSceneIdentifier:(id)arg1 ;
-(void)failMultitaskingGesturesForReason:(id)arg0 ;
-(void)fluidSwitcherGestureTransaction:(id)arg0 didBeginGesture:(id)arg1 ;
-(void)fluidSwitcherGestureTransaction:(id)arg0 didEndGesture:(id)arg1 ;
-(void)fluidSwitcherGestureTransaction:(id)arg0 didUpdateGesture:(id)arg1 ;
-(void)grabberTongueBeganPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueCanceledPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueDidPresentInteractively:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 ;
-(void)grabberTongueEndedPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueTapped:(id)arg0 ;
-(void)grabberTongueUpdatedPulling:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 andGesture:(id)arg3 ;
-(void)grabberTongueWillDismiss:(id)arg0 ;
-(void)grabberTongueWillPresent:(id)arg0 ;
-(void)grabberTongueWillPresentInteractively:(id)arg0 withDistance:(CGFloat)arg1 andVelocity:(CGFloat)arg2 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg0 ;
-(void)invalidate;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)relinquishHiddenAssertionForHomeGrabber:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)systemApertureZStackPolicyAssistantDidChange:(id)arg0 ;
-(void)takeHiddenAssertionForHomeGrabber:(id)arg0 ;
-(void)transactionDidComplete:(id)arg0 ;
-(void)updateForChamoisWindowingUIEnabled:(BOOL)arg0 ;
-(void)updateGestureWithTransitionRequest:(id)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif