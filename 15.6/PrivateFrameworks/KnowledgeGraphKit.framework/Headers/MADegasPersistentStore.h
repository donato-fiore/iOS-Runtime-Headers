// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MADEGASPERSISTENTSTORE_H
#define MADEGASPERSISTENTSTORE_H

@class NSMutableDictionary, NSString, NSURL, NSUUID;
@protocol MAPersistentStoreProtocol;

#import <Foundation/Foundation.h>


@interface MADegasPersistentStore : NSObject <MAPersistentStoreProtocol>

 {
    *void _database;
    NSUInteger _batchCounter;
    os_unfair_lock_s _lock;
    NSUInteger _transactionCounter;
}


@property (retain, nonatomic) NSMutableDictionary *attrIdByPropertyName; // ivar: _attrIdByPropertyName
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *degasLabelByDomain; // ivar: _degasLabelByDomain
@property (retain, nonatomic) NSMutableDictionary *degasLabelByLabelName; // ivar: _degasLabelByLabelName
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL doesCascadeEdgeDelete;
@property (retain, nonatomic) NSMutableDictionary *domainByDegasLabel; // ivar: _domainByDegasLabel
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (nonatomic) NSUInteger graphVersion;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *labelNameByDegasLabel; // ivar: _labelNameByDegasLabel
@property (retain, nonatomic) NSMutableDictionary *propertyNameByAttrId; // ivar: _propertyNameByAttrId
@property (readonly) Class superclass;


+(BOOL)copyFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)deleteClosedSqliteFilesAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)destroyAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)migrateFromURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(id)errorForKGDBReturnCode:(int)arg0 description:(id)arg1 ;
+(id)persistentStoreFileExtension;
+(void)initialize;
+(void)performBitmapTest;
-(*void)database;
-(BOOL)copyToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)migrateToURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)attrIdForPropertyName:(id)arg0 sampleValue:(id)arg1 ;
-(NSUInteger)degasLabelIdForLabelName:(id)arg0 ;
-(NSUInteger)degasLabelIdForMatisseDomain:(unsigned short)arg0 ;
-(id)initWithFileURL:(id)arg0 options:(NSInteger)arg1 ;
-(id)labelforDegasLabelId:(NSUInteger)arg0 ;
-(id)localLabelNameForDegasLabel:(NSUInteger)arg0 ;
-(id)propertyNameForAttrId:(NSUInteger)arg0 ;
-(id)propertyValueForCursor:(*void)arg0 ;
-(id)returnLabelAndDomain:(*short)arg0 forDegasLabels:(*void)arg1 ;
-(short)matisseDomainForDegasLabel:(NSUInteger)arg0 ;
-(struct AttributeValueCursor )edgeAttributeValueCursorWithIdentifiers:(id)arg0 ;
-(struct AttributeValueCursor )nodeAttributeValueCursorWithIdentifiers:(id)arg0 ;
-(struct EdgeCursor )edgeCursorWithIdentifiers:(id)arg0 ;
-(struct NodeCursor )nodeCursorWithIdentifiers:(id)arg0 ;
-(void)_enumerateEdgeTableWithEdgeCursor:(*void)arg0 block:(id)arg1 ;
-(void)_enumerateEdgesWithEdgeCursor:(*void)arg0 propertiesCursor:(*void)arg1 block:(id)arg2 ;
-(void)_enumerateNodeTableWithNodeCursor:(*void)arg0 block:(id)arg1 ;
-(void)_enumerateNodesWithNodeCursor:(*void)arg0 propertiesCursor:(*void)arg1 block:(id)arg2 ;
-(void)_enumeratePropertiesForCursor:(*void)arg0 block:(id)arg1 ;
-(void)_setModelEdgePropertyValue:(id)arg0 forKey:(id)arg1 andIdentifier:(NSUInteger)arg2 ;
-(void)_setModelNodePropertyValue:(id)arg0 forKey:(id)arg1 andIdentifier:(NSUInteger)arg2 ;
-(void)addEdge:(id)arg0 requiresTesting:(BOOL)arg1 ;
-(void)addNode:(id)arg0 requiresTesting:(BOOL)arg1 ;
-(void)beginTransactionIfNeeded;
-(void)checkTransaction;
-(void)closePersistentStore;
-(void)dealloc;
-(void)enterBatch;
-(void)enumerateEdgesWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)enumerateModelEdgesForDomains:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateModelEdgesForIdentifiers:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateModelEdgesForLabels:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateModelEdgesWithBlock:(id)arg0 ;
-(void)enumerateModelNodesForDomains:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateModelNodesForIdentifiers:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateModelNodesForLabels:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateModelNodesWithBlock:(id)arg0 ;
-(void)enumerateNodesWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(void)invalidateMemoryCaches;
-(void)invalidatePersistentStores;
-(void)leaveBatch;
-(void)leaveTransaction;
-(void)leaveTransactionWithRollback;
-(void)loadLabelsAndDomains;
-(void)loadPropertyNames;
-(void)removeModelEdgeForIdentifier:(NSUInteger)arg0 ;
-(void)removeModelEdgePropertiesForIdentifier:(NSUInteger)arg0 ;
-(void)removeModelEdgePropertyForKey:(id)arg0 andIdentifier:(NSUInteger)arg1 ;
-(void)removeModelEdgesForIdentifiers:(id)arg0 ;
-(void)removeModelEdgesPropertiesForIdentifiers:(id)arg0 ;
-(void)removeModelNodeForIdentifier:(NSUInteger)arg0 ;
-(void)removeModelNodePropertiesForIdentifier:(NSUInteger)arg0 ;
-(void)removeModelNodePropertyForKey:(id)arg0 andIdentifier:(NSUInteger)arg1 ;
-(void)removeModelNodesForIdentifiers:(id)arg0 ;
-(void)removeModelNodesPropertiesForIdentifiers:(id)arg0 ;
-(void)removePreviousPersistenceStore;
-(void)save:(id)arg0 ;
-(void)setEdgeWeight:(float)arg0 forIdentifier:(NSUInteger)arg1 ;
-(void)setLabel:(id)arg0 forDegasLabel:(NSUInteger)arg1 ;
-(void)setModelEdgeProperties:(id)arg0 forIdentifier:(NSUInteger)arg1 clobberExisting:(BOOL)arg2 ;
-(void)setModelEdgePropertyValue:(id)arg0 forKey:(id)arg1 andIdentifier:(NSUInteger)arg2 ;
-(void)setModelNodeProperties:(id)arg0 forIdentifier:(NSUInteger)arg1 clobberExisting:(BOOL)arg2 ;
-(void)setModelNodePropertyValue:(id)arg0 forKey:(id)arg1 andIdentifier:(NSUInteger)arg2 ;
-(void)setNodeWeight:(float)arg0 forIdentifier:(NSUInteger)arg1 ;


@end


#endif