// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTCIRCULARBUTTON_H
#define AVTCIRCULARBUTTON_H

@class UIButton, CAShapeLayer, UIColor, UIImage;



@interface AVTCircularButton : UIButton

@property (retain, nonatomic) CAShapeLayer *clippingLayer; // ivar: _clippingLayer
@property (retain, nonatomic) UIColor *dynamicBackgroundColor; // ivar: _dynamicBackgroundColor
@property (nonatomic) BOOL isUsingDynamicBackground; // ivar: _isUsingDynamicBackground
@property (retain, nonatomic) UIImage *symbolImage; // ivar: _symbolImage
@property (retain, nonatomic) UIColor *symbolTintColor; // ivar: _symbolTintColor


-(CGFloat)circleLayerAlpha;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setupView;
-(void)tintColorDidChange;
-(void)updateBackgroundColorIfNeeded;
-(void)updateDynamicBackgroundColor;


@end


#endif