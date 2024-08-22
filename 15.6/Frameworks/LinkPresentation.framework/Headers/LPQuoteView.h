// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPQUOTEVIEW_H
#define LPQUOTEVIEW_H

@class UITextView, NSAttributedString, UIImageView, UIVisualEffectView, NSRegularExpression;
@protocol LPTextStyleable, LPContentInsettable;


#import "LPComponentView.h"
#import "LPQuotedTextViewStyle.h"
#import "LPTextView.h"

@interface LPQuoteView : LPComponentView <LPTextStyleable, LPContentInsettable>

 {
    UITextView *_textView;
    BOOL _didLimitNumberOfCharacters;
    UIEdgeInsets _contentInset;
    LPQuotedTextViewStyle *_style;
    NSAttributedString *_attributedString;
    LPTextView *_characterLimitIndicatorView;
    UIImageView *_quoteIndicatorView;
    UIVisualEffectView *_effectView;
    UITextView *_coloredGlyphsView;
    CGFloat _ascender;
    CGFloat _descender;
}


@property (readonly, retain, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression; // ivar: _emphasizedTextExpression
@property (nonatomic) NSInteger overrideMaximumNumberOfLines; // ivar: _overrideMaximumNumberOfLines
@property (readonly, retain, nonatomic) LPQuotedTextViewStyle *style;


-(BOOL)_lp_isLTR;
-(CGFloat)ascender;
-(CGFloat)descender;
-(CGFloat)firstLineLeading;
-(CGFloat)lastLineDescent;
-(NSInteger)computedNumberOfLines;
-(NSInteger)computedNumberOfLinesWithFont:(id)arg0 forSize:(struct CGSize )arg1 ;
-(NSInteger)effectiveMaximumNumberOfLines;
-(id)_createTextView;
-(id)effectiveAttributedString;
-(id)firstBaselineAnchor;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 text:(id)arg1 style:(id)arg2 ;
-(id)lastBaselineAnchor;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )effectiveInsets;
-(struct UIEdgeInsets )effectiveInsetsWithoutQuoteIndicator;
-(void)_buildSubviewsIfNeeded;
-(void)applyAttributedString:(id)arg0 ;
-(void)layoutComponentView;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setFont:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateEffectiveFontForSize:(struct CGSize )arg0 ;
-(void)updateExclusionRects;


@end


#endif