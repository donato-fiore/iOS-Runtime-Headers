// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERREMOTEVIEWCONTROLLER_H
#define PBUIWALLPAPERREMOTEVIEWCONTROLLER_H

@class UIViewController, FBScene, NSHashTable, NSMutableDictionary, NSMutableSet, NSTimer, UIView<UIScenePresentation>, BSEventQueue, NSString;
@protocol BSDescriptionProviding, FBSceneDelegate, FBSceneLayerManagerObserver, PBUIWallpaperConfigurationManagerDelegate, PBUIWallpaperViewDelegate, PBUIFakeBlurImageProviding, PBUIFakeBlurViewRegistering, PBUIRemoteIrisWallpaperPlayerDelegate, PBUIWallpaperPresenting, PBUIWallpaperLegibilityProviding, UIScenePresenter, PBUISessionReconnectPolicy, BSInvalidatable, PBUIWallpaperReachabilityCoordinating, PBUIWallpaperPresentingDelegate;


#import "PBUIRemoteIrisWallpaperPlayer.h"
#import "PBUIWallpaperConfigurationManager.h"

@interface PBUIWallpaperRemoteViewController : UIViewController <BSDescriptionProviding, FBSceneDelegate, FBSceneLayerManagerObserver, PBUIWallpaperConfigurationManagerDelegate, PBUIWallpaperViewDelegate, PBUIFakeBlurImageProviding, PBUIFakeBlurViewRegistering, PBUIRemoteIrisWallpaperPlayerDelegate, PBUIWallpaperPresenting, PBUIWallpaperLegibilityProviding>

 {
    FBScene *_scene;
    id<UIScenePresenter> *_scenePresenter;
    id<PBUISessionReconnectPolicy> *_reconnectPolicy;
    NSHashTable *_lockscreenObservers;
    NSHashTable *_homescreenObservers;
    NSHashTable *_lockscreenBlurViews;
    NSHashTable *_homescreenBlurViews;
    NSMutableDictionary *_fakeBlurCache;
    NSMutableSet *_disallowRasterizationReasonsHomeVariant;
    NSMutableSet *_disallowRasterizationReasonsLockVariant;
    NSMutableSet *_hideWallpaperReasonsHomeVariant;
    NSMutableSet *_hideWallpaperReasonsLockVariant;
    NSMutableSet *_wallpaperAnimationSuspendedReasons;
    NSMutableSet *_wallpaperRequiredReasons;
    NSMutableSet *_homescreenChangesDelayedReasons;
    NSHashTable *_wallpaperScaleAssertions;
    NSHashTable *_sceneModeAssertions;
    NSMutableSet *_externalSceneModeAssertionActions;
    id<BSInvalidatable> *_sceneModeAssertionForViewAppeared;
    NSTimer *_sceneDeactivationTimer;
    UIView<UIScenePresentation> *_scenePresentationView;
    BOOL _missingEffectViewImages;
    NSMutableSet *_pendingEffectViewImageSlots;
    BSEventQueue *_eventQueue;
    PBUIRemoteIrisWallpaperPlayer *_remoteIrisWallpaperPlayer;
    NSMutableSet *_stateCaptureHandles;
}


@property (nonatomic) NSInteger activeVariant; // ivar: _activeVariant
@property (copy, nonatomic) NSString *cachingIdentifier; // ivar: _cachingIdentifier
@property (readonly, nonatomic) ? currentHomescreenStyleTransitionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat homescreenWallpaperScale;
@property (readonly, nonatomic) CGFloat lockscreenWallpaperScale;
@property (readonly, nonatomic) CGFloat minimumHomescreenWallpaperScale;
@property (readonly, nonatomic) CGFloat minimumLockscreenWallpaperScale;
@property (retain, nonatomic) NSObject<PBUIWallpaperReachabilityCoordinating> *reachabilityCoordinator; // ivar: _reachabilityCoordinator
@property (readonly, nonatomic) NSUInteger significantEventsCounter;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger variant;
@property (retain, nonatomic) PBUIWallpaperConfigurationManager *wallpaperConfigurationManager; // ivar: _wallpaperConfigurationManager
@property (weak, nonatomic) NSObject<PBUIWallpaperPresentingDelegate> *wallpaperPresentingDelegate; // ivar: _wallpaperPresentingDelegate


