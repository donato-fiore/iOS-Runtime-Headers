// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDATEPICKERBUTTON_H
#define WFDATEPICKERBUTTON_H

@class UIButton, NSSet, NSDate, UIDatePicker, NSString, UIView;
@protocol WFInputViewMutable, WFVariableProvider, WFVariableUIDelegate;


#import "WFVariableInputCoordinator.h"

@interface WFDatePickerButton : UIButton <WFInputViewMutable>



@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (retain, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (readonly, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (nonatomic) NSInteger datePickerMode; // ivar: _datePickerMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *inputAccessoryView; // ivar: _inputAccessoryView
@property (retain, nonatomic) UIView *inputView; // ivar: _inputView
@property (retain, nonatomic) NSDate *maximumDate; // ivar: _maximumDate
@property (retain, nonatomic) NSDate *minimumDate; // ivar: _minimumDate
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (copy, nonatomic) id *variableBlock; // ivar: _variableBlock
@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator; // ivar: _variableCoordinator
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)tintColorDidChange;


@end


#endif