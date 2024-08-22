// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGMEMORYGRAPHSTORE_H
#define KGMEMORYGRAPHSTORE_H

@class NSString, NSMutableDictionary, NSUUID, NSURL;
@protocol KGGraphStore, KGEntityFactory;

#import <Foundation/Foundation.h>

#import "KGMutableDirectedBinaryAdjacency.h"

@interface KGMemoryGraphStore : NSObject <KGGraphStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *edgeIdentifiersByLabel; // ivar: _edgeIdentifiersByLabel
@property (readonly, nonatomic) KGMutableDirectedBinaryAdjacency *edgeIdentifiersBySourceNodeIdentifier; // ivar: _edgeIdentifiersBySourceNodeIdentifier
@property (readonly, nonatomic) KGMutableDirectedBinaryAdjacency *edgeIdentifiersByTargetNodeIdentifier; // ivar: _edgeIdentifiersByTargetNodeIdentifier
@property (readonly, nonatomic) NSObject<KGEntityFactory> *entityFactory; // ivar: _entityFactory
@property (readonly, nonatomic) NSUUID *graphIdentifier; // ivar: _graphIdentifier
@property (nonatomic) NSUInteger graphVersion; // ivar: _graphVersion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSMutableDictionary *memoryEdgeByIdentifier; // ivar: _memoryEdgeByIdentifier
@property (readonly, nonatomic) NSMutableDictionary *memoryNodeByIdentifier; // ivar: _memoryNodeByIdentifier
@property (nonatomic) NSUInteger nextEdgeIdentifier; // ivar: _nextEdgeIdentifier
@property (nonatomic) NSUInteger nextNodeIdentifier; // ivar: _nextNodeIdentifier
@property (readonly, nonatomic) NSMutableDictionary *nodeIdentifiersByLabel; // ivar: _nodeIdentifiersByLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)copyFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)destroyAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)migrateFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)persistentStoreFileExtension;
-(BOOL)_removeEdgesForMemoryNode:(id)arg0 error:(*id)arg1 ;
-(BOOL)_removeMemoryEdge:(id)arg0 error:(*id)arg1 ;
-(BOOL)_removeNode:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)addEdges:(id)arg0 error:(*id)arg1 ;
-(BOOL)addNodes:(id)arg0 error:(*id)arg1 ;
-(BOOL)copyToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithMode:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeEdgeForIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeEdgesForIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeNodeForIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeNodesForIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateEdgeForIdentifier:(NSUInteger)arg0 withProperties:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateNodeForIdentifier:(NSUInteger)arg0 withProperties:(id)arg1 error:(*id)arg2 ;
-(id)_edgeIdentifiersForNodeIdentifier:(NSUInteger)arg0 ;
-(id)_lock_arrayOfEdgesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)_lock_arrayOfNodesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)_lock_edgeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)_lock_edgeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_lock_intersectionOfEdgesWithLabels:(id)arg0 ;
-(id)_lock_intersectionOfNodesWithLabels:(id)arg0 ;
-(id)_lock_nodeIdentifiersOfEdgesWithIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_lock_snapshotEdgeForIdentifier:(NSUInteger)arg0 reusableNode:(id)arg1 ;
-(id)_lock_snapshotNodeForIdentifier:(NSUInteger)arg0 ;
-(id)_lock_sourcesByTargetWithEdgeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)_lock_targetsBySourceWithEdgeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)_lock_unionOfEdgesWithLabels:(id)arg0 ;
-(id)_lock_unionOfNodesWithLabels:(id)arg0 ;
-(id)arrayOfEdgesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)arrayOfNodesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)changesAfterToken:(id)arg0 transactionLimit:(NSInteger)arg1 error:(*id)arg2 ;
-(id)edgeChangesAfterToken:(id)arg0 transactionLimit:(NSInteger)arg1 edgeFilter:(id)arg2 error:(*id)arg3 ;
-(id)edgeForIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)edgeIdentifiers:(id)arg0 sortedByFloatPropertyForName:(id)arg1 ascending:(BOOL)arg2 limit:(NSInteger)arg3 error:(*id)arg4 ;
-(id)edgeIdentifiers:(id)arg0 sortedByIntegerPropertyForName:(id)arg1 ascending:(BOOL)arg2 limit:(NSInteger)arg3 error:(*id)arg4 ;
-(id)edgeIdentifiers:(id)arg0 sortedByStringPropertyForName:(id)arg1 ascending:(BOOL)arg2 limit:(NSInteger)arg3 error:(*id)arg4 ;
-(id)edgeIdentifiersForNodeIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)edgeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)edgeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)edgeLabels;
-(id)init;
-(id)initForSubclasses;
-(id)initWithEntityFactory:(id)arg0 ;
-(id)insertEdgeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 sourceNodeIdentifier:(NSUInteger)arg3 targetNodeIdentifier:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)insertNodeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 error:(*id)arg3 ;
-(id)labelsOfEdgesForIdentifiers:(id)arg0 ;
-(id)labelsOfNodesForIdentifiers:(id)arg0 ;
-(id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 edgeFilter:(id)arg2 error:(*id)arg3 ;
-(id)nodeChangesAfterToken:(id)arg0 transactionLimit:(NSInteger)arg1 nodeFilter:(id)arg2 error:(*id)arg3 ;
-(id)nodeForIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)nodeIdentifiers:(id)arg0 sortedByFloatPropertyForName:(id)arg1 ascending:(BOOL)arg2 limit:(NSInteger)arg3 error:(*id)arg4 ;
-(id)nodeIdentifiers:(id)arg0 sortedByIntegerPropertyForName:(id)arg1 ascending:(BOOL)arg2 limit:(NSInteger)arg3 error:(*id)arg4 ;
-(id)nodeIdentifiers:(id)arg0 sortedByStringPropertyForName:(id)arg1 ascending:(BOOL)arg2 limit:(NSInteger)arg3 error:(*id)arg4 ;
-(id)nodeIdentifiersMatchingFilter:(id)arg0 intersectingIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)nodeIdentifiersOfEdgesWithIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)nodeLabels;
-(id)orderedArrayOfEdgesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)orderedArrayOfNodesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)propertiesForEdgesWithIdentifiers:(id)arg0 propertyName:(id)arg1 error:(*id)arg2 ;
-(id)propertiesForNodesWithIdentifiers:(id)arg0 propertyName:(id)arg1 error:(*id)arg2 ;
-(id)sourcesByTargetWithEdgeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)targetsBySourceWithEdgeIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)transitiveClosureNeighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 edgeFilter:(id)arg2 error:(*id)arg3 ;
-(void)beginTransaction;
-(void)close;
-(void)commitTransaction;
-(void)rollbackTransaction;


@end


#endif