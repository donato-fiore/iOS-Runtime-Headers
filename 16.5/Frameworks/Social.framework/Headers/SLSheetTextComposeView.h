// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLSHEETTEXTCOMPOSEVIEW_H
#define SLSHEETTEXTCOMPOSEVIEW_H

@class UIView, UILabel, UITextView;



@interface SLSheetTextComposeView : UIView

@property (retain, nonatomic) UILabel *placeholderLabel; // ivar: _placeholderLabel
@property (nonatomic) CGFloat textRightInset; // ivar: _textRightInset
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_assembleView;
-(void)layoutSubviews;
-(void)restoreKeyboard;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif