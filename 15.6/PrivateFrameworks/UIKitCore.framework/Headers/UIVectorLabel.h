// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVECTORLABEL_H
#define UIVECTORLABEL_H

@class NSMutableDictionary, NSAttributedString, UIFont, NSString;


#import "UIView.h"
#import "_UILabelContent.h"
#import "UIColor.h"
#import "_UIVectorTextLayout.h"

@interface UIVectorLabel : UIView {
    _UILabelContent *_content;
    NSMutableDictionary *_defaultAttributes;
    UIColor *_textColor;
    _UIVectorTextLayout *_sizingLayout;
    _UIVectorTextLayout *_visualLayout;
    ? _labelFlags;
    CGFloat _multilineContextWidth;
}


@property (copy, nonatomic, setter=_setAttributedText:) NSAttributedString *_attributedText;
@property (retain, nonatomic, getter=_content, setter=_setContent:) _UILabelContent *_content;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) NSUInteger numberOfLines; // ivar: _numberOfLines
@property (nonatomic) CGFloat preferredMaxLayoutWidth; // ivar: _preferredMaxLayoutWidth
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;


+(Class)layerClass;
+(id)_defaultAttributes;
+(id)_defaultFont;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(CGFloat)_baselineOffsetFromBottom;
-(CGFloat)_firstBaselineOffsetFromTop;
-(CGFloat)_firstLineBaseline;
-(CGFloat)_lastLineBaseline;
-(id)_defaultAttributes;
-(id)_labelLayer;
-(id)_layoutParametersWithinSize:(struct CGSize )arg0 forSizing:(BOOL)arg1 ;
-(id)_materializedAttributedText;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 limitedToNumberOfLines:(NSInteger)arg1 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_ensureSizingLayout;
-(void)_ensureVisualLayout;
-(void)_generateDeferredAnimations:(id)arg0 ;
-(void)_mergeDefaultAttributesForDowngradingContent:(id)arg0 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect )arg0 ;
-(void)_setMultilineContextWidth:(CGFloat)arg0 ;
-(void)_setNeedsUpdateLayerIfNeeded;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif