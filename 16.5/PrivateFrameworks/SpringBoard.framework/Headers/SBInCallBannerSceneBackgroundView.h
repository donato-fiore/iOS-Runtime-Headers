// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINCALLBANNERSCENEBACKGROUNDVIEW_H
#define SBINCALLBANNERSCENEBACKGROUNDVIEW_H

@class UIView, _UIBackdropView, NSString;
@protocol SBApplicationSceneBackgroundView;


#import "SBWallpaperEffectView.h"

@interface SBInCallBannerSceneBackgroundView : UIView <SBApplicationSceneBackgroundView>

 {
    _UIBackdropView *_backdropView;
    NSUInteger _transformOptions;
    SBWallpaperEffectView *_wallpaperEffectView;
    NSInteger _wallpaperVariant;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen; // ivar: _fullscreen
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsClassicModeBackground;
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions;
@property (nonatomic) CGFloat wallpaperAlpha; // ivar: _wallpaperAlpha
@property (nonatomic) NSInteger wallpaperStyle; // ivar: _wallpaperStyle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 wallpaperVariant:(NSInteger)arg1 transformOptions:(NSUInteger)arg2 ;
-(void)_updateBackdropView;
-(void)layoutSubviews;


@end


#endif