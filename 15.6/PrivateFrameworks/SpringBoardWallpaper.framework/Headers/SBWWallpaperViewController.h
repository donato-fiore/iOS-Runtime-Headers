// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWWALLPAPERVIEWCONTROLLER_H
#define SBWWALLPAPERVIEWCONTROLLER_H

@class UIViewController, UIView, NSHashTable, NSMutableSet, SBWallpaperDefaults, NSString, UITraitCollection, SBFWallpaperView, SBFWallpaperConfigurationManager;
@protocol SBFWallpaperConfigurationManagerDelegate, SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, PTSettingsKeyObserver, BSDescriptionProviding, SBFWallpaperViewDelegate, SBWWallpaperPresenting, SBWWallpaperLegibilityProviding, BSDefaultObserver, SBFIrisWallpaperPlaying, SBWallpaperReachabilityCoordinating, SBWWallpaperPresentingDelegate, BSInvalidatable;


#import "SBWallpaperStyleInfo.h"

@interface SBWWallpaperViewController : UIViewController <SBFWallpaperConfigurationManagerDelegate, SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, PTSettingsKeyObserver, BSDescriptionProviding, SBFWallpaperViewDelegate, SBWWallpaperPresenting, SBWWallpaperLegibilityProviding>

 {
    UIView *_wallpaperContainerView;
    NSHashTable *_lockscreenObservers;
    NSHashTable *_homescreenObservers;
    NSHashTable *_suspendColorSamplingAssertions;
    NSHashTable *_suspendWallpaperAnimationAssertions;
    NSHashTable *_requireWallpaperAssertions;
    NSMutableSet *_hideHomescreenWallpaperReasons;
    NSMutableSet *_hideLockscreenWallpaperReasons;
    NSInteger _displayedVariant;
    CGFloat _lockscreenOnlyWallpaperAlpha;
    NSHashTable *_lockscreenBlurViews;
    NSHashTable *_homescreenBlurViews;
    NSInteger _disallowRasterizationBlockCount;
    NSMutableSet *_disallowRasterizationReasonsHomeVariant;
    NSMutableSet *_disallowRasterizationReasonsLockVariant;
    NSMutableSet *_homescreenStyleChangeDelayReasons;
    SBWallpaperDefaults *_wallpaperDefaults;
    id<BSDefaultObserver> *_wallpaperEnableDimmingObserver;
    NSHashTable *_homescreenWallpaperScaleAssertions;
}


@property (copy, nonatomic) NSString *cachingIdentifier; // ivar: _cachingIdentifier
@property (readonly, nonatomic) ? currentHomescreenStyleTransitionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITraitCollection *fakeBlurViewOverrideTraitCollection; // ivar: _fakeBlurViewOverrideTraitCollection
@property (nonatomic) BOOL fixedOrientation; // ivar: _fixedOrientation
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBWallpaperStyleInfo *homescreenStyleInfo; // ivar: _homescreenStyleInfo
@property (readonly, nonatomic) CGFloat homescreenWallpaperScale;
@property (retain, nonatomic) SBFWallpaperView *homescreenWallpaperView; // ivar: _homescreenWallpaperView
@property (readonly, nonatomic) NSObject<SBFIrisWallpaperPlaying> *irisWallpaperPlayer;
@property (readonly, nonatomic) SBWallpaperStyleInfo *lockscreenStyleInfo; // ivar: _lockscreenStyleInfo
@property (nonatomic) CGFloat lockscreenWallpaperScale; // ivar: _lockscreenWallpaperScale
@property (retain, nonatomic) SBFWallpaperView *lockscreenWallpaperView; // ivar: _lockscreenWallpaperView
@property (readonly, nonatomic) CGFloat minimumHomescreenWallpaperScale;
@property (readonly, nonatomic) CGFloat minimumLockscreenWallpaperScale;
@property (retain, nonatomic) NSObject<SBWallpaperReachabilityCoordinating> *reachabilityCoordinator; // ivar: _reachabilityCoordinator
@property (retain, nonatomic) SBFWallpaperView *sharedWallpaperView; // ivar: _sharedWallpaperView
@property (readonly) Class superclass;
@property (nonatomic) NSInteger variant;
@property (retain, nonatomic) SBFWallpaperConfigurationManager *wallpaperConfigurationManager; // ivar: _wallpaperConfigurationManager
@property (weak, nonatomic) NSObject<SBWWallpaperPresentingDelegate> *wallpaperPresentingDelegate; // ivar: _wallpaperPresentingDelegate
@property (retain, nonatomic) NSObject<BSInvalidatable> *wallpaperStyleAnimationAssertion; // ivar: _wallpaperStyleAnimationAssertion


