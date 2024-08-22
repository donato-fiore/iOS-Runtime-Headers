// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIWALLPAPERWINDOWSCENECLIENTSETTINGS_H
#define PBUIWALLPAPERWINDOWSCENECLIENTSETTINGS_H

@class UIApplicationSceneClientSettings, UIColor, _UILegibilitySettings;



@interface PBUIWallpaperWindowSceneClientSettings : UIApplicationSceneClientSettings

@property (readonly, copy, nonatomic) UIColor *homescreenAverageColor;
@property (readonly, nonatomic, getter=isHomescreenContentStatic) BOOL homescreenContentStatic;
@property (readonly, nonatomic) CGFloat homescreenContrast;
@property (readonly, copy, nonatomic) _UILegibilitySettings *homescreenLegibilitySettings;
@property (readonly, nonatomic) CGFloat homescreenMinimumWallpaperScale;
@property (readonly, nonatomic) BOOL homescreenParallaxEnabled;
@property (readonly, nonatomic) CGFloat homescreenParallaxFactor;
@property (readonly, nonatomic) CGFloat homescreenZoomFactor;
@property (readonly, nonatomic) NSInteger liveWallpaperPlaybackState;
@property (readonly, copy, nonatomic) UIColor *lockscreenAverageColor;
@property (readonly, nonatomic, getter=isLockscreenContentLiveWallpaper) BOOL lockscreenContentLiveWallpaper;
@property (readonly, nonatomic, getter=isLockscreenContentStatic) BOOL lockscreenContentStatic;
@property (readonly, nonatomic) CGFloat lockscreenContrast;
@property (readonly, copy, nonatomic) _UILegibilitySettings *lockscreenLegibilitySettings;
@property (readonly, nonatomic) CGFloat lockscreenMinimumWallpaperScale;
@property (readonly, nonatomic) BOOL lockscreenParallaxEnabled;
@property (readonly, nonatomic) CGFloat lockscreenParallaxFactor;
@property (readonly, nonatomic) CGFloat lockscreenZoomFactor;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif