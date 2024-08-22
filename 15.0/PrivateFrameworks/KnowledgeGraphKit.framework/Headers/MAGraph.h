// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAGRAPH_H
#define MAGRAPH_H

@class NSMutableDictionary;


#import "MABaseGraph.h"
#import "KGStoredGraph.h"

@interface MAGraph : MABaseGraph {
    NSMutableDictionary *_labelByDomain;
    NSMutableDictionary *_domainByLabel;
}


@property (readonly, nonatomic) KGStoredGraph *graph; // ivar: _graph


+(BOOL)copyPersistentStoreFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)destroyPersistentStoreAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)migratePersistentStoreFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)persistentStoreFileExtension;
+(id)persistentStoreURLWithPath:(id)arg0 andName:(id)arg1 ;
-(BOOL)compareWithPersistedState;
-(BOOL)copyPersistentStoreToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)edgesStoreWeakReferencesToNodes;
-(BOOL)hasPendingRead;
-(BOOL)hasPendingWrite;
-(BOOL)migratePersistentStoreToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)savePersistentStore;
-(Class)nodeClass;
-(NSUInteger)edgesCount;
-(NSUInteger)edgesCountForLabel:(id)arg0 ;
-(NSUInteger)edgesCountForLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(NSUInteger)edgesCountForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(NSUInteger)memoryFootprint:(id)arg0 ;
-(NSUInteger)nodesCount;
-(NSUInteger)nodesCountForDomain:(unsigned short)arg0 ;
-(NSUInteger)nodesCountForLabel:(id)arg0 ;
-(NSUInteger)nodesCountForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(NSUInteger)numberOfEdgesMatchingFilter:(id)arg0 ;
-(NSUInteger)numberOfNodesMatchingFilter:(id)arg0 ;
-(NSUInteger)version;
-(id)_addEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)_addNodeWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)_anyEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)_edgeIdentifiersWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)_instantiateGraphWithStoreAtURL:(id)arg0 ;
-(id)_nodeIdentifiersWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)abstractEdges;
-(id)addEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)addNodeFromBase:(id)arg0 ;
-(id)addNodeWithLabel:(id)arg0 ;
-(id)addNodeWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)addUniqueEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)addUniqueNodeWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 didCreate:(*BOOL)arg4 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 didCreate:(*BOOL)arg4 ;
-(id)allEdges;
-(id)allNodes;
-(id)anyNodeForLabel:(id)arg0 ;
-(id)anyNodeForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)anyNodeMatchingFilter:(id)arg0 ;
-(id)databaseURL;
-(id)description;
-(id)edgeForIdentifier:(NSUInteger)arg0 ;
-(id)edgeFromFetchedRowWithIdentifier:(int)arg0 domain:(short)arg1 label:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNodeIdentifier:(int)arg5 targetNodeIdentifier:(int)arg6 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg0 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)edgeIdentifiersOfType:(NSUInteger)arg0 betweenNodesForIdentifiers:(id)arg1 andNodesForIdentifiers:(id)arg2 matchingFilter:(id)arg3 ;
-(id)edgeIdentifiersOfType:(NSUInteger)arg0 onNodesForIdentifiers:(id)arg1 matchingFilter:(id)arg2 ;
-(id)edgeIdentifiersOfType:(NSUInteger)arg0 sourceNodeIdentifier:(NSUInteger)arg1 targetNodeIdentifier:(NSUInteger)arg2 ;
-(id)edgesDomains;
-(id)edgesForIdentifiers:(id)arg0 ;
-(id)edgesForLabel:(id)arg0 ;
-(id)edgesForLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)edgesForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)edgesLabels;
-(id)identifier;
-(id)initWithGraphJSONURL:(id)arg0 ;
-(id)initWithGraphMLURL:(id)arg0 ;
-(id)initWithSpecification:(id)arg0 ;
-(id)initWithSpecification:(id)arg0 dataURL:(id)arg1 ;
-(id)initWithSpecification:(id)arg0 persistenceStoreURL:(id)arg1 progressReporter:(id)arg2 ;
-(id)labelsForLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeType:(NSUInteger)arg1 edgeFilter:(id)arg2 ;
-(id)nodeForIdentifier:(NSUInteger)arg0 ;
-(id)nodeFromFetchedRowWithIdentifier:(int)arg0 domain:(short)arg1 label:(id)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg0 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)nodeIdentifiersOfEdgeIdentifiers:(id)arg0 ofType:(NSUInteger)arg1 ;
-(id)nodesDomains;
-(id)nodesForDomain:(unsigned short)arg0 ;
-(id)nodesForDomain:(unsigned short)arg0 properties:(id)arg1 ;
-(id)nodesForIdentifiers:(id)arg0 ;
-(id)nodesForLabel:(id)arg0 ;
-(id)nodesForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)nodesLabels;
-(id)orphanNodes;
-(id)sourcesByTargetWithEdgeIdentifiers:(id)arg0 ;
-(id)targetsBySourceWithEdgeIdentifiers:(id)arg0 ;
-(void)_loadWithGraphDictionary:(id)arg0 ;
-(void)closePersistentStore;
-(void)enterBatch;
-(void)enumerateDoublePropertyValuesForKey:(id)arg0 ofEdgesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateDoublePropertyValuesForKey:(id)arg0 ofNodesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateEdgesInDomain:(unsigned short)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesMatchingFilter:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesWithBlock:(id)arg0 ;
-(void)enumerateEdgesWithIdentifiers:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 usingBlock:(id)arg3 ;
-(void)enumerateEdgesWithLabel:(id)arg0 domain:(unsigned short)arg1 usingBlock:(id)arg2 ;
-(void)enumerateIntegerPropertyValuesForKey:(id)arg0 ofEdgesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateIntegerPropertyValuesForKey:(id)arg0 ofNodesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNodesInDomain:(unsigned short)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodesMatchingFilter:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodesWithBlock:(id)arg0 ;
-(void)enumerateNodesWithIdentifiers:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodesWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 usingBlock:(id)arg3 ;
-(void)enumerateNodesWithLabel:(id)arg0 domain:(unsigned short)arg1 usingBlock:(id)arg2 ;
-(void)enumerateStringPropertyValuesForKey:(id)arg0 ofEdgesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateStringPropertyValuesForKey:(id)arg0 ofNodesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg0 ofEdgesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg0 ofNodesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)executeGraphChangeRequest:(id)arg0 ;
-(void)invalidateMemoryCaches;
-(void)labelAndDomainFromLabels:(id)arg0 outLabel:(*id)arg1 outDomain:(*unsigned short)arg2 ;
-(void)leaveBatch;
-(void)legacyRemoveEdges:(id)arg0 ;
-(void)legacyRemoveNodes:(id)arg0 ;
-(void)loadDomains:(id)arg0 ;
-(void)mergeWithGraph:(id)arg0 strictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2 saveToDatabase:(BOOL)arg3 createdNodes:(*id)arg4 createdEdges:(*id)arg5 ;
-(void)persistModelProperties:(id)arg0 forEdgeWithIdentifier:(NSUInteger)arg1 clobberExisting:(BOOL)arg2 ;
-(void)persistModelProperties:(id)arg0 forNodeWithIdentifier:(NSUInteger)arg1 clobberExisting:(BOOL)arg2 ;
-(void)persistModelProperty:(id)arg0 forKey:(id)arg1 forEdgeWithIdentifier:(NSUInteger)arg2 ;
-(void)persistModelProperty:(id)arg0 forKey:(id)arg1 forNodeWithIdentifier:(NSUInteger)arg2 ;
-(void)persistWeight:(float)arg0 forEdgeWithIdentifier:(NSUInteger)arg1 ;
-(void)persistWeight:(float)arg0 forNodeWithIdentifier:(NSUInteger)arg1 ;
-(void)readUsingBlock:(id)arg0 ;
-(void)removeModelPropertiesForEdgeWithIdentifier:(NSUInteger)arg0 ;
-(void)removeModelPropertiesForNodeWithIdentifier:(NSUInteger)arg0 ;
-(void)removeModelPropertyForKey:(id)arg0 forEdgeWithIdentifier:(NSUInteger)arg1 ;
-(void)removeModelPropertyForKey:(id)arg0 forNodeWithIdentifier:(NSUInteger)arg1 ;
-(void)rollbackBatch;
-(void)savePersistentStoreWithCompletion:(id)arg0 ;
-(void)setVersion:(NSUInteger)arg0 ;
-(void)unloadDomains:(id)arg0 ;
-(void)unloadEdge:(id)arg0 ;
-(void)waitUntilQuiescentUsingBlock:(id)arg0 ;
-(void)writeUsingBlock:(id)arg0 ;


@end


#endif