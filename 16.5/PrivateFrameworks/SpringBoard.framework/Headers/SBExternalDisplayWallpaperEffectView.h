// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYWALLPAPEREFFECTVIEW_H
#define SBEXTERNALDISPLAYWALLPAPEREFFECTVIEW_H

@class UIView;
@protocol SBExternalDisplayWallpaperConfigurations;


#import "SBWallpaperEffectView.h"

@interface SBExternalDisplayWallpaperEffectView : UIView

@property (retain, nonatomic) UIView *blurBackgroundView; // ivar: _blurBackgroundView
@property (weak, nonatomic) NSObject<SBExternalDisplayWallpaperConfigurations> *delegate; // ivar: _delegate
@property (retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // ivar: _wallpaperEffectView


-(BOOL)enableBlurEffects;
-(id)initExternalDisplayWithDelegate:(id)arg0 wallpaperVariant:(NSInteger)arg1 transformOptions:(NSUInteger)arg2 ;


@end


#endif