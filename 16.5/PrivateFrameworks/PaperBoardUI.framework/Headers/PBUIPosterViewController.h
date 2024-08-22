// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIPOSTERVIEWCONTROLLER_H
#define PBUIPOSTERVIEWCONTROLLER_H

@class UIViewController, _UILegibilitySettings, FBScene, BSUIMappedImageCache, BSCompoundAssertion, PRSPosterConfiguration, UIColor, NSString;
@protocol FBSceneDelegate, BSDescriptionProviding, PBUIPosterUpdating, PBUIPosterComponentDelegate, PBUIPosterComponent, PBUISessionReconnectPolicy, BSInvalidatable, BSPathProviding;


#import "PBUIPosterLockViewController.h"
#import "PBUIDynamicProviderWrapper.h"
#import "PBUIPosterHomeViewController.h"

@interface PBUIPosterViewController : UIViewController <FBSceneDelegate, BSDescriptionProviding, PBUIPosterUpdating, PBUIPosterComponentDelegate, PBUIPosterComponent>

 {
    id<PBUISessionReconnectPolicy> *_reconnectPolicy;
    _UILegibilitySettings *_legibilitySettings;
    FBScene *_scene;
    FBScene *_homeScene;
    PBUIPosterLockViewController *_lockViewController;
    BSUIMappedImageCache *_lockVCCache;
    PBUIDynamicProviderWrapper *_activeVariantReplicaProvider;
    PBUIDynamicProviderWrapper *_lockReplicaProvider;
    PBUIDynamicProviderWrapper *_lockFloatingLayerReplicaProvider;
    PBUIPosterHomeViewController *_homeViewController;
    PBUIDynamicProviderWrapper *_homeReplicaProvider;
    BSUIMappedImageCache *_homeVCCache;
    BSCompoundAssertion *_shouldRasterizeWallpaperAssertion;
    id<BSInvalidatable> *_storageTemporaryDirectory;
}


@property (readonly, nonatomic) PRSPosterConfiguration *activeConfiguration; // ivar: _configuration
@property (nonatomic) NSInteger activeOrientation; // ivar: _activeOrientation
@property (nonatomic) NSInteger activeStyle; // ivar: _activeStyle
@property (nonatomic) NSInteger activeVariant; // ivar: _activeVariant
@property (nonatomic) BOOL activelyRequired; // ivar: _activelyRequired
@property (readonly, nonatomic) PRSPosterConfiguration *associatedConfiguration; // ivar: _associatedConfiguration
@property (readonly, nonatomic) UIColor *averageColor;
@property (readonly, nonatomic) CGFloat averageContrast;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBUIPosterComponentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL landscapeBlurEnabled; // ivar: _landscapeBlurEnabled
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSUInteger posterSignificantEventsCounter;
@property (readonly, nonatomic) NSObject<BSPathProviding> *storagePath; // ivar: _storagePath
@property (readonly) Class superclass;
@property (nonatomic) CGFloat unlockProgress; // ivar: _unlockProgress
@property (readonly, nonatomic) NSInteger variant;
@property (nonatomic) BOOL wakeSourceIsSwipeToUnlock; // ivar: _wakeSourceIsSwipeToUnlock


-(BOOL)_canShowWhileLocked;
-(BOOL)handlesWakeAnimation;
-(BOOL)homeScreenReflectsLockScreen;
-(BOOL)updateAssociatedPosterConfiguration:(id)arg0 ;
-(BOOL)updateConfiguration:(id)arg0 ;
-(BOOL)updateHomeScene;
-(CGFloat)averageContrastForVariant:(NSInteger)arg0 ;
-(NSUInteger)significantEventsCounterForPosterWithIdentifier:(id)arg0 ;
-(id)_activeViewController;
-(id)_replicaProviderForVariant:(NSInteger)arg0 ;
-(id)_viewControllerForVariant:(NSInteger)arg0 ;
-(id)averageColorForVariant:(NSInteger)arg0 ;
-(id)defaultStoragePath;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)legibilitySettingsForVariant:(NSInteger)arg0 ;
-(id)makeImageCacheForVariant:(NSInteger)arg0 ;
-(id)portalProviderForFloatingLayer;
-(id)portalSourceProviderForActiveVariant;
-(id)portalSourceProviderForVariant:(NSInteger)arg0 ;
-(id)requireWallpaperRasterizationWithReason:(id)arg0 ;
-(id)scenesForBacklightSession;
-(id)snapshotSourceProviderForActiveVariant;
-(id)snapshotSourceProviderForVariant:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_createHomeViewControllerIfNeeded;
-(void)_updateForActiveVariant;
-(void)_updateLandscapeBlur;
-(void)_updateLegibilitySettings:(id)arg0 ;
-(void)_updatePosterScenesWithCompletion:(id)arg0 ;
-(void)_updateRasterization;
-(void)activateWithCompletion:(id)arg0 ;
-(void)finishUnlockWithAnimationParameters:(struct CGSize )arg0 ;
-(void)invalidate;
-(void)noteUserTapOccurred;
-(void)posterComponent:(id)arg0 didUpdateLegibilitySettings:(id)arg1 ;
-(void)scene:(id)arg0 clientDidConnect:(id)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 willUpdateSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)setWallpaperObscured:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLegacyPoster;
-(void)updatePoster:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif