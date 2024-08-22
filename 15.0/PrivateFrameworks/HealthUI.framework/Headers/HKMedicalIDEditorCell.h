// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMEDICALIDEDITORCELL_H
#define HKMEDICALIDEDITORCELL_H

@class UITableViewCell, NSString, UILabel, UIStackView, UIView;
@protocol UITextFieldDelegate, HKMedicalIDEditorCellEditDelegate;


#import "HKCaretOptionalTextField.h"

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<HKMedicalIDEditorCellEditDelegate> *editDelegate; // ivar: _editDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKCaretOptionalTextField *inputTextField; // ivar: _inputTextField
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) UILabel *labelLabel; // ivar: _labelLabel
@property (nonatomic) CGFloat minimumLabelWidth; // ivar: _minimumLabelWidth
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *verticalSeparatorView; // ivar: _verticalSeparatorView


+(BOOL)showsLabelAndValue;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(id)formattedValue;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_localeDidChange:(id)arg0 ;
-(void)beginEditing;
-(void)commitEditing;
-(void)dealloc;
-(void)dismissInputView;
-(void)setupStackView;
-(void)setupSubviews;
-(void)updateValueLabel;
-(void)valueDidChange;


@end


#endif