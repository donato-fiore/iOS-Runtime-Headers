// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKASTRONOMYLOCATIONDOT_H
#define NTKASTRONOMYLOCATIONDOT_H

@class UIView, UIImageView, CLKDevice, UIColor;



@interface NTKAstronomyLocationDot : UIView {
    UIView *_outerDot;
    UIImageView *_innerDotImageView;
}


@property (nonatomic) BOOL animating; // ivar: _animating
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (retain, nonatomic) UIColor *innerDotColor; // ivar: _innerDotColor
@property (nonatomic) CGFloat innerDotDiameter; // ivar: _innerDotDiameter
@property (retain, nonatomic) UIColor *outerDotColor; // ivar: _outerDotColor
@property (nonatomic) CGFloat outerDotDiameter; // ivar: _outerDotDiameter
@property (nonatomic) CGFloat pulseAlphaDelay; // ivar: _pulseAlphaDelay
@property (nonatomic) CGFloat pulseDuration; // ivar: _pulseDuration


+(CGFloat)_defaultInnerDotDiameterForDevice:(id)arg0 ;
+(CGFloat)_defaultOuterDotDiameterForDevice:(id)arg0 ;
+(CGFloat)defaultPulseAlphaDelay;
+(CGFloat)defaultPulseDuration;
+(id)_defaultColor;
+(struct CGSize )_defaultSizeForDevice:(id)arg0 ;
-(id)initForDevice:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 ;
-(void)_generateInnerDotImage;
-(void)layoutSubviews;
-(void)startAnimation;
-(void)stopAnimation;


@end


#endif