// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OITSUCOLOR_H
#define OITSUCOLOR_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OITSUColor : NSObject <NSCopying>

 {
    *CGColor mCGColor;
}


@property (readonly) *CGColor CGColor;
@property (readonly) *CGColorSpace CGColorSpace;
@property (readonly) int CGColorSpaceModel;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) CGFloat alphaComponent;
@property (readonly) CGFloat blackComponent;
@property (readonly, nonatomic) CGFloat blueComponent;
@property (readonly, nonatomic) NSUInteger colorRGBSpace; // ivar: mColorRGBSpace
@property (readonly) CGFloat cyanComponent;
@property (readonly, nonatomic) CGFloat greenComponent;
@property (readonly) CGFloat magentaComponent;
@property (readonly, nonatomic) CGFloat redComponent;
@property (readonly) CGFloat whiteComponent;
@property (readonly) CGFloat yellowComponent;


+(id)blackColor;
+(id)blueColor;
+(id)brownColor;
+(id)clearColor;
+(id)colorWithBGR:(unsigned int)arg0 ;
+(id)colorWithBGRValue:(NSInteger)arg0 ;
+(id)colorWithBinaryRed:(int)arg0 green:(int)arg1 blue:(int)arg2 ;
+(id)colorWithBinaryRed:(int)arg0 green:(int)arg1 blue:(int)arg2 alpha:(int)arg3 ;
+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithCalibratedHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithCalibratedRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithCalibratedWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
+(id)colorWithCatalogName:(id)arg0 colorName:(id)arg1 ;
+(id)colorWithCsColour:(struct CsColour *)arg0 ;
+(id)colorWithDeviceCyan:(CGFloat)arg0 magenta:(CGFloat)arg1 yellow:(CGFloat)arg2 black:(CGFloat)arg3 alpha:(CGFloat)arg4 ;
+(id)colorWithDeviceHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithDeviceRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithDeviceWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
+(id)colorWithEshColor:(struct EshColor *)arg0 ;
+(id)colorWithHexString:(id)arg0 ;
+(id)colorWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 targetRGBSpace:(NSUInteger)arg4 ;
+(id)colorWithPatternImage:(id)arg0 ;
+(id)colorWithRGBBytes:(unsigned char)arg0 green:(unsigned char)arg1 blue:(unsigned char)arg2 ;
+(id)colorWithRGBValue:(NSInteger)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithSystemColorID:(int)arg0 ;
+(id)colorWithUIColor:(id)arg0 ;
+(id)colorWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
+(id)cyanColor;
+(id)grayColor;
+(id)greenColor;
+(id)lightGrayColor;
+(id)magentaColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)randomColor;
+(id)redColor;
+(id)stringForColor:(id)arg0 ;
+(id)stringForSystemColorID:(int)arg0 ;
+(id)whiteColor;
+(id)yellowColor;
-(BOOL)isAlmostEqualToColor:(id)arg0 ;
-(BOOL)isBlack;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualWithTolerance:(id)arg0 ;
-(BOOL)isNearlyWhite;
-(BOOL)isOpaque;
-(BOOL)p_isEqualToColor:(id)arg0 withTolerance:(CGFloat)arg1 ;
-(BOOL)wantsHighContrastBackgroundForDarkMode:(id)arg0 ;
-(CGFloat)brightnessComponent;
-(CGFloat)hueComponent;
-(CGFloat)luminance;
-(CGFloat)p_cmykComponentWithIndex:(unsigned char)arg0 ;
-(CGFloat)p_rgbComponentWithIndex:(unsigned char)arg0 ;
-(CGFloat)saturationComponent;
-(NSUInteger)hash;
-(id)blendedColorWithFraction:(CGFloat)arg0 ofColor:(id)arg1 ;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(id)colorWithShadeValue:(CGFloat)arg0 ;
-(id)colorWithTintValue:(CGFloat)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)grayscaleColor;
-(id)hexString;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithCGColor:(struct CGColor *)arg0 colorSpace:(NSUInteger)arg1 ;
-(id)initWithHexString:(id)arg0 ;
-(id)initWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 alpha:(CGFloat)arg3 targetRGBSpace:(NSUInteger)arg4 ;
-(id)initWithPatternImage:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 colorSpace:(NSUInteger)arg4 ;
-(id)initWithUIColor:(id)arg0 ;
-(id)initWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(id)invertedColor;
-(id)newBlendedColorWithFraction:(CGFloat)arg0 ofColor:(id)arg1 ;
-(id)newSolidColoredBitmap:(struct CGSize )arg0 ;
-(id)solidColoredPngImage;
-(struct ? )ttColor;
-(struct CsColour )csColour;
-(struct EshColor )eshColor;
-(unsigned int)toBGR;
-(void)dealloc;
-(void)getCyan:(*CGFloat)arg0 magenta:(*CGFloat)arg1 yellow:(*CGFloat)arg2 black:(*CGFloat)arg3 alpha:(*CGFloat)arg4 ;
-(void)getRGBAComponents:(*CGFloat)arg0 ;
-(void)getRGBBytes:(char *)arg0 green:(char *)arg1 blue:(char *)arg2 ;
-(void)getRed:(*CGFloat)arg0 green:(*CGFloat)arg1 blue:(*CGFloat)arg2 alpha:(*CGFloat)arg3 ;
-(void)getWhite:(*CGFloat)arg0 alpha:(*CGFloat)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)set;


@end


#endif