// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIMUTABLEWALLPAPERWINDOWSCENECLIENTSETTINGS_H
#define PBUIMUTABLEWALLPAPERWINDOWSCENECLIENTSETTINGS_H

@class UIMutableApplicationSceneClientSettings, UIColor, _UILegibilitySettings;



@interface PBUIMutableWallpaperWindowSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (copy, nonatomic) UIColor *homescreenAverageColor;
@property (nonatomic, getter=isHomescreenContentStatic) BOOL homescreenContentStatic;
@property (nonatomic) CGFloat homescreenContrast;
@property (copy, nonatomic) _UILegibilitySettings *homescreenLegibilitySettings;
@property (nonatomic) CGFloat homescreenMinimumWallpaperScale;
@property (nonatomic) BOOL homescreenParallaxEnabled;
@property (nonatomic) CGFloat homescreenParallaxFactor;
@property (nonatomic) CGFloat homescreenZoomFactor;
@property (nonatomic) NSInteger liveWallpaperPlaybackState;
@property (copy, nonatomic) UIColor *lockscreenAverageColor;
@property (nonatomic, getter=isLockscreenContentLiveWallpaper) BOOL lockscreenContentLiveWallpaper;
@property (nonatomic, getter=isLockscreenContentStatic) BOOL lockscreenContentStatic;
@property (nonatomic) CGFloat lockscreenContrast;
@property (copy, nonatomic) _UILegibilitySettings *lockscreenLegibilitySettings;
@property (nonatomic) CGFloat lockscreenMinimumWallpaperScale;
@property (nonatomic) BOOL lockscreenParallaxEnabled;
@property (nonatomic) CGFloat lockscreenParallaxFactor;
@property (nonatomic) CGFloat lockscreenZoomFactor;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif