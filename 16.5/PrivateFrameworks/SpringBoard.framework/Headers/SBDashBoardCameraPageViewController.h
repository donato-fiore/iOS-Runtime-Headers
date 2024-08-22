// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDCAMERAPAGEVIEWCONTROLLER_H
#define SBDASHBOARDCAMERAPAGEVIEWCONTROLLER_H

@class CSPageViewController, UIView, SBFTraitsParticipant, UIViewController, NSTimer, CSLockScreenSettings, SBLockScreenDefaults, NSSet, UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, NSString, SBFZStackParticipant;
@protocol SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBHomeGestureInteractionDelegate, SBSystemApertureZStackPolicyAssistantDelegate, CSApplicationHosting;


#import "SBDashBoardHostedAppViewController.h"
#import "SBTraitsSceneParticipantDelegate.h"
#import "SBTraitsOrientedContentViewController.h"
#import "SBHomeGestureInteraction.h"
#import "SBSystemApertureZStackPolicyAssistant.h"

@interface SBDashBoardCameraPageViewController : CSPageViewController <SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBHomeGestureInteractionDelegate, SBSystemApertureZStackPolicyAssistantDelegate, CSApplicationHosting>

 {
    UIView *_maskView;
    UIView *_tintView;
    SBDashBoardHostedAppViewController *_appViewController;
    SBFTraitsParticipant *_traitsParticipant;
    SBTraitsSceneParticipantDelegate *_traitsParticipantDelegate;
    SBTraitsOrientedContentViewController *_orientedContentViewController;
    UIViewController *_appViewControllerContainerVC;
    BOOL _interactiveDismissalInProgress;
    BOOL _hasWarmedCameraForThisPresentation;
    BOOL _cameraPrewarmSucceeded;
    NSInteger _cameraPresentLargestPercent;
    NSTimer *_prewarmDebounceTimer;
    NSTimer *_prewarmCancelTimer;
    CSLockScreenSettings *_prototypeSettings;
    SBLockScreenDefaults *_lockScreenDefaults;
}


@property (retain, nonatomic) NSSet *actionsToDeliver;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *alphaProperty; // ivar: _alphaProperty
@property (retain, nonatomic) SBFFluidBehaviorSettings *alphaSettings; // ivar: _alphaSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGestureInteraction *homeGestureInteraction; // ivar: _homeGestureInteraction
@property (retain, nonatomic) UIViewFloatAnimatableProperty *scaleProperty; // ivar: _scaleProperty
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings; // ivar: _scaleSettings
@property (readonly) Class superclass;
@property (retain, nonatomic) SBSystemApertureZStackPolicyAssistant *systemApertureZStackPolicyAssistant; // ivar: _systemApertureZStackPolicyAssistant
@property (nonatomic) BOOL wantsHomeGestureOwnership; // ivar: _wantsHomeGestureOwnership
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


+(BOOL)isAvailableForConfiguration;
+(NSUInteger)requiredCapabilities;
-(BOOL)_shouldCancelInteractiveDismissGesture;
-(BOOL)_shouldPrelaunchOnSwipe;
-(BOOL)_shouldPrewarmOnSwipe;
-(BOOL)canHostAnApp;
-(BOOL)dashBoardHostedAppViewController:(id)arg0 shouldTransitionToMode:(NSInteger)arg1 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)handlesRotationIndependentOfCoverSheet;
-(BOOL)homeGestureInteraction:(id)arg0 shouldBeginGestureRecognizerOfType:(NSInteger)arg1 ;
-(BOOL)homeGestureInteraction:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)homeGestureInteraction:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isHostingAnApp;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(CGFloat)_prelaunchThreshold;
-(CGFloat)_prewarmThreshold;
-(NSInteger)presentationAltitude;
-(NSInteger)requestedDismissalType;
-(NSInteger)touchInterfaceOrientationForGestureRecognizer:(id)arg0 ;
-(NSUInteger)homeGestureInteraction:(id)arg0 systemGestureTypeForType:(NSInteger)arg1 ;
-(id)_traitsArbiter;
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg0 ;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)pageRole;
-(id)requestedDismissalSettings;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(struct CGPoint )_convertTranslationFromContainerOrientationToContentOrientation:(struct CGPoint )arg0 ;
-(void)_acquireTraitsParticipantIfNeeded;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)_bailIfFaceTimeCallComesIn;
-(void)_coolCameraIfNecessary;
-(void)_createProperties;
-(void)_endPrewarmBackoffPeriod;
-(void)_invalidateCameraTraitsParticipant;
-(void)_makeApplicationStatic;
-(void)_noteUserLaunchEventTime;
-(void)_prepareForInteractiveGestureToCameraVisible:(BOOL)arg0 ;
-(void)_prewarmCamera;
-(void)_relinquishHiddenAssertionForHomeGrabber:(id)arg0 ;
-(void)_relinquishHomeGestureOwnership;
-(void)_requestHomeGestureOwnership;
-(void)_resetAfterInteractiveGestureToCameraVisible:(BOOL)arg0 ;
-(void)_setSceneGrabberHidden:(BOOL)arg0 ;
-(void)_takeHiddenAssertionForHomeGrabber:(id)arg0 ;
-(void)_transitionAppViewWithProgress:(CGFloat)arg0 ;
-(void)_updateCameraScale:(CGFloat)arg0 dimmingAlpha:(CGFloat)arg1 ;
-(void)_updateCameraScale:(CGFloat)arg0 dimmingAlpha:(CGFloat)arg1 interactive:(BOOL)arg2 ;
-(void)_updateCameraScale:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)_updateDimmingAlpha:(CGFloat)arg0 interactive:(BOOL)arg1 ;
-(void)_updateForPropertyChangedForPresentation:(BOOL)arg0 ;
-(void)_updateSystemApertureZStackPolicyAssistant;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)conformsToCSApplicationHosting;
-(void)conformsToSBApplicationHosting;
-(void)dashBoardHostedAppViewControllerDidFailToActivateApplication:(id)arg0 ;
-(void)didTransitionToVisible:(BOOL)arg0 ;
-(void)homeGestureInteractionBegan:(id)arg0 ;
-(void)homeGestureInteractionCancelled:(id)arg0 ;
-(void)homeGestureInteractionChanged:(id)arg0 ;
-(void)homeGestureInteractionEnded:(id)arg0 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg0 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)loadView;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)systemApertureZStackPolicyAssistantDidChange:(id)arg0 ;
-(void)updateTransitionToVisible:(BOOL)arg0 progress:(CGFloat)arg1 mode:(NSInteger)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillMoveToWindow:(id)arg0 ;
-(void)willTransitionToVisible:(BOOL)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif