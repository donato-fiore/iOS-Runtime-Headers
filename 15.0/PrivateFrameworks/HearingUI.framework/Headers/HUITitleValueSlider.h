// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUITITLEVALUESLIDER_H
#define HUITITLEVALUESLIDER_H

@class UIView, UIVisualEffectView, UILabel;


#import "HUIStepSlider.h"

@interface HUITitleValueSlider : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (retain, nonatomic) HUIStepSlider *slider; // ivar: _slider
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityHint;
-(id)initWithEffect:(id)arg0 ;
-(struct CGPoint )accessibilityActivationPoint;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;


@end


#endif