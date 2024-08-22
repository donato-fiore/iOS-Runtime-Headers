// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPZONEBORDER_H
#define CPZONEBORDER_H

@class NSMutableArray;
@protocol NSCopying, CPCopying;

#import <Foundation/Foundation.h>

#import "CPPage.h"

@interface CPZoneBorder : NSObject <NSCopying, CPCopying>

 {
    CGRect bounds;
    CPPage *page;
    NSMutableArray *ownerArray;
    NSMutableArray *graphicObjects;
    NSMutableArray *neighbors;
    NSMutableArray *intersections;
    BOOL isHorizontal;
    BOOL hasForwardVector;
    BOOL hasBackwardVector;
    CGFloat overhangMin;
    CGFloat overhangMax;
}




+(int)clockwiseWindingNumberOfShapeWithBorders:(id)arg0 ;
+(struct CGRect )extendRect:(struct CGRect )arg0 ;
+(void)addIntersectionBetweenBorder:(id)arg0 andBorder:(id)arg1 atRect:(struct CGRect )arg2 ;
+(void)outerVertices:(struct CGPoint *)arg0 fromBorders:(id)arg1 swollenBy:(CGFloat)arg2 ;
+(void)removeIntersectionBetweenBorder:(id)arg0 andBorder:(id)arg1 ;
-(BOOL)continues:(id)arg0 ;
-(BOOL)crosses:(id)arg0 ;
-(BOOL)extractCycleTo:(id)arg0 goingForward:(BOOL)arg1 startingAtIndex:(unsigned int)arg2 ;
-(BOOL)extractCycleTo:(id)arg0 goingForward:(BOOL)arg1 throughIntersectionIndex:(unsigned int)arg2 returningTo:(id)arg3 atRect:(struct CGRect *)arg4 ;
-(BOOL)hasBackwardVector;
-(BOOL)hasClockwiseVectorAtIndex:(unsigned int)arg0 startingForward:(BOOL)arg1 ;
-(BOOL)hasCounterclockwiseVectorAtIndex:(unsigned int)arg0 startingForward:(BOOL)arg1 ;
-(BOOL)hasForwardVector;
-(BOOL)hasNeighborShape:(id)arg0 ;
-(BOOL)hasNeighborShape:(id)arg0 atSide:(int)arg1 ;
-(BOOL)hasVectorGoingForward:(BOOL)arg0 startingAtIndex:(*unsigned int)arg1 ;
-(BOOL)intersectsWith:(id)arg0 atRect:(struct CGRect *)arg1 ;
-(BOOL)isHorizontal;
-(BOOL)isVertical;
-(BOOL)windsClockwiseOnto:(id)arg0 ;
-(NSInteger)compareXBounds:(id)arg0 ;
-(NSInteger)compareYBounds:(id)arg0 ;
-(NSInteger)zOrder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutIntersections;
-(id)getNextBorder:(unsigned int)arg0 ;
-(id)graphicObjectAtIndex:(unsigned int)arg0 ;
-(id)graphicObjects;
-(id)init;
-(id)initSuper;
-(id)initWithGraphicObject:(id)arg0 ;
-(id)neighborAtIndex:(unsigned int)arg0 ;
-(id)ownerArray;
-(id)page;
-(struct CGRect )bounds;
-(unsigned int)graphicObjectCount;
-(unsigned int)indexOfIntersectionWith:(id)arg0 ;
-(unsigned int)intersectionCount;
-(unsigned int)neighborCount;
-(void)addGraphicObject:(id)arg0 ;
-(void)addNeighbor:(id)arg0 ;
-(void)addToArray:(id)arg0 ;
-(void)addToArray:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)combine:(id)arg0 ;
-(void)dealloc;
-(void)instantiateVectors;
-(void)removeFromArray;
-(void)removeFromArrayAtIndex:(unsigned int)arg0 ;
-(void)removeGraphicObjectAtIndex:(unsigned int)arg0 ;
-(void)removeLooseThreadsStartingFrom:(id)arg0 ;
-(void)removeNeighborAtIndex:(unsigned int)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setHasBackwardVector:(BOOL)arg0 ;
-(void)setHasForwardVector:(BOOL)arg0 ;
-(void)setSide:(int)arg0 ofPage:(id)arg1 ;
-(void)trimToLastIntersections;


@end


#endif