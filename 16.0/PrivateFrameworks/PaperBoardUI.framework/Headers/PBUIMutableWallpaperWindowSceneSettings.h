// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIMUTABLEWALLPAPERWINDOWSCENESETTINGS_H
#define PBUIMUTABLEWALLPAPERWINDOWSCENESETTINGS_H

@class UIMutableApplicationSceneSettings, NSString;


#import "PBUIWallpaperWindowSceneStyleTransitionState.h"

@interface PBUIMutableWallpaperWindowSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) NSString *cachingIdentifier;
@property (nonatomic) BOOL disallowHomescreenRasterization;
@property (nonatomic) BOOL disallowLockscreenRasterization;
@property (nonatomic) BOOL homescreenStyleChangesDelayed;
@property (copy, nonatomic) PBUIWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property (nonatomic) CGFloat homescreenWallpaperAlpha;
@property (nonatomic) BOOL homescreenWallpaperHidden;
@property (nonatomic) BOOL liveWallpaperInteractive;
@property (nonatomic) BOOL liveWallpaperTouchActive;
@property (nonatomic) CGFloat lockscreenOnlyWallpaperAlpha;
@property (copy, nonatomic) PBUIWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property (nonatomic) CGFloat lockscreenWallpaperAlpha;
@property (nonatomic) CGRect lockscreenWallpaperContentsRect;
@property (nonatomic) BOOL lockscreenWallpaperHidden;
@property (nonatomic) BOOL wallpaperAnimationSuspended;
@property (nonatomic) BOOL wallpaperRequired;
@property (nonatomic) NSInteger wallpaperVariant;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif