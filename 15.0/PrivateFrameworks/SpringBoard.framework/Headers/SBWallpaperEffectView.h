// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWALLPAPEREFFECTVIEW_H
#define SBWALLPAPEREFFECTVIEW_H

@class SBWWallpaperEffectViewBase, NSString;
@protocol SBApplicationSceneBackgroundView;


#import "SBWallpaperController.h"

@interface SBWallpaperEffectView : SBWWallpaperEffectViewBase <SBApplicationSceneBackgroundView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsClassicModeBackground;
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions;
@property (readonly, nonatomic) SBWallpaperController *wallpaperController;
@property (nonatomic) NSInteger wallpaperStyle;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWallpaperVariant:(NSInteger)arg0 ;
-(id)initWithWallpaperVariant:(NSInteger)arg0 transformOptions:(NSUInteger)arg1 ;


@end


#endif