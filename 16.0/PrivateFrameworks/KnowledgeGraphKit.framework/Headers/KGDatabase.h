// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KGDATABASE_H
#define KGDATABASE_H

@class NSUUID, NSURL;

#import <Foundation/Foundation.h>

#import "KGDatabaseNameCache.h"

@interface KGDatabase : NSObject {
    *void _database;
    KGDatabaseNameCache *_nameCache;
}


@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (nonatomic) NSUInteger graphVersion;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)copyFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)destroyAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)migrateFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(void)deleteClosedDatabaseFilesAtStoreURL:(id)arg0 ;
+(void)initialize;
-(*void)database;
-(?)degasPredicateForAllLabelselementType;
-(?)degasPredicateForAnyLabelselementType;
-(?)degasPredicateFromKGFilterelementType;
-(?)degasPredicateFromValue:(?)arg0 comparator:(?)arg1 attrIdelementType;
-(?)degasRangePredicateFromValue1:(?)arg0 value2:(?)arg1 comparator:(?)arg2 attrIdelementType;
-(BOOL)addEdges:(id)arg0 error:(*id)arg1 ;
-(BOOL)addNodes:(id)arg0 error:(*id)arg1 ;
-(BOOL)appendNodeIdentifiersOfEdgesWithIdentifiers:(id)arg0 sourceNodeIdentifiers:(id)arg1 targetNodeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(BOOL)beginTransaction;
-(BOOL)commitTransaction;
-(BOOL)copyToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)labelIdentifiers:(*void)arg0 forLabels:(id)arg1 ;
-(BOOL)openWithMode:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeEdge:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeEdges:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeNode:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)removeNodes:(id)arg0 error:(*id)arg1 ;
-(BOOL)rollbackTransaction;
-(BOOL)setEdgeProperties:(id)arg0 forIdentifier:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setNodeProperties:(id)arg0 forIdentifier:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)addEdgeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 sourceNodeIdentifier:(NSUInteger)arg3 targetNodeIdentifier:(NSUInteger)arg4 error:(*id)arg5 ;
-(NSUInteger)addNodeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 properties:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)attributeIdentifierForPropertyName:(id)arg0 ;
-(NSUInteger)upsertLabel:(id)arg0 ;
-(id)allEdgesForEdgeTable:(*void)arg0 withError:(*id)arg1 ;
-(id)allEdgesWithError:(*id)arg0 ;
-(id)allNodeIdentifiersOfEdgesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)allNodesForTable:(*void)arg0 error:(*id)arg1 ;
-(id)allNodesWithError:(*id)arg0 ;
-(id)allTombstoneEdgesWithError:(*id)arg0 ;
-(id)allTombstoneNodesWithError:(*id)arg0 ;
-(id)edgeIdentifiersForNodeIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)edgeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)edgeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)edgeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(id)edgeIdentifiersSortedByPropertyForName:(id)arg0 dataType:(NSInteger)arg1 ascending:(BOOL)arg2 limit:(NSInteger)arg3 edgeIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)edgeIdentifiersWithLabels:(id)arg0 direction:(NSUInteger)arg1 forNodeIdentifier:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)edgeLabels;
-(id)elementIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 valueTable:(*void)arg4 rowCount:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)elementIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 valueTable:(*void)arg3 rowCount:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)elementIdentifiersForPropertyName:(id)arg0 values:(id)arg1 valueTable:(*void)arg2 rowCount:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)filterEdgeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 edgeIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)filterEdgeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 edgeIdentifiers:(id)arg3 error:(*id)arg4 ;
-(id)filterEdgeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 edgeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)filterElementIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 elementIdentifiers:(id)arg4 valueTable:(*void)arg5 rowCount:(NSUInteger)arg6 error:(*id)arg7 ;
-(id)filterElementIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 elementIdentifiers:(id)arg3 valueTable:(*void)arg4 rowCount:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)filterElementIdentifiersForPropertyName:(id)arg0 values:(id)arg1 elementIdentifiers:(id)arg2 valueTable:(*void)arg3 rowCount:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)filterNodeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 nodeIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)filterNodeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 nodeIdentifiers:(id)arg3 error:(*id)arg4 ;
-(id)filterNodeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 nodeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)filterTombstoneEdgeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 edgeIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)filterTombstoneEdgeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 edgeIdentifiers:(id)arg3 error:(*id)arg4 ;
-(id)filterTombstoneEdgeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 edgeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)filterTombstoneNodeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 nodeIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)filterTombstoneNodeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 nodeIdentifiers:(id)arg3 error:(*id)arg4 ;
-(id)filterTombstoneNodeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 nodeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)inEdgeIdentifiersOfNodesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 nameCache:(id)arg1 ;
-(id)intersectionOfEdgesForEdgeTable:(*void)arg0 withLabels:(id)arg1 filterEdgeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)intersectionOfEdgesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)intersectionOfEdgesWithLabels:(id)arg0 filterEdgeIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)intersectionOfNodesForNodeTable:(*void)arg0 withLabels:(id)arg1 filterNodeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)intersectionOfNodesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)intersectionOfNodesWithLabels:(id)arg0 filterNodeIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)intersectionOfTombstoneEdgesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)intersectionOfTombstoneEdgesWithLabels:(id)arg0 filterEdgeIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)intersectionOfTombstoneNodesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)intersectionOfTombstoneNodesWithLabels:(id)arg0 filterNodeIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)labelNameForLabelIdentifier:(NSUInteger)arg0 ;
-(id)labelsOfEdgesForIdentifiers:(id)arg0 ;
-(id)labelsOfNodesForIdentifiers:(id)arg0 ;
-(id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 edgeFilter:(id)arg2 error:(*id)arg3 ;
-(id)neighborNodesOfNodesForIdentifiers:(id)arg0 throughEdgesForIdentifiers:(id)arg1 direction:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)neighborNodesOfNodesForIdentifiers:(id)arg0 throughEdgesWithLabels:(id)arg1 direction:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)nodeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)nodeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)nodeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(id)nodeIdentifiersSortedByPropertyForName:(id)arg0 dataType:(NSInteger)arg1 ascending:(BOOL)arg2 limit:(NSInteger)arg3 nodeIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)nodeLabels;
-(id)outEdgeIdentifiersOfNodesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)propertyNameForAttrIdentifier:(NSUInteger)arg0 ;
-(id)propertyValueForCursor:(*void)arg0 ;
-(id)tombstoneEdgeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)tombstoneEdgeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)tombstoneEdgeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(id)tombstoneNodeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)tombstoneNodeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)tombstoneNodeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(id)transitiveClosureNeighborNodeIdentifiersWithStartNodeIdentifiers:(id)arg0 edgeDirection:(NSUInteger)arg1 edgeFilter:(id)arg2 error:(*id)arg3 ;
-(id)unionOfEdgesForEdgeTable:(*void)arg0 withLabels:(id)arg1 filterEdgeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)unionOfEdgesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)unionOfEdgesWithLabels:(id)arg0 filterEdgeIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)unionOfNodesForNodeTable:(*void)arg0 withLabels:(id)arg1 filterNodeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)unionOfNodesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)unionOfNodesWithLabels:(id)arg0 filterNodeIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)unionOfTombstoneEdgesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)unionOfTombstoneEdgesWithLabels:(id)arg0 filterEdgeIdentifiers:(id)arg1 error:(*id)arg2 ;
-(id)unionOfTombstoneNodesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)unionOfTombstoneNodesWithLabels:(id)arg0 filterNodeIdentifiers:(id)arg1 error:(*id)arg2 ;
-(int)degasEdgeDirectionFromKG:(NSUInteger)arg0 ;
-(struct AttributeValueCursor )edgeAttributeValueCursorWithIdentifiers:(id)arg0 ;
-(struct AttributeValueCursor )edgeAttributeValueCursorWithIdentifiers:(id)arg0 propertyName:(id)arg1 ;
-(struct AttributeValueCursor )nodeAttributeValueCursorWithIdentifiers:(id)arg0 ;
-(struct AttributeValueCursor )nodeAttributeValueCursorWithIdentifiers:(id)arg0 propertyName:(id)arg1 ;
-(struct AttributeValueCursor )tombstoneEdgeAttributeValueCursorWithIdentifiers:(id)arg0 ;
-(struct AttributeValueCursor )tombstoneNodeAttributeValueCursorWithIdentifiers:(id)arg0 ;
-(struct Bitmap )upsertLabels:(id)arg0 ;
-(struct EdgeCursor )edgeCursorWithIdentifiers:(id)arg0 ;
-(struct EdgeCursor )tombstoneEdgeCursorWithIdentifiers:(id)arg0 ;
-(struct NodeCursor )nodeCursorWithIdentifiers:(id)arg0 ;
-(struct NodeCursor )tombstoneNodeCursorWithIdentifiers:(id)arg0 ;
-(struct shared_ptr<degas::Predicate> )degasPredicateFromValueArray:(id)arg0 attrId:(NSUInteger)arg1 elementType:(int)arg2 ;
-(void)_enumerateEdgeTableWithEdgeCursor:(*void)arg0 block:(id)arg1 ;
-(void)_enumerateEdgesWithEdgeCursor:(*void)arg0 propertiesCursor:(*void)arg1 block:(id)arg2 ;
-(void)_enumerateNodeTableWithNodeCursor:(*void)arg0 block:(id)arg1 ;
-(void)_enumerateNodesWithNodeCursor:(*void)arg0 propertiesCursor:(*void)arg1 block:(id)arg2 ;
-(void)_enumeratePropertiesForCursor:(*void)arg0 block:(id)arg1 ;
-(void)_enumeratePropertiesWithCursor:(*void)arg0 withBlock:(id)arg1 ;
-(void)close;
-(void)distributeValuesByType:(id)arg0 toIntegerValues:(id)arg1 floatValues:(id)arg2 stringValues:(id)arg3 ;
-(void)enumerateEdgesWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)enumerateNodesWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)enumeratePropertyValuesForEdgesWithIdentifiers:(id)arg0 propertyName:(id)arg1 withBlock:(id)arg2 ;
-(void)enumeratePropertyValuesForNodesWithIdentifiers:(id)arg0 propertyName:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateSourceAndTargetIdentifiersWithEdgeIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)enumerateTombstoneEdgesWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)enumerateTombstoneNodesWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)loadLabels;
-(void)loadPropertyNames;
-(void)transactionChangesAfterTransactionId:(NSUInteger)arg0 limit:(NSInteger)arg1 block:(id)arg2 ;


@end


#endif