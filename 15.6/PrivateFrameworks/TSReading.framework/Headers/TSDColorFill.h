// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDCOLORFILL_H
#define TSDCOLORFILL_H

@class TSUColor;
@protocol TSDMixing, NSCopying, NSMutableCopying;


#import "TSDFill.h"

@interface TSDColorFill : TSDFill <TSDMixing, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) *CGColor CGColor;
@property (readonly, nonatomic) CGFloat brightness;
@property (readonly, copy, nonatomic) TSUColor *color; // ivar: mColor
@property (readonly, nonatomic) CGFloat hue;
@property (readonly, nonatomic) CGFloat luminance;
@property (readonly, nonatomic) CGFloat opacity;
@property (readonly, nonatomic) CGFloat saturation;


+(id)blackColor;
+(id)blueColor;
+(id)brownColor;
+(id)clearColor;
+(id)colorWithCGColor:(struct CGColor *)arg0 ;
+(id)colorWithColor:(id)arg0 ;
+(id)colorWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
+(id)colorWithUIColor:(id)arg0 ;
+(id)colorWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
+(id)cyanColor;
+(id)grayColor;
+(id)greenColor;
+(id)keyPathsForValuesAffectingBrightness;
+(id)keyPathsForValuesAffectingHue;
+(id)keyPathsForValuesAffectingLuminance;
+(id)keyPathsForValuesAffectingOpacity;
+(id)keyPathsForValuesAffectingSaturation;
+(id)magentaColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)randomColor;
+(id)redColor;
+(id)whiteColor;
+(id)yellowColor;
-(BOOL)canApplyToCALayer;
-(BOOL)canApplyToCAShapeLayer;
-(BOOL)drawsInOneStep;
-(BOOL)isClear;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNearlyWhite;
-(BOOL)isOpaque;
-(CGFloat)p_hsbComponentWithIndex:(NSUInteger)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)hash;
-(SEL)mapThemeAssetSelector;
-(id)UIColor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)grayscaleColor;
-(id)initWithCGColor:(struct CGColor *)arg0 ;
-(id)initWithColor:(id)arg0 ;
-(id)initWithRed:(CGFloat)arg0 green:(CGFloat)arg1 blue:(CGFloat)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithUIColor:(id)arg0 ;
-(id)initWithWhite:(CGFloat)arg0 alpha:(CGFloat)arg1 ;
-(id)invertedColor;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)referenceColor;
-(int)fillType;
-(void)applyToCALayer:(id)arg0 withScale:(CGFloat)arg1 ;
-(void)applyToCAShapeLayer:(id)arg0 withScale:(CGFloat)arg1 ;
-(void)dealloc;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif