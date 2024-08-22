// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVFOCUSABLETEXTVIEW_H
#define _TVFOCUSABLETEXTVIEW_H

@class UIView, UIColor, UIVisualEffectView, UITextView, NSString, NSAttributedString, _UIFloatingContentView, UILabel, UITapGestureRecognizer;
@protocol _UIFloatingContentViewDelegate, UIGestureRecognizerDelegate;



@interface _TVFocusableTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate>

 {
    UIColor *_backgroundColor;
    UIVisualEffectView *_vibrantEffectView;
    UITextView *_auxilliaryTextView;
}


@property (nonatomic, getter=isAlwaysFocusable) BOOL alwaysFocusable; // ivar: _alwaysFocusable
@property (nonatomic) BOOL alwaysShowBackground; // ivar: _alwaysShowBackground
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (nonatomic) NSInteger descriptionTextAlignment; // ivar: _descriptionTextAlignment
@property (retain, nonatomic) UIColor *descriptionTextColor; // ivar: _descriptionTextColor
@property (retain, nonatomic) UIColor *descriptionTextHighlightColor; // ivar: _descriptionTextHighlightColor
@property (retain, nonatomic) UITextView *descriptionTextView; // ivar: _descriptionTextView
@property (nonatomic) BOOL disableFocus; // ivar: _disableFocus
@property (retain, nonatomic) _UIFloatingContentView *floatingView; // ivar: _floatingView
@property (nonatomic) NSUInteger focusSizeIncrease; // ivar: _focusSizeIncrease
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *highlightBackgroundColor; // ivar: _highlightBackgroundColor
@property (nonatomic) NSUInteger maximumNumberOfLines;
@property (nonatomic) CGFloat moreHighlightPadding; // ivar: _moreHighlightPadding
@property (retain, nonatomic) UILabel *moreLabel; // ivar: _moreLabel
@property (nonatomic) BOOL moreLabelOnNewLine; // ivar: _moreLabelOnNewLine
@property (readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer; // ivar: _moreLabelTapGestureRecognizer
@property (retain, nonatomic) NSString *moreLabelText; // ivar: _moreLabelText
@property (retain, nonatomic) UIColor *moreLabelTextColor; // ivar: _moreLabelTextColor
@property (nonatomic) BOOL needsTextSizeComputation; // ivar: _needsTextSizeComputation
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (copy, nonatomic) id *playHandler; // ivar: _playHandler
@property (retain, nonatomic) UITapGestureRecognizer *playRecognizer; // ivar: _playRecognizer
@property (retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // ivar: _selectRecognizer
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (readonly) Class superclass;
@property (nonatomic, getter=isTextTruncating) BOOL textTruncating; // ivar: _textTruncating
@property (nonatomic) BOOL trackHorizontal; // ivar: _trackHorizontal


+(CGFloat)cornerRadius;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_playButtonAction:(id)arg0 ;
-(void)_recomputeTextSizeIfNeeded;
-(void)_selectButtonAction:(id)arg0 ;
-(void)_updateBackgroundColors;
-(void)_updateTextColorsForFocusState:(BOOL)arg0 ;
-(void)_updateTextColorsIfNeeded;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)floatingContentView:(id)arg0 isTransitioningFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)tintColorDidChange;


@end


#endif