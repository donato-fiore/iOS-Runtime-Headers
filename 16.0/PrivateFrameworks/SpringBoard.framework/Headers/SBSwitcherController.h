// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWITCHERCONTROLLER_H
#define SBSWITCHERCONTROLLER_H

@class BSAbsoluteMachTimer, SBFTraitsParticipant, SBFTraitsSettingsActuationContext, NSMutableDictionary, SBSDisplayLayoutElement, NSString, FBSDisplayIdentity;
@protocol SBAttentionAwarenessClientDelegate, SBFTraitsParticipantDelegate, SBLayoutStateTransitionObserver, SBSDisplayLayoutElementProviding, SBDisplayLayoutContext, SBLayoutStateTransitionSceneEntityFrameProvider, BSInvalidatable, SBSwitcherContentViewControlling;

#import <Foundation/Foundation.h>

#import "SBDisplayItemLayoutAttributesCalculator.h"
#import "SBMedusaBannerViewController.h"
#import "SBAttentionAwarenessClient.h"
#import "SBTraitsSwitcherPolicySpecifier.h"
#import "SBTraitsSwitcherLiveOverlayPolicySpecifier.h"
#import "SBTraitsSceneParticipantDelegate.h"
#import "SBFluidSwitcherGestureManager.h"
#import "SBLayoutState.h"
#import "SBMainSwitcherControllerCoordinator.h"
#import "SBSwitcherViewController.h"
#import "SBMainSwitcherWindow.h"
#import "SBWindowScene.h"

@interface SBSwitcherController : NSObject <SBAttentionAwarenessClientDelegate, SBFTraitsParticipantDelegate, SBLayoutStateTransitionObserver, SBSDisplayLayoutElementProviding, SBDisplayLayoutContext, SBLayoutStateTransitionSceneEntityFrameProvider>

 {
    BOOL _chamoisWindowingUIEnabled;
    SBDisplayItemLayoutAttributesCalculator *_displayItemFrameCalculator;
    SBMedusaBannerViewController *_medusaBannerViewController;
    BSAbsoluteMachTimer *_medusaBannerPresentTimer;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    SBFTraitsParticipant *_traitsParticipant;
    SBFTraitsParticipant *_publisherTraitsParticipant;
    SBTraitsSwitcherPolicySpecifier *_switcherPolicySpecifier;
    SBTraitsSwitcherLiveOverlayPolicySpecifier *_liveOverlaysPolicySpecifier;
    SBFTraitsSettingsActuationContext *_arbiterActuationContext;
    NSInteger _panGestureRecognizerRequestedOrientation;
    SBTraitsSceneParticipantDelegate *_primaryElementTraitsParticipantDelegate;
    NSMutableDictionary *_traitsParticipantsByElementIdentifier;
    NSMutableDictionary *_traitsDelegateByParticipant;
    BOOL _isSystemGesturing;
    BOOL _waitingFollowupTransition;
    BOOL _elementParticipantsNeedsUpdate;
    BOOL _evaluatingLayoutStateOrientation;
    BOOL _isPublishedOrientationLocked;
    BOOL _canDetermineActiveOrientation;
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    SBSDisplayLayoutElement *_displayLayoutElement;
    id<BSInvalidatable> *_displayLayoutElementAssertion;
}


@property (nonatomic, getter=isChamoisWindowingUIEnabled) BOOL chamoisWindowingUIEnabled;
@property (retain, nonatomic) NSObject<SBSwitcherContentViewControlling> *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (retain, nonatomic) SBFluidSwitcherGestureManager *gestureManager; // ivar: _gestureManager
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL idleTouchAwarenessClientEnabled; // ivar: _idleTouchAwarenessClientEnabled
@property (readonly, nonatomic) SBLayoutState *layoutState;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) SBMainSwitcherControllerCoordinator *switcherCoordinator; // ivar: _switcherCoordinator
@property (retain, nonatomic) SBSwitcherViewController *switcherViewController; // ivar: _switcherViewController
@property (retain, nonatomic) SBMainSwitcherWindow *switcherWindow; // ivar: _switcherWindow
@property (readonly, nonatomic) NSUInteger windowManagementStyle;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


+(id)switcherControllerForEmbeddedDisplay;
+(id)switcherControllerForEmbeddedDisplayIfExists;
-(BOOL)_isUnderUILock;
-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)hasAppLayoutForTransientOverlayViewController:(id)arg0 ;
-(BOOL)hasTransientOverlayAppLayouts;
-(BOOL)isAcquiredTransientOverlayViewController:(id)arg0 ;
-(BOOL)isAnySwitcherVisible;
-(BOOL)isFloatingSwitcherVisible;
-(BOOL)isIdleTouchAwarenessClientEnabled;
-(BOOL)isInAnyPeekState;
-(BOOL)isInAppStatusBarHidden;
-(BOOL)isMainSwitcherVisible;
-(BOOL)layoutContainsRole:(NSInteger)arg0 ;
-(BOOL)shouldMorphFromPIPForTransitionContext:(id)arg0 ;
-(BOOL)shouldMorphToPIPForTransitionContext:(id)arg0 ;
-(BOOL)toggleMainSwitcherNoninteractivelyWithSource:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(CGFloat)minimumHomeScreenScale;
-(CGFloat)scaleForDownscaledSnapshotGenerationForSceneHandle:(id)arg0 ;
-(NSInteger)_interfaceOrientationForLayoutElementIdentifier:(id)arg0 ;
-(NSInteger)floatingConfiguration;
-(NSInteger)interfaceOrientation;
-(NSInteger)interfaceOrientationForLayoutElement:(id)arg0 ;
-(NSInteger)interfaceOrientationForSceneHandle:(id)arg0 ;
-(NSInteger)unlockedEnvironmentMode;
-(NSUInteger)switcherSupportedInterfaceOrientations;
-(char)_activityModeForScene:(id)arg0 ;
-(char)_jetsamModeForScene:(id)arg0 ;
-(id)_ancillaryTransitionRequestForTransitionRequest:(id)arg0 ;
-(id)_appLayoutForScene:(id)arg0 ;
-(id)_currentElementsOrientationsForLayoutState:(id)arg0 ;
-(id)_currentFloatingAppLayout;
-(id)_currentLayoutState;
-(id)_currentMainAppLayout;
-(id)_liveOverlayForTraitsDelegate:(id)arg0 ;
-(id)_orientationStateDescription;
-(id)_sceneEntitiesToForeground;
-(id)_sceneHandleForLayoutElement:(id)arg0 ;
-(id)_traitsParticipantForLayoutElementIdentifier:(id)arg0 ;
-(id)activeAndVisibleSceneIdentifiersForApplication:(id)arg0 ;
-(id)activeTransientOverlayPresentedAppLayout;
-(id)animationControllerForTransitionRequest:(id)arg0 ;
-(id)appLayoutForWorkspaceTransientOverlay:(id)arg0 ;
-(id)coordinateSpaceForInterfaceOrientation:(NSInteger)arg0 ;
-(id)coordinateSpaceForLayoutElement:(id)arg0 layoutState:(id)arg1 ;
-(id)coordinateSpaceForLayoutState:(id)arg0 ;
-(id)createWorkspaceTransientOverlayForAppLayout:(id)arg0 ;
-(id)entityWithRole:(NSInteger)arg0 ;
-(id)homeGestureBottomEdgeRecognizer;
-(id)initWithWindowScene:(id)arg0 switcherCoordinator:(id)arg1 ;
-(id)layoutElementSizingPoliciesForLayoutState:(id)arg0 ;
-(id)leadingStatusBarStyleRequest;
-(id)participantAssociatedSceneIdentityTokens:(id)arg0 ;
-(id)participantAssociatedWindows:(id)arg0 ;
-(id)requestInAppStatusBarHiddenAssertionForReason:(id)arg0 animated:(BOOL)arg1 ;
-(id)statusBarActionsByPartIdentifier;
-(id)statusBarOverlayData;
-(id)trailingStatusBarStyleRequest;
-(id)traitsParticipantForSceneHandle:(id)arg0 ;
-(struct CGRect )frameForCenterItemWithConfiguration:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(struct CGRect )frameForFloatingAppLayoutInInterfaceOrientation:(NSInteger)arg0 floatingConfiguration:(NSInteger)arg1 ;
-(struct CGRect )frameForItemWithRole:(NSInteger)arg0 inMainAppLayout:(id)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(struct CGRect )referenceFrameForForInterfaceOrientation:(NSInteger)arg0 centerConfiguration:(NSInteger)arg1 ;
-(struct CGRect )referenceFrameForForInterfaceOrientation:(NSInteger)arg0 floatingConfiguration:(NSInteger)arg1 ;
-(struct CGRect )referenceFrameForForInterfaceOrientation:(NSInteger)arg0 layoutRole:(NSInteger)arg1 appLayout:(id)arg2 isInsetForHomeAffordance:(BOOL)arg3 ;
-(struct CGRect )sceneEntityFrameForWorkspaceEntity:(id)arg0 inLayoutState:(id)arg1 ;
-(struct CGRect )statusBarAvoidanceFrameForLayoutRole:(NSInteger)arg0 ;
-(struct CGRect )statusBarAvoidanceFrameForLayoutRole:(NSInteger)arg0 layoutState:(id)arg1 ;
-(struct UIEdgeInsets )statusBarEdgeInsets;
-(void)_attemptContentViewInterfaceOrientationUpdateForPanGesture:(NSInteger)arg0 ;
-(void)_createTraitsParticipantsForLayoutElementsIfNeeded:(id)arg0 shouldPerformFirstResolution:(BOOL)arg1 ;
-(void)_dismissMedusaEducationBanner;
// -(void)_enqueueOrientationTransitionWithActuationContext:(id)arg0 suggestedAnimator:(id)arg1 completionTask:(id)arg2 validator:(unk)arg3 label:(id)arg4  ;
-(void)_invalidateLayoutElementsTraitsParticipants;
-(void)_invalidateMedusaEducationBannerTimer;
-(void)_noteSwitcherDropAnimationCompletedWithContext:(id)arg0 ;
-(void)_performSwitcherDropWithContext:(id)arg0 ;
-(void)_prepareForSceneLayoutTransitionWithTransitionContext:(id)arg0 ;
-(void)_presentMedusaEducationBanner;
-(void)_setupSwitcherTraitsParticipantAndPolicySpecifiers;
-(void)_updateAppTransitionContext:(id)arg0 withOrientationActuationContext:(id)arg1 ;
-(void)_updateAppTransitionContext:(id)arg0 withOrientationActuationContext:(id)arg1 accountForSceneState:(BOOL)arg2 ;
-(void)_updateContentViewInterfaceOrientation:(NSInteger)arg0 ;
-(void)_updateParticipantsAndPoliciesWithSwitcherPolicy:(NSInteger)arg0 nonPrimaryOverlayPolicy:(NSInteger)arg1 primaryOverlayPolicy:(NSInteger)arg2 ;
-(void)addAcquiredTransientOverlayViewController:(id)arg0 forAppLayout:(id)arg1 ;
-(void)addAppLayoutForDisplayItem:(id)arg0 completion:(id)arg1 ;
-(void)addAppLayoutForTransientOverlayViewController:(id)arg0 ;
-(void)addCenterRoleAppLayoutForDisplayItem:(id)arg0 completion:(id)arg1 ;
-(void)client:(id)arg0 attentionLostTimeoutDidExpire:(CGFloat)arg1 forConfigurationGeneration:(NSUInteger)arg2 withAssociatedObject:(id)arg3 ;
-(void)clientDidResetForUserAttention:(id)arg0 ;
-(void)configureRequest:(id)arg0 forSwitcherTransitionRequest:(id)arg1 withEventLabel:(id)arg2 ;
-(void)dealloc;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)enumerateTransientOverlayViewControllersUsingBlock:(id)arg0 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)performKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(void)performTransitionWithContext:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)removeAcquiredTransientOverlayViewController:(id)arg0 ;
-(void)removeAppLayoutTransientOverlayViewController:(id)arg0 ;
-(void)setupSwitcherWindowIfNeeded;
-(void)switcherOrientation:(*NSInteger)arg0 elementsOrientations:(*id)arg1 forTransitionRequest:(id)arg2 previousLayoutState:(id)arg3 layoutState:(id)arg4 ;
-(void)updateDisplayLayoutElementForLayoutState:(id)arg0 ;
-(void)updateDisplayLayoutElementWithBuilder:(id)arg0 ;
-(void)updateOrientationForTraitsDelegate:(id)arg0 withUpdateReasons:(NSInteger)arg1 suggestedAnimator:(id)arg2 actuationContext:(id)arg3 ;
-(void)updatePreferencesForParticipant:(id)arg0 updater:(id)arg1 ;
-(void)updateWindowVisibilityForSwitcherContentController:(id)arg0 ;


@end


#endif