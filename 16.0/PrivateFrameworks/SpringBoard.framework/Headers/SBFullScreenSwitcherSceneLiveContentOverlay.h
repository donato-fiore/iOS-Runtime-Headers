// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFULLSCREENSWITCHERSCENELIVECONTENTOVERLAY_H
#define SBFULLSCREENSWITCHERSCENELIVECONTENTOVERLAY_H

@class UIApplicationSceneClientSettingsDiffInspector, NSMutableDictionary, UIView, NSString, UIViewController<SBDeviceApplicationSceneViewControlling>, SBSDisplayLayoutElement, SBOrientationTransformWrapperView;
@protocol SBFullScreenSwitcherSceneLiveContentOverlay, SBDeviceApplicationSceneHandleObserver, SBMedusaDecoratedDeviceApplicationSceneViewControllerDelegate, SBDeviceApplicationSceneViewControllerDelegate, FBSceneLayerManagerObserver, FBSceneObserver, SBSwitcherLiveContentOverlayDelegate, BSInvalidatable, SBFullScreenSwitcherSceneLiveContentOverlayDelegate;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"
#import "SBSceneViewStatusBarAssertion.h"

@interface SBFullScreenSwitcherSceneLiveContentOverlay : NSObject <SBFullScreenSwitcherSceneLiveContentOverlay, SBDeviceApplicationSceneHandleObserver, SBMedusaDecoratedDeviceApplicationSceneViewControllerDelegate, SBDeviceApplicationSceneViewControllerDelegate, FBSceneLayerManagerObserver, FBSceneObserver>

 {
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    NSMutableDictionary *_backboardSceneHostRegistrations;
    NSInteger _touchBehavior;
    BOOL _displayLayoutElementActive;
    SBWindowScene *_sbWindowScene;
}


@property (readonly, nonatomic) BOOL asyncRenderingDisabled; // ivar: _asyncRenderingDisabled
@property (readonly, nonatomic, getter=isAsyncRenderingEnabled) BOOL asyncRenderingEnabled; // ivar: _asyncRenderingEnabled
@property (readonly, nonatomic) BOOL asynchronousRenderingTemporarilyDisabled; // ivar: _asynchronousRenderingTemporarilyDisabled
@property (readonly, nonatomic, getter=isBlurred) BOOL blurred; // ivar: _blurred
@property (nonatomic) NSInteger containerOrientation; // ivar: _containerOrientation
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSwitcherLiveContentOverlayDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIViewController<SBDeviceApplicationSceneViewControlling> *deviceApplicationSceneViewController; // ivar: _deviceApplicationSceneViewController
@property (readonly, nonatomic) SBSDisplayLayoutElement *displayLayoutElement; // ivar: _displayLayoutElement
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (retain, nonatomic) NSObject<BSInvalidatable> *displayLayoutElementAssertion; // ivar: _displayLayoutElementAssertion
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance; // ivar: _isInsetForHomeAffordance
@property (readonly, nonatomic, getter=isMatchMovedToScene) BOOL matchMovedToScene; // ivar: _matchMovedToScene
@property (readonly, nonatomic) SBOrientationTransformWrapperView *orientationWrapperView; // ivar: _orientationWrapperView
@property (readonly, nonatomic) BOOL requiresLegacyRotationSupport;
@property (nonatomic) BOOL resizesHostedContext;
@property (weak, nonatomic) NSObject<SBFullScreenSwitcherSceneLiveContentOverlayDelegate> *statusBarActionDelegate; // ivar: _statusBarActionDelegate
@property (readonly, nonatomic) SBSceneViewStatusBarAssertion *statusBarAssertion; // ivar: _statusBarAssertion
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger touchBehavior;
@property (nonatomic) BOOL wantsEnhancedWindowingEnabled; // ivar: _wantsEnhancedWindowingEnabled
@property (readonly, nonatomic) BOOL wantsMinificationFilter; // ivar: _wantsMinificationFilter


-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)hitTestedToTopAffordance:(struct CGPoint )arg0 window:(id)arg1 ;
-(BOOL)isContentUpdating;
-(CGFloat)currentStatusBarHeight;
-(NSInteger)bestHomeAffordanceOrientationForOrientation:(NSInteger)arg0 ;
-(NSInteger)leadingStatusBarStyle;
-(NSInteger)overlayType;
-(NSInteger)preferredInterfaceOrientation;
-(NSInteger)trailingStatusBarStyle;
-(NSUInteger)styleOverridesToSuppress;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_medusaDecoratedDeviceApplicationSceneViewController;
-(id)_sbWindowScene;
-(id)_sceneHandleForHardwareButtonEvents;
-(id)contentViewController;
-(id)init;
-(id)liveSceneIdentityToken;
-(id)newPortaledLiveContentOverlayView;
-(id)overlaySceneHandle;
-(id)prepareOverlayForContentRotation;
-(void)_settingsDidUpdateEdgeProtectOrAutoHideOnHomeGrabberView;
-(void)_updateAsyncRendering;
-(void)_updateDisplayLayoutElementActive;
-(void)_updateDisplayLayoutElementWithBuilder:(id)arg0 ;
-(void)_updateOrientationWrapper;
-(void)_updateTopAffordanceAutoHide;
-(void)applicationSceneViewController:(id)arg0 statusBarTapped:(id)arg1 tapActionType:(NSInteger)arg2 ;
-(void)applicationSceneViewControllerDidUpdateHomeAffordanceSupportedOrientations:(id)arg0 ;
-(void)configureWithWorkspaceEntity:(id)arg0 referenceFrame:(struct CGRect )arg1 interfaceOrientation:(NSInteger)arg2 layoutRole:(NSInteger)arg3 spaceConfiguration:(NSInteger)arg4 floatingConfiguration:(NSInteger)arg5 hasClassicAppOrientationMismatch:(BOOL)arg6 sizingPolicy:(NSInteger)arg7 ;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)invalidate;
-(void)medusaDecoratedDeviceApplicationSceneViewController:(id)arg0 statusBarTapped:(id)arg1 tapActionType:(NSInteger)arg2 ;
-(void)medusaDecoratedDeviceApplicationSceneViewControllerDidUpdateHomeAffordanceSupportedOrientations:(id)arg0 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg0 ;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg0 ;
-(void)setBlurViewIconScale:(CGFloat)arg0 ;
-(void)setContentReferenceSize:(struct CGSize )arg0 interfaceOrientation:(NSInteger)arg1 ;
-(void)setDimmed:(BOOL)arg0 ;
// -(void)setLiveContentBlurEnabled:(BOOL)arg0 duration:(CGFloat)arg1 blurDelay:(CGFloat)arg2 iconViewScale:(CGFloat)arg3 began:(id)arg4 completion:(unk)arg5  ;
-(void)setStatusBarHidden:(BOOL)arg0 nubViewHidden:(BOOL)arg1 animator:(id)arg2 ;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg0 ;
-(void)willRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 alongsideContainerView:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif