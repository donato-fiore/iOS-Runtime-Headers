// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTANNOTATIONVIEWKEYVALUELABEL_H
#define HKINTERACTIVECHARTANNOTATIONVIEWKEYVALUELABEL_H

@class UIView, UIColor;


#import "HKSelectedRangeLabel.h"

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIView

@property (readonly, nonatomic) HKSelectedRangeLabel *keyLabel; // ivar: _keyLabel
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, nonatomic) HKSelectedRangeLabel *valueLabel; // ivar: _valueLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutSubviewsHorizontally;
-(void)_layoutSubviewsVertically;
-(void)layoutSubviews;


@end


#endif