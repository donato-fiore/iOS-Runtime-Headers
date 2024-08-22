// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MASUBGRAPH_H
#define MASUBGRAPH_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "MABaseGraph.h"

@interface MASubGraph : NSObject {
    NSMutableDictionary *_nodesByIdentifier;
    NSMutableDictionary *_nodesByLabel;
    NSMutableDictionary *_nodesByName;
    NSMutableDictionary *_edgesByIdentifier;
    NSMutableDictionary *_edgesByLabel;
    NSMutableDictionary *_edgesByName;
    NSMutableDictionary *_nodesByNameGroupByNodes;
}


@property (readonly, nonatomic) MABaseGraph *graph; // ivar: _graph


+(id)subGraphIntersectionsWithSubGraphs:(id)arg0 ;
+(id)subGraphWithGraph:(id)arg0 ;
-(NSUInteger)edgesCount;
-(NSUInteger)edgesCountForLabel:(id)arg0 ;
-(NSUInteger)edgesCountForName:(id)arg0 ;
-(NSUInteger)nodesCount;
-(NSUInteger)nodesCountForLabel:(id)arg0 ;
-(NSUInteger)nodesCountForName:(id)arg0 ;
-(NSUInteger)nodesCountForName:(id)arg0 fromNode:(id)arg1 ;
-(id)allEdges;
-(id)allNamedEdges;
-(id)allNamedNodes;
-(id)allNodes;
-(id)description;
-(id)edgeForIdentifier:(NSUInteger)arg0 ;
-(id)edgesForLabel:(id)arg0 ;
-(id)edgesForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)edgesForName:(id)arg0 ;
-(id)edgesLabels;
-(id)edgesNames;
-(id)init;
-(id)nodeForIdentifier:(NSUInteger)arg0 ;
-(id)nodesForLabel:(id)arg0 ;
-(id)nodesForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)nodesForName:(id)arg0 ;
-(id)nodesForName:(id)arg0 fromNode:(id)arg1 ;
-(id)nodesForNames:(id)arg0 ;
-(id)nodesLabels;
-(id)nodesNames;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)_addEdge:(id)arg0 withName:(id)arg1 ;
-(void)_addNode:(id)arg0 withName:(id)arg1 ;
-(void)_addNode:(id)arg0 withName:(id)arg1 forKeyNode:(id)arg2 ;
-(void)addEdges:(id)arg0 withName:(id)arg1 ;
-(void)addNodes:(id)arg0 withName:(id)arg1 ;
-(void)enumerateEdgesByNameUsingBlock:(id)arg0 ;
-(void)enumerateEdgesWithBlock:(id)arg0 ;
-(void)enumerateEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 usingBlock:(id)arg2 ;
-(void)enumerateEdgesWithName:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodesByNameUsingBlock:(id)arg0 ;
-(void)enumerateNodesWithBlock:(id)arg0 ;
-(void)enumerateNodesWithLabel:(id)arg0 domain:(unsigned short)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNodesWithName:(id)arg0 fromNode:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNodesWithName:(id)arg0 usingBlock:(id)arg1 ;
-(void)mergeWithSubGraph:(id)arg0 ;


@end


#endif