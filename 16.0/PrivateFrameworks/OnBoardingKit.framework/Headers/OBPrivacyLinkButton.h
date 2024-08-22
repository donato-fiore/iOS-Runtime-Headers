// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OBPRIVACYLINKBUTTON_H
#define OBPRIVACYLINKBUTTON_H

@class UIButton, UILabel, NSString, UIView, UIImageView, UITextView;



@interface OBPrivacyLinkButton : UIButton

@property (readonly) UILabel *buttonLabel; // ivar: _buttonLabel
@property (readonly) NSString *buttonText; // ivar: _buttonText
@property (readonly) NSString *captionText; // ivar: _captionText
@property (readonly) UIView *containerView; // ivar: _containerView
@property CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) NSString *displayLanguage; // ivar: _displayLanguage
@property (readonly) UIImageView *iconView; // ivar: _iconView
@property BOOL largeIcon; // ivar: _largeIcon
@property (readonly) UITextView *textView; // ivar: _textView
@property (nonatomic) BOOL underlineLinks; // ivar: _underlineLinks


-(BOOL)_isButtonAboveCaptionText;
-(id)_font;
-(id)initWithCaption:(id)arg0 buttonText:(id)arg1 image:(id)arg2 imageSize:(struct CGSize )arg3 useLargeIcon:(BOOL)arg4 displayLanguage:(id)arg5 ;
-(id)labelText;
-(id)titleForState:(NSUInteger)arg0 ;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct _NSRange )_rangeForButtonText;
-(void)_updateButtonColorWithColor:(id)arg0 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif