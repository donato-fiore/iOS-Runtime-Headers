// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHUISAVOCADOHOSTVIEWCONTROLLER_H
#define CHUISAVOCADOHOSTVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, UIView, _UICAPackageView, UIImageView, UILabel, CHSScreenshotManager, NSString, CHSAvocadoDescriptor, UIVisualEffectView, BSContinuousMachTimer, NSMutableArray, CHSAvocadoDescriptorProvider, CHSWidgetMetrics, FBScene, CHSWidget;
@protocol FBSceneDelegate, FBSceneLayerManagerObserver, LSApplicationWorkspaceObserverProtocol, CHSAvocadoDescriptorProviderObserver, CHUISKeybagObserver, BSInvalidatable, CHUISAvocadoHostViewControllerDelegate, UIScenePresenter;


#import "CHUISKeybag.h"
#import "CHUISWidgetVisibilitySettings.h"
#import "CHUISPreferences.h"

@interface CHUISAvocadoHostViewController : UIViewController <FBSceneDelegate, FBSceneLayerManagerObserver, LSApplicationWorkspaceObserverProtocol, CHSAvocadoDescriptorProviderObserver, CHUISKeybagObserver, BSInvalidatable>

 {
    CHUISKeybag *_keybag;
    NSMutableDictionary *_touchDeliveryPolicyAssertions;
    BOOL _invalidated;
    UIView *_liveSceneSnapshotView;
    _UICAPackageView *_persistedWidgetSnapshotCaarView;
    UIImageView *_persistedWidgetSnapshotImageView;
    UIView *_persistedWidgetSnapshotViewContainer;
    UILabel *_snapshotDebugLabel;
    UIView *_snapshotDebugView;
    NSUInteger _signpostID;
    CHSScreenshotManager *_screenshotManager;
    BOOL _isInViewDidDisappear;
    CHUISWidgetVisibilitySettings *_visibilitySettings;
    NSUInteger _foregroundState;
    NSString *_cachedSceneLogDigest;
    CHSAvocadoDescriptor *_descriptor;
    UIVisualEffectView *_materialView;
    id<BSInvalidatable> *_stateCaptureAssertion;
    BSContinuousMachTimer *_detachedSceneTimer;
    NSMutableArray *_detachedSceneTimerEvaluationReasons;
    BOOL _canAppearInSecureEnvironment;
    NSUInteger _inSecureEnvironment;
    NSMutableArray *_preventBackgroundingAssertions;
    NSUInteger _snapshotHidingSequence;
    CHUISPreferences *_preferences;
    CHSAvocadoDescriptorProvider *_descriptorProvider;
    BOOL _usesSystemBackgroundMaterial;
    BOOL _isInvalidatingBackgroundAssertion;
}


@property (nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled; // ivar: _animationsDisabled
@property (readonly, copy, nonatomic) NSString *avocadoIdentifier;
@property (readonly, copy, nonatomic) NSString *avocadoKind;
@property (nonatomic) BOOL avocadoViewShouldShareTouchesWithHost; // ivar: _avocadoViewShouldShareTouchesWithHost
@property (nonatomic) BOOL canAppearInSecureEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CHUISAvocadoHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_detachedSceneTimerInterval, setter=_setDetachedSceneTimerInterval:) CGFloat detachedSceneTimerInterval; // ivar: _detachedSceneTimerInterval
@property (nonatomic) BOOL drawSystemBackgroundMaterialIfNecessary; // ivar: _drawSystemBackgroundMaterialIfNecessary
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics; // ivar: _metrics
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic, getter=isPrivateModeEnabled) BOOL privateModeEnabled;
@property (retain, nonatomic, getter=_scene, setter=_setScene:) FBScene *scene; // ivar: _scene
@property (retain, nonatomic, getter=_scenePresenter, setter=_setScenePresenter:) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (readonly, nonatomic) UIView *sceneSnapshotView;
@property (retain, nonatomic) CHSScreenshotManager *screenshotManager;
@property (readonly, nonatomic) NSInteger sizeClass;
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) BOOL usesSystemBackgroundMaterial;
@property (nonatomic) NSUInteger visibility;
@property (retain, nonatomic, getter=_visibilitySettings, setter=_setVisibilitySettings:) CHUISWidgetVisibilitySettings *visibilitySettings;
@property (nonatomic) CGRect visibleBounds;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot; // ivar: _visibleEntryShouldSnapshot
@property (nonatomic, getter=isVisiblySettled) BOOL visiblySettled;
@property (copy, nonatomic) CHSWidget *widget; // ivar: _widget
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier; // ivar: _widgetConfigurationIdentifier


+(id)_compatibilityMetrics;
-(BOOL)_canLiveSnapshot;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isAppearingOrAppeared;
-(NSUInteger)_inSecureEnvironment;
-(id)_liveSceneSnapshotView;
-(id)_logDigest;
-(id)_newPersistedSnapshotView;
-(id)_persistedSnapshotContext;
-(id)_persistedWidgetSnapshotViewContainer;
-(id)_snapshotImageFromURL:(id)arg0 ;
-(id)_stateDumpDescription;
-(id)acquirePreventSceneBackgroundingAssertionForReason:(id)arg0 ;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(id)initWithWidget:(id)arg0 metrics:(id)arg1 widgetConfigurationIdentifier:(id)arg2 ;
-(id)initWithWidget:(id)arg0 metrics:(id)arg1 widgetConfigurationIdentifier:(id)arg2 descriptorProvider:(id)arg3 keybag:(id)arg4 ;
-(id)initWithWidget:(id)arg0 metrics:(id)arg1 widgetConfigurationIdentifier:(id)arg2 style:(NSUInteger)arg3 mode:(NSUInteger)arg4 privateModeEnabled:(BOOL)arg5 ;
-(id)initWithWidget:(id)arg0 metrics:(id)arg1 widgetConfigurationIdentifier:(id)arg2 style:(NSUInteger)arg3 privateModeEnabled:(BOOL)arg4 ;
-(int)_actualBackgroundViewMode;
-(int)_expectedBackgroundViewMode;
-(void)__evaluateDetachedSceneTimerForReason:(id)arg0 ;
-(void)_applyLiveSnapshotContentsFromSnapshot:(id)arg0 ;
-(void)_applySecurityPolicyToLayer:(id)arg0 ;
-(void)_applySecurityPolicyToLayer:(id)arg0 allowsPrivacySensitiveContent:(BOOL)arg1 ;
-(void)_clearTouchDeliveryPolicies;
-(void)_createWidgetSnapshotViews;
-(void)_ensureSnapshotView;
-(void)_hideSnapshotViewsAnimated:(BOOL)arg0 ;
-(void)_hideSnapshotViewsAnimated:(BOOL)arg0 forceCompleteTeardown:(BOOL)arg1 ;
-(void)_invalidateBackgroundingAssertion:(id)arg0 ;
-(void)_invalidateDetachedSceneTimerForReason:(id)arg0 ;
-(void)_invalidateDetachedSceneTimerForReason:(id)arg0 ignoreLogging:(BOOL)arg1 ;
-(void)_modifyVisibilitySettings:(id)arg0 ;
-(void)_resetLogDigests;
-(void)_scheduleEvaluationOfDetachedSceneTimerForReason:(id)arg0 ;
-(void)_setInSecureEnvironment:(NSUInteger)arg0 forReason:(id)arg1 ;
-(void)_tearDownScene;
-(void)_updateActiveUI;
-(void)_updateBackgroundMaterialAndColor;
-(void)_updateDescriptorIfNecessary;
-(void)_updateSceneToForeground:(BOOL)arg0 ;
-(void)_updateSnapshotDebugLabelText:(id)arg0 ;
-(void)_updateTouchDeliveryPolicies;
-(void)dealloc;
-(void)descriptorsDidChangeForDescriptorProvider:(id)arg0 ;
-(void)invalidate;
-(void)keybagStateDidChange:(id)arg0 ;
-(void)prewarmContent;
-(void)requestLaunch;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)sceneLayerManagerDidStartTrackingLayers:(id)arg0 ;
-(void)sceneLayerManagerDidStopTrackingLayers:(id)arg0 ;
-(void)sceneLayerManagerDidUpdateLayers:(id)arg0 ;
-(void)setBackgroundViewMode:(int)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif