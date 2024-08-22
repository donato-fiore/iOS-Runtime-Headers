// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINPUTTEXTDIALOGVIEWCONTROLLER_H
#define WFINPUTTEXTDIALOGVIEWCONTROLLER_H

@class UIButton, NSDateFormatter, NSString, UILabel, NSLayoutConstraint, UITextField, UITextView;
@protocol UITextFieldDelegate, UITextViewDelegate;


#import "WFCompactDialogViewController.h"

@interface WFInputTextDialogViewController : WFCompactDialogViewController <UITextFieldDelegate, UITextViewDelegate>



@property (weak, nonatomic) UIButton *clearButton; // ivar: _clearButton
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL focusImmediatelyOnAppear; // ivar: _focusImmediatelyOnAppear
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UILabel *hintLabel; // ivar: _hintLabel
@property (retain, nonatomic) NSLayoutConstraint *hintLabelBottomConstraint; // ivar: _hintLabelBottomConstraint
@property (nonatomic) NSInteger initialInsertionIndex; // ivar: _initialInsertionIndex
@property (copy, nonatomic) NSString *localizedIncompleteHintString; // ivar: _localizedIncompleteHintString
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (readonly) Class superclass;
@property (weak, nonatomic) UITextField *textField; // ivar: _textField
@property (weak, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)actingAsNumberField;
-(BOOL)allowsDecimalNumbers;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)useNumberValidation;
-(void)clearText;
-(void)finishWithInputtedText;
-(void)loadView;
-(void)negateText;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateClearButtonVisibility;
-(void)updateDateFormattingHint;
-(void)updateTextViewPlaceholder;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif