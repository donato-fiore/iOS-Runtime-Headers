// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWWALLPAPERWINDOWSCENE_H
#define SBWWALLPAPERWINDOWSCENE_H

@class UIWindowScene, NSString, UIColor, _UILegibilitySettings;


#import "SBWImageSlotRepository.h"
#import "SBWWallpaperWindowSceneStyleTransitionState.h"

@interface SBWWallpaperWindowScene : UIWindowScene {
    SBWImageSlotRepository *_wallpaperEffectImageSlots;
}


@property (readonly, copy, nonatomic) NSString *cachingIdentifier;
@property (readonly, nonatomic) BOOL colorSamplingSuspended;
@property (readonly, nonatomic) BOOL disallowHomescreenRasterization;
@property (readonly, nonatomic) BOOL disallowLockscreenRasterization;
@property (copy, nonatomic) UIColor *homescreenAverageColor;
@property (nonatomic, getter=isHomescreenContentStatic) BOOL homescreenContentStatic;
@property (nonatomic) CGFloat homescreenContrast;
@property (copy, nonatomic) _UILegibilitySettings *homescreenLegibilitySettings;
@property (nonatomic) CGFloat homescreenMinimumWallpaperScale;
@property (nonatomic) BOOL homescreenParallaxEnabled;
@property (nonatomic) CGFloat homescreenParallaxFactor;
@property (readonly, nonatomic) BOOL homescreenStyleChangesDelayed;
@property (readonly, copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property (readonly, nonatomic) CGFloat homescreenWallpaperAlpha;
@property (readonly, nonatomic) BOOL homescreenWallpaperHidden; // ivar: _homescreenWallpaperHidden
@property (readonly, nonatomic) CGFloat homescreenWallpaperScale;
@property (nonatomic) CGFloat homescreenZoomFactor;
@property (readonly, nonatomic) BOOL liveWallpaperInteractive;
@property (nonatomic) NSInteger liveWallpaperPlaybackState;
@property (readonly, nonatomic) BOOL liveWallpaperTouchActive;
@property (copy, nonatomic) UIColor *lockscreenAverageColor;
@property (nonatomic, getter=isLockscreenContentLiveWallpaper) BOOL lockscreenContentIsLiveWallpaper;
@property (nonatomic, getter=isLockscreenContentStatic) BOOL lockscreenContentStatic;
@property (nonatomic) CGFloat lockscreenContrast;
@property (copy, nonatomic) _UILegibilitySettings *lockscreenLegibilitySettings;
@property (nonatomic) CGFloat lockscreenMinimumWallpaperScale;
@property (readonly, nonatomic) CGFloat lockscreenOnlyWallpaperAlpha;
@property (nonatomic) BOOL lockscreenParallaxEnabled;
@property (nonatomic) CGFloat lockscreenParallaxFactor;
@property (readonly, copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property (readonly, nonatomic) CGFloat lockscreenWallpaperAlpha;
@property (readonly, nonatomic) CGRect lockscreenWallpaperContentsRect;
@property (readonly, nonatomic) BOOL lockscreenWallpaperHidden; // ivar: _lockscreenWallpaperHidden
@property (readonly, nonatomic) CGFloat lockscreenWallpaperScale;
@property (nonatomic) CGFloat lockscreenZoomFactor;
@property (readonly, nonatomic) BOOL wallpaperAnimationSuspended;
@property (readonly, nonatomic) BOOL wallpaperRequired;
@property (readonly, nonatomic) NSInteger wallpaperVariant;


-(id)_wallpaperSceneClientSettings;
-(id)_wallpaperSceneSettings;
-(void)_handleImageSlotRequestAction:(id)arg0 ;
-(void)_handlePreheatAction:(id)arg0 ;
-(void)_handleUpdateAndPrewarmAction:(id)arg0 ;
-(void)_handleUpdateLocationsAction:(id)arg0 ;
-(void)_handleWallpaperEffectImageRequestAction:(id)arg0 ;
-(void)_updateColorSamplingSuspended:(BOOL)arg0 ;
-(void)_updateDisallowRasterizationForHomescreen:(BOOL)arg0 lockscreen:(BOOL)arg1 ;
-(void)_updateHomescreenStyleChangesDelayed:(BOOL)arg0 ;
-(void)_updateHomescreenStyleTransitionStateTo:(id)arg0 from:(id)arg1 ;
-(void)_updateHomescreenWallpaperAlpha:(CGFloat)arg0 ;
-(void)_updateHomescreenWallpaperScale:(CGFloat)arg0 ;
-(void)_updateLiveWallpaperInteractive:(BOOL)arg0 ;
-(void)_updateLiveWallpaperTouchActive:(BOOL)arg0 ;
-(void)_updateLockscreenOnlyWallpaperAlpha:(CGFloat)arg0 ;
-(void)_updateLockscreenStyleTransitionStateTo:(id)arg0 from:(id)arg1 ;
-(void)_updateLockscreenWallpaperAlpha:(CGFloat)arg0 ;
-(void)_updateLockscreenWallpaperContentsRect:(struct CGRect )arg0 ;
-(void)_updateLockscreenWallpaperScale:(CGFloat)arg0 ;
-(void)_updateWallpaperAnimationSuspended:(BOOL)arg0 ;
-(void)_updateWallpaperHiddenForHomescreen:(BOOL)arg0 lockscreen:(BOOL)arg1 ;
-(void)_updateWallpaperRequired:(BOOL)arg0 ;
-(void)_updateWallpaperSceneClientSettingsWithBlock:(id)arg0 ;
-(void)_updateWallpaperVariant:(NSInteger)arg0 inAnimationSettings:(id)arg1 outAnimationSettings:(id)arg2 ;
-(void)noteWallpaperDidChangeForVariant:(NSInteger)arg0 ;
-(void)noteWallpaperDidCompleteWallpaperChange;
-(void)noteWallpaperWillChangeForVariant:(NSInteger)arg0 ;


@end


#endif