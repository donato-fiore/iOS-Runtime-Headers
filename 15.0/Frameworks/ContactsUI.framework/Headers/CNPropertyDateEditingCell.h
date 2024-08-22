// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPROPERTYDATEEDITINGCELL_H
#define CNPROPERTYDATEEDITINGCELL_H

@class UIViewController, NSString, UIDatePicker;
@protocol UITextFieldDelegate, CNPickerControllerDelegate;


#import "CNPropertySimpleEditingCell.h"
#import "CNDatePickerContainerView.h"

@interface CNPropertyDateEditingCell : CNPropertySimpleEditingCell <UITextFieldDelegate, CNPickerControllerDelegate>



@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (retain, nonatomic) NSString *currentCalendarIdentifier; // ivar: _currentCalendarIdentifier
@property (retain, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (retain, nonatomic) CNDatePickerContainerView *datePickerContainerView; // ivar: _datePickerContainerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldEditDatesTextually; // ivar: _shouldEditDatesTextually
@property (readonly) Class superclass;


-(BOOL)_shouldUseYearlessPickerForDateComponents:(id)arg0 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)applyCalendarAndDate;
-(void)dateChanged:(id)arg0 ;
-(void)labelButtonClicked:(id)arg0 ;
-(void)localeUpdated:(id)arg0 ;
-(void)picker:(id)arg0 didPickItem:(id)arg1 ;
-(void)pickerDidCancel:(id)arg0 ;
-(void)prepareForReuse;
-(void)regainFocus;
-(void)textFieldDidEndEditing:(id)arg0 reason:(NSInteger)arg1 ;
-(void)updateValueWithPropertyItem:(id)arg0 ;


@end


#endif