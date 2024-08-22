// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIGESTUREGRAPHNODE_H
#define UIGESTUREGRAPHNODE_H

@class NSMutableSet, NSMapTable, NSSet;


#import "UIGestureGraphElement.h"

@interface UIGestureGraphNode : UIGestureGraphElement {
    NSMutableSet *_inEdges;
    NSMutableSet *_outEdges;
    NSMutableSet *_inOutEdges;
    NSMapTable *_edgesByLabel;
}


@property (readonly, nonatomic) NSSet *allEdges;
@property (readonly, nonatomic) NSUInteger edgeCount;
@property (readonly, nonatomic) NSSet *inEdges;
@property (readonly, nonatomic) NSSet *inOutEdges;
@property (readonly, nonatomic) NSSet *outEdges;


-(BOOL)hasEdgeBetweenNode:(id)arg0 ;
-(BOOL)hasEdgeFromNode:(id)arg0 ;
-(BOOL)hasEdgeTowardNode:(id)arg0 ;
-(BOOL)isInEdge:(id)arg0 ;
-(BOOL)isInOutEdge:(id)arg0 ;
-(BOOL)isOutEdge:(id)arg0 ;
-(NSUInteger)edgeCountForLabel:(id)arg0 ;
-(NSUInteger)typeOfEdge:(id)arg0 ;
-(id)_edgesForType:(NSUInteger)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)description;
-(id)edgesForLabel:(id)arg0 ;
-(void)_addEdge:(id)arg0 ;
-(void)_removeEdge:(id)arg0 ;
-(void)enumerateEdgesBetweenNode:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesFromNode:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesTowardNode:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNeighborNodesUsingBlock:(id)arg0 ;


@end


#endif