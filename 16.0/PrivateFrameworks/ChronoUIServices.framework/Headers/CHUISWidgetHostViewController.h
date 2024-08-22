// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHUISWIDGETHOSTVIEWCONTROLLER_H
#define CHUISWIDGETHOSTVIEWCONTROLLER_H

@class UIViewController, FBSceneWorkspace, NSMutableDictionary, UIView, _UICAPackageView, UIImageView, UILabel, NSString, CHSWidgetDescriptor, UIVisualEffectView, BSUIVibrancyEffectView, BSContinuousMachTimer, NSMutableArray, CHSWidget, CHSWidgetMetrics, CHSWidgetDescriptorProvider, BLSHBacklightFBSceneEnvironmentActionHandler, CHSWidgetTintParameters, CHSInlineTextParameters, FBScene, CHSScreenshotManager, BSUIVibrancyConfiguration;
@protocol BSDescriptionProviding, FBSceneLayerManagerObserver, LSApplicationWorkspaceObserverProtocol, FBSceneDelegate, CHUISKeybagObserver, CHSWidgetDescriptorProviderObserver, BSInvalidatable, BLSHBacklightSceneHostEnvironment, CHUISWidgetHostViewControllerDelegate, UIScenePresenter;


#import "CHUISKeybag.h"
#import "CHUISWidgetVisibilitySettings.h"
#import "CHUISPreferences.h"
#import "CHUISWidgetSceneClientSettings.h"

@interface CHUISWidgetHostViewController : UIViewController <BSDescriptionProviding, FBSceneLayerManagerObserver, LSApplicationWorkspaceObserverProtocol, FBSceneDelegate, CHUISKeybagObserver, CHSWidgetDescriptorProviderObserver, BSInvalidatable>

 {
    CHUISKeybag *_keybag;
    FBSceneWorkspace *_sceneWorkspace;
    BOOL _sceneForeground;
    NSMutableDictionary *_touchDeliveryPolicyAssertions;
    BOOL _invalidated;
    UIView *_liveSceneSnapshotView;
    _UICAPackageView *_persistedWidgetSnapshotCaarView;
    UIImageView *_persistedWidgetSnapshotImageView;
    UIView *_persistedWidgetSnapshotViewContainer;
    UILabel *_snapshotDebugLabel;
    UIView *_snapshotDebugView;
    NSUInteger _signpostID;
    BOOL _isInViewDidDisappear;
    CHUISWidgetVisibilitySettings *_visibilitySettings;
    NSString *_cachedSceneLogDigest;
    CHSWidgetDescriptor *_descriptor;
    UIVisualEffectView *_materialView;
    BSUIVibrancyEffectView *_vibrancyEffectView;
    id<BSInvalidatable> *_stateCaptureAssertion;
    BSContinuousMachTimer *_detachedSceneTimer;
    NSMutableArray *_detachedSceneTimerEvaluationReasons;
    BOOL _canAppearInSecureEnvironment;
    NSUInteger _inSecureEnvironment;
    CHSWidget *_widget;
    CHSWidgetMetrics *_widgetMetrics;
    BOOL _animationsPaused;
    BOOL _contentPaused;
    BOOL _visibleEntryShouldSnapshot;
    NSUInteger _snapshotHidingSequence;
    CHUISPreferences *_preferences;
    CHSWidgetDescriptorProvider *_descriptorProvider;
    NSMutableArray *_waitForSceneContentReadyBlocks;
    id<BLSHBacklightSceneHostEnvironment> *_sceneBacklightEnvironment;
    BLSHBacklightFBSceneEnvironmentActionHandler *_sceneBacklightActionHandler;
    BOOL _supportsLowLuminance;
    BOOL _prefersUnredactedContentInLowLuminanceEnvironment;
    NSUInteger _requestedPresentationMode;
    NSUInteger _effectivePresentationMode;
    NSUInteger _contentType;
    NSUInteger _colorScheme;
    CHSWidgetTintParameters *_tintParameters;
    CHSInlineTextParameters *_inlineTextParameters;
    BOOL _showsWidgetLabel;
    BOOL _interactionDisabled;
    BOOL _usesSystemBackgroundMaterial;
    BOOL _drawSystemBackgroundMaterialIfNecessary;
}


