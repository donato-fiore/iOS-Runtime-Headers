// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCGRADIENTBACKGROUNDVIEW_H
#define ASCGRADIENTBACKGROUNDVIEW_H

@class UIView, CAGradientLayer;



@interface ASCGradientBackgroundView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer; // ivar: _gradientLayer
@property (readonly, nonatomic) UIView *gradientOverlayView; // ivar: _gradientOverlayView


+(CGFloat)gradientPercentageOfBounds;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif