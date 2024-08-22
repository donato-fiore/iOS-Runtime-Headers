// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDBEZIERPATHSOURCE_H
#define TSDBEZIERPATHSOURCE_H

@protocol TSDMixing;


#import "TSDPathSource.h"
#import "TSDBezierPath.h"

@interface TSDBezierPathSource : TSDPathSource <TSDMixing>

 {
    TSDBezierPath *mPath;
    BOOL mIsRectangular;
}


@property (nonatomic) CGSize naturalSize; // ivar: mNaturalSize


+(id)pathSourceWithBezierPath:(id)arg0 ;
-(BOOL)isCircular;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRectangular;
-(BOOL)isRectangularForever;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)hash;
-(id)bezierPathWithoutFlips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBezierPath:(id)arg0 ;
-(id)initWithNaturalSize:(struct CGSize )arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(struct CGAffineTransform )transformToNaturalSize;
-(void)dealloc;
-(void)p_setBezierPath:(id)arg0 ;


@end


#endif