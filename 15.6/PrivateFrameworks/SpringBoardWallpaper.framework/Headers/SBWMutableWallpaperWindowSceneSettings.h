// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWMUTABLEWALLPAPERWINDOWSCENESETTINGS_H
#define SBWMUTABLEWALLPAPERWINDOWSCENESETTINGS_H

@class UIMutableApplicationSceneSettings, NSString;


#import "SBWWallpaperWindowSceneStyleTransitionState.h"

@interface SBWMutableWallpaperWindowSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) NSString *cachingIdentifier;
@property (nonatomic) BOOL colorSamplingSuspended;
@property (nonatomic) BOOL disallowHomescreenRasterization;
@property (nonatomic) BOOL disallowLockscreenRasterization;
@property (nonatomic) BOOL homescreenStyleChangesDelayed;
@property (copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property (nonatomic) CGFloat homescreenWallpaperAlpha;
@property (nonatomic) BOOL homescreenWallpaperHidden;
@property (nonatomic) CGFloat homescreenWallpaperScale;
@property (nonatomic) BOOL liveWallpaperInteractive;
@property (nonatomic) BOOL liveWallpaperTouchActive;
@property (nonatomic) CGFloat lockscreenOnlyWallpaperAlpha;
@property (copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property (nonatomic) CGFloat lockscreenWallpaperAlpha;
@property (nonatomic) CGRect lockscreenWallpaperContentsRect;
@property (nonatomic) BOOL lockscreenWallpaperHidden;
@property (nonatomic) CGFloat lockscreenWallpaperScale;
@property (nonatomic) BOOL wallpaperAnimationSuspended;
@property (nonatomic) BOOL wallpaperRequired;
@property (nonatomic) NSInteger wallpaperVariant;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif