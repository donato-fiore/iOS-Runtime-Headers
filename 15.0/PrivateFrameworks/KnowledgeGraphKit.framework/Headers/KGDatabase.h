// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(BOOL)setEdgeWeight:(float)arg0 forIdentifier:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setNodeProperties:(id)arg0 forIdentifier:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setNodeWeight:(float)arg0 forIdentifier:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)addEdgeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNodeIdentifier:(NSUInteger)arg4 targetNodeIdentifier:(NSUInteger)arg5 error:(*id)arg6 ;
-(NSUInteger)addNodeWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 weight:(float)arg2 properties:(id)arg3 error:(*id)arg4 ;
-(NSUInteger)attributeIdentifierForPropertyName:(id)arg0 sampleValue:(id)arg1 ;
-(NSUInteger)upsertLabel:(id)arg0 ;
-(id)allNodeIdentifiersOfEdgesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)edgeIdentifiersForNodeIdentifier:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)edgeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)edgeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)edgeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(id)edgeIdentifiersSortedByPropertyForName:(id)arg0 dataType:(NSInteger)arg1 ascending:(BOOL)arg2 limit:(NSInteger)arg3 edgeIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)edgeIdentifiersWithLabels:(id)arg0 direction:(NSUInteger)arg1 forNodeIdentifier:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)edgeLabels;
-(id)filterEdgeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 edgeIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)filterEdgeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 edgeIdentifiers:(id)arg3 error:(*id)arg4 ;
-(id)filterEdgeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 edgeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)filterNodeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 nodeIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)filterNodeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 nodeIdentifiers:(id)arg3 error:(*id)arg4 ;
-(id)filterNodeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 nodeIdentifiers:(id)arg2 error:(*id)arg3 ;
-(id)inEdgeIdentifiersOfNodesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 nameCache:(id)arg1 ;
-(id)intersectionOfEdgesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)intersectionOfNodesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)labelNameForLabelIdentifier:(NSUInteger)arg0 ;
-(id)nodeIdentifiersForPropertyName:(id)arg0 rangeValue1:(id)arg1 rangeValue2:(id)arg2 comparator:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)nodeIdentifiersForPropertyName:(id)arg0 value:(id)arg1 comparator:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)nodeIdentifiersForPropertyName:(id)arg0 values:(id)arg1 error:(*id)arg2 ;
-(id)nodeIdentifiersSortedByPropertyForName:(id)arg0 dataType:(NSInteger)arg1 ascending:(BOOL)arg2 limit:(NSInteger)arg3 nodeIdentifiers:(id)arg4 error:(*id)arg5 ;
-(id)nodeLabels;
-(id)outEdgeIdentifiersOfNodesWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)propertyNameForAttrIdentifier:(NSUInteger)arg0 ;
-(id)propertyValueForCursor:(*void)arg0 ;
-(id)unionOfEdgesWithLabels:(id)arg0 error:(*id)arg1 ;
-(id)unionOfNodesWithLabels:(id)arg0 error:(*id)arg1 ;
-(int)degasEdgeDirectionFromKG:(NSUInteger)arg0 ;
-(struct AttributeValueCursor )edgeAttributeValueCursorWithIdentifiers:(id)arg0 ;
-(struct AttributeValueCursor )edgeAttributeValueCursorWithIdentifiers:(id)arg0 propertyName:(id)arg1 sampleValue:(id)arg2 ;
-(struct AttributeValueCursor )nodeAttributeValueCursorWithIdentifiers:(id)arg0 ;
-(struct AttributeValueCursor )nodeAttributeValueCursorWithIdentifiers:(id)arg0 propertyName:(id)arg1 sampleValue:(id)arg2 ;
-(struct Bitmap )upsertLabels:(id)arg0 ;
-(struct EdgeCursor )edgeCursorWithIdentifiers:(id)arg0 ;
-(struct NodeCursor )nodeCursorWithIdentifiers:(id)arg0 ;
-(void)_enumerateDoublePropertiesWithCursor:(*void)arg0 withBlock:(id)arg1 ;
-(void)_enumerateEdgeTableWithEdgeCursor:(*void)arg0 block:(id)arg1 ;
-(void)_enumerateEdgesWithEdgeCursor:(*void)arg0 propertiesCursor:(*void)arg1 block:(id)arg2 ;
-(void)_enumerateIntegerPropertiesWithCursor:(*void)arg0 withBlock:(id)arg1 ;
-(void)_enumerateNodeTableWithNodeCursor:(*void)arg0 block:(id)arg1 ;
-(void)_enumerateNodesWithNodeCursor:(*void)arg0 propertiesCursor:(*void)arg1 block:(id)arg2 ;
-(void)_enumeratePropertiesForCursor:(*void)arg0 block:(id)arg1 ;
-(void)_enumerateStringPropertiesWithCursor:(*void)arg0 withBlock:(id)arg1 ;
-(void)_enumerateUnsignedIntegerPropertiesWithCursor:(*void)arg0 withBlock:(id)arg1 ;
-(void)close;
-(void)distributeValuesByType:(id)arg0 toIntegerValues:(id)arg1 floatValues:(id)arg2 stringValues:(id)arg3 ;
-(void)enumerateDoublePropertyValuesForEdgesWithIdentifiers:(id)arg0 propertyName:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateDoublePropertyValuesForNodesWithIdentifiers:(id)arg0 propertyName:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateEdgesWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)enumerateIntegerPropertyValuesForEdgesWithIdentifiers:(id)arg0 propertyName:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateIntegerPropertyValuesForNodesWithIdentifiers:(id)arg0 propertyName:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateNodesWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)enumerateSourceAndTargetIdentifiersWithEdgeIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)enumerateStringPropertyValuesForEdgesWithIdentifiers:(id)arg0 propertyName:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateStringPropertyValuesForNodesWithIdentifiers:(id)arg0 propertyName:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateUnsignedIntegerPropertyValuesForEdgesWithIdentifiers:(id)arg0 propertyName:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateUnsignedIntegerPropertyValuesForNodesWithIdentifiers:(id)arg0 propertyName:(id)arg1 withBlock:(id)arg2 ;
-(void)loadLabels;
-(void)loadPropertyNames;
-(void)purgeCachedEdgeStatements;
-(void)purgeCachedNodeStatements;


@end


#endif