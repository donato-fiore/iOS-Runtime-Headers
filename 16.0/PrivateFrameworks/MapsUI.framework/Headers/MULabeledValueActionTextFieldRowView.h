// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MULABELEDVALUEACTIONTEXTFIELDROWVIEW_H
#define MULABELEDVALUEACTIONTEXTFIELDROWVIEW_H

@class UIView<MULabelViewProtocol>, UITextView, UILayoutGuide, NSString, UIColor;
@protocol UITextViewDelegate, MULabeledValueActionTextFieldRowViewDelegate;


#import "MUPlaceSectionRowView.h"

@interface MULabeledValueActionTextFieldRowView : MUPlaceSectionRowView <UITextViewDelegate>

 {
    UIView<MULabelViewProtocol> *_titleLabel;
    UITextView *_valueTextField;
    UILayoutGuide *_titleValueLayoutGuide;
}


@property (copy, nonatomic) NSString *currentTextFieldValue;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MULabeledValueActionTextFieldRowViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumNumberOfCharacters; // ivar: _maximumNumberOfCharacters
@property (nonatomic) NSUInteger maximumNumberOfLines;
@property (retain, nonatomic) UIColor *placeholderColor; // ivar: _placeholderColor
@property (retain, nonatomic) NSString *placeholderText;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *titleText;


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)textView;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif