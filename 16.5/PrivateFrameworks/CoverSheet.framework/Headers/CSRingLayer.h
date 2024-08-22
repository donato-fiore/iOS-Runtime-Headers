// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSRINGLAYER_H
#define CSRINGLAYER_H

@class CAShapeLayer;



@interface CSRingLayer : CAShapeLayer



+(id)ringLayerWithBlendMode:(id)arg0 diameter:(CGFloat)arg1 lineWidth:(CGFloat)arg2 brightnessAmount:(CGFloat)arg3 saturationAmount:(CGFloat)arg4 ;
+(id)ringWithDiameter:(CGFloat)arg0 lineWidth:(CGFloat)arg1 ;
+(struct CGPath *)newPathForDiameter:(CGFloat)arg0 lineWidth:(CGFloat)arg1 ;
-(void)setFillFraction:(CGFloat)arg0 ;


@end


#endif