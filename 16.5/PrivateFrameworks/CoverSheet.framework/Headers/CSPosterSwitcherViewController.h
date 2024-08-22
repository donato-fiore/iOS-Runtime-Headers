// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPOSTERSWITCHERVIEWCONTROLLER_H
#define CSPOSTERSWITCHERVIEWCONTROLLER_H

@class NSArray, CSCoverSheetViewControllerBase<SBApplicationHosting>, UIView, NSString, PRUISwitcherSceneClientSettingsDiffInspector, BSUIVibrancyConfiguration;
@protocol CSAppHostContextProviding, SBDeviceApplicationSceneHandleObserver, SBSceneHandleActionConsuming, CSApplicationHosting, CSDismissableModalViewControllerDelegate, CSAppHostConfiguring;


#import "CSCoverSheetViewControllerBase.h"

@interface CSPosterSwitcherViewController : CSCoverSheetViewControllerBase <CSAppHostContextProviding, SBDeviceApplicationSceneHandleObserver, SBSceneHandleActionConsuming, CSApplicationHosting, CSDismissableModalViewControllerDelegate>



@property (retain, nonatomic) NSArray *activatingTouches; // ivar: _activatingTouches
@property (retain, nonatomic) NSObject<CSAppHostConfiguring> *appHostConfiguring; // ivar: _appHostConfiguring
@property (readonly, nonatomic) CSCoverSheetViewControllerBase<SBApplicationHosting> *applicationHoster; // ivar: _applicationHoster
@property (nonatomic) NSUInteger clientSwitcherLayoutMode; // ivar: _clientSwitcherLayoutMode
@property (weak, nonatomic) UIView *coverSheetBackgroundView; // ivar: _coverSheetBackgroundView
@property (nonatomic, getter=isCoverSheetComplicationRowHidden) BOOL coverSheetComplicationRowHidden; // ivar: _coverSheetComplicationRowHidden
@property (weak, nonatomic) UIView *coverSheetFloatingView; // ivar: _coverSheetFloatingView
@property (nonatomic, getter=isCoverSheetWallpaperFloatingLayerInlined) BOOL coverSheetWallpaperFloatingLayerInlined; // ivar: _coverSheetWallpaperFloatingLayerInlined
@property (weak, nonatomic) UIView *coverSheetWallpaperView; // ivar: _coverSheetWallpaperView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger fullscreenTransitionAnimationCount; // ivar: _fullscreenTransitionAnimationCount
@property (nonatomic) BOOL handledInitialTransition; // ivar: _handledInitialTransition
@property (nonatomic) BOOL hasCommittedInContentReadyState; // ivar: _hasCommittedInContentReadyState
@property (nonatomic) BOOL hasTransferredInitialTouches; // ivar: _hasTransferredInitialTouches
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *hostedAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hostedAppShouldHideHomeGrabberView;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) CGRect leadingTopButtonFrame; // ivar: _leadingTopButtonFrame
@property (readonly, nonatomic) UIView *scaleView; // ivar: _scaleView
@property (readonly, nonatomic) PRUISwitcherSceneClientSettingsDiffInspector *sceneClientSettingsDiffInspector; // ivar: _sceneClientSettingsDiffInspector
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect trailingTopButtonFrame; // ivar: _trailingTopButtonFrame
@property (copy, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration


-(BOOL)_canShowWhileLocked;
-(BOOL)canHostAnApp;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)handlesRotationIndependentOfCoverSheet;
-(BOOL)hostedAppShouldDeactivateAfterDisappearance;
-(BOOL)hostedAppShouldInvalidateUponDeactivation;
-(BOOL)hostedAppShouldReactivateUponDestruction;
-(BOOL)isHostingAnApp;
-(BOOL)sceneHandle:(id)arg0 didReceiveAction:(id)arg1 ;
-(NSUInteger)_effectiveSceneClientLayoutMode;
-(id)_sceneIfExists;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_dismissEntirely;
-(void)_dismissTier:(BOOL)arg0 ;
-(void)_evaluateInitialTouchTransferActuation;
-(void)_evaluateInitialTransitionActivation;
-(void)_sendDismissEntirelyActionToScene;
-(void)_transitionScene:(id)arg0 toLayoutMode:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)_updateAppearanceWithClientLayoutMode:(NSUInteger)arg0 previousLayoutMode:(NSUInteger)arg1 transitionContext:(id)arg2 ;
-(void)_updateAppearanceWithoutAnimation;
-(void)_updateComplicationRowHiddenForSceneSettings:(id)arg0 ;
-(void)_updateFloatingLayerInlinedForSceneSettings:(id)arg0 ;
-(void)_updateLiveContentViewSpecificationForSceneSettings:(id)arg0 ;
-(void)_updateLiveFloatingViewSpecificationForSceneSettings:(id)arg0 ;
-(void)_updateLockVibrancyConfigurationForSceneSettings:(id)arg0 ;
-(void)_updateOverlayViewSpecificationForSceneSettings:(id)arg0 ;
-(void)_updateTopButtonLayoutForSceneSettings:(id)arg0 ;
-(void)addGrabberView:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)appendToHostedAppSceneSettings:(id)arg0 ;
-(void)conformsToCSApplicationHosting;
-(void)conformsToSBApplicationHosting;
-(void)dismissForHomeButton;
-(void)handleBottomEdgeGestureBegan:(id)arg0 ;
-(void)handleBottomEdgeGestureChanged:(id)arg0 ;
-(void)handleBottomEdgeGestureEnded:(id)arg0 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)loadView;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneHandle:(id)arg0 didUpdateContentState:(NSInteger)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif