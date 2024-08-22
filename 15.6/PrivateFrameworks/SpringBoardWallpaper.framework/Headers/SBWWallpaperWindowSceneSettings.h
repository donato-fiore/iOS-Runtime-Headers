// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWWALLPAPERWINDOWSCENESETTINGS_H
#define SBWWALLPAPERWINDOWSCENESETTINGS_H

@class UIApplicationSceneSettings, NSString;


#import "SBWWallpaperWindowSceneStyleTransitionState.h"

@interface SBWWallpaperWindowSceneSettings : UIApplicationSceneSettings

@property (readonly, copy, nonatomic) NSString *cachingIdentifier;
@property (readonly, nonatomic) BOOL colorSamplingSuspended;
@property (readonly, nonatomic) BOOL disallowHomescreenRasterization;
@property (readonly, nonatomic) BOOL disallowLockscreenRasterization;
@property (readonly, nonatomic) BOOL homescreenStyleChangesDelayed;
@property (readonly, copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property (readonly, nonatomic) CGFloat homescreenWallpaperAlpha;
@property (readonly, nonatomic) BOOL homescreenWallpaperHidden;
@property (readonly, nonatomic) CGFloat homescreenWallpaperScale;
@property (readonly, nonatomic) BOOL liveWallpaperInteractive;
@property (readonly, nonatomic) BOOL liveWallpaperTouchActive;
@property (readonly, nonatomic) CGFloat lockscreenOnlyWallpaperAlpha;
@property (readonly, copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property (readonly, nonatomic) CGFloat lockscreenWallpaperAlpha;
@property (readonly, nonatomic) CGRect lockscreenWallpaperContentsRect;
@property (readonly, nonatomic) BOOL lockscreenWallpaperHidden;
@property (readonly, nonatomic) CGFloat lockscreenWallpaperScale;
@property (readonly, nonatomic) BOOL wallpaperAnimationSuspended;
@property (readonly, nonatomic) BOOL wallpaperRequired;
@property (readonly, nonatomic) NSInteger wallpaperVariant;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif