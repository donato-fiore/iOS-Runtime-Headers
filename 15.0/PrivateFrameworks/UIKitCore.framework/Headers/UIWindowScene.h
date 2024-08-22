// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIWINDOWSCENE_H
#define UIWINDOWSCENE_H

@class NSPointerArray, NSSet, FBSDisplayConfigurationRequest, NSArray, UIScene<_UISceneUIWindowEventRouting>, NSString, FBSScene;
@protocol _UIFallbackEnvironment, _UISceneUIWindowHosting, _UISceneUIWindowEventRouting, _UIContextBinderContextCreationPolicyHolding, _UIEventDeferringRuleOwning, _UIDisplayInfoProviding, UICoordinateSpace, _UISceneMetricsCalculating, UIActivityItemsConfigurationReading, UIActivityItemsConfigurationProviding;


#import "UIScene.h"
#import "UIScreen.h"
#import "UITraitCollection.h"
#import "_UIContextBinder.h"
#import "UIWindow.h"
#import "_UIEventDeferringOwnershipToken.h"
#import "UIAlertControllerStackManager.h"
#import "_UIBannerManager.h"
#import "_UICanvasDefinition.h"
#import "UIStatusBarManager.h"
#import "_UISystemAppearanceManager.h"
#import "UIFocusSystem.h"
#import "UIInputResponderController.h"
#import "UIKeyboardSceneDelegate.h"
#import "UIScreenshotService.h"
#import "UISceneSizeRestrictions.h"

@interface UIWindowScene : UIScene <_UIFallbackEnvironment, _UISceneUIWindowHosting, _UISceneUIWindowEventRouting, _UIContextBinderContextCreationPolicyHolding, _UIEventDeferringRuleOwning>

 {
    UIScreen *_screen;
    UITraitCollection *_traitCollection;
    _UIContextBinder *_contextBinder;
    NSPointerArray *_keyWindowHistory;
    UIWindow *_keyWindow;
    _UIEventDeferringOwnershipToken *_keyboardEventDeferringToken;
    id<_UIDisplayInfoProviding> *_displayEdgeInfoProvider;
    id<UICoordinateSpace> *_coordinateSpace;
    BOOL _shouldDisableTouchCancellationOnRotation;
    BOOL _windowWasInitializedWithDefaultStoryboard;
    BOOL _didMakeKeyAndVisible;
    NSSet *_componentsWithTraitOverrides;
    int _reachabilitySupportedCounter;
    ? _springBoardDelegateFlags;
    id<_UISceneMetricsCalculating> *_metricsCalculator;
}


@property (readonly, nonatomic) NSObject<UIActivityItemsConfigurationReading> *_activityItemsConfiguration;
@property (weak, nonatomic, setter=_setActivityItemsConfigurationSource:) NSObject<UIActivityItemsConfigurationProviding> *_activityItemsConfigurationSource;
@property (readonly, nonatomic) UIAlertControllerStackManager *_alertControllerStackManager;
@property (readonly, nonatomic) BOOL _allowsEventUIWindowRouting;
@property (nonatomic, getter=_avkitRequestedOverscanCompensation, setter=_setAVKitRequestedOverscanCompensation:) NSInteger _avkitRequestedOverscanCompensation; // ivar: _avkitRequestedOverscanCompensation
@property (nonatomic, setter=_setBackgroundStyle:) NSInteger _backgroundStyle;
@property (readonly, nonatomic, getter=_bannerManager) _UIBannerManager *_bannerManager;
@property (readonly, nonatomic) BOOL _canReceiveDeviceOrientationEvents;
@property (readonly, nonatomic) _UIContextBinder *_contextBinder;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *_coordinateSpace;
@property (readonly, nonatomic) _UICanvasDefinition *_definition;
@property (retain, nonatomic, getter=_displayConfigurationRequest, setter=_setDisplayConfigurationRequest:) FBSDisplayConfigurationRequest *_displayConfigurationRequest;
@property (readonly, nonatomic) NSObject<_UIDisplayInfoProviding> *_displayInfoProvider;
@property (readonly, nonatomic) NSInteger _interfaceOrientation;
@property (nonatomic) BOOL _isKeyWindowScene; // ivar: __isKeyWindowScene
@property (readonly, nonatomic) BOOL _isPerformingSystemSnapshot; // ivar: _isPerformingSystemSnapshot
@property (readonly, nonatomic) NSArray *_overrideTraitCollectionForWindows;
@property (readonly, nonatomic) UIEdgeInsets _peripheryInsets;
@property (readonly, nonatomic) UIScene<_UISceneUIWindowEventRouting> *_sceneForKeyboardDisplay;
@property (readonly, nonatomic) UIScreen *_screen;
@property (nonatomic, getter=_screenRequestedDisplayNativePixelSize, setter=_setScreenRequestedDisplayNativePixelSize:) CGSize _screenRequestedDisplayNativePixelSize;
@property (nonatomic, getter=_screenRequestedOverscanCompensation, setter=_setScreenRequestedOverscanCompensation:) NSInteger _screenRequestedOverscanCompensation; // ivar: _screenRequestedOverscanCompensation
@property (readonly, nonatomic) UIStatusBarManager *_statusBarManager;
@property (readonly, nonatomic) _UISystemAppearanceManager *_systemAppearanceManager;
@property (readonly, nonatomic) UITraitCollection *_traitCollection;
@property (readonly, nonatomic) id *_windowSupportedOrientationsObserver;
@property (weak, nonatomic) NSObject<UIActivityItemsConfigurationProviding> *activityItemsConfigurationSource; // ivar: _activityItemsConfigurationSource
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExcludedFromWindowsMenu) BOOL excludedFromWindowsMenu; // ivar: _excludedFromWindowsMenu
@property (readonly, nonatomic) UIFocusSystem *focusSystem;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIInputResponderController *inputResponderController;
@property (readonly, nonatomic) NSInteger interfaceOrientation;
@property (nonatomic, getter=_keepContextAssociationInBackground, setter=_setKeepContextAssociationInBackground:) BOOL keepContextAssociationInBackground;
@property (readonly, nonatomic, getter=isKeyCanvas) BOOL keyCanvas;
@property (readonly, nonatomic) UIWindow *keyWindow;
@property (readonly, nonatomic) UIKeyboardSceneDelegate *keyboardSceneDelegate;
@property (readonly, nonatomic, getter=_scene) FBSScene *scene;
@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) UIScreenshotService *screenshotService;
@property (readonly, nonatomic) UISceneSizeRestrictions *sizeRestrictions;
@property (readonly, nonatomic) NSInteger state;
@property (readonly, nonatomic) UIStatusBarManager *statusBarManager;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) NSArray *windows;


