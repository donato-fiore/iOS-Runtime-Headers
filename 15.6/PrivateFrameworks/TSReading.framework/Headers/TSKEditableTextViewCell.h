// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKEDITABLETEXTVIEWCELL_H
#define TSKEDITABLETEXTVIEWCELL_H

@class UITableViewCell, UIView, NSString;
@protocol UITextViewDelegate;


#import "TSKPlaceholderTextView.h"

@interface TSKEditableTextViewCell : UITableViewCell <UITextViewDelegate>

 {
    TSKPlaceholderTextView *mTextView;
    UIView *mInputView;
    BOOL mNumberHasDecimal;
    id<UITextViewDelegate> *mSavedDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *string;
@property (readonly) Class superclass;


-(BOOL)isNegative;
-(BOOL)textViewShouldBeginEditing:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)beginEditing;
-(void)dealloc;
-(void)deleteBackward;
-(void)endEditing;
-(void)insertDecimalSeparator;
-(void)insertNumber:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)p_insertString:(id)arg0 ;
-(void)p_parseText:(id)arg0 ;
-(void)parseText;
-(void)setInputView:(id)arg0 ;
-(void)setPlaceholder:(id)arg0 ;
-(void)setTextDelegate:(id)arg0 ;
-(void)setTextTag:(NSInteger)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)tintColorDidChange;
-(void)toggleNegative;


@end


#endif