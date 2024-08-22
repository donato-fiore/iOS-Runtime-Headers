// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRANSIENTOVERLAYWALLPAPEREFFECTVIEW_H
#define SBTRANSIENTOVERLAYWALLPAPEREFFECTVIEW_H

@class UIView, _UIDirectionalRotationView;


#import "SBWallpaperEffectView.h"

@interface SBTransientOverlayWallpaperEffectView : UIView {
    SBWallpaperEffectView *_wallpaperEffectView;
    _UIDirectionalRotationView *_wallpaperRotationView;
}


@property (nonatomic) NSInteger containerOrientation; // ivar: _containerOrientation
@property (nonatomic) NSInteger wallpaperStyle;


-(BOOL)prepareToAnimateToTransitionState:(struct ? *)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 wallpaperVariant:(NSInteger)arg1 ;
-(struct CATransform3D )_currentWallpaperTransform;
-(void)_updateWallpaperGeometry;
-(void)layoutSubviews;
-(void)setTransitionState:(struct ? )arg0 ;


@end


#endif