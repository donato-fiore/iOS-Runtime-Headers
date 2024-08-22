// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPTEXTVIEW_H
#define LPTEXTVIEW_H

@class UILabel, UIVisualEffectView, NSAttributedString, NSString, NSRegularExpression;
@protocol LPTextStyleable, LPContentInsettable, LPSubtitleButtonContainer;


#import "LPComponentView.h"
#import "LPTextViewStyle.h"

@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable, LPSubtitleButtonContainer>

 {
    UILabel *_textView;
    UILabel *_coloredGlyphsView;
    UIVisualEffectView *_effectView;
    UIEdgeInsets _contentInset;
    LPTextViewStyle *_style;
    NSAttributedString *_attributedString;
    CGFloat _ascender;
    CGFloat _descender;
}


@property (readonly, retain, nonatomic) NSAttributedString *attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression; // ivar: _emphasizedTextExpression
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger overrideMaximumNumberOfLines; // ivar: _overrideMaximumNumberOfLines
@property (readonly, retain, nonatomic) LPTextViewStyle *style;
@property (readonly) Class superclass;


+(id)attributedString:(id)arg0 resolvedAgainstStyle:(id)arg1 withEmphasizedTextExpression:(id)arg2 tintColor:(id)arg3 lineBreakMode:(NSInteger)arg4 usesVibrancy:(BOOL)arg5 forLTR:(BOOL)arg6 withFont:(id)arg7 ;
+(id)attributedStringHidingNonColoredRanges:(id)arg0 ;
-(BOOL)_lp_isLTR;
-(CGFloat)ascender;
-(CGFloat)descender;
-(CGFloat)firstLineLeading;
-(CGFloat)lastLineDescent;
-(NSInteger)computedNumberOfLines;
-(NSInteger)effectiveMaximumNumberOfLines;
-(id)_createLabel;
-(id)effectiveAttributedString;
-(id)firstBaselineAnchor;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 text:(id)arg1 style:(id)arg2 ;
-(id)lastBaselineAnchor;
-(id)subtitleButton;
-(struct CGRect )textRect;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )effectiveInsets;
-(void)_buildSubviewsIfNeeded;
-(void)_createTextViewWithAttributedString:(id)arg0 ;
-(void)applyAttributedString:(id)arg0 ;
-(void)layoutComponentView;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)tintColorDidChange;


@end


#endif