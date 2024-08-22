// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDTRANSFORMGRADIENT_H
#define TSDTRANSFORMGRADIENT_H

@protocol TSDMixing;


#import "TSDGradient.h"

@interface TSDTransformGradient : TSDGradient <TSDMixing>

 {
    CGAffineTransform mTransformBeforeUpgrade;
}


@property (readonly, nonatomic) CGSize baseNaturalSize; // ivar: mBaseNaturalSize
@property (readonly, nonatomic) CGPoint endPoint; // ivar: mEnd
@property (readonly, nonatomic) CGPoint startPoint; // ivar: mStart


-(BOOL)isAdvancedGradientIgnoringFlag;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringTransform:(id)arg0 ;
-(CGFloat)gradientAngleInDegrees;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithGradient:(id)arg0 inPath:(id)arg1 andBounds:(struct CGRect )arg2 ;
-(id)initWithGradientStops:(id)arg0 type:(NSUInteger)arg1 ;
-(id)initWithStartColor:(id)arg0 endColor:(id)arg1 type:(NSUInteger)arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct CGAffineTransform )transformForSize:(struct CGSize )arg0 ;
-(struct CGPoint )endPointForPath:(id)arg0 andBounds:(struct CGRect )arg1 ;
-(struct CGPoint )normalizedPointForSize:(struct CGSize )arg0 endPoint:(BOOL)arg1 ;
-(struct CGPoint )p_scalePoint:(struct CGPoint )arg0 fromShapeWithNaturalSize:(struct CGSize )arg1 ;
-(struct CGPoint )p_scalePoint:(struct CGPoint )arg0 toShapeWithNaturalSize:(struct CGSize )arg1 ;
-(struct CGPoint )startPointForPath:(id)arg0 andBounds:(struct CGRect )arg1 ;
-(struct CGSize )baseNaturalSizeForBounds:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)p_drawQuartzShadingInContext:(struct CGContext *)arg0 withGradientNaturalSize:(struct CGSize )arg1 baseNaturalSize:(struct CGSize )arg2 start:(struct CGPoint )arg3 end:(struct CGPoint )arg4 ;
-(void)p_setDefaultValues;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 isPDF:(BOOL)arg3 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 atAngle:(CGFloat)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif