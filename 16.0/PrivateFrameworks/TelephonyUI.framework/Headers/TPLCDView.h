// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPLCDVIEW_H
#define TPLCDVIEW_H

@class UIView;


#import "TPLCDBar.h"
#import "TPLCDTextView.h"
#import "TPLCDSubImageView.h"

@interface TPLCDView : TPLCDBar {
    UIView *_contentView;
    TPLCDTextView *_textView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    BOOL _layoutAsLabelled;
}


@property BOOL verticallyCenterTextViewIfLabelless; // ivar: _verticallyCenterTextViewIfLabelless


+(CGFloat)defaultLabelFontSize;
+(CGFloat)defaultTextFontSize;
-(BOOL)shouldCenterContentView;
-(BOOL)shouldCenterText;
-(CGFloat)_labelVInset;
-(CGFloat)_textVInset;
-(id)initWithDefaultSizeForOrientation:(NSInteger)arg0 ;
-(id)label;
-(id)secondLineText;
-(id)subImage;
-(id)text;
-(struct CGRect )_imageViewFrame;
-(struct CGRect )_labelFrame;
-(struct CGRect )_text1Frame;
-(struct CGRect )fullSizedContentViewFrame;
-(struct CGRect )textFrame;
-(void)_resetContentViewFrame;
-(void)blinkLabel;
-(void)didFinishAnimatingLCDLabelFadeOut:(id)arg0 finished:(id)arg1 context:(id)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setContentsAlpha:(CGFloat)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setLabel:(id)arg0 animate:(BOOL)arg1 ;
-(void)setLabelFontSize:(CGFloat)arg0 ;
-(void)setLayoutAsLabelled:(BOOL)arg0 ;
-(void)setSecondLineText:(id)arg0 ;
-(void)setShadowColor:(id)arg0 ;
-(void)setSubImage:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextFontSize:(CGFloat)arg0 ;


@end


#endif