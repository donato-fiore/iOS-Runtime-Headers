// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERPOSTERPARALLAXVIEW_H
#define PUWALLPAPERPOSTERPARALLAXVIEW_H

@class UIView;


#import "PUWallpaperPosterMotionEffect.h"

@interface PUWallpaperPosterParallaxView : UIView

@property (retain, nonatomic) PUWallpaperPosterMotionEffect *motionEffect; // ivar: _motionEffect
@property (readonly, copy, nonatomic) id *parallaxHandler; // ivar: _parallaxHandler


-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg0 forMotionEffect:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 parallaxHandler:(id)arg1 ;
-(void)startParallax;
-(void)stopParallax;


@end


#endif