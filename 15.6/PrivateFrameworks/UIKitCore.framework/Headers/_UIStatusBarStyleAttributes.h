// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARSTYLEATTRIBUTES_H
#define _UISTATUSBARSTYLEATTRIBUTES_H

@class UIFont, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UITraitCollection.h"

@interface _UIStatusBarStyleAttributes : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger effectiveLayoutDirection; // ivar: _effectiveLayoutDirection
@property (copy, nonatomic) UIFont *emphasizedFont; // ivar: _emphasizedFont
@property (copy, nonatomic) UIFont *font; // ivar: _font
@property (nonatomic) CGFloat iconScale; // ivar: _iconScale
@property (nonatomic) NSInteger iconSize; // ivar: _iconSize
@property (copy, nonatomic) UIColor *imageDimmedTintColor; // ivar: _imageDimmedTintColor
@property (copy, nonatomic) NSArray *imageNamePrefixes; // ivar: _imageNamePrefixes
@property (copy, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic, getter=isScaledFixedWidthBar) BOOL scaledFixedWidthBar; // ivar: _scaledFixedWidthBar
@property (copy, nonatomic) UIFont *smallFont; // ivar: _smallFont
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) NSInteger symbolScale; // ivar: _symbolScale
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor
@property (copy, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(BOOL)supportsSecureCoding;
+(id)overriddenStyleAttributes;
+(id)styleAttributesForStatusBar:(id)arg0 style:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fontForStyle:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)styleAttributesWithOverrides:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif