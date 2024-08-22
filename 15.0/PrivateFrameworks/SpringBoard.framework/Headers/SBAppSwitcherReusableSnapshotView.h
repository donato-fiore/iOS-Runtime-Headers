// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSWITCHERREUSABLESNAPSHOTVIEW_H
#define SBAPPSWITCHERREUSABLESNAPSHOTVIEW_H

@class SBOrientationTransformWrapperView, UIViewController, NSMutableDictionary, CAShapeLayer, UIView, NSMutableArray, NSString;
@protocol SBAppSwitcherSnapshotImageCacheObserver, SBReusableView, SBAppSwitcherPageContentView, SBAppSwitcherReusableSnapshotViewDelegate;


#import "SBSwitcherWallpaperPageContentView.h"
#import "SBSwitcherSnapshotImageView.h"
#import "SBAppSwitcherSnapshotImageCache.h"
#import "SBAppSwitcherSnapshotLockoutViewControllerProvider.h"
#import "SBAppClipOverlayCoordinator.h"
#import "SBAppSwitcherSettings.h"
#import "SBMedusaSettings.h"
#import "SBAppLayout.h"

@interface SBAppSwitcherReusableSnapshotView : SBSwitcherWallpaperPageContentView <SBAppSwitcherSnapshotImageCacheObserver, SBReusableView, SBAppSwitcherPageContentView>

 {
    SBOrientationTransformWrapperView *_firstOrientationWrapper;
    SBOrientationTransformWrapperView *_secondOrientationWrapper;
    SBOrientationTransformWrapperView *_thirdOrientationWrapper;
    SBSwitcherSnapshotImageView *_firstImageView;
    SBSwitcherSnapshotImageView *_secondImageView;
    SBSwitcherSnapshotImageView *_thirdImageView;
    UIViewController *_containerViewController;
    id<SBAppSwitcherReusableSnapshotViewDelegate> *_delegate;
    NSMutableDictionary *_snapshotViewStateByRole;
    NSMutableDictionary *_blockingViewControllerByRole;
    CAShapeLayer *_medusaDividerLayer;
    UIView *_solidColorBackstopView;
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    SBAppSwitcherSnapshotLockoutViewControllerProvider *_lockoutVCProvider;
    SBAppClipOverlayCoordinator *_appClipOverlayCoordinator;
    NSMutableDictionary *_appClipOverlayByRole;
    SBAppSwitcherSettings *_settings;
    SBMedusaSettings *_medusaSettings;
    BOOL _showingIconOverlayView;
    BOOL _shouldStretchToBounds;
    BOOL _usesNonuniformScaling;
    NSMutableArray *_deferredSnapshotCrossfadeQueue;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) BOOL contentRequiresGroupOpacity;
@property (nonatomic) CGFloat cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maskedCorners;
@property (nonatomic) NSInteger orientation;
@property (nonatomic) BOOL shouldUseBrightMaterial; // ivar: _shouldUseBrightMaterial
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)_isAnimatingTransitionForRole:(NSInteger)arg0 ;
-(BOOL)_isSnapshotSuspendSnapshot:(id)arg0 ;
-(BOOL)hasSceneOverlayView;
-(NSInteger)_contentOrientationForSnapshotCacheEntry:(id)arg0 ;
-(id)_allImageViews;
-(id)_applicationForRole:(NSInteger)arg0 ;
-(id)_cacheEntryForRole:(NSInteger)arg0 ;
-(id)_imageViewForRole:(NSInteger)arg0 ;
-(id)_orientationWrapperForRole:(NSInteger)arg0 ;
-(id)_sceneHandleForRole:(NSInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 snapshotCache:(id)arg1 lockoutVCProvider:(id)arg2 appClipOverlayCoordinator:(id)arg3 containerViewController:(id)arg4 ;
-(struct CGRect )_frameForBackstopLayer;
-(struct CGRect )_frameInLayoutSpaceForRole:(NSInteger)arg0 inAppLayout:(id)arg1 inOrientation:(NSInteger)arg2 ;
-(struct CGRect )_snapshotImageFrameForCacheEntry:(id)arg0 ;
-(void)_addAppClipOverlayForRole:(NSInteger)arg0 bundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 ;
-(void)_addAppLockoutOverlayIfNecessaryForRole:(NSInteger)arg0 ;
-(void)_addOverlayViewController:(id)arg0 toOrientationWrapperForRole:(NSInteger)arg1 ;
-(void)_configureSnapshotImageView:(id)arg0 cacheEntry:(id)arg1 ;
-(void)_handleInstalledAppsChanged:(id)arg0 ;
-(void)_performDeferredSnapshotUpdatesIfNecessaryForRole:(NSInteger)arg0 ;
-(void)_removeAppClipOverlayForRole:(NSInteger)arg0 ;
-(void)_removeAppLockoutOverlayForRole:(NSInteger)arg0 ;
-(void)_requestFreshImages;
-(void)_setAnimatingTransition:(BOOL)arg0 forRole:(NSInteger)arg1 ;
-(void)_setCacheEntry:(id)arg0 forRole:(NSInteger)arg1 ;
-(void)_setSceneHandle:(id)arg0 forRole:(NSInteger)arg1 ;
-(void)_updateContentOrientationForRole:(NSInteger)arg0 ;
-(void)_updateCornerRadius;
-(void)_updateCornerRadiusIfNecessaryForOverlayView:(id)arg0 matchingSnapshotImage:(id)arg1 ;
-(void)_updateCornerRadiusIfNecessaryForSnapshotImageView:(id)arg0 cacheEntry:(id)arg1 ;
-(void)_updateDivider;
-(void)_updateSceneHandleForRole:(NSInteger)arg0 ;
-(void)_updateToNewSnapshotImageUsingCacheEntry:(id)arg0 ;
-(void)_updateTranslucency;
-(void)didUpdateCacheEntry:(id)arg0 ;
-(void)invalidate;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setShouldStretchToBounds:(BOOL)arg0 ;
-(void)setShowingIconOverlayView:(BOOL)arg0 ;
-(void)setUsesNonuniformScaling:(BOOL)arg0 ;
-(void)setWallpaperStyle:(NSInteger)arg0 ;


@end


#endif