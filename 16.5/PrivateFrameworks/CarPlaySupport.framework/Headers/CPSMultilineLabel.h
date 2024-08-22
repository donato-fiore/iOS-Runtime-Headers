// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSMULTILINELABEL_H
#define CPSMULTILINELABEL_H

@class UIView, NSAttributedString, NSArray, NSLayoutConstraint, UIFont, NSString, UIColor, UILayoutGuide;
@protocol CPSMultilineLabelDelegate;


#import "CPSMultilineLabelConfig.h"

@interface CPSMultilineLabel : UIView

@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSArray *baselineOffsets; // ivar: _baselineOffsets
@property (retain, nonatomic) UIView *baselineView; // ivar: _baselineView
@property (retain, nonatomic) NSLayoutConstraint *baselineViewBottomAnchor; // ivar: _baselineViewBottomAnchor
@property (retain, nonatomic) NSLayoutConstraint *baselineViewTopAnchor; // ivar: _baselineViewTopAnchor
@property (readonly, nonatomic) CPSMultilineLabelConfig *currentConfiguration; // ivar: _currentConfiguration
@property (nonatomic) BOOL debug; // ivar: _debug
@property (retain, nonatomic) UIView *debugFirstBaselineView; // ivar: _debugFirstBaselineView
@property (retain, nonatomic) UIView *debugLastBaselineView; // ivar: _debugLastBaselineView
@property (weak, nonatomic) NSObject<CPSMultilineLabelDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger effectiveNumberOfLines;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) NSArray *leadingOffsets; // ivar: _leadingOffsets
@property (nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing
@property (nonatomic) CGFloat minimumFontSize; // ivar: _minimumFontSize
@property (nonatomic) CGFloat minimumScaleFactor; // ivar: _minimumScaleFactor
@property (nonatomic) NSUInteger numberOfLines; // ivar: _numberOfLines
@property (nonatomic) BOOL prefersFewerLines; // ivar: _prefersFewerLines
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, nonatomic) UILayoutGuide *textLayoutGuide; // ivar: _textLayoutGuide
@property (retain, nonatomic) NSLayoutConstraint *textLayoutGuideLeadingConstraint; // ivar: _textLayoutGuideLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *textLayoutGuideTrailingConstraint; // ivar: _textLayoutGuideTrailingConstraint


-(BOOL)_fitsInHeight:(CGFloat)arg0 numberOfLines:(NSUInteger)arg1 rect:(struct CGRect )arg2 ;
-(CGFloat)_heightForAttributedString:(id)arg0 inRect:(struct CGRect )arg1 ;
-(id)_attributedStringWithSize:(CGFloat)arg0 ;
-(id)_attributedTextForRect:(struct CGRect )arg0 ;
-(id)_ellipsedString:(id)arg0 inRect:(struct CGRect )arg1 ;
-(id)firstBaselineAnchor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)lastBaselineAnchor;
-(struct ? )_statsForString:(id)arg0 inRect:(struct CGRect )arg1 ;
-(struct CGSize )intrinsicContentSize;
-(struct _NSRange )_rangeOfTrailingWhiteSpace:(id)arg0 ;
-(struct __CTFrame *)_textFrame:(id)arg0 rect:(struct CGRect )arg1 ;
-(void)_updateBaselines;
-(void)_updateLayout;
-(void)_updateLayoutGuideConstraints;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif