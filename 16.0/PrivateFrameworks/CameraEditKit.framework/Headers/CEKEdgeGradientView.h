// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEKEDGEGRADIENTVIEW_H
#define CEKEDGEGRADIENTVIEW_H

@class UIView, UIColor;



@interface CEKEdgeGradientView : UIView

@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (readonly, nonatomic) UIColor *customEdgeGradientColor; // ivar: _customEdgeGradientColor
@property (readonly, nonatomic) NSInteger edgeGradientStyle; // ivar: _edgeGradientStyle
@property (nonatomic) ? gradientDimensions; // ivar: _gradientDimensions
@property (nonatomic) NSInteger gradientDirection; // ivar: _gradientDirection
@property (nonatomic) CGFloat innerFadeLength;
@property (nonatomic) CGFloat outerColorLength;


-(BOOL)isOpaque;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setCustomEdgeGradientStyleWithColor:(id)arg0 ;


@end


#endif