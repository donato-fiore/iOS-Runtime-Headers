// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDIALOGTEXTVIEW_H
#define SFDIALOGTEXTVIEW_H

@class UIView, NSString, UIFont, NSParagraphStyle, UITextView, CAGradientLayer;



@interface SFDialogTextView : UIView {
    NSString *_title;
    NSString *_message;
    UIFont *_titleFont;
    UIFont *_messageFont;
    UIFont *_messageFontWithTitle;
    NSParagraphStyle *_titleParagraphStyle;
    UITextView *_textView;
    CGFloat _preferredMaxLayoutWidth;
    CAGradientLayer *_topGradient;
    CAGradientLayer *_bottomGradient;
}


@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateFontStyling;
-(void)_updateText;
-(void)_updateTextContainerInset;
-(void)flashScrollIndicators;
-(void)layoutSubviews;
-(void)setMessage:(id)arg0 ;
-(void)setPreferredMaxLayoutWidth:(CGFloat)arg0 ;
-(void)setTitle:(id)arg0 ;


@end


#endif