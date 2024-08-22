// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNREPEATINGGRADIENTSEPARATORVIEW_H
#define CNREPEATINGGRADIENTSEPARATORVIEW_H

@class UIView, UIColor, NSArray;



@interface CNRepeatingGradientSeparatorView : UIView

@property (retain, nonatomic) UIColor *endColor; // ivar: _endColor
@property (readonly, nonatomic) NSArray *gradientColors;
@property (nonatomic) NSInteger lineCount; // ivar: _lineCount
@property (retain, nonatomic) UIColor *startColor; // ivar: _startColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateGradients;
-(void)layoutSubviews;


@end


#endif