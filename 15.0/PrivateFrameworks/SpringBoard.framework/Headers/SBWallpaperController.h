// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWALLPAPERCONTROLLER_H
#define SBWALLPAPERCONTROLLER_H

@class UIWindow, UIView, UIView<SBUIWallpaperOverlay>, NSMutableSet, NSMapTable, PTSingleTestRecipe, SBWWallpaperViewController, NSString, UITraitCollection, UIScreen, SBFWallpaperConfigurationManager, SBFWallpaperCoreAnalyticsLogger, UIGestureRecognizer;
@protocol SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, _UISettingsKeyObserver, SBWWallpaperPresentingDelegate, SBWallpaperReachabilityCoordinating, BSDescriptionProviding, SBWallpaperServerDelegate, SBFWallpaperViewDelegate, UIWindowDelegate, CSWallpaperOverlayHosting, SBWWallpaperPresenting, SBWWallpaperLegibilityProviding, BSInvalidatable, SBFIrisWallpaperPlaying;

#import <Foundation/Foundation.h>

#import "SBWallpaperAggdLogger.h"

@interface SBWallpaperController : NSObject <SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, _UISettingsKeyObserver, SBWWallpaperPresentingDelegate, SBWallpaperReachabilityCoordinating, BSDescriptionProviding, SBWallpaperServerDelegate, SBFWallpaperViewDelegate, UIWindowDelegate, CSWallpaperOverlayHosting, SBWWallpaperPresenting, SBWWallpaperLegibilityProviding>

 {
    UIWindow *_wallpaperWindow;
    UIView *_wallpaperContainerView;
    UIView *_wallpaperOverlayContainerView;
    NSInteger _displayedVariant;
    UIView<SBUIWallpaperOverlay> *_wallpaperOverlay;
    NSMutableSet *_activeOrientationSources;
    NSMapTable *_orientationProviders;
    PTSingleTestRecipe *_migrationTestRecipe;
    PTSingleTestRecipe *_reloadTestRecipe;
    SBWWallpaperViewController *_wallpaperViewController;
}


@property (readonly, nonatomic, getter=_WallpaperOrientationNotForYou) NSInteger _orientation; // ivar: _orientation
@property (readonly, nonatomic) NSInteger activeOrientationSource;
@property (retain, nonatomic) NSObject<BSInvalidatable> *batterySaverAnimationAssertion; // ivar: _batterySaverAnimationAssertion
@property (readonly, copy, nonatomic) NSString *cachingIdentifier; // ivar: _cachingIdentifier
@property (readonly, nonatomic) ? currentHomescreenStyleTransitionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat effectiveReachabilityYOffset;
@property (retain, nonatomic) UITraitCollection *fakeBlurViewOverrideTraitCollection; // ivar: _fakeBlurViewOverrideTraitCollection
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat homescreenWallpaperScale;
@property (readonly, nonatomic) NSObject<SBFIrisWallpaperPlaying> *irisWallpaperPlayer;
@property (readonly, nonatomic) NSObject<SBWWallpaperLegibilityProviding> *legibilityProvider; // ivar: _wallpaperLegibilityProvider
@property (nonatomic) CGFloat lockscreenWallpaperScale;
@property (readonly, nonatomic) CGFloat minimumHomescreenWallpaperScale;
@property (readonly, nonatomic) CGFloat minimumLockscreenWallpaperScale;
@property (readonly, nonatomic) NSObject<SBWWallpaperPresenting> *presenter; // ivar: _wallpaperPresenter
@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly) Class superclass;
@property (nonatomic) NSInteger variant;
@property (retain, nonatomic) SBWallpaperAggdLogger *wallpaperAggdLogger; // ivar: _wallpaperAggdLogger
@property (readonly, nonatomic) SBFWallpaperConfigurationManager *wallpaperConfigurationManager; // ivar: _wallpaperConfigurationManager
@property (retain, nonatomic) SBFWallpaperCoreAnalyticsLogger *wallpaperCoreAnalyticsLogger; // ivar: _wallpaperCoreAnalyticsLogger
@property (readonly, nonatomic) UIGestureRecognizer *wallpaperGestureRecognizer;
@property (weak, nonatomic) NSObject<SBWWallpaperPresentingDelegate> *wallpaperPresentingDelegate; // ivar: _wallpaperPresentingDelegate
@property (retain, nonatomic) NSObject<BSInvalidatable> *wallpaperStyleAnimationAssertion; // ivar: _wallpaperStyleAnimationAssertion
@property (nonatomic) CGFloat windowLevel;