-(BOOL)_canShowWhileLocked;
-(BOOL)parallaxEnabledForVariant:(NSInteger)arg0 ;
-(BOOL)removeWallpaperStyleForPriority:(NSInteger)arg0 forVariant:(NSInteger)arg1 withAnimationFactory:(id)arg2 ;
-(BOOL)setWallpaperStyle:(NSInteger)arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)setWallpaperStyleTransitionState:(struct ? )arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)shouldAutorotate;
-(BOOL)updateImageProviderView:(id)arg0 withImage:(id)arg1 ;
-(BOOL)updateIrisWallpaperForStaticMode;
-(CGFloat)_wallpaperScaleForVariant:(NSInteger)arg0 ;
-(CGFloat)contrastForVariant:(NSInteger)arg0 ;
-(CGFloat)contrastInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 ;
-(CGFloat)parallaxFactorForVariant:(NSInteger)arg0 ;
-(CGFloat)zoomFactorForVariant:(NSInteger)arg0 ;
-(NSInteger)_effectiveSceneMode;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_acquireSceneModeAssertionForReason:(id)arg0 sceneMode:(NSInteger)arg1 ;
-(id)_acquireSceneModeAssertionForReason:(id)arg0 sceneMode:(NSInteger)arg1 completion:(id)arg2 ;
-(id)_blurImageFromURL:(id)arg0 ;
-(id)_blurViewsForVariant:(NSInteger)arg0 ;
-(id)_cachedBlurAssetForVariant:(NSInteger)arg0 requestedStyle:(NSInteger)arg1 traitCollection:(id)arg2 ;
-(id)_disallowRasterizationReasonsForVariant:(NSInteger)arg0 ;
-(id)_hideWallpaperReasonsForVariant:(NSInteger)arg0 ;
-(id)_observersForVariant:(NSInteger)arg0 ;
-(id)_sceneClientSettings;
-(id)_sceneSettings;
-(id)_simpleAssertionWithReasonsSet:(id)arg0 identifier:(id)arg1 reason:(id)arg2 updater:(id)arg3 ;
-(id)_wallpaperScaleAssertionForVariant:(NSInteger)arg0 scale:(CGFloat)arg1 ;
-(id)averageColorForVariant:(NSInteger)arg0 ;
-(id)averageColorInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 ;
-(id)averageColorInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 withSmudgeRadius:(CGFloat)arg2 ;
-(id)beginRequiringWithReason:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)imageForWallpaperStyle:(*NSInteger)arg0 variant:(NSInteger)arg1 traitCollection:(id)arg2 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)irisWallpaperPlayer;
-(id)legibilitySettingsForVariant:(NSInteger)arg0 ;
-(id)newFakeBlurViewForVariant:(NSInteger)arg0 style:(NSInteger)arg1 transformOptions:(NSUInteger)arg2 ;
-(id)newImageProviderView;
-(id)requireWallpaperRasterizationWithReason:(id)arg0 ;
-(id)requireWallpaperWithReason:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)suspendWallpaperAnimationForReason:(id)arg0 ;
-(id)wallpaperView:(id)arg0 wallpaperConfigurationIncludingValueTypes:(NSUInteger)arg1 ;
-(void)_addStateCaptureHandlers;
-(void)_cacheBlurImageForVariant:(NSInteger)arg0 requestedStyle:(NSInteger)arg1 actualStyle:(NSInteger)arg2 traitCollection:(id)arg3 image:(id)arg4 imageURL:(id)arg5 ;
-(void)_cancelSceneDeactivation;
-(void)_invalidateBlurCacheForVariant:(NSInteger)arg0 ;
-(void)_modifySceneSettings:(id)arg0 forSceneMode:(NSInteger)arg1 ;
-(void)_notifyAllObserversOfNewWallpaperScene;
-(void)_performWithLiveScene:(id)arg0 ;
-(void)_reconfigureBlurViewsForVariant:(NSInteger)arg0 ;
-(void)_registerFakeBlurView:(id)arg0 ;
-(void)_scheduleSceneDeactivation;
-(void)_setupScene;
-(void)_setupSceneWithCompletion:(id)arg0 ;
-(void)_unregisterFakeBlurView:(id)arg0 ;
-(void)_updateBlurViewsForVariant:(NSInteger)arg0 ;
-(void)_updateFallbackView;
-(void)_updateSceneMode;
-(void)_updateSceneModeWithCompletion:(id)arg0 ;
-(void)_updateWallpaperScaleWithAnimationFactory:(id)arg0 ;
-(void)_updateWallpaperSceneSettingsWithBlock:(id)arg0 ;
// -(void)_updateWallpaperSceneSettingsWithBlock:(id)arg0 postUpdateBlock:(unk)arg1  ;
-(void)_updateWallpaperSceneSettingsWithTransitionBlock:(id)arg0 ;
-(void)addObserver:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)beginDelayingHomescreenStyleChangesForReason:(id)arg0 ;
-(void)cancelInProcessAnimations;
-(void)dealloc;
-(void)endDelayingHomescreenStyleChangesForReason:(id)arg0 animationFactory:(id)arg1 ;
-(void)noteDidRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)noteWillAnimateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)preheatWallpaperForVariant:(NSInteger)arg0 ;
-(void)remoteIrisWallpaperPlayer:(id)arg0 touchActiveChanged:(BOOL)arg1 ;
-(void)removeObserver:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)setAlpha:(CGFloat)arg0 forWallpaperVariant:(NSInteger)arg1 ;
-(void)setDisallowsRasterization:(BOOL)arg0 forVariant:(NSInteger)arg1 withReason:(id)arg2 ;
-(void)setLockscreenOnlyWallpaperAlpha:(CGFloat)arg0 ;
-(void)setLockscreenWallpaperContentsRect:(struct CGRect )arg0 ;
-(void)setWallpaperHidden:(BOOL)arg0 variant:(NSInteger)arg1 reason:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateIrisWallpaperForInteractiveMode;
-(void)updateWallpaperForLocations:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)updateWallpaperForLocations:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)wallpaperConfigurationManager:(id)arg0 didChangeWallpaperConfigurationForVariants:(NSInteger)arg1 ;


@end


#endif