// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MABASEGRAPH_H
#define MABASEGRAPH_H

@class NSString, NSUUID;
@protocol NSXMLParserDelegate, MANodeAndEdgeQueryProtocol, MALegacyNodeAndEdgeQueryProtocol;

#import <Foundation/Foundation.h>

#import "MAGraphReference.h"
#import "MAGraphSpecification.h"

@interface MABaseGraph : NSObject <NSXMLParserDelegate, MANodeAndEdgeQueryProtocol, MALegacyNodeAndEdgeQueryProtocol>



@property (readonly, nonatomic) BOOL _shouldFail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) MAGraphReference *graphReference;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly) MAGraphSpecification *specification; // ivar: _specification
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesClassADataProtection;
@property (readonly, nonatomic) BOOL usesClassBDataProtection;
@property (readonly, nonatomic) BOOL usesClassCDataProtection;
@property (nonatomic) NSUInteger version;


+(BOOL)copyPersistentStoreFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)destroyPersistentStoreAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)migratePersistentStoreFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)populateGraph:(id)arg0 withDefinitions:(id)arg1 constraints:(id)arg2 error:(*id)arg3 ;
+(BOOL)scanGraphElementOptionsString:(id)arg0 minimum:(*NSUInteger)arg1 maximum:(*NSUInteger)arg2 error:(*id)arg3 ;
+(BOOL)scanGraphElementString:(id)arg0 type:(*NSUInteger)arg1 optionalName:(*id)arg2 label:(*id)arg3 optionalDomains:(*id)arg4 optionalProperties:(*id)arg5 error:(*id)arg6 ;
+(BOOL)scanMatchString:(id)arg0 definitions:(*id)arg1 constraints:(*id)arg2 forCreation:(BOOL)arg3 error:(*id)arg4 ;
+(id)defaultSpecification;
+(id)graph;
+(id)graphJSONURLWithPath:(id)arg0 andName:(id)arg1 ;
+(id)graphMLURLWithPath:(id)arg0 andName:(id)arg1 ;
+(id)graphWithDefinitions:(id)arg0 constraints:(id)arg1 error:(*id)arg2 ;
+(id)graphWithMergedGraphs:(id)arg0 strictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2 ;
+(id)graphWithVisualString:(id)arg0 error:(*id)arg1 ;
+(id)persistentStoreFileExtension;
+(id)persistentStoreURLWithPath:(id)arg0 andName:(id)arg1 ;
+(id)scanGraphConstraintString:(id)arg0 error:(*id)arg1 ;
+(id)visualStringWithFormat:(id)arg0 elements:(id)arg1 ;
+(void)initialize;
-(BOOL)_matchNode:(id)arg0 usingAbstractNode:(id)arg1 fromEdge:(id)arg2 atIteration:(NSUInteger)arg3 withDefinitions:(id)arg4 constraints:(id)arg5 unusedConstraints:(id)arg6 andSubGraph:(id)arg7 matchingNodeQueue:(id)arg8 ;
-(BOOL)compareWithPersistedState;
-(BOOL)conformsToGraphSchema:(id)arg0 ;
-(BOOL)copyPersistentStoreToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)edgesStoreWeakReferencesToNodes;
-(BOOL)findAndResolveUniqueEdge:(id)arg0 ;
-(BOOL)findAndResolveUniqueNode:(id)arg0 ;
-(BOOL)hasPendingRead;
-(BOOL)hasPendingWrite;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)migratePersistentStoreToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)savePersistentStore;
-(BOOL)updateGraphWithVisualString:(id)arg0 ;
-(BOOL)writeDataToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeGraphJSONToURL:(id)arg0 error:(*id)arg1 ;
-(Class)nodeClass;
-(NSUInteger)edgesCount;
-(NSUInteger)edgesCountForLabel:(id)arg0 ;
-(NSUInteger)edgesCountForLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(NSUInteger)edgesCountForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(NSUInteger)memoryFootprint:(id)arg0 ;
-(NSUInteger)nodesCount;
-(NSUInteger)nodesCountForDomain:(unsigned short)arg0 ;
-(NSUInteger)nodesCountForLabel:(id)arg0 ;
-(NSUInteger)nodesCountForLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(NSUInteger)nodesCountForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(NSUInteger)numberOfEdgesMatchingFilter:(id)arg0 ;
-(NSUInteger)numberOfNodesMatchingFilter:(id)arg0 ;
-(id)_constraintAbstractEdgesFromAbstractNode:(id)arg0 inConstraints:(*id)arg1 ;
-(id)_graphDictionary;
-(id)_graphJSONDictionary;
-(id)abstractEdges;
-(id)addEdgeFromBase:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 ;
-(id)addEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 ;
-(id)addEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)addNodeFromBase:(id)arg0 ;
-(id)addNodeWithLabel:(id)arg0 ;
-(id)addNodeWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)addUniqueEdgeWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)addUniqueNodeWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 didCreate:(*BOOL)arg4 ;
-(id)addUniquelyIdentifiedNodeWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 didCreate:(*BOOL)arg4 ;
-(id)adjacencyWithEndNodeIdentifiers:(id)arg0 edgeFilter:(id)arg1 edgeType:(NSUInteger)arg2 ;
-(id)adjacencyWithSources:(id)arg0 relation:(id)arg1 ;
-(id)adjacencyWithStartNodeIdentifiers:(id)arg0 edgeFilter:(id)arg1 edgeType:(NSUInteger)arg2 ;
-(id)allEdges;
-(id)allNodes;
-(id)anyEdgeMatchingFilter:(id)arg0 ;
-(id)anyNodeForLabel:(id)arg0 ;
-(id)anyNodeForLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)anyNodeForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)anyNodeMatchingFilter:(id)arg0 ;
-(id)databaseURL;
-(id)edgeForIdentifier:(NSUInteger)arg0 ;
-(id)edgeFromFetchedRowWithIdentifier:(int)arg0 domain:(short)arg1 label:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNodeIdentifier:(int)arg5 targetNodeIdentifier:(int)arg6 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg0 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)edgeIdentifiersOfType:(NSUInteger)arg0 betweenNodesForIdentifiers:(id)arg1 andNodesForIdentifiers:(id)arg2 matchingFilter:(id)arg3 ;
-(id)edgeIdentifiersOfType:(NSUInteger)arg0 onNodesForIdentifiers:(id)arg1 matchingFilter:(id)arg2 ;
-(id)edgeSchemeWithLabel:(id)arg0 domain:(unsigned short)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)edgesDomains;
-(id)edgesForIdentifiers:(id)arg0 ;
-(id)edgesForLabel:(id)arg0 ;
-(id)edgesForLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)edgesForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)edgesLabels;
-(id)graphNode;
-(id)init;
-(id)initWithDataURL:(id)arg0 ;
-(id)initWithGraphJSONURL:(id)arg0 ;
-(id)initWithGraphMLURL:(id)arg0 ;
-(id)initWithPersistenceOptions:(NSInteger)arg0 ;
-(id)initWithPersistentStoreURL:(id)arg0 options:(NSInteger)arg1 ;
-(id)initWithPersistentStoreURL:(id)arg0 options:(NSInteger)arg1 progressReporter:(id)arg2 ;
-(id)initWithSpecification:(id)arg0 ;
-(id)initWithSpecification:(id)arg0 dataURL:(id)arg1 ;
-(id)initWithSpecification:(id)arg0 persistenceStoreURL:(id)arg1 progressReporter:(id)arg2 ;
-(id)matchWithDefinitions:(id)arg0 constraints:(id)arg1 error:(*id)arg2 ;
-(id)matchWithVisualFormat:(id)arg0 elements:(id)arg1 error:(*id)arg2 ;
-(id)matchWithVisualString:(id)arg0 error:(*id)arg1 ;
-(id)mergeWithGraph:(id)arg0 strictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2 ;
-(id)mergeWithGraph:(id)arg0 strictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2 saveToDatabase:(BOOL)arg3 ;
-(id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeType:(NSUInteger)arg1 edgeFilter:(id)arg2 ;
-(id)nodeForIdentifier:(NSUInteger)arg0 ;
-(id)nodeFromFetchedRowWithIdentifier:(int)arg0 domain:(short)arg1 label:(id)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg0 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 ;
-(id)nodeIdentifiersOfEdgeIdentifiers:(id)arg0 ofType:(NSUInteger)arg1 ;
-(id)nodeIdentifiersRelatedToSourceNodeIdentifiers:(id)arg0 relation:(id)arg1 ;
-(id)nodeSchemeWithLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)nodesDomains;
-(id)nodesForDomain:(unsigned short)arg0 ;
-(id)nodesForDomain:(unsigned short)arg0 properties:(id)arg1 ;
-(id)nodesForIdentifiers:(id)arg0 ;
-(id)nodesForLabel:(id)arg0 ;
-(id)nodesForLabel:(id)arg0 domain:(unsigned short)arg1 ;
-(id)nodesForLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)nodesLabels;
-(id)orphanNodes;
-(id)schema:(id)arg0 ;
-(id)selectBestRootNodeForPath:(id)arg0 withDefinitions:(id)arg1 ;
-(id)shortestPathFromNode:(id)arg0 toNode:(id)arg1 directed:(BOOL)arg2 ;
-(id)sourcesByTargetWithEdgeIdentifiers:(id)arg0 ;
-(id)targetsBySourceWithEdgeIdentifiers:(id)arg0 ;
-(id)transitiveClosureNeighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeType:(NSUInteger)arg1 edgeFilter:(id)arg2 ;
-(void)addUniqueNode:(id)arg0 didInsert:(*BOOL)arg1 ;
-(void)breadthFirstSearchFromNode:(id)arg0 directed:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)closePersistentStore;
-(void)dealloc;
-(void)depthFirstSearchFromNode:(id)arg0 directed:(BOOL)arg1 usingBlock:(id)arg2 ;
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
-(void)enumerateNodesWithIdentifiers:(id)arg0 sortedByFloatPropertyForName:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNodesWithIdentifiers:(id)arg0 sortedByIntegerPropertyForName:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNodesWithIdentifiers:(id)arg0 sortedByStringPropertyForName:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateNodesWithIdentifiers:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateNodesWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 usingBlock:(id)arg3 ;
-(void)enumerateNodesWithLabel:(id)arg0 domain:(unsigned short)arg1 usingBlock:(id)arg2 ;
-(void)enumerateStringPropertyValuesForKey:(id)arg0 ofEdgesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateStringPropertyValuesForKey:(id)arg0 ofNodesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg0 ofEdgesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg0 ofNodesWithIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
-(void)executeGraphChangeRequest:(id)arg0 ;
-(void)invalidateMemoryCaches;
-(void)labelsAndDomainsOfEdgesForIdentifiers:(id)arg0 labels:(*id)arg1 domains:(*id)arg2 ;
-(void)labelsAndDomainsOfNodesForIdentifiers:(id)arg0 labels:(*id)arg1 domains:(*id)arg2 ;
-(void)leaveBatch;
-(void)legacyRemoveEdges:(id)arg0 ;
-(void)legacyRemoveNodes:(id)arg0 ;
-(void)loadDomains:(id)arg0 ;
-(void)mergeWithGraph:(id)arg0 strictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2 createdNodes:(*id)arg3 createdEdges:(*id)arg4 ;
-(void)mergeWithGraph:(id)arg0 strictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2 saveToDatabase:(BOOL)arg3 createdNodes:(*id)arg4 createdEdges:(*id)arg5 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
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
-(void)unloadDomains:(id)arg0 ;
-(void)waitUntilQuiescentUsingBlock:(id)arg0 ;
-(void)writeUsingBlock:(id)arg0 ;


@end


#endif