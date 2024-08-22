// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIPOSTERWALLPAPERREMOTEVIEWCONTROLLER_H
#define PBUIPOSTERWALLPAPERREMOTEVIEWCONTROLLER_H

@class UIViewController, UIView, NSMutableSet, BSCompoundAssertion, NSHashTable, NSString;
@protocol BSDescriptionProviding, PBUIWallpaperConfigurationManagerDelegate, PBUIPosterComponentDelegate, PBUIFakeBlurImageProviding, PBUIFakeBlurViewRegistering, PBUIWallpaperPresenting, PBUIWallpaperLegibilityProviding, PBUIWallpaperReachabilityCoordinating, PBUIWallpaperPresentingDelegate;


#import "PBUIPosterWallpaperViewController.h"
#import "PBUIPosterPortalImageProvider.h"
#import "PBUIPosterActiveVariantImageProvider.h"
#import "PBUIWallpaperConfigurationManager.h"

@interface PBUIPosterWallpaperRemoteViewController : UIViewController <BSDescriptionProviding, PBUIWallpaperConfigurationManagerDelegate, PBUIPosterComponentDelegate, PBUIFakeBlurImageProviding, PBUIFakeBlurViewRegistering, PBUIWallpaperPresenting, PBUIWallpaperLegibilityProviding>

 {
    UIView *_containerView;
    PBUIPosterWallpaperViewController *_viewController;
    NSMutableSet *_stateCaptureHandles;
    PBUIPosterPortalImageProvider *_portalImageProvider;
    PBUIPosterActiveVariantImageProvider *_activeVariantProvider;
    BSCompoundAssertion *_animationSuspendedAssertion;
    os_unfair_lock_s _observerLock;
    NSHashTable *_observers;
    NSHashTable *_effectViews;
    NSHashTable *_wallpaperScaleAssertions;
}


@property (nonatomic) NSInteger activeVariant; // ivar: _activeVariant
@property (readonly, nonatomic) ? currentHomescreenStyleTransitionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat homescreenWallpaperScale;
@property (readonly, nonatomic) CGFloat lockscreenWallpaperScale;
@property (readonly, nonatomic) CGFloat minimumHomescreenWallpaperScale;
@property (readonly, nonatomic) CGFloat minimumLockscreenWallpaperScale;
@property (retain, nonatomic) NSObject<PBUIWallpaperReachabilityCoordinating> *reachabilityCoordinator; // ivar: _reachabilityCoordinator
@property (readonly) Class superclass;
@property (retain, nonatomic) PBUIWallpaperConfigurationManager *wallpaperConfigurationManager; // ivar: _wallpaperConfigurationManager
@property (weak, nonatomic) NSObject<PBUIWallpaperPresentingDelegate> *wallpaperPresentingDelegate; // ivar: _wallpaperPresentingDelegate


+(BOOL)supportsLandscapeWallpaperContents;
-(BOOL)_canShowWhileLocked;
-(BOOL)homeScreenPosterMirrorsLock;
-(BOOL)parallaxEnabledForVariant:(NSInteger)arg0 ;
-(BOOL)posterHandlesWakeAnimation;
-(BOOL)removeWallpaperStyleForPriority:(NSInteger)arg0 forVariant:(NSInteger)arg1 withAnimationFactory:(id)arg2 ;
-(BOOL)setWallpaperStyle:(NSInteger)arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)setWallpaperStyleTransitionState:(struct ? )arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(BOOL)updateImageProviderView:(id)arg0 withImage:(id)arg1 ;
-(CGFloat)_wallpaperScaleForVariant:(NSInteger)arg0 ;
-(CGFloat)contrastForVariant:(NSInteger)arg0 ;
-(CGFloat)contrastInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 ;
-(CGFloat)parallaxFactorForVariant:(NSInteger)arg0 ;
-(CGFloat)zoomFactorForVariant:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_observers;
-(id)_wallpaperScaleAssertionForVariant:(NSInteger)arg0 scale:(CGFloat)arg1 ;
-(id)averageColorForVariant:(NSInteger)arg0 ;
-(id)averageColorInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 ;
-(id)averageColorInRect:(struct CGRect )arg0 forVariant:(NSInteger)arg1 withSmudgeRadius:(CGFloat)arg2 ;
-(id)createWallpaperFloatingViewForReason:(id)arg0 ignoreReplica:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)imageForWallpaperStyle:(*NSInteger)arg0 variant:(NSInteger)arg1 traitCollection:(id)arg2 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)legibilitySettingsForVariant:(NSInteger)arg0 ;
-(id)newFakeBlurViewForVariant:(NSInteger)arg0 style:(NSInteger)arg1 transformOptions:(NSUInteger)arg2 ;
-(id)newImageProviderView;
-(id)requireWallpaperRasterizationWithReason:(id)arg0 ;
-(id)requireWallpaperWithReason:(id)arg0 ;
-(id)scenesForBacklightSession;
-(id)scenesForInactiveEnvironmentSession;
-(id)setWallpaperFloatingLayerContainerView:(id)arg0 forReason:(id)arg1 withAnimationFactory:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)suspendWallpaperAnimationForReason:(id)arg0 ;
-(void)_addStateCaptureHandlers;
-(void)_registerFakeBlurView:(id)arg0 ;
-(void)_unregisterFakeBlurView:(id)arg0 ;
-(void)_updateAnimationSuspended;
-(void)_updateFallbackView;
-(void)_updateWallpaperScaleWithAnimationFactory:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)cancelInProcessAnimations;
-(void)dealloc;
-(void)noteDidRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)noteWillAnimateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)posterComponent:(id)arg0 didUpdateLegibilitySettings:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 forVariant:(NSInteger)arg1 ;
-(void)setAssociatedPosterConfiguration:(id)arg0 withAnimationSettings:(id)arg1 ;
-(void)setConfiguration:(id)arg0 withAnimationSettings:(id)arg1 ;
-(void)triggerPosterSignificantEvent;
-(void)triggerSceneUpdate;
-(void)updateWallpaperAnimationWithIconFlyInTension:(CGFloat)arg0 friction:(CGFloat)arg1 ;
-(void)updateWallpaperAnimationWithProgress:(CGFloat)arg0 ;
-(void)updateWallpaperAnimationWithWakeSourceIsSwipeToUnlock:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)wallpaperConfigurationManager:(id)arg0 didChangeWallpaperConfigurationForVariants:(NSInteger)arg1 ;


@end


#endif