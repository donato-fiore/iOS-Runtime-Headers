// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UILISTCONTENTTEXTPROPERTIES_H
#define UILISTCONTENTTEXTPROPERTIES_H

@class NSString, UIFont, NSAttributedString;
@protocol _UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIListContentTextProperties : NSObject <_UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding>

 {
    ? _textFlags;
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _allowsDefaultTighteningForTruncation;
    BOOL _adjustsFontForContentSizeCategory;
    NSString *_text;
    UIFont *_font;
    UIColor *_color;
    id *_colorTransformer;
    NSInteger _alignment;
    NSInteger _lineBreakMode;
    NSAttributedString *_attributedText;
    NSInteger _numberOfLines;
    CGFloat _minimumScaleFactor;
    NSInteger _transform;
    NSInteger _colorTransformerIdentifier;
}


@property (readonly, nonatomic) NSInteger _effectiveTextAlignment;
@property (readonly, nonatomic) BOOL _hasNonEmptyPlainTextOnly;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) NSInteger alignment;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) id *colorTransformer;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) NSInteger transform;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)resolvedColor;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif