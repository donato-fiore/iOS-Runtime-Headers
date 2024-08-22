// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUDIRECTEDGRAPH_H
#define VMUDIRECTEDGRAPH_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VMUDirectedGraph : NSObject <NSCopying>

 {
    NSInteger _graphCompatibilityVersion;
    NSInteger _graphVersion;
    unsigned int _edgeCount;
    unsigned int _edgeCapacity;
    unsigned int _externalEdges;
    *void _deadNodes;
    *unsigned int _nodeAdjIndex;
    *_VMUDirectedGraphEdge _edges;
    unsigned int _indexedNodeSpace;
    unsigned int _indexedEdges;
    int _insideSearch;
    BOOL _inverted;
}


@property (copy, nonatomic) NSDictionary *additionalProperties; // ivar: _additionalProperties
@property (readonly, nonatomic) unsigned int edgeCount;
@property (readonly, nonatomic) unsigned int edgeNamespaceSize; // ivar: _nextEdgeName
@property (readonly, nonatomic) BOOL graphIs64bit; // ivar: _graphIs64bit
@property (nonatomic) BOOL inverted;
@property (readonly, nonatomic) unsigned int nodeCount; // ivar: _nodeCount
@property (readonly, nonatomic) unsigned int nodeNamespaceSize; // ivar: _nextNodeName
@property (readonly, nonatomic) unsigned int pointerSize;


+(*void)_copyUnarchived:(id)arg0 length:(*NSUInteger)arg1 options:(NSUInteger)arg2 ;
+(id)_archivedBytes:(*void)arg0 length:(NSUInteger)arg1 options:(NSUInteger)arg2 ;
+(id)_archivedObject:(id)arg0 options:(NSUInteger)arg1 ;
+(id)_unarchivedObject:(id)arg0 ofClass:(Class)arg1 options:(NSUInteger)arg2 ;
+(id)directedGraphWithData:(id)arg0 error:(*id)arg1 ;
+(void)encapsulateData:(id)arg0 to:(id)arg1 withSupplementalDataTag:(char *)arg2 dataGeneratorBlock:(id)arg3 ;
+(void)setupUnarchivingClaimsForClass:(Class)arg0 ;
-(*void)deadNodeMap;
-(BOOL)_adjustAdjacencyMap;
-(BOOL)isNodePresent:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decapsulateIPSheaderInData:(id)arg0 error:(*id)arg1 ;
-(id)decapsulatePlistData:(id)arg0 error:(*id)arg1 ;
-(id)decapsulateSupplementalData:(id)arg0 forTag:(char *)arg1 ;
-(id)initWithArchived:(id)arg0 version:(NSInteger)arg1 options:(NSUInteger)arg2 diskLogs:(id)arg3 error:(*id)arg4 ;
-(id)initWithNodes:(unsigned int)arg0 ;
-(id)initWithPlistRepresentation:(id)arg0 ;
-(id)initWithPlistRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)plistRepresentationWithOptions:(NSUInteger)arg0 ;
-(id)renormalizedGraph;
-(id)subgraphWithMarkedNodes:(*void)arg0 ;
-(unsigned int)_internalEnumerateEdgesOfNode:(unsigned int)arg0 withBlock:(id)arg1 ;
-(unsigned int)addEdgeFromNode:(unsigned int)arg0 toNode:(unsigned int)arg1 ;
-(unsigned int)addGroupNodeForNodes:(*unsigned int)arg0 count:(unsigned int)arg1 ;
-(unsigned int)addNode;
-(unsigned int)enumerateEdgesOfNode:(unsigned int)arg0 withBlock:(id)arg1 ;
-(unsigned int)enumerateEdgesWithBlock:(id)arg0 ;
-(unsigned int)enumerateMembersOfGroupNode:(unsigned int)arg0 withBlock:(id)arg1 ;
-(unsigned int)enumerateNodesWithBlock:(id)arg0 ;
-(unsigned int)parentGroupForNode:(unsigned int)arg0 ;
// -(void)_bfsCore:(unsigned int)arg0 colors:(char *)arg1 visitBlock:(id)arg2 examineBlock:(unk)arg3  ;
// -(void)_dfsCore:(unsigned int)arg0 colors:(char *)arg1 visitBlock:(id)arg2 examineBlock:(unk)arg3  ;
-(void)_dumpAdjacencyList;
-(void)_faultDeadNodeMap;
-(void)_internalAccessRawEdgesWithBlock:(id)arg0 ;
-(void)_internalAddEdgeFromNode:(unsigned int)arg0 toNode:(unsigned int)arg1 withName:(unsigned int)arg2 ;
-(void)_removeEdges:(id)arg0 ;
-(void)_renameWithNodeMap:(*unsigned int)arg0 nodeNamespace:(unsigned int)arg1 edgeMap:(*unsigned int)arg2 edgeNamespace:(unsigned int)arg3 ;
-(void)_renormalize;
-(void)_reorderEdgesNaturally;
-(void)_searchMainLoop:(unsigned int)arg0 action:(id)arg1 ;
-(void)archiveDictionaryRepresentation:(id)arg0 options:(NSUInteger)arg1 ;
// -(void)breadthFirstSearch:(unsigned int)arg0 nodeVisitBlock:(id)arg1 edgeVisitBlock:(unk)arg2  ;
-(void)dealloc;
// -(void)depthFirstSearch:(unsigned int)arg0 nodeVisitBlock:(id)arg1 edgeVisitBlock:(unk)arg2  ;
-(void)invertEdges;
-(void)removeMarkedEdges:(*void)arg0 ;
-(void)removeMarkedNodes:(*void)arg0 ;
-(void)setGraphCompatibilityVersion:(NSInteger)arg0 ;
-(void)setGraphVersion:(NSInteger)arg0 ;
-(void)ungroupNode:(unsigned int)arg0 ;
-(void)withEdgeMarkingMap:(id)arg0 ;
-(void)withNodeMarkingMap:(id)arg0 ;


@end


#endif