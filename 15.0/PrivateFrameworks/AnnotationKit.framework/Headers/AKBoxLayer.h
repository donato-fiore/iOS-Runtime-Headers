// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKBOXLAYER_H
#define AKBOXLAYER_H

@class CAShapeLayer;



@interface AKBoxLayer : CAShapeLayer {
    CGFloat _borderWidthScale;
}


@property (nonatomic) CGFloat borderWidthScale;
@property CGFloat boxCornerRadius; // ivar: _boxCornerRadius
@property CGFloat nominalBorderWidth; // ivar: _nominalBorderWidth


-(id)initWithBorderWidth:(CGFloat)arg0 cornerRadius:(CGFloat)arg1 ;
-(void)_updateBoxPath;
-(void)setBounds:(struct CGRect )arg0 ;


@end


#endif