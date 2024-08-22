// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIGESTUREGRAPH_H
#define UIGESTUREGRAPH_H

@class NSMapTable, NSSet;

#import <Foundation/Foundation.h>


@interface UIGestureGraph : NSObject {
    NSMapTable *_nodesByLabel;
    NSMapTable *_edgesByLabel;
}


@property (readonly, nonatomic) NSUInteger edgeCount;
@property (readonly, nonatomic) NSSet *edgeLabels;
@property (readonly, nonatomic) NSUInteger nodeCount;
@property (readonly, nonatomic) NSSet *nodeLabels;


-(NSUInteger)edgeCountForLabel:(id)arg0 ;
-(NSUInteger)nodeCountForLabel:(id)arg0 ;
-(id)_allEdges;
-(id)_allNodes;
-(id)_edgesForLabel:(id)arg0 ;
-(id)_nodesForLabel:(id)arg0 ;
-(id)addEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 directed:(BOOL)arg3 ;
-(id)addNodeWithLabel:(id)arg0 ;
-(id)addNodeWithLabel:(id)arg0 properties:(id)arg1 ;
-(id)addUniqueEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 directed:(BOOL)arg3 properties:(id)arg4 ;
-(id)addUniqueNodeWithLabel:(id)arg0 properties:(id)arg1 ;
-(id)description;
-(id)edgesForLabel:(id)arg0 ;
-(id)edgesForLabel:(id)arg0 properties:(id)arg1 ;
-(id)init;
-(id)nodesForLabel:(id)arg0 ;
-(id)nodesForLabel:(id)arg0 properties:(id)arg1 ;
-(void)_addEdge:(id)arg0 ;
-(void)_addNode:(id)arg0 ;
-(void)enumerateEdgesWithBlock:(id)arg0 ;
-(void)enumerateEdgesWithLabel:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodesWithBlock:(id)arg0 ;
-(void)enumerateNodesWithLabel:(id)arg0 usingBlock:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeEdge:(id)arg0 ;
-(void)removeEdges:(id)arg0 ;
-(void)removeNode:(id)arg0 ;
-(void)removeNodeEdges:(id)arg0 ;
-(void)removeNodes:(id)arg0 ;
-(void)traverseGraphBreadthFirstFromNode:(id)arg0 directed:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)traverseGraphDepthFirstFromNode:(id)arg0 directed:(BOOL)arg1 usingBlock:(id)arg2 ;


@end


#endif