@property (readonly, nonatomic) UIView *_liveSceneSnapshotView;
@property (readonly, nonatomic) UIView *_liveSceneView;
@property (readonly, nonatomic) UIView *_staticCAARSnapshotView;
@property (readonly, nonatomic) UIView *_staticImageSnapshotView;
@property (readonly, nonatomic) UIView *_staticSnapshotContainerView;
@property (nonatomic, getter=areAnimationsPaused) BOOL animationsPaused;
@property (readonly, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *backlightHostEnvironment;
@property (nonatomic) BOOL canAppearInSecureEnvironment;
@property (readonly, nonatomic) CHUISWidgetSceneClientSettings *clientSettings;
@property (nonatomic) NSUInteger colorScheme;
@property (nonatomic, getter=isContentPaused) BOOL contentPaused;
@property (nonatomic) NSUInteger contentType;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CHUISWidgetHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_detachedSceneTimerInterval, setter=_setDetachedSceneTimerInterval:) CGFloat detachedSceneTimerInterval; // ivar: _detachedSceneTimerInterval
@property (nonatomic, getter=_disableViewTransitionAnimations, setter=_setDisableViewTransitionAnimations:) BOOL disableViewTransitionAnimations; // ivar: _disableViewTransitionAnimations
@property (nonatomic) BOOL drawSystemBackgroundMaterialIfNecessary;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) CHSInlineTextParameters *inlineTextParameters;
@property (nonatomic, getter=isInteractionDisabled) BOOL interactionDisabled;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics; // ivar: _metrics
@property (nonatomic) BOOL metricsDefineSize; // ivar: _metricsDefineSize
@property (nonatomic) BOOL prefersUnredactedContentInLowLuminanceEnvironment;
@property (nonatomic) NSUInteger presentationMode;
@property (retain, nonatomic, getter=_scene, setter=_setScene:) FBScene *scene; // ivar: _scene
@property (retain, nonatomic, getter=_scenePresenter, setter=_setScenePresenter:) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (retain, nonatomic, getter=_screenshotManager, setter=_setScreenshotManager:) CHSScreenshotManager *screenshotManager; // ivar: _screenshotManager
@property (nonatomic) BOOL shouldShareTouchesWithHost; // ivar: _shouldShareTouchesWithHost
@property (nonatomic) BOOL showsComplicationLabel;
@property (nonatomic) BOOL showsWidgetLabel;
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsLowLuminance;
@property (copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) BOOL usesSystemBackgroundMaterial;
@property (copy, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration
@property (nonatomic) NSUInteger visibility;
@property (retain, nonatomic, getter=_visibilitySettings, setter=_setVisibilitySettings:) CHUISWidgetVisibilitySettings *visibilitySettings;
@property (nonatomic) CGRect visibleBounds;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;
@property (copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier; // ivar: _widgetConfigurationIdentifier
@property (nonatomic) NSUInteger widgetPriority; // ivar: _widgetPriority


+(id)_compatibilityMetrics;
+(id)viewControllers;
-(BOOL)_canLiveSnapshot;
-(BOOL)_canShowWhileLocked;
-(BOOL)_hasScene;
-(BOOL)_isAppearingOrAppeared;
-(BOOL)_isVibrancyEffectEnabled;
-(BOOL)areAnimationsDisabled;
-(CGFloat)_effectiveCornerRadius;
-(CGFloat)_effectiveViewCornerRadius;
-(NSUInteger)_inSecureEnvironment;
-(id)_cachedSceneLogDigest;
-(id)_containerView;
-(id)_effectiveBackgroundColor;
-(id)_liveSnapshotView;
-(id)_logDigest;
-(id)_newPersistedSnapshotView;
-(id)_persistedSnapshotContext;
-(id)_persistedWidgetSnapshotViewContainer;
-(id)_snapshotImageFromURL:(id)arg0 ;
-(id)_snapshotViewIgnoringVibrancyEffect:(BOOL)arg0 ;
-(id)_stateDumpDescription;
-(id)additionalSnapshotPresentationContext;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)handleActions:(id)arg0 ;
-(id)initWithWidget:(id)arg0 metrics:(id)arg1 widgetConfigurationIdentifier:(id)arg2 ;
-(id)initWithWidget:(id)arg0 metrics:(id)arg1 widgetConfigurationIdentifier:(id)arg2 descriptorProvider:(id)arg3 sceneWorkspace:(id)arg4 screenshotManager:(id)arg5 preferences:(id)arg6 keybag:(id)arg7 ;
-(id)sceneSpecification;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(int)_actualBackgroundViewMode;
-(int)_expectedBackgroundViewMode;
-(void)__evaluateDetachedSceneTimerForReason:(id)arg0 ;
-(void)_applyLiveSnapshotContentsFromSnapshot:(id)arg0 ;
-(void)_applySecurityPolicyToLayer:(id)arg0 ;
-(void)_applySecurityPolicyToLayer:(id)arg0 allowsPrivacySensitiveContent:(BOOL)arg1 ;
-(void)_clearTouchDeliveryPolicies;
-(void)_createWidgetSnapshotViews;
-(void)_ensureAndEvaluateSnapshotView;
-(void)_evaluateEffectivePresentationMode;
-(void)_executeSceneContentReadyOperations;
-(void)_hideSnapshotViewsAnimated:(BOOL)arg0 ;
-(void)_hideSnapshotViewsAnimated:(BOOL)arg0 forceCompleteTeardown:(BOOL)arg1 ;
-(void)_invalidateDetachedSceneTimerForReason:(id)arg0 ;
-(void)_invalidateDetachedSceneTimerForReason:(id)arg0 ignoreLogging:(BOOL)arg1 ;
-(void)_modifyVisibilitySettings:(id)arg0 ;
-(void)_resetLogDigests;
-(void)_scheduleEvaluationOfDetachedSceneTimerForReason:(id)arg0 ;
-(void)_setBackgroundViewMode:(int)arg0 ;
-(void)_setEffectivePresentationMode:(NSUInteger)arg0 ;
-(void)_setEffectivePresentationMode:(NSUInteger)arg0 forceExistingRebuild:(BOOL)arg1 ;
-(void)_setInSecureEnvironment:(NSUInteger)arg0 forReason:(id)arg1 ;
-(void)_tearDownScene;
-(void)_updateBackgroundMaterialAndColor;
-(void)_updateDescriptorIfNecessary;
-(void)_updateSceneToForeground:(BOOL)arg0 ;
-(void)_updateSnapshotDebugLabelText:(id)arg0 ;
-(void)_updateTouchDeliveryPolicies;
-(void)_updateVibrancyEffectView;
-(void)_updateViewsCornerRadius;
-(void)dealloc;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)ensureContentWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)keybagStateDidChange:(id)arg0 ;
-(void)loadView;
-(void)log:(id)arg0 ;
-(void)logDebug:(id)arg0 ;
-(void)modifySceneSettings:(id)arg0 ;
-(void)prewarmContent;
-(void)requestLaunch;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)sceneDidUpdateClientSettingsWithDiff:(id)arg0 oldClientSettings:(id)arg1 newClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneLayerManagerDidStartTrackingLayers:(id)arg0 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg0 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg0 ;
-(void)setAnimationsDisabled:(BOOL)arg0 ;
-(void)snapshotContentWithTimeout:(CGFloat)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willModifySceneClientSettings:(id)arg0 ;
-(void)willModifySceneSettings:(id)arg0 ;


@end


#endif