// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDEDITABLEBEZIERPATHSOURCE_H
#define TSDEDITABLEBEZIERPATHSOURCE_H

@class NSArray;
@protocol TSDRealignablePathSource, TSDMixing;


#import "TSDPathSource.h"
#import "TSDBezierNode.h"

@interface TSDEditableBezierPathSource : TSDPathSource <TSDRealignablePathSource, TSDMixing>

 {
    BOOL mHasLockedFlipTransform;
    CGAffineTransform mLockedFlipTransform;
}


@property (nonatomic) NSUInteger activeSubpath; // ivar: mActiveSubpath
@property (readonly, nonatomic) BOOL allNodesSelected;
@property (readonly, nonatomic) BOOL canDeleteSelectedNodes;
@property (readonly, nonatomic) BOOL closeIfEndpointsAreEqual;
@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly, nonatomic) BOOL deletingSelectedNodesWillDeleteShape;
@property (readonly, nonatomic) TSDBezierNode *firstNode;
@property (readonly, nonatomic) BOOL hasSelectedNode;
@property (readonly, nonatomic) BOOL isCompound;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) TSDBezierNode *lastNode;
@property (readonly, nonatomic) CGRect nodeBounds;
@property (retain, nonatomic) NSArray *nodeTypes;
@property (copy, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) *CGPath pathWithoutFlips;
@property (readonly, nonatomic) *CGPath subpathForSelection;
@property (copy, nonatomic) NSArray *subpaths; // ivar: mSubpaths


+(id)editableBezierPathSource;
+(id)editableBezierPathSourceWithBezierPath:(id)arg0 ;
+(id)editableBezierPathSourceWithPathSource:(id)arg0 ;
-(BOOL)canCloseSelectedNodes;
-(BOOL)canConnectSelectedNodes;
-(BOOL)canCutAtSelectedNodes;
-(BOOL)isCircular;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualWithStrictComparison:(id)arg0 ;
-(BOOL)isRectangular;
-(CGFloat)distanceToPoint:(struct CGPoint )arg0 subpathIndex:(*NSUInteger)arg1 elementIndex:(*NSUInteger)arg2 tValue:(*CGFloat)arg3 threshold:(CGFloat)arg4 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)bezierNodeUnderPoint:(struct CGPoint )arg0 withTransform:(struct CGAffineTransform )arg1 andTolerance:(CGFloat)arg2 returningType:(*NSInteger)arg3 ;
-(id)bezierPathWithoutFlips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)inferredAccessibilityDescription;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)nodeAfterNode:(id)arg0 ;
-(id)nodePriorToNode:(id)arg0 ;
-(id)splitEdge:(NSInteger)arg0 at:(CGFloat)arg1 fromSubpath:(NSInteger)arg2 ;
-(id)subpathsForConnectingUsingFirstSubpathFirstNode:(*BOOL)arg0 andSecondPathFirstNode:(*BOOL)arg1 ;
-(struct CGAffineTransform )pathFlipTransform;
-(struct CGSize )naturalSize;
-(void)addNode:(id)arg0 ;
-(void)alignToOrigin;
-(void)beginNewSubpath;
-(void)closePath;
-(void)closeSelectedNodes;
-(void)connectSelectedNodes;
-(void)convertToHobby;
-(void)curveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)cutAtSelectedNodes;
-(void)deleteSelectedEdges;
-(void)deleteSelectedNodes;
-(void)deleteSelectedNodesForced:(BOOL)arg0 ;
-(void)deselectAllNodes;
-(void)lineToPoint:(struct CGPoint )arg0 ;
-(void)moveToPoint:(struct CGPoint )arg0 ;
-(void)offsetSelectedEdgesByDelta:(struct CGPoint )arg0 ;
-(void)offsetSelectedNodesByDelta:(struct CGPoint )arg0 ;
-(void)removeLastNode;
-(void)removeNode:(id)arg0 ;
-(void)reverseDirection;
-(void)saveToArchive:(*void)arg0 ;
-(void)selectAllNodes;
-(void)selectSubpathForNode:(id)arg0 toggle:(BOOL)arg1 ;
-(void)setBezierPath:(id)arg0 ;
-(void)setLockedFlipTransform:(BOOL)arg0 ;
-(void)setNaturalSize:(struct CGSize )arg0 ;
-(void)sharpenAllNodes;
-(void)smoothAllNodes;
-(void)smoothCurveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)smoothNode:(id)arg0 ;
-(void)splitSelectedEdges;
-(void)splitSelectedNodes;
-(void)toggleNode:(id)arg0 toType:(int)arg1 prevNode:(id)arg2 nextNode:(id)arg3 ;
-(void)toggleSelectedNodesToType:(int)arg0 ;
-(void)transformUsingAffineTransform:(struct CGAffineTransform )arg0 ;


@end


#endif