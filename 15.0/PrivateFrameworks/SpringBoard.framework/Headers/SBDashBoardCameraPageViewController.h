// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDCAMERAPAGEVIEWCONTROLLER_H
#define SBDASHBOARDCAMERAPAGEVIEWCONTROLLER_H

@class CSPageViewController, UIView, NSTimer, CSLockScreenSettings, SBLockScreenDefaults, NSSet, UIViewFloatAnimatableProperty, SBFFluidBehaviorSettings, NSString, SBFZStackParticipant;
@protocol SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBHomeGestureInteractionDelegate, CSApplicationHosting;


#import "SBDashBoardHostedAppViewController.h"
#import "SBHomeGestureInteraction.h"
#import "SBHomeGestureParticipant.h"

@interface SBDashBoardCameraPageViewController : CSPageViewController <SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBHomeGestureInteractionDelegate, CSApplicationHosting>

 {
    UIView *_maskView;
    UIView *_tintView;
    SBDashBoardHostedAppViewController *_appViewController;
    BOOL _orientationLockAcquired;
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
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // ivar: _homeGestureParticipant
@property (retain, nonatomic) UIViewFloatAnimatableProperty *scaleProperty; // ivar: _scaleProperty
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings; // ivar: _scaleSettings
@property (readonly) Class superclass;
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
-(id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg0 ;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)pageRole;
-(id)requestedDismissalSettings;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(struct CGPoint )_convertTranslationFromContainerOrientationToContentOrientation:(struct CGPoint )arg0 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)_bailIfFaceTimeCallComesIn;
-(void)_coolCameraIfNecessary;
-(void)_createProperties;
-(void)_endPrewarmBackoffPeriod;
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
-(void)_updateForPropertyChanged;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)conformsToCSApplicationHosting;
-(void)conformsToSBApplicationHosting;
-(void)didTransitionToVisible:(BOOL)arg0 ;
-(void)homeGestureInteractionBegan:(id)arg0 ;
-(void)homeGestureInteractionCancelled:(id)arg0 ;
-(void)homeGestureInteractionChanged:(id)arg0 ;
-(void)homeGestureInteractionEnded:(id)arg0 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg0 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)loadView;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
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