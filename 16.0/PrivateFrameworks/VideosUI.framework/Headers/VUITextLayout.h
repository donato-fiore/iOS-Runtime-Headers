// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUITEXTLAYOUT_H
#define VUITEXTLAYOUT_H

@class UIColor, NSString, NSNumber, NSShadow;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUITextLayout : NSObject <NSCopying>



@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) BOOL allowsTextAlignmentOverride; // ivar: _allowsTextAlignmentOverride
@property (nonatomic) BOOL alwaysFocusable; // ivar: _alwaysFocusable
@property (nonatomic) BOOL avoidsFocusedTextShadow; // ivar: _avoidsFocusedTextShadow
@property (nonatomic) int blendMode; // ivar: _blendMode
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSString *compositingFilter; // ivar: _compositingFilter
@property (retain, nonatomic) UIColor *darkColor; // ivar: _darkColor
@property (retain, nonatomic) NSString *darkCompositingFilter; // ivar: _darkCompositingFilter
@property (retain, nonatomic) UIColor *darkHighlightOrSelectedColor; // ivar: _darkHighlightOrSelectedColor
@property (retain, nonatomic) UIColor *darkSeeMoreTextColor; // ivar: _darkSeeMoreTextColor
@property (retain, nonatomic) NSString *fontFamily; // ivar: _fontFamily
@property (nonatomic) NSInteger fontFeature; // ivar: _fontFeature
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) unsigned int fontTraits; // ivar: _fontTraits
@property (nonatomic) NSInteger fontWeight; // ivar: _fontWeight
@property (retain, nonatomic) UIColor *highlightOrSelectedColor; // ivar: _highlightOrSelectedColor
@property (nonatomic) NSInteger highlightStyle; // ivar: _highlightStyle
@property (retain, nonatomic) NSNumber *letterSpacing; // ivar: _letterSpacing
@property (nonatomic) NSInteger lineBreakMode; // ivar: _lineBreakMode
@property (nonatomic) UIEdgeInsets margin; // ivar: _margin
@property (nonatomic) NSUInteger maximumContentSizeCategory; // ivar: _maximumContentSizeCategory
@property (nonatomic) CGFloat minimumScaleFactor; // ivar: _minimumScaleFactor
@property (nonatomic) NSUInteger numberOfLines; // ivar: _numberOfLines
@property (nonatomic) NSUInteger numberOfLinesAXLarge; // ivar: _numberOfLinesAXLarge
@property (nonatomic) NSUInteger numberOfLinesAXSmall; // ivar: _numberOfLinesAXSmall
@property (nonatomic) CGFloat seeMoreHorizontalMargin; // ivar: _seeMoreHorizontalMargin
@property (retain, nonatomic) UIColor *seeMoreTextColor; // ivar: _seeMoreTextColor
@property (retain, nonatomic) NSShadow *shadow; // ivar: _shadow
@property (nonatomic) BOOL shouldAllowParagraphHyphenation; // ivar: _shouldAllowParagraphHyphenation
@property (nonatomic) BOOL shouldUpdateTextColor; // ivar: _shouldUpdateTextColor
@property (nonatomic) NSInteger textStyle; // ivar: _textStyle
@property (nonatomic) NSInteger textTransform; // ivar: _textTransform


-(NSUInteger)numberOfLinesForTraitCollection:(id)arg0 ;
-(id)_defaultParagraphStyle;
-(id)attributedStringWithAttributedString:(id)arg0 textColor:(id)arg1 ;
-(id)attributedStringWithAttributedString:(id)arg0 view:(id)arg1 updateTextColor:(BOOL)arg2 ;
-(id)attributedStringWithString:(id)arg0 ;
-(id)attributedStringWithString:(id)arg0 isHighlighted:(BOOL)arg1 ;
-(id)attributedStringWithString:(id)arg0 view:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultAttributesForLabel:(id)arg0 ;
-(id)init;


@end


#endif