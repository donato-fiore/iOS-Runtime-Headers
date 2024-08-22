// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDEVICEAPPLICATIONSCENEHANDLE_H
#define SBDEVICEAPPLICATIONSCENEHANDLE_H

@class NSMutableSet, NSDictionary, NSData, NSString, _UIStatusBarData;
@protocol FBApplicationProcessObserver, SBIdleTimerProviding, SBIdleTimerCoordinating, SBScenePlaceholderContentViewProvider;


#import "SBApplicationSceneHandle.h"
#import "SBModalAlertPresenter.h"
#import "SBDeviceApplicationSceneStatusBarStateProvider.h"
#import "SBDeviceApplicationSceneStatusBarBreadcrumbProvider.h"

@interface SBDeviceApplicationSceneHandle : SBApplicationSceneHandle <FBApplicationProcessObserver, SBIdleTimerProviding>

 {
    SBModalAlertPresenter *_modalAlertPresenter;
    NSMutableSet *_statusBarForcedHiddenReasons;
    NSUInteger _keyboardLayerMaskStyle;
    NSInteger _statusBarParts;
    NSDictionary *_alertSuppressionContextsBySectionIdentifier;
    SBDeviceApplicationSceneStatusBarStateProvider *_statusBarStateProvider;
}


@property (readonly, copy, nonatomic) NSData *activationConditionsData;
@property (readonly, nonatomic) NSInteger backgroundStyle;
@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider; // ivar: _breadcrumbProvider
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultBackgroundStyle; // ivar: _defaultBackgroundStyle
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEffectivelyForeground) BOOL effectivelyForeground; // ivar: _isEffectivelyForeground
@property (nonatomic) BOOL hasMainSceneBeenForegroundAtLeastOnce; // ivar: _hasMainSceneBeenForegroundAtLeastOnce
@property (readonly) NSUInteger hash;
@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (copy, nonatomic) NSString *lastActivationIconLeafIdentifier; // ivar: _lastActivationIconLeafIdentifier
@property (nonatomic) NSInteger lastActivationSource; // ivar: _lastActivationSource
@property (readonly, copy, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentViewProvider> *placeholderContentProvider; // ivar: _placeholderContentProvider
@property (readonly, nonatomic, getter=isReachabilitySupported) BOOL reachabilitySupported;
@property (readonly, nonatomic) BOOL requestedFullScreenCenterWindow;
@property (readonly, copy, nonatomic) NSString *sceneTitle;
@property (readonly, nonatomic) NSUInteger screenEdgesDeferringSystemGestures;
@property (readonly, nonatomic, getter=isShowingModalAlert) BOOL showingModalAlert;
@property (nonatomic) CGRect statusBarAvoidanceFrame; // ivar: _statusBarAvoidanceFrame
@property (nonatomic) NSInteger statusBarParts;
@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarStateProvider *statusBarStateProvider;
@property (nonatomic) NSUInteger statusBarStyleOverridesToSuppress; // ivar: _statusBarStyleOverridesToSuppress
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCenterWindow;
@property (readonly, nonatomic, getter=isTranslucent) BOOL translucent;
@property (readonly, nonatomic) NSInteger wallpaperStyle;
@property (nonatomic) NSInteger whitePointAdaptivityStyle; // ivar: _whitePointAdaptivityStyle


+(CGFloat)_homeAffordanceInsetBottom;
+(CGFloat)_homeAffordanceInsetTop;
-(BOOL)_currentClassicModeAllowsLaunchingToAnySupportedOrientation;
-(BOOL)_mainSceneSupportsInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_overriddenStatusBarStyleForApp:(id)arg0 style:(*NSInteger)arg1 ;
-(BOOL)defaultStatusBarHiddenForOrientation:(NSInteger)arg0 ;
-(BOOL)forbidsActivationByBreadcrumbAction;
-(BOOL)handleHardwareButtonEventType:(NSInteger)arg0 ;
-(BOOL)isAutoHideEnabledForHomeAffordance;
-(BOOL)isCurrentStatusBarHiddenForOrientation:(NSInteger)arg0 ;
-(BOOL)isDeviceApplicationSceneHandle;
-(BOOL)isEdgeProtectEnabledForHomeGesture;
-(BOOL)isStatusBarForceHidden;
-(BOOL)isStatusBarForcedHiddenForOrientation:(NSInteger)arg0 ;
-(BOOL)isStatusBarHiddenForActivation:(id)arg0 forOrientation:(NSInteger)arg1 ;
-(BOOL)prefersHeaderHiddenInSwitcher;
-(BOOL)prefersKillingInSwitcherDisabled;
-(BOOL)shouldAlwaysDisplayLiveContent;
-(BOOL)shouldPrioritizeForSwitcherOrdering;
-(BOOL)shouldSuppressAlertForSuppressionContexts:(id)arg0 sectionIdentifier:(id)arg1 ;
-(BOOL)wantsDeviceOrientationEventsEnabled;
-(CGFloat)defaultStatusBarAlpha;
-(CGFloat)defaultStatusBarHeightForOrientation:(NSInteger)arg0 ;
-(CGFloat)statusBarAlpha;
-(CGFloat)statusBarHeightForOrientation:(NSInteger)arg0 ;
-(NSInteger)_bestSupportedInterfaceOrientationForOrientation:(NSInteger)arg0 ;
-(NSInteger)_classicPhoneOnPadActivationOrientationForOrientation:(NSInteger)arg0 ;
-(NSInteger)_initialMainSceneCompabilityMode:(id)arg0 ;
-(NSInteger)_launchingInterfaceOrientationForOrientation:(NSInteger)arg0 ;
-(NSInteger)_resumingInterfaceOrientationForOrientation:(NSInteger)arg0 ;
-(NSInteger)_statusBarStyleWithActivationSettings:(id)arg0 ;
-(NSInteger)activationInterfaceOrientationForCurrentOrientation;
-(NSInteger)activationInterfaceOrientationForOrientation:(NSInteger)arg0 ;
-(NSInteger)currentInterfaceOrientation;
-(NSInteger)currentStatusBarStyle;
-(NSInteger)defaultInterfaceOrientation;
-(NSInteger)defaultStatusBarStyle;
-(NSInteger)statusBarOrientation;
-(NSUInteger)_debugPostModernRotationSupportedInterfaceOrientations;
-(NSUInteger)_mainSceneSupportedInterfaceOrientations;
-(NSUInteger)effectiveStatusBarStyleOverrides;
-(NSUInteger)preferredHardwareButtonEventTypes;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_defaultStatusBarHeights;
-(id)_generateIdleTimerBehavior;
-(id)_potentiallyJailedDisplayConfiguration;
-(id)_sceneCornerRadiusConfigurationFromRequestContext:(id)arg0 forEntity:(id)arg1 ;
-(id)_sceneDataStoreCreatingIfNecessary:(BOOL)arg0 ;
-(id)additionalActionsForActivatingSceneEntity:(id)arg0 withTransitionContext:(id)arg1 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)currentEffectiveStatusBarStyleRequest;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)displayEdgeInfoForForLayoutEnvironment:(NSInteger)arg0 isInsetForHomeAffordance:(BOOL)arg1 ;
-(id)effectiveStatusBarStyleRequestForActivation:(id)arg0 ;
-(id)mostRecentSceneSnapshotsForScale:(CGFloat)arg0 launchingOrientation:(NSInteger)arg1 ;
-(id)newScenePlaceholderContentContextWithActivationSettings:(id)arg0 ;
-(id)newSceneViewController;
-(id)newSceneViewWithReferenceSize:(struct CGSize )arg0 orientation:(NSInteger)arg1 hostRequester:(id)arg2 ;
-(id)statusBarEffectiveStyleRequestWithStyle:(NSInteger)arg0 ;
-(void)_commonInitWithApplication:(id)arg0 sceneIdentifier:(id)arg1 displayIdentity:(id)arg2 ;
-(void)_didCreateScene:(id)arg0 ;
-(void)_didDestroyScene:(id)arg0 ;
-(void)_didUpdateClientSettingsWithDiff:(id)arg0 transitionContext:(id)arg1 ;
-(void)_didUpdateSettingsWithDiff:(id)arg0 previousSettings:(id)arg1 ;
-(void)_modifyApplicationSceneClientSettings:(id)arg0 fromRequestContext:(id)arg1 entity:(id)arg2 initialSceneSettings:(id)arg3 ;
-(void)_modifyApplicationSceneSettings:(id)arg0 fromRequestContext:(id)arg1 entity:(id)arg2 ;
-(void)_modifyApplicationTransitionContext:(id)arg0 fromRequestContext:(id)arg1 entity:(id)arg2 ;
-(void)_modifyProcessExecutionContext:(id)arg0 fromRequestContext:(id)arg1 entity:(id)arg2 ;
-(void)_modifySafeAreaInsetsOnApplicationSceneSettings:(id)arg0 isInsetForHomeAffordance:(BOOL)arg1 isFloating:(BOOL)arg2 ;
-(void)_noteActivationConditionsChanged;
-(void)_noteMainSceneBackgroundStyleChanged;
-(void)_noteSceneTitleChanged;
-(void)_populateSettingsWithDefaultStatusBarHeight:(id)arg0 ;
-(void)_updateIdleTimerForReason:(id)arg0 ;
-(void)_updateSceneHostingInfoForSnapshottingWithView:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applicationProcessDidExit:(id)arg0 withContext:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)saveSuspendSnapshot:(id)arg0 ;
-(void)setAlertSuppressionContextsBySectionIdentifier:(id)arg0 ;
-(void)setKeyboardContextMaskStyle:(NSUInteger)arg0 ;
-(void)setStatusBarForceHidden:(BOOL)arg0 forReason:(id)arg1 animationSettings:(id)arg2 ;


@end


#endif