+(id)substitutionFlatColorForWallpaperName:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isRasterizationDisallowedForCurrentVariant;
-(BOOL)_isWallpaperHiddenForVariant:(NSInteger)arg0 ;
-(BOOL)_isWallpaperView:(id)arg0 displayingWallpaperWithConfiguration:(id)arg1 forVariant:(NSInteger)arg2 ;
-(BOOL)_setDisallowRasterization:(BOOL)arg0 withReason:(id)arg1 reasons:(id)arg2 ;
-(BOOL)_shouldSuspendMotionEffectsForState:(struct ? )arg0 ;
-(BOOL)_shouldSuspendMotionEffectsForStyle:(NSInteger)arg0 ;
-(BOOL)_updateEffectViewForVariant:(NSInteger)arg0 oldState:(struct ? *)arg1 newState:(struct ? *)arg2 oldEffectView:(*id)arg3 newEffectView:(*id)arg4 ;
-(BOOL)_updateEffectViewForVariant:(NSInteger)arg0 withFactory:(id)arg1 ;
-(BOOL)removeWallpaperStyleForPriority:(NSInteger)arg0 forVariant:(NSInteger)arg1 withAnimationFactory:(id)arg2 ;
-(BOOL)setWallpaperStyle:(NSInteger)arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)setWallpaperStyleTransitionState:(struct ? )arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)shouldAutorotate;
-(BOOL)shouldDelayHomescreenStyleUpdates;
-(BOOL)updateIrisWallpaperForStaticMode;
-(CGFloat)contrastForVariant:(NSInteger)arg0 ;
-(CGFloat)contrastInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 ;
-(CGFloat)minimumWallpaperScaleForVariant:(NSInteger)arg0 ;
-(Class)_wallpaperViewClassForType:(NSInteger)arg0 ;
-(NSUInteger)_bestWallpaperViewInitializationOptionsForVariant:(NSInteger)arg0 shared:(BOOL)arg1 wallpaperOptions:(id)arg2 options:(NSUInteger)arg3 ;
-(NSUInteger)wallpaperDataTypesToRequestForUpdatingWallpaperViews;
-(id)_activeWallpaperView;
-(id)_blurViewsForVariant:(NSInteger)arg0 ;
-(id)_makeWallpaperViewWithConfiguration:(id)arg0 forVariant:(NSInteger)arg1 shared:(BOOL)arg2 options:(NSUInteger)arg3 ;
-(id)_newWallpaperEffectViewForVariant:(NSInteger)arg0 transitionState:(struct ? )arg1 ;
-(id)_observersForVariant:(NSInteger)arg0 ;
-(id)_sourceForFakeBlurView:(id)arg0 ;
-(id)_vendWallpaperViewForConfiguration:(id)arg0 forVariant:(NSInteger)arg1 shared:(BOOL)arg2 options:(NSUInteger)arg3 ;
-(id)_wallpaperViewForVariant:(NSInteger)arg0 ;
-(id)averageColorForVariant:(NSInteger)arg0 ;
-(id)averageColorInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 ;
-(id)averageColorInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 withSmudgeRadius:(CGFloat)arg2 ;
-(id)beginRequiringWithReason:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)legibilitySettingsForVariant:(NSInteger)arg0 ;
-(id)newFakeBlurViewForVariant:(NSInteger)arg0 style:(NSInteger)arg1 transformOptions:(NSUInteger)arg2 ;
-(id)substitutionWallpaperConfigurationForWallpaperConfiguration:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)suspendColorSamplingForReason:(id)arg0 ;
-(id)suspendWallpaperAnimationForReason:(id)arg0 ;
-(id)wallpaperConfigurationForUpdatingWallpaperViewsForVariant:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(id)wallpaperConfigurationForVariant:(NSInteger)arg0 includingValuesForTypes:(NSUInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(id)wallpaperConfigurationManager:(id)arg0 legibilitySettingsForVariant:(NSInteger)arg1 ;
-(id)wallpaperStyleInfoForVariant:(NSInteger)arg0 ;
-(id)wallpaperView:(id)arg0 wallpaperConfigurationIncludingValueTypes:(NSUInteger)arg1 ;
-(void)_accessibilityReduceTransparencyChanged:(id)arg0 ;
-(void)_beginDisallowRasterizationBlock;
-(void)_beginSuspendingMotionEffectsForStyleIfNeeded;
-(void)_clearWallpaperEffectView:(id)arg0 ;
-(void)_clearWallpaperView:(id)arg0 ;
-(void)_endDisallowRasterizationBlock;
-(void)_endSuspendingMotionEffectsForStyleIfNeeded;
-(void)_handleWallpaperChangedForVariant:(NSInteger)arg0 ;
-(void)_handleWallpaperLegibilitySettingsChanged:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)_invalidateWallpaperAssertion:(id)arg0 ;
-(void)_precacheStyles:(id)arg0 usingTraitCollection:(id)arg1 ;
-(void)_reconfigureBlurViewsForVariant:(NSInteger)arg0 ;
-(void)_registerFakeBlurView:(id)arg0 ;
-(void)_removeColorSamplingAssertion:(id)arg0 ;
-(void)_removeWallpaperAnimationAssertion:(id)arg0 ;
-(void)_removeWallpaperScaleAssertion:(id)arg0 withAnimationFactory:(id)arg1 ;
-(void)_setWallpaperHidden:(BOOL)arg0 variant:(NSInteger)arg1 reason:(id)arg2 ;
-(void)_suspendOrResumeColorSampling;
-(void)_suspendOrResumeWallpaperAnimation;
-(void)_unregisterFakeBlurView:(id)arg0 ;
-(void)_updateAndPrewarmWallpapers;
-(void)_updateBlurGeneration;
-(void)_updateBlurImagesForVariant:(NSInteger)arg0 ;
-(void)_updateHomeScreenWallpaperScaleWithAnimationFactory:(id)arg0 ;
-(void)_updateMotionEffectsForState:(struct ? )arg0 ;
-(void)_updateRasterizationState;
-(void)_updateSeparateWallpaperForVariants:(NSInteger)arg0 options:(NSUInteger)arg1 wallpaperMode:(NSInteger)arg2 ;
-(void)_updateSharedWallpaperWithOptions:(NSUInteger)arg0 wallpaperMode:(NSInteger)arg1 ;
-(void)_updateWallpaperForLocations:(NSInteger)arg0 options:(NSUInteger)arg1 wallpaperMode:(NSInteger)arg2 withCompletion:(id)arg3 ;
-(void)_updateWallpaperForWallpaperDimming:(BOOL)arg0 ;
-(void)_updateWallpaperForWallpaperMode:(NSInteger)arg0 ;
-(void)_updateWallpaperHidden;
-(void)_updateWallpaperParallax;
-(void)addObserver:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)beginDelayingHomescreenStyleChangesForReason:(id)arg0 ;
-(void)beginSimulatedLiveWallpaperTouchWithReason:(id)arg0 ;
-(void)cancelInProcessAnimations;
-(void)cleanupOldSharedWallpaper:(id)arg0 lockSreenWallpaper:(id)arg1 homeScreenWallpaper:(id)arg2 ;
-(void)dealloc;
-(void)endDelayingHomescreenStyleChangesForReason:(id)arg0 animationFactory:(id)arg1 ;
-(void)endSimulatedLiveWallpaperTouchWithReason:(id)arg0 ;
-(void)noteDidRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)noteWallpapersDidUpdate;
-(void)noteWillAnimateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)preheatWallpaperForVariant:(NSInteger)arg0 ;
-(void)providerLegibilitySettingsChanged:(id)arg0 ;
-(void)removeObserver:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)removeWallpaperRequiredAssertion:(id)arg0 ;
-(void)setAlpha:(CGFloat)arg0 forWallpaperVariant:(NSInteger)arg1 ;
-(void)setDisallowsRasterization:(BOOL)arg0 forVariant:(NSInteger)arg1 withReason:(id)arg2 ;
-(void)setLockscreenOnlyWallpaperAlpha:(CGFloat)arg0 ;
-(void)setLockscreenWallpaperContentsRect:(struct CGRect )arg0 ;
-(void)setWallpaperHidden:(BOOL)arg0 variant:(NSInteger)arg1 reason:(id)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateIrisWallpaperForInteractiveMode;
-(void)updateWallpaperForLocations:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)updateWallpaperForLocations:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)wallpaperConfigurationManager:(id)arg0 didChangeWallpaperConfigurationForVariants:(NSInteger)arg1 ;
-(void)wallpaperEffectImageForStyle:(NSInteger)arg0 variant:(NSInteger)arg1 traitCollection:(id)arg2 result:(id)arg3 ;
-(void)wallpaperView:(id)arg0 didChangeZoomFactor:(CGFloat)arg1 ;
-(void)wallpaperViewDidChangeWantsRasterization:(id)arg0 ;
-(void)wallpaperViewDidInvalidateBlurs:(id)arg0 ;


@end


#endif