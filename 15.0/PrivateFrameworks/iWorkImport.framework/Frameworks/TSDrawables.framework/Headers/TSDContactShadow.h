// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDCONTACTSHADOW_H
#define TSDCONTACTSHADOW_H



#import "TSDShadow.h"

@interface TSDContactShadow : TSDShadow

@property (readonly, nonatomic) CGFloat height; // ivar: mHeight
@property (readonly, nonatomic) CGFloat perspective;


+(id)contactShadowWithOffset:(CGFloat)arg0 height:(CGFloat)arg1 radius:(CGFloat)arg2 opacity:(CGFloat)arg3 color:(id)arg4 enabled:(BOOL)arg5 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)clampOffset:(CGFloat)arg0 ;
-(CGFloat)clampRadius:(CGFloat)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)shadowType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithOffset:(CGFloat)arg0 height:(CGFloat)arg1 radius:(CGFloat)arg2 opacity:(CGFloat)arg3 color:(id)arg4 enabled:(BOOL)arg5 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)newShadowClampedForSwatches;
-(struct CGImage *)newShadowImageForRep:(id)arg0 withSize:(struct CGSize )arg1 drawSelector:(SEL)arg2 unflipped:(BOOL)arg3 ;
-(struct CGImage *)newShadowImageFromContext:(struct CGContext *)arg0 withSize:(struct CGSize )arg1 bounds:(struct CGRect )arg2 unflipped:(BOOL)arg3 ;
-(struct CGRect )boundsForRep:(id)arg0 ;
-(struct CGRect )boundsInNaturalSpaceForRep:(id)arg0 ;
-(struct CGRect )shadowBoundsForRect:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif