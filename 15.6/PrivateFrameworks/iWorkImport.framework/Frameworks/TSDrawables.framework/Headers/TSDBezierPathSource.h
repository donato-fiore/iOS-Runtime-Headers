// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDBEZIERPATHSOURCE_H
#define TSDBEZIERPATHSOURCE_H

@class TSUBezierPath;
@protocol TSDMixing;


#import "TSDPathSource.h"

@interface TSDBezierPathSource : TSDPathSource <TSDMixing>

 {
    TSUBezierPath *mPath;
    BOOL mIsRectangular;
    TSUBezierPath *mBezierPathWithoutFlips;
}


@property (nonatomic) CGSize naturalSize; // ivar: mNaturalSize


+(id)pathSourceWithBezierPath:(id)arg0 ;
-(BOOL)isCircular;
-(BOOL)isClosed;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRectangular;
-(BOOL)isRectangularForever;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)bezierPathWithoutFlips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)inferredAccessibilityDescription;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithArchive:(*void)arg0 andBezierArchive:(*void)arg1 ;
-(id)initWithBezierPath:(id)arg0 ;
-(id)initWithNaturalSize:(struct CGSize )arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)name;
-(struct CGAffineTransform )transformToNaturalSize;
-(void)p_setBezierPath:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)saveToArchive:(*void)arg0 andBezierArchive:(*void)arg1 ;


@end


#endif