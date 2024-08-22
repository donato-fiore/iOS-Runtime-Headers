// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPLCDTEXTVIEW_H
#define TPLCDTEXTVIEW_H

@class UIView, NSString, UIFont, UIColor, UIFrameAnimation;


#import "TPLCDTextViewScrollingView.h"

@interface TPLCDTextView : UIView {
    NSString *_text;
    UIFont *_font;
    UIColor *_shadowColor;
    UIColor *_textColor;
    TPLCDTextViewScrollingView *_scrollingView;
    CGFloat _fontSize;
    CGRect _textRect;
    id *_delegate;
    CGFloat _minFontSize;
    BOOL _textRectIsValid;
    BOOL _centerText;
    BOOL _animates;
    BOOL _isAnimating;
    BOOL _leftTruncates;
    UIFrameAnimation *_animation;
}




+(CGFloat)defaultMinimumFontSize;
-(BOOL)animates;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)text;
-(struct CGRect )textRect;
-(struct CGSize )sizeToFit;
-(void)_drawTextInRect:(struct CGRect )arg0 verticallyOffset:(BOOL)arg1 ;
-(void)_finishedScrolling;
-(void)_scheduleStartScrolling;
-(void)_setupForAnimationIfNecessary;
-(void)_startScrolling;
-(void)_tearDownAnimation;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)resetAnimation;
-(void)setAnimatesIfTruncated:(BOOL)arg0 ;
-(void)setCenterText:(BOOL)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setLCDTextFont:(id)arg0 ;
-(void)setLeftTruncatesText:(BOOL)arg0 ;
-(void)setMinimumFontSize:(CGFloat)arg0 ;
-(void)setShadowColor:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextColor:(id)arg0 ;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif