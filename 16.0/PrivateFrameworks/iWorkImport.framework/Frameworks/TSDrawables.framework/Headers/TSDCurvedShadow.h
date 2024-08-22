// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCURVEDSHADOW_H
#define TSDCURVEDSHADOW_H



#import "TSDShadow.h"

@interface TSDCurvedShadow : TSDShadow

@property (readonly, nonatomic) CGFloat curve; // ivar: mCurve


+(id)curvedShadowWithOffset:(CGFloat)arg0 angle:(CGFloat)arg1 radius:(CGFloat)arg2 curve:(CGFloat)arg3 opacity:(CGFloat)arg4 color:(id)arg5 enabled:(BOOL)arg6 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showForEditingText;
-(CGFloat)clampOffset:(CGFloat)arg0 ;
-(CGFloat)paddingForBlur;
-(CGFloat)paddingForCurveWithSize:(struct CGSize )arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)shadowType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithOffset:(CGFloat)arg0 angle:(CGFloat)arg1 radius:(CGFloat)arg2 curve:(CGFloat)arg3 opacity:(CGFloat)arg4 color:(id)arg5 enabled:(BOOL)arg6 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newShadowClampedForSwatches;
-(struct CGImage *)newShadowImageForRep:(id)arg0 withSize:(struct CGSize )arg1 drawSelector:(SEL)arg2 unflipped:(BOOL)arg3 ;
-(struct CGRect )boundsForRep:(id)arg0 ;
-(struct CGRect )boundsInNaturalSpaceForRep:(id)arg0 ;
-(struct CGRect )expandedBoundsForRect:(struct CGRect )arg0 ;
-(struct CGRect )shadowBoundsForRect:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif