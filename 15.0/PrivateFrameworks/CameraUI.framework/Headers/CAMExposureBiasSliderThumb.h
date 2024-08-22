// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMEXPOSUREBIASSLIDERTHUMB_H
#define CAMEXPOSUREBIASSLIDERTHUMB_H

@class UIView;



@interface CAMExposureBiasSliderThumb : UIView

@property (readonly, nonatomic) CGFloat maxRadius;
@property (nonatomic) float normalizedExposureValue; // ivar: _normalizedExposureValue


-(CGFloat)_interpolatedValueWithMin:(CGFloat)arg0 mid:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(CGFloat)_sunRadius;
-(CGFloat)_sunRayLength;
-(CGFloat)_sunRaySpacing;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)tintColorDidChange;


@end


#endif