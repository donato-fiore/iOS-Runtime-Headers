// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSTEPPERCONTROLVIEW_H
#define HUSTEPPERCONTROLVIEW_H

@class UIView, NSString, NSArray, UIStepper, NSFormatter, UILabel;
@protocol HUControlView, HUControlViewDelegate;



@interface HUStepperControlView : UIView <HUControlView>



@property (nonatomic) BOOL canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUControlViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (nonatomic) CGFloat maxValue;
@property (nonatomic) CGFloat minValue;
@property (nonatomic) CGFloat stepValue;
@property (readonly, nonatomic) UIStepper *stepper; // ivar: _stepper
@property (readonly) Class superclass;
@property (retain, nonatomic) id *value; // ivar: _value
@property (retain, nonatomic) NSFormatter *valueFormatter; // ivar: _valueFormatter
@property (readonly, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


+(BOOL)requiresConstraintBasedLayout;
-(id)_defaultValueFormatter;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_stepperTouchDown:(id)arg0 ;
-(void)_stepperTouchUp:(id)arg0 ;
-(void)_stepperValueChanged:(id)arg0 ;
-(void)_updateValueLabel;
-(void)updateConstraints;


@end


#endif