+(id)accessAuthenticator;
+(id)sharedInstance;
-(BOOL)_isAcceptingOrientationChangesFromSource:(NSInteger)arg0 ;
-(BOOL)isWindowIgnoredForReachability:(id)arg0 ;
-(BOOL)removeWallpaperStyleForPriority:(NSInteger)arg0 forVariant:(NSInteger)arg1 withAnimationFactory:(id)arg2 ;
-(BOOL)setWallpaperStyle:(NSInteger)arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)setWallpaperStyleTransitionState:(struct ? )arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)updateIrisWallpaperForStaticMode;
-(CGFloat)contrastForVariant:(NSInteger)arg0 ;
-(CGFloat)contrastInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 ;
-(NSInteger)defaultInterfaceOrientationForSource:(NSInteger)arg0 ;
-(NSInteger)wallpaperPresenter:(id)arg0 requestsOrientationWithRefresh:(BOOL)arg1 ;
-(id)_wallpaperViewForVariant:(NSInteger)arg0 ;
-(id)_window;
-(id)activeInterfaceOrientationSourcesDescriptions;
-(id)averageColorForVariant:(NSInteger)arg0 ;
-(id)averageColorInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 ;
-(id)averageColorInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 withSmudgeRadius:(CGFloat)arg2 ;
-(id)beginRequiringWithReason:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithScreen:(id)arg0 orientation:(NSInteger)arg1 variant:(NSInteger)arg2 wallpaperConfigurationManager:(id)arg3 cachingIdentifier:(id)arg4 ;
-(id)initWithWallpaperConfigurationManager:(id)arg0 ;
-(id)initWithWallpaperConfigurationManager:(id)arg0 cachingIdentifier:(id)arg1 ;
-(id)legibilitySettingsForVariant:(NSInteger)arg0 ;
-(id)newFakeBlurViewForVariant:(NSInteger)arg0 style:(NSInteger)arg1 transformOptions:(NSUInteger)arg2 ;
-(id)relinquishHostingOfWallpaperOverlay;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)suspendColorSamplingForReason:(id)arg0 ;
-(id)suspendWallpaperAnimationForReason:(id)arg0 ;
-(id)wallpaperView:(id)arg0 wallpaperConfigurationIncludingValueTypes:(NSUInteger)arg1 ;
-(void)_applicationDidFinishLaunching:(id)arg0 ;
-(void)_batterySaverModeChanged:(id)arg0 ;
-(void)_forceUpdateToSpringBoardInterfaceOrientationWithAnimationDuration:(CGFloat)arg0 ;
-(void)_motionEffectsChanged;
-(void)_noteSignificantTimeChanged:(id)arg0 ;
-(void)_reloadWallpaperAndFlushCaches:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_saveWallpaperAggdKeysForLocations:(NSInteger)arg0 withConfiguration:(id)arg1 ;
-(void)_saveWallpaperCoreAnalyticsForLocations:(NSInteger)arg0 withConfiguration:(id)arg1 ;
-(void)_updateScreenBlanked;
-(void)_updateWallpaperForLocations:(NSInteger)arg0 options:(NSUInteger)arg1 wallpaperMode:(NSInteger)arg2 withCompletion:(id)arg3 ;
-(void)_updateWallpaperForLocations:(NSInteger)arg0 options:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)activateOrientationSource:(NSInteger)arg0 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)addReachabilityObserver:(id)arg0 ;
-(void)beginDelayingHomescreenStyleChangesForReason:(id)arg0 ;
-(void)cancelInProcessAnimations;
-(void)deactivateOrientationSource:(NSInteger)arg0 ;
-(void)dealloc;
-(void)endDelayingHomescreenStyleChangesForReason:(id)arg0 animationFactory:(id)arg1 ;
-(void)orientationSource:(NSInteger)arg0 didRotateFromInterfaceOrientation:(NSInteger)arg1 ;
-(void)orientationSource:(NSInteger)arg0 willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)orientationSource:(NSInteger)arg0 willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(CGFloat)arg2 ;
-(void)preheatWallpaperForVariant:(NSInteger)arg0 ;
-(void)providerLegibilitySettingsChanged:(id)arg0 ;
-(void)removeObserver:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)removeReachabilityObserver:(id)arg0 ;
-(void)setAlpha:(CGFloat)arg0 forWallpaperVariant:(NSInteger)arg1 ;
-(void)setDisallowsRasterization:(BOOL)arg0 forVariant:(NSInteger)arg1 withReason:(id)arg2 ;
-(void)setLockscreenOnlyWallpaperAlpha:(CGFloat)arg0 ;
-(void)setLockscreenWallpaperContentsRect:(struct CGRect )arg0 ;
-(void)setOrientationProvider:(id)arg0 forSource:(NSInteger)arg1 ;
-(void)setWallpaperHidden:(BOOL)arg0 variant:(NSInteger)arg1 reason:(id)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)startHostingWallpaperOverlay:(id)arg0 ;
-(void)updateIrisWallpaperForInteractiveMode;
-(void)updateOrientationAfterSourceChange;
-(void)updateWallpaperForLocations:(NSInteger)arg0 wallpaperMode:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)updateWallpaperForLocations:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)wallpaperPresenter:(id)arg0 didChangeWallpaperForLocations:(NSInteger)arg1 withConfiguration:(id)arg2 ;
-(void)wallpaperPresenterDidCompleteWallpaperChange:(id)arg0 ;
-(void)wallpaperServer:(id)arg0 acquireActiveWallpaperSceneAssertionWithAction:(id)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchContentCutoutBoundsForVariant:(NSInteger)arg1 orientation:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)wallpaperServer:(id)arg0 fetchOriginalImageDataForVariant:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchOriginalVideoURLDataForVariant:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 fetchThumbnailDataForVariant:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)wallpaperServer:(id)arg0 restoreDefaultWallpaperWithCompletionHandler:(id)arg1 ;
-(void)wallpaperServer:(id)arg0 setWallpaperColor:(id)arg1 darkColor:(id)arg2 forVariants:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)wallpaperServer:(id)arg0 setWallpaperColorName:(id)arg1 forVariants:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)wallpaperServer:(id)arg0 setWallpaperGradient:(id)arg1 forVariants:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)wallpaperServer:(id)arg0 setWallpaperVideoWithWallpaperMode:(id)arg1 cropRect:(struct CGRect )arg2 wallpaperMode:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)wallpaperView:(id)arg0 didChangeZoomFactor:(CGFloat)arg1 ;
-(void)wallpaperViewDidChangeWantsRasterization:(id)arg0 ;
-(void)wallpaperViewDidInvalidateBlurs:(id)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif