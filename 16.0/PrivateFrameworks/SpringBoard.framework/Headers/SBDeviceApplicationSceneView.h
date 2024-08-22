// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDEVICEAPPLICATIONSCENEVIEW_H
#define SBDEVICEAPPLICATIONSCENEVIEW_H

@class SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, _UIDirectionalRotationView, SBFHomeGrabberSettings, NSMutableDictionary, UIView<UIScenePresentation>, NSMutableArray, UIView<SBApplicationSceneBackgroundView>, NSString;
@protocol SBDeviceApplicationSceneClassicAccessoryViewDelegate, PTSettingsKeyObserver, SBDeviceApplicationSceneOverlayViewObserver, SBAppSwitcherPageContentView, UISceneLayerTarget;


#import "SBApplicationSceneView.h"
#import "SBHomeGrabberRotationView.h"
#import "SBDeviceApplicationSceneClassicAccessoryView.h"
#import "SBDeviceApplicationSceneClassicWrapperView.h"
#import "SBMedusaSettings.h"
#import "SBHomeGrabberView.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBApplicationSceneViewStatusBarDescriptor.h"

@interface SBDeviceApplicationSceneView : SBApplicationSceneView <SBDeviceApplicationSceneClassicAccessoryViewDelegate, PTSettingsKeyObserver, SBDeviceApplicationSceneOverlayViewObserver, SBAppSwitcherPageContentView>

 {
    id<UISceneLayerTarget> *_statusBarLayerTarget;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    _UIDirectionalRotationView *_hostCounterRotationView;
    SBHomeGrabberRotationView *_grabberRotationView;
    SBFHomeGrabberSettings *_grabberSettings;
    BOOL _grabberLivesInCounterRotationView;
    NSMutableDictionary *_overlayViewsByPriority;
    NSInteger _lastStableOverlayOrientation;
    BOOL _counterRotationViewTransformUpdatesPaused;
    BOOL _waitingForBoundsUpdateDuringRotation;
    NSInteger _overlayOrientationAtStartOfRotation;
    SBDeviceApplicationSceneClassicAccessoryView *_classicAccessoryView;
    SBDeviceApplicationSceneClassicWrapperView *_classicWrapperView;
    UIView<UIScenePresentation> *_wrappedHostView;
    NSMutableArray *_multitaskingExclusionRectDebugViews;
    SBMedusaSettings *_medusaSettings;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (nonatomic) CGFloat cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forcesStatusBarHidden;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance; // ivar: _isInsetForHomeAffordance
@property (nonatomic) NSUInteger maskedCorners; // ivar: maskedCorners
@property (nonatomic) NSInteger orientation;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic) CGFloat statusBarAlpha; // ivar: _statusBarAlpha
@property (retain, nonatomic) SBApplicationSceneViewStatusBarDescriptor *statusBarDescriptor; // ivar: _statusBarDescriptor
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)_representsTranslucentContent;
-(BOOL)_sceneDrivesOwnRotation;
-(BOOL)_useClassicWrapperView;
-(BOOL)_wantsBlackBackground;
-(CGFloat)_contentContainerCornerRadius;
-(NSInteger)_wallpaperStyle;
-(id)_transitionViewForHostView;
-(id)deviceApplicationSceneView;
-(id)initWithSceneHandle:(id)arg0 referenceSize:(struct CGSize )arg1 orientation:(NSInteger)arg2 hostRequester:(id)arg3 ;
-(id)prepareForContentRotation;
-(struct UIEdgeInsets )_contentContainerEdgeInsets;
-(void)_configureSceneLiveHostView:(id)arg0 ;
-(void)_configureSceneLiveSnapshotView:(id)arg0 ;
-(void)_configureSceneSnapshotContext:(id)arg0 ;
-(void)_createClassicWrapperViewIfNecessaryForHostView:(id)arg0 ;
-(void)_createHostCounterRotationViewIfNecessary;
-(void)_invalidateSceneLiveHostView:(id)arg0 ;
-(void)_layoutLiveHostView:(id)arg0 ;
-(void)_layoutLiveSnapshotView:(id)arg0 ;
-(void)_maybeStartTrackingRotationForOverlayFromOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 ;
-(void)_refresh;
-(void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg0 transitionContext:(id)arg1 ;
-(void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg0 previousSettings:(id)arg1 ;
-(void)_setCounterRotationViewTransformUpdatesPaused:(BOOL)arg0 ;
-(void)_tearDownHostCounterRotationViewIfNecessary;
-(void)_updateDragAndDropExclusionDebugViewsIfNecessary;
-(void)_updateEdgeProtectAndAutoHideOnHomeGrabberView;
-(void)_updateReferenceSize:(struct CGSize )arg0 andOrientation:(NSInteger)arg1 ;
-(void)_updateStatusBarVisibilityForHostView;
-(void)addOverlayView:(id)arg0 withPriority:(NSInteger)arg1 ;
-(void)applicationSceneCompatibilityModeAnimatingChangeTo:(NSInteger)arg0 ;
-(void)containerViewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)createClassicAccessoryViewIfNecessary;
-(void)createHomeGrabberViewIfNecessaryWithSettings:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;
-(void)noteApplicationClassicPhoneSceneOrientationPreferenceChangingForUserAction:(BOOL)arg0 ;
-(void)overlayViewDidRotate:(id)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
-(void)removeOverlayView:(id)arg0 withPriority:(NSInteger)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)tearDownHomeGrabberView;
-(void)teardownClassicAccessoryViewIfNecessary;
-(void)willRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 alongsideContainerView:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif