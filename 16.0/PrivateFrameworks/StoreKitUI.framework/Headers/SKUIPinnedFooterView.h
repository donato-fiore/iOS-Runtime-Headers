// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPINNEDFOOTERVIEW_H
#define SKUIPINNEDFOOTERVIEW_H

@class UITableViewHeaderFooterView, NSAttributedString, UITextView;



@interface SKUIPinnedFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (nonatomic) CGFloat horizontalPadding; // ivar: _horizontalPadding
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureTextViewTextStyling;
-(void)_initializeTextView;
-(void)layoutSubviews;


@end


#endif