// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UILABELCONFIGURATION_H
#define _UILABELCONFIGURATION_H

@class UIFont, NSShadow, NSDictionary, NSAttributedString, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UILabelContent.h"
#import "UIColor.h"
#import "_UILabelConfigurationInternal.h"

@interface _UILabelConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    _UILabelContent *_content;
    NSInteger _semanticContentAttribute;
    NSInteger _textAlignment;
    NSInteger _lineBreakMode;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIColor *_textBackgroundColor;
    UIColor *_backgroundColor;
    NSShadow *_shadow;
    NSInteger _numberOfLines;
    CGFloat _minimumScaleFactor;
    CGRect _bounds;
    CGFloat _preferredMaxLayoutWidth;
    _UILabelConfigurationInternal *_internal;
    ? _configurationFlags;
    BOOL __hasResolvedDefaultAttributes;
}


@property (copy, nonatomic, setter=_setDefaultAttributes:) NSDictionary *_defaultAttributes;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) CGRect bounds;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) CGFloat preferredMaxLayoutWidth;
@property (nonatomic) NSInteger semanticContentAttribute;
@property (retain, nonatomic) NSShadow *shadow;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textBackgroundColor;
@property (retain, nonatomic) UIColor *textColor;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initEmpty;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif