// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKONBOARDINGCOMPACTDATEPICKERVIEW_H
#define HKONBOARDINGCOMPACTDATEPICKERVIEW_H

@class UIView, UIDatePicker, UILabel;
@protocol HKOnboardingCompactDatePickerViewDelegate;



@interface HKOnboardingCompactDatePickerView : UIView

@property (retain, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (weak, nonatomic) NSObject<HKOnboardingCompactDatePickerViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *initialTextLabel; // ivar: _initialTextLabel


-(id)initWithFrame:(struct CGRect )arg0 initialText:(id)arg1 defaultDate:(id)arg2 maxYears:(NSInteger)arg3 ;
-(void)_datePickerValueChanged:(id)arg0 ;
-(void)_setInitialLabelBGColor;
-(void)_setUpDatePicker:(id)arg0 maxYears:(NSInteger)arg1 ;
-(void)_setUpInitialLabel:(id)arg0 ;
-(void)_showDatePicker;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setCurrentDate:(id)arg0 ;
-(void)setInitialText:(id)arg0 alignment:(NSInteger)arg1 ;


@end


#endif