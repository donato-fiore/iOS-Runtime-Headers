// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNIASTRONOMYLOCATIONDOT_H
#define NUNIASTRONOMYLOCATIONDOT_H

@class UIView, UIImageView, UIColor;


#import "NUNIAstronomyLocationDotConfiguration.h"

@interface NUNIAstronomyLocationDot : UIView {
    UIView *_outerDot;
    UIImageView *_innerDotImageView;
    NUNIAstronomyLocationDotConfiguration *_configuration;
}


@property (nonatomic) BOOL animating; // ivar: _animating
@property (retain, nonatomic) UIColor *innerDotColor; // ivar: _innerDotColor
@property (nonatomic) CGFloat innerDotDiameter; // ivar: _innerDotDiameter
@property (retain, nonatomic) UIColor *outerDotColor; // ivar: _outerDotColor
@property (nonatomic) CGFloat outerDotDiameter; // ivar: _outerDotDiameter
@property (nonatomic) CGFloat pulseAlphaDelay; // ivar: _pulseAlphaDelay
@property (nonatomic) CGFloat pulseDuration; // ivar: _pulseDuration


+(CGFloat)defaultPulseAlphaDelay;
+(CGFloat)defaultPulseDuration;
+(id)_defaultColor;
-(CGFloat)screenScale;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(void)_generateInnerDotImage;
-(void)layoutSubviews;
-(void)startAnimation;
-(void)startAnimationWithCompletionBlock:(id)arg0 ;
-(void)stopAnimation;


@end


#endif