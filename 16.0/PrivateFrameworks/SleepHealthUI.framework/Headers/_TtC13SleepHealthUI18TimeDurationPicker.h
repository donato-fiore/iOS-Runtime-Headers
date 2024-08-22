// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC13SLEEPHEALTHUI18TIMEDURATIONPICKER_H
#define _TTC13SLEEPHEALTHUI18TIMEDURATIONPICKER_H

@class UIView;



@interface _TtC13SleepHealthUI18TimeDurationPicker : UIView {
    ? delegate;
    ? $__lazy_storage_$_formatter;
    ? selectedIndex;
    ? options;
    ? plusButton;
    ? minusButton;
    ? durationLabel;
}




-(id)accessibilityDurationLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)decrease;
-(void)increase;


@end


#endif