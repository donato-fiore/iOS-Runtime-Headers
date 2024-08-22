// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDEDITABLEBEZIERPATHSOURCE_H
#define TSDEDITABLEBEZIERPATHSOURCE_H

@class NSArray, NSMutableArray;
@protocol TSDRealignablePathSource, TSDMixing;


#import "TSDPathSource.h"
#import "TSDBezierNode.h"

@interface TSDEditableBezierPathSource : TSDPathSource <TSDRealignablePathSource, TSDMixing>

 {
    NSUInteger mActiveSubpath;
    BOOL mHasLockedFlipTransform;
    CGAffineTransform mLockedFlipTransform;
}


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
@property (retain, nonatomic) NSMutableArray *nodes;
@property (readonly, nonatomic) *CGPath subpathForSelection;
@property (retain, nonatomic) NSMutableArray *subpaths; // ivar: mSubpaths


+(id)editableBezierPathSource;
+(id)editableBezierPathSourceWithBezierPath:(id)arg0 ;
+(id)editableBezierPathSourceWithPathSource:(id)arg0 ;
-(BOOL)bezierPathUnderPoint:(struct CGPoint )arg0 withTransform:(struct CGAffineTransform )arg1 tolerance:(CGFloat)arg2 ;
-(BOOL)canCloseSelectedNodes;
-(BOOL)canConnectSelectedNodes;
-(BOOL)canCutAtSelectedNodes;
-(BOOL)isCircular;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRectangular;
-(CGFloat)distanceToPoint:(struct CGPoint )arg0 subpathIndex:(*NSUInteger)arg1 elementIndex:(*NSUInteger)arg2 tValue:(*CGFloat)arg3 threshold:(CGFloat)arg4 ;
-(Class)preferredRepClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(id)bezierNodeUnderPoint:(struct CGPoint )arg0 withTransform:(struct CGAffineTransform )arg1 andTolerance:(CGFloat)arg2 returningType:(*NSInteger)arg3 ;
-(id)bezierPathWithoutFlips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)insertNodeAtPoint:(struct CGPoint )arg0 tolerance:(CGFloat)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)nodeAfterNode:(id)arg0 ;
-(id)nodePriorToNode:(id)arg0 ;
-(id)splitEdge:(NSInteger)arg0 at:(CGFloat)arg1 fromSubpath:(NSInteger)arg2 ;
-(id)subpathsForConnectingUsingFirstSubpathFirstNode:(*BOOL)arg0 andSecondPathFirstNode:(*BOOL)arg1 ;
-(struct CGAffineTransform )pathFlipTransform;
-(struct CGPath *)pathWithoutFlips;
-(struct CGSize )naturalSize;
-(void)addNode:(id)arg0 ;
-(void)adjustGeometryForAlignToOrigin:(id)arg0 ;
-(void)alignToOrigin;
-(void)closePath;
-(void)closeSelectedNodes;
-(void)connectSelectedNodes;
-(void)convertToHobby;
-(void)curveToPoint:(struct CGPoint )arg0 controlPoint1:(struct CGPoint )arg1 controlPoint2:(struct CGPoint )arg2 ;
-(void)cutAtSelectedNodes;
-(void)dealloc;
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