+(BOOL)_hostsWindows;
+(BOOL)_supportsEventUIWindowRouting;
+(id)_canvasForScene:(id)arg0 ;
+(id)_keyboardWindowSceneForScreen:(id)arg0 create:(BOOL)arg1 ;
+(id)_placeholderWindowSceneForScreen:(id)arg0 create:(BOOL)arg1 ;
+(id)_unassociatedWindowSceneForScreen:(id)arg0 create:(BOOL)arg1 ;
+(void)_registerComponentClass:(Class)arg0 withKey:(id)arg1 predicate:(id)arg2 ;
+(void)_updateVisibleSceneAndWindowOrderWithTest:(id)arg0 ;
+(void)initialize;
-(BOOL)_canDynamicallySpecifySupportedInterfaceOrientations;
-(BOOL)_needsMakeKeyAndVisible;
-(BOOL)_permitContextCreationForBindingDescription:(struct ? )arg0 ;
-(BOOL)_shouldLoadStoryboard;
-(BOOL)_windowIsFront:(id)arg0 ;
-(CGFloat)_adjustedLevelForWindow:(id)arg0 preferredLevel:(CGFloat)arg1 ;
-(CGFloat)_systemMinimumMargin;
-(NSInteger)_resolvedOverscanCompensation;
-(NSInteger)interfaceElementCategory;
-(NSUInteger)_currentlySupportedInterfaceOrientations;
-(id)_allWindows;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg0 onlyVisibleWindows:(BOOL)arg1 ;
-(id)_componentForKey:(id)arg0 ;
-(id)_disableTouchCancellationOnRotation;
-(id)_fallbackTraitCollection;
-(id)_fbsSceneLayerForWindow:(id)arg0 ;
-(id)_inheritingWindowsIncludingInvisible:(BOOL)arg0 ;
-(id)_playbackControlsStateManager;
-(id)_topVisibleWindowPassingTest:(id)arg0 ;
-(id)_visibleWindows;
-(id)_windowSceneDelegate;
-(id)canvasToolbar;
-(id)initWithSession:(id)arg0 connectionOptions:(id)arg1 ;
-(struct CGRect )_referenceBounds;
-(struct CGRect )_referenceBoundsForOrientation:(NSInteger)arg0 ;
-(struct UIEdgeInsets )_safeAreaInsetsForInterfaceOrientation:(NSInteger)arg0 ;
-(void)_applySnapshotSettings:(id)arg0 forActions:(id)arg1 ;
-(void)_attachWindow:(id)arg0 ;
-(void)_componentDidUpdateTraitOverrides:(id)arg0 ;
-(void)_computeMetrics:(BOOL)arg0 ;
-(void)_computeMetricsForWindows:(id)arg0 animated:(BOOL)arg1 ;
-(void)_delegate_windowDidBecomeVisible:(id)arg0 ;
-(void)_delegate_windowWillAttach:(id)arg0 ;
-(void)_delegate_windowWillBecomeHidden:(id)arg0 ;
-(void)_delegate_windowWillBecomeVisible:(id)arg0 ;
-(void)_delegate_windowWillDetach:(id)arg0 ;
-(void)_detachWindow:(id)arg0 ;
-(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg0 onlyVisibleWindows:(BOOL)arg1 asCopy:(BOOL)arg2 stopped:(*BOOL)arg3 withBlock:(id)arg4 ;
-(void)_invalidate;
-(void)_loadWindowWithStoryboardIfNeeded:(id)arg0 ;
-(void)_makeKeyAndVisibleIfNeeded;
-(void)_noteDisplayIdentityDidChangeWithConfiguration:(id)arg0 ;
-(void)_prepareForResume;
-(void)_prepareForSuspend;
-(void)_readySceneForConnection;
-(void)_recycleAttachmentForWindow:(id)arg0 ;
-(void)_registerComponent:(id)arg0 forKey:(id)arg1 ;
-(void)_registerSceneActionsHandler:(id)arg0 forKey:(id)arg1 ;
-(void)_registerSceneComponent:(id)arg0 forKey:(id)arg1 ;
-(void)_registerSettingsDiffActions:(id)arg0 forKey:(id)arg1 ;
-(void)_screenDidChangeFromScreen:(id)arg0 toScreen:(id)arg1 ;
-(void)_setAVKitRequestedRefreshRate:(CGFloat)arg0 HDRMode:(NSInteger)arg1 overscanCompensation:(NSInteger)arg2 ;
-(void)_setReachabilitySupported:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_setShouldDisableTouchCancellationOnRotation:(BOOL)arg0 ;
-(void)_setSystemVolumeHUDEnabled:(BOOL)arg0 ;
-(void)_setSystemVolumeHUDEnabled:(BOOL)arg0 forAudioCategory:(id)arg1 ;
-(void)_showProgressWhenFetchingUserActivityForTypes:(id)arg0 ;
-(void)_unregisterComponentForKey:(id)arg0 ;
-(void)_unregisterSceneActionsHandler:(id)arg0 ;
-(void)_unregisterSettingsDiffActionsForKey:(id)arg0 ;
-(void)_updateClientSettingsToInterfaceOrientation:(NSInteger)arg0 withAnimationDuration:(CGFloat)arg1 ;
-(void)_updateSpringBoardDelegateFlags;
-(void)_updateTraitCollection;
-(void)_updateVisibleWindowOrderWithTest:(id)arg0 ;
-(void)_willRestoreInteractionStateForUserActivityManager:(id)arg0 ;
-(void)_windowUpdatedProperties:(id)arg0 ;
-(void)_windowUpdatedVisibility:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif