// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HACCSLIDER_H
#define HACCSLIDER_H

@class UIControl, UIVisualEffectView, UIView, NSString, NSNumberFormatter, UILabel;
@protocol HACCContentModule, HACCContentModuleDelegate;


#import "HUIStepSlider.h"

@interface HACCSlider : UIControl <HACCContentModule>

 {
    UIVisualEffectView *_titleContainer;
    UIView *_subtitleContainer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HACCContentModuleDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger module; // ivar: module
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (nonatomic) NSUInteger numberOfSteps; // ivar: _numberOfSteps
@property (retain, nonatomic) HUIStepSlider *slider; // ivar: _slider
@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGFloat value; // ivar: _value


-(BOOL)enabled;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)contentValue;
-(id)initWithFrame:(struct CGRect )arg0 andModule:(NSUInteger)arg1 ;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(void)layoutSubviews;
-(void)sliderDidChange:(id)arg0 ;
-(void)updateValue;
-(void)updateValueString;


@end


#endif