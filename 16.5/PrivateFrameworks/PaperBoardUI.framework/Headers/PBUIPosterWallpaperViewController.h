// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIPOSTERWALLPAPERVIEWCONTROLLER_H
#define PBUIPOSTERWALLPAPERVIEWCONTROLLER_H

@class UIViewController, PRSWallpaperObserver, BSCompoundAssertion, UIColor, NSString, _UILegibilitySettings;
@protocol PBUIPosterComponentDelegate, BSDescriptionProviding, PBUIPosterComponent, BSInvalidatable;


#import "PBUIPosterViewController.h"
#import "PBUIDynamicProviderWrapper.h"

@interface PBUIPosterWallpaperViewController : UIViewController <PBUIPosterComponentDelegate, BSDescriptionProviding, PBUIPosterComponent>

 {
    PRSWallpaperObserver *_posterObserver;
    PBUIPosterViewController *_posterController;
    PBUIDynamicProviderWrapper *_activeVariantReplicaProvider;
    PBUIDynamicProviderWrapper *_homePosterReplicaProvider;
    PBUIDynamicProviderWrapper *_lockPosterReplicaProvider;
    PBUIDynamicProviderWrapper *_lockFloatingLayerPosterReplicaProvider;
    BSCompoundAssertion *_wallpaperRequiredAssertion;
    id<BSInvalidatable> *_keepForegroundRunning;
    id<BSInvalidatable> *_transitioningLockState;
    NSInteger _activeOrientation;
    NSInteger _activeStyles;
}


@property (nonatomic) NSInteger activeVariant; // ivar: _activeVariant
@property (readonly, nonatomic) UIColor *averageColor;
@property (readonly, nonatomic) CGFloat averageContrast;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PBUIPosterComponentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) NSUInteger posterSignificantEventsCounter;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat unlockProgress; // ivar: _unlockProgress
@property (readonly, nonatomic) NSInteger variant;
@property (nonatomic) BOOL wakeSourceIsSwipeToUnlock; // ivar: _wakeSourceIsSwipeToUnlock


-(BOOL)_canShowWhileLocked;
-(BOOL)homeScreenReflectsLockScreen;
-(BOOL)posterHandlesWakeAnimation;
-(CGFloat)averageContrastForVariant:(NSInteger)arg0 ;
-(NSUInteger)significantEventsCounterForPosterWithIdentifier:(id)arg0 ;
-(id)averageColorForVariant:(NSInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)legibilitySettingsForVariant:(NSInteger)arg0 ;
-(id)portalProviderForFloatingLayer;
-(id)portalSourceProviderForActiveVariant;
-(id)portalSourceProviderForVariant:(NSInteger)arg0 ;
-(id)replicaProviderForVariant:(NSInteger)arg0 ;
-(id)requireWallpaperRasterizationWithReason:(id)arg0 ;
-(id)requireWallpaperWithReason:(id)arg0 ;
-(id)scenesForBacklightSession;
-(id)snapshotSourceProviderForActiveVariant;
-(id)snapshotSourceProviderForVariant:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_posterConfigsDidChange:(id)arg0 withTransition:(id)arg1 ;
-(void)_posterControllerDidChange;
-(void)_updateStyle;
-(void)finishUnlockWithAnimationParameters:(struct CGSize )arg0 ;
-(void)invalidate;
-(void)noteUserTapOccurred;
-(void)posterComponent:(id)arg0 didUpdateLegibilitySettings:(id)arg1 ;
-(void)removeWallpaperStyleForPriority:(NSInteger)arg0 forVariant:(NSInteger)arg1 ;
-(void)rotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)setWallpaperObscured:(BOOL)arg0 ;
-(void)setWallpaperStyle:(NSInteger)arg0 forPriority:(NSInteger)arg1 forVariant:(NSInteger)arg2 ;
-(void)triggerSceneUpdate;
-(void)updateAssociatedPosterConfiguration:(id)arg0 withAnimationSettings:(id)arg1 ;
-(void)updateConfiguration:(id)arg0 withAnimationSettings:(id)arg1 ;
-(void)updateLegacyPoster;
-(void)viewDidLoad;


@end


#endif