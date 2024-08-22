// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKPKSTROKE_H
#define TSKPKSTROKE_H

@class PKInk, PKStroke, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSKPKStroke : NSObject <NSCopying>

 {
    NSUInteger _hash;
}


@property (readonly, nonatomic) CGRect incorrectUnscaledFastFrame;
@property (readonly, nonatomic) PKInk *ink;
@property (retain, nonatomic) PKStroke *internalPencilKitStroke; // ivar: _internalPencilKitStroke
@property (retain, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) CGFloat pencilAnnotationDrawingScale; // ivar: _pencilAnnotationDrawingScale
@property (readonly, nonatomic) PKStroke *pencilKitStroke;
@property (readonly, nonatomic) NSUInteger pointsCount;
@property (readonly, nonatomic) CGFloat timestamp;


+(NSUInteger)p_pointsCountOfStroke:(id)arg0 ;
+(id)p_copyOfPKStroke:(id)arg0 ;
+(id)strokesForPKStrokes:(id)arg0 withPencilAnnotationDrawingScale:(CGFloat)arg1 ;
+(id)substrokeOfStroke:(id)arg0 withRange:(struct _NSRange )arg1 ;
+(struct CGPoint )p_locationAtIndex:(NSUInteger)arg0 ofStroke:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnderlineStrokeWithVerticalTextLayout:(BOOL)arg0 ;
-(CGFloat)timestampAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPKStroke:(id)arg0 pencilAnnotationDrawingScale:(CGFloat)arg1 ;
-(id)strokeByTransformingStrokeWithTransform:(struct CGAffineTransform )arg0 ;
-(id)subStrokeFromStartIndex:(NSUInteger)arg0 toEndIndex:(NSUInteger)arg1 adjustingStart:(BOOL)arg2 andAdjustingEnd:(BOOL)arg3 toEdgesOfRect:(struct CGRect )arg4 ;
-(id)substrokeWithRange:(struct _NSRange )arg0 ;
-(struct CGPoint )locationAtIndex:(NSUInteger)arg0 ;
-(struct CGPoint )unscaledLocationAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )p_incorrectPencilKitFastFrame;
-(struct CGRect )strokePointsFrame;
-(struct CGRect )unscaledStrokePointsFrame;
-(void)enumerateUnscaledPointsWithDistanceStep:(CGFloat)arg0 usingBlock:(id)arg1 ;


@end


#endif