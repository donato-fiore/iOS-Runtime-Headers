// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOLOR_H
#define WFCOLOR_H

@class UIColor, NSColor, NSBundle, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "WFGradient.h"

@interface WFColor : NSObject <NSSecureCoding, NSCopying>

 {
    *CGColor _CGColor;
    UIColor *_platformColor;
}


@property (readonly, nonatomic) *CGColor CGColor;
@property (readonly, nonatomic) NSColor *NSColor; // ivar: _NSColor
@property (readonly, nonatomic) unsigned int RGBAValue;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) CGFloat alpha;
@property (readonly, nonatomic) CGFloat blue;
@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) NSString *colorName; // ivar: _colorName
@property (readonly, nonatomic) WFGradient *gradient;
@property (readonly, nonatomic) CGFloat green;
@property (readonly, nonatomic) BOOL hasPaletteGradient;
@property (readonly, nonatomic) NSString *hexValue;
@property (readonly, nonatomic) WFGradient *paletteGradient;
@property (readonly, nonatomic) UIColor *platformColor;
@property (readonly, nonatomic) CGFloat red;
@property (readonly, nonatomic) NSUInteger representationType; // ivar: _representationType
@property (readonly, nonatomic) NSUInteger systemColor; // ivar: _systemColor


+(BOOL)supportsSecureCoding;
+(id)blackColor;
+(id)clearColor;
+(id)colorNamed:(id)arg0 inBundle:(id)arg1 ;
+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithDisplayP3Red:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithFocusColorName:(id)arg0 ;
+(id)colorWithP3RGBAValue:(unsigned int)arg0 ;
+(id)colorWithPaletteColor:(NSUInteger)arg0 ;
+(id)colorWithRGBAValue:(unsigned int)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithSystemColor:(NSUInteger)arg0 ;
+(id)colorWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
+(id)whiteColor;
+(id)workflowGradientPalette;
+(id)workflowPalette;
+(id)workflowPaletteNames;
-(BOOL)getRed:(*CGFloat)arg0 green:(*CGFloat)arg1 blue:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(BOOL)isCloseToColor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorName:(id)arg0 inBundle:(id)arg1 ;
-(id)initWithDisplayP3Red:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithPlatformColor:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)initWithSystemColor:(NSUInteger)arg0 ;
-(id)initWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(id)paletteGradientFallingBackToDefaultGradient:(BOOL)arg0 ;
-(id)serializedRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getHue:(*CGFloat)arg0 saturation:(*CGFloat)arg1 value:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;


@end


#endif