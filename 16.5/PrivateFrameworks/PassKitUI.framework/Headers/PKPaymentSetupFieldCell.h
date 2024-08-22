// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPFIELDCELL_H
#define PKPAYMENTSETUPFIELDCELL_H

@class UIPickerView, NSArray, NSString, UIColor, PKPaymentSetupField;
@protocol UITextFieldDelegate, PKDatePickerDelegate, UIPickerViewDelegate, UIPickerViewDataSource, PKPaymentSetupFieldCellDelegate;


#import "PKTableViewCell.h"
#import "PKDatePicker.h"
#import "PKUITextField.h"

@interface PKPaymentSetupFieldCell : PKTableViewCell <UITextFieldDelegate, PKDatePickerDelegate, UIPickerViewDelegate, UIPickerViewDataSource>

 {
    PKDatePicker *_dateInputView;
    UIPickerView *_pickerInputView;
    BOOL _ignoreCurrentValueChangedNotifications;
    NSArray *_defaultLeadingBarButtonGroups;
    NSArray *_defaultTrailingBarButtonGroups;
    NSArray *_defaultCenterBarButtonGroups;
    BOOL _canResignFirstResponder;
    PKUITextField *_textField;
}


@property (nonatomic) BOOL canResignFirstResponder;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentSetupFieldCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIColor *editableTextFieldCameraCapturedTextColor; // ivar: _editableTextFieldCameraCapturedTextColor
@property (copy, nonatomic) UIColor *editableTextFieldDisabledTextColor; // ivar: _editableTextFieldDisabledTextColor
@property (copy, nonatomic) UIColor *editableTextFieldTextColor; // ivar: _editableTextFieldTextColor
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumTextLabelWidth; // ivar: _minimumTextLabelWidth
@property (retain, nonatomic) PKPaymentSetupField *paymentSetupField; // ivar: _paymentSetupField
@property (nonatomic) BOOL shouldDrawFullWidthSeperator; // ivar: _shouldDrawFullWidthSeperator
@property (nonatomic) BOOL shouldDrawSeperator; // ivar: _shouldDrawSeperator
@property (readonly) Class superclass;


+(CGFloat)minimumCellHeight;
+(id)paymentSetupFieldCellForField:(id)arg0 fromTableView:(id)arg1 ;
+(id)reuseIdentifier;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)heightForWidth:(CGFloat)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)editableTextField;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSetupField:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)pk_childrenForAppearance;
-(struct CGRect )_separatorFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyDefaultValues;
-(void)_editableTextFieldDidBeginEditing:(id)arg0 ;
-(void)_editableTextFieldValueChanged:(id)arg0 ;
-(void)_paymentSetupFieldCurrentValueChangedNotification:(id)arg0 ;
-(void)_pullCurrentValueFromField;
-(void)_pushCurrentValueToField;
-(void)_updateDisplay:(BOOL)arg0 ;
-(void)_updateDisplayForFieldTypeDate:(id)arg0 ;
-(void)_updateDisplayForFieldTypePicker:(id)arg0 ;
-(void)_updateDisplayForFieldTypeText:(id)arg0 ;
-(void)datePicker:(id)arg0 didChangeDate:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)prepareForReuse;
-(void)updatePaymentSetupFieldWithCurrentCellValue;


@end


#endif