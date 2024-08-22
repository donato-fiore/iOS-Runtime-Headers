// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONSCENEBACKGROUNDVIEW_H
#define SBAPPLICATIONSCENEBACKGROUNDVIEW_H

@class UIView, NSString;
@protocol SBApplicationSceneBackgroundView;


#import "SBWallpaperEffectView.h"

@interface SBApplicationSceneBackgroundView : UIView <SBApplicationSceneBackgroundView>

 {
    SBWallpaperEffectView *_backgroundWallpaperEffectView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen; // ivar: _fullscreen
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsClassicModeBackground; // ivar: _needsClassicModeBackground
@property (nonatomic) BOOL shouldUseBrightMaterial; // ivar: _shouldUseBrightMaterial
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions; // ivar: _transformOptions
@property (nonatomic) NSInteger wallpaperStyle; // ivar: _wallpaperStyle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupBackground;


@end


#endif