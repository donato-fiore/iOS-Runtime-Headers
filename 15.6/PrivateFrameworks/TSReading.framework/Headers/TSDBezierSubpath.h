// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDBEZIERSUBPATH_H
#define TSDBEZIERSUBPATH_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSDBezierPath.h"
#import "TSDBezierNode.h"

@interface TSDBezierSubpath : NSObject

@property (readonly, nonatomic) BOOL allNodesSelected;
@property (readonly, nonatomic) TSDBezierPath *bezierPath;
@property (readonly, nonatomic) BOOL canDeleteSelectedNodes;
@property (readonly, nonatomic) BOOL closeIfEndpointsAreEqual;
@property (nonatomic, getter=isClosed) BOOL closed; // ivar: mClosed
@property (readonly, nonatomic) TSDBezierNode *firstNode;
@property (readonly, nonatomic) BOOL hasSelectedNode;
@property (readonly, nonatomic) BOOL isRectangular;
@property (readonly, nonatomic) TSDBezierNode *lastNode;
@property (readonly, nonatomic) CGRect nodeBounds;
@property (retain, nonatomic) NSMutableArray *nodes; // ivar: mNodes


-(BOOL)isCircular;
-(CGFloat)distanceToPoint:(struct CGPoint )arg0 elementIndex:(*NSUInteger)arg1 tValue:(*CGFloat)arg2 threshold:(CGFloat)arg3 ;
-(id)bezierNodeUnderPoint:(struct CGPoint )arg0 withTransform:(struct CGAffineTransform )arg1 andTolerance:(CGFloat)arg2 returningType:(*NSInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)insertNodeAtPoint:(struct CGPoint )arg0 tolerance:(CGFloat)arg1 ;
-(id)nodeAfterNode:(id)arg0 ;
-(id)nodePriorToNode:(id)arg0 ;
-(id)splitEdgeAtIndex:(NSUInteger)arg0 ;
-(void)addNode:(id)arg0 ;
-(void)addNodesToArray:(id)arg0 ;
-(void)appendToBezierPath:(id)arg0 ;
-(void)appendToBezierPath:(id)arg0 selectedNodesOnly:(BOOL)arg1 fromIndex:(NSUInteger)arg2 ;
-(void)convertToHobby;
-(void)dealloc;
-(void)deleteSelectedNodes;
-(void)deselectAllNodes;
-(void)offsetSelectedEdgesByDelta:(struct CGPoint )arg0 ;
-(void)offsetSelectedNodesByDelta:(struct CGPoint )arg0 ;
-(void)removeLastNode;
-(void)removeNode:(id)arg0 ;
-(void)reverseDirection;
-(void)selectAllNodes;
-(void)sharpenAllNodes;
-(void)smoothNode:(id)arg0 ;
-(void)transformUsingAffineTransform:(struct CGAffineTransform )arg0 ;
-(void)updateReflectedState;


@end


#endif