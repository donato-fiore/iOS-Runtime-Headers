// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPCHUNK_H
#define CPCHUNK_H



#import "CPObject.h"

@interface CPChunk : CPObject {
    CGRect bounds;
    BOOL shrinksWithChildren;
    BOOL dirtyBounds;
    unsigned int position;
    NSInteger insertionOrder;
}




+(float)chooseReferenceFontSizeFrom:(float)arg0 and:(float)arg1 ;
-(BOOL)boundsEqualsRect:(struct CGRect )arg0 accuracy:(CGFloat)arg1 ;
-(BOOL)geometricallyContains:(id)arg0 ;
-(BOOL)intersectsChild:(struct CGRect )arg0 ;
-(BOOL)overlapsHorizontallyWith:(id)arg0 ;
-(BOOL)overlapsVerticallyWith:(id)arg0 ;
-(BOOL)shrinksWithChildren;
-(CGFloat)bottom;
-(CGFloat)center;
-(CGFloat)left;
-(CGFloat)right;
-(CGFloat)rotationAngle;
-(CGFloat)top;
-(NSInteger)compareAnchorX:(id)arg0 ;
-(NSInteger)compareAnchorY:(id)arg0 ;
-(NSInteger)compareAnchorYDescending:(id)arg0 ;
-(NSInteger)compareChunkPosition:(id)arg0 ;
-(NSInteger)compareCommonAnchorX:(id)arg0 ;
-(NSInteger)compareInsertionOrder:(id)arg0 ;
-(NSInteger)compareLinearBounds:(id)arg0 ;
-(NSInteger)compareTopDescending:(id)arg0 ;
-(NSInteger)compareX:(id)arg0 ;
-(NSInteger)compareXBounds:(id)arg0 ;
-(NSInteger)compareY:(id)arg0 ;
-(NSInteger)compareYBounds:(id)arg0 ;
-(NSInteger)compareYDescending:(id)arg0 ;
-(NSInteger)compareYDescendingX:(id)arg0 ;
-(NSInteger)compareZ:(id)arg0 ;
-(NSInteger)compareZDescending:(id)arg0 ;
-(NSInteger)insertionOrder;
-(float)absoluteGapTo:(id)arg0 ;
-(float)advanceDeltaAfterSpace;
-(float)clusterGapTo:(id)arg0 ;
-(float)fontSize;
-(float)opticalLeading;
-(float)referenceAdvanceWidth;
-(id)copyAndSplitChildrenAtIndex:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)describeBounds;
-(id)init;
-(id)newTakeChildren;
-(id)newTakeChildrenAmong:(id)arg0 ;
-(int)clusterLevelHint;
-(struct CGPoint )anchor;
-(struct CGRect )adjustToPointBoundary:(struct CGRect )arg0 ;
-(struct CGRect )bounds;
-(struct CGRect )renderedBounds;
-(struct CGSize )advance;
-(unsigned int)chunkPosition;
-(void)accept:(id)arg0 ;
-(void)add:(id)arg0 ;
-(void)add:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)addChildrenOf:(id)arg0 ;
-(void)fitBoundsToChildren;
-(void)orderedInsert:(id)arg0 usingSelector:(SEL)arg1 ;
-(void)remove:(id)arg0 ;
-(void)removeAll;
-(void)resizeWith:(id)arg0 ;
-(void)setAnchor:(struct CGPoint )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setChildren:(id)arg0 ;
-(void)setChunkPosition:(unsigned int)arg0 ;
-(void)setInsertionOrder:(NSInteger)arg0 ;
-(void)setShrinksWithChildren:(BOOL)arg0 ;
-(void)sortUsingSelector:(SEL)arg0 ;
-(void)translateObjectYBy:(CGFloat)arg0 ;


@end


#endif