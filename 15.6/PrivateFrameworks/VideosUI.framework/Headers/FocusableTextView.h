// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FOCUSABLETEXTVIEW_H
#define FOCUSABLETEXTVIEW_H

@class UIColor, NSString, NSAttributedString, UITapGestureRecognizer;
@protocol VUILabelBaselineProtocol;


#import "VUIBaseView.h"
#import "VUITextView.h"
#import "VUILabel.h"
#import "VUITextLayout.h"

@interface FocusableTextView : VUIBaseView <VUILabelBaselineProtocol>

 {
    UIColor *_backgroundColor;
    VUITextView *_auxilliaryTextView;
}


@property (retain, nonatomic) VUILabel *computationLabel; // ivar: _computationLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (nonatomic) NSInteger descriptionTextAlignment; // ivar: _descriptionTextAlignment
@property (retain, nonatomic) UIColor *descriptionTextColor; // ivar: _descriptionTextColor
@property (retain, nonatomic) VUITextView *descriptionTextView; // ivar: _descriptionTextView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumNumberOfLines;
@property (retain, nonatomic) VUILabel *moreLabel; // ivar: _moreLabel
@property (nonatomic) BOOL moreLabelOnNewLine; // ivar: _moreLabelOnNewLine
@property (readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer; // ivar: _moreLabelTapGestureRecognizer
@property (retain, nonatomic) UIColor *moreLabelTextColor; // ivar: _moreLabelTextColor
@property (nonatomic) BOOL needsTextSizeComputation; // ivar: _needsTextSizeComputation
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) VUITextLayout *textLayout; // ivar: _textLayout
@property (readonly, nonatomic, getter=isTextTruncating) BOOL textTruncating; // ivar: _textTruncating


+(CGFloat)bottomInset;
+(CGFloat)cornerRadius;
+(CGFloat)topInset;
+(id)textViewWithAttributedString:(id)arg0 textLayout:(id)arg1 existingTextView:(id)arg2 ;
-(CGFloat)bottomMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)topMarginToLabel:(id)arg0 withBaselineMargin:(CGFloat)arg1 ;
-(CGFloat)topMarginWithBaselineMargin:(CGFloat)arg0 ;
-(CGFloat)vui_baselineOffsetFromBottom;
-(id)initWithTextLayout:(id)arg0 ;
-(id)makeTextView;
-(struct CGRect )boundingRectForAttributedString:(id)arg0 withWidth:(CGFloat)arg1 lines:(NSUInteger)arg2 ;
-(struct CGSize )computeSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_recomputeTextSizeIfNeeded;
-(void)_selectButtonAction:(id)arg0 ;
-(void)_updateTextColor;
-(void)_updateTextColorsIfNeeded;
-(void)layoutSubviews_iOSAndMacOS;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setupViews_iOSAndMacOS;
-(void)tintColorDidChange;
-(void)vui_traitCollectionDidChange:(id)arg0 ;


@end


#endif