// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALSQLCONTEXT_H
#define HMBLOCALSQLCONTEXT_H

@class NSMapTable, NSMutableDictionary, NSDictionary;


#import "HMBSQLContext.h"
#import "HMBSQLQueryStatement.h"

@interface HMBLocalSQLContext : HMBSQLContext {
    *sqlite3_stmt insertStore;
    *sqlite3_stmt deleteStore;
    *sqlite3_stmt selectStore;
    *sqlite3_stmt selectStores;
    *sqlite3_stmt updateStoreReplicationData;
    *sqlite3_stmt insertBlock;
    *sqlite3_stmt selectBlock;
    *sqlite3_stmt deleteBlock;
    *sqlite3_stmt deleteBlocksStore;
    *sqlite3_stmt updateBlock;
    *sqlite3_stmt selectReadyBlocks;
    *sqlite3_stmt deleteNullBlocks;
    *sqlite3_stmt insertItem;
    *sqlite3_stmt insertDeletionItemsForRecordsOfType;
    *sqlite3_stmt insertDeletionItemsForRecordWithUUID;
    *sqlite3_stmt insertDeletionItemsForRecordsWithParentUUID;
    *sqlite3_stmt updateItem;
    *sqlite3_stmt deleteItem;
    *sqlite3_stmt deleteItemsBlock;
    *sqlite3_stmt deleteItemsStore;
    *sqlite3_stmt deleteItemStoreExternal;
    *sqlite3_stmt selectItemsBlock;
    *sqlite3_stmt selectItemsBlockLimit;
    *sqlite3_stmt deleteNullItems;
    *sqlite3_stmt deleteNullItemsType;
    *sqlite3_stmt insertRecord;
    *sqlite3_stmt updateRecord;
    *sqlite3_stmt updateRecordExternal;
    *sqlite3_stmt updateRecordExternalExternal;
    *sqlite3_stmt updateRecordExternalUUID;
    *sqlite3_stmt updateRecordPush;
    *sqlite3_stmt updateRecordPushUUID;
    *sqlite3_stmt updateRecordClearPushExpected;
    *sqlite3_stmt updateRecordsClearPush;
    *sqlite3_stmt updateRecordType;
    *sqlite3_stmt deleteRecord;
    *sqlite3_stmt deleteRecordBlock;
    *sqlite3_stmt deleteRecordUUID;
    *sqlite3_stmt deleteRecordExternal;
    *sqlite3_stmt deleteRecordsStore;
    *sqlite3_stmt deleteZombieRecords;
    *sqlite3_stmt selectRecord;
    *sqlite3_stmt selectRecordUUIDExternal;
    *sqlite3_stmt selectRecordUUID;
    *sqlite3_stmt selectRecordExternal;
    *sqlite3_stmt selectRecordsPushBlock;
    *sqlite3_stmt selectRecordsParentUUID;
    *sqlite3_stmt selectRecordsParentUUIDType;
    *sqlite3_stmt selectRecordsOfType;
    *sqlite3_stmt selectRecords;
    *sqlite3_stmt insertIndexSentinel;
    *sqlite3_stmt deleteIndexSentinels;
    *sqlite3_stmt deleteIndexSentinelsStore;
    *sqlite3_stmt selectIndexSentinel;
}


@property (retain) NSMapTable *queryContextsByClass; // ivar: _queryContextsByClass
@property (retain) NSMutableDictionary *queryContextsByModelType; // ivar: _queryContextsByModelType
@property (retain) NSDictionary *queryTables; // ivar: _queryTables
@property (retain, nonatomic) HMBSQLQueryStatement *selectAllRecordParentModelIDRows; // ivar: _selectAllRecordParentModelIDRows
@property (retain, nonatomic) HMBSQLQueryStatement *selectAllRecordParentModelIDTypeRows; // ivar: _selectAllRecordParentModelIDTypeRows
@property (retain, nonatomic) HMBSQLQueryStatement *selectAllRecordRows; // ivar: _selectAllRecordRows
@property (retain, nonatomic) HMBSQLQueryStatement *selectAllRecordTypeRows; // ivar: _selectAllRecordTypeRows
@property (retain, nonatomic) HMBSQLQueryStatement *selectReadyInputBlocks; // ivar: _selectReadyInputBlocks
@property (retain, nonatomic) HMBSQLQueryStatement *selectReadyRollbackBlocks; // ivar: _selectReadyRollbackBlocks


+(id)logCategory;
+(id)openWithURL:(id)arg0 readOnly:(BOOL)arg1 error:(*id)arg2 ;
+(void)unlinkDatastoreAt:(id)arg0 everything:(BOOL)arg1 ;
-(BOOL)_deleteBlockWithRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteBlocksWithZoneRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteIndexSentinelsWithModelType:(id)arg0 error:(*id)arg1 ;
-(BOOL)_deleteIndexSentinelsWithZoneRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteItemWithRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteItemWithZoneRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteItemWithZoneRow:(NSUInteger)arg0 type:(NSUInteger)arg1 externalID:(id)arg2 error:(*id)arg3 ;
-(BOOL)_deleteItemsWithBlockRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteNullBlocksWithZoneRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteNullItemsWithZoneRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteNullItemsWithZoneRow:(NSUInteger)arg0 type:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_deleteRecordWithRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteRecordWithZoneRow:(NSUInteger)arg0 externalID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_deleteRecordWithZoneRow:(NSUInteger)arg0 modelID:(id)arg1 error:(*id)arg2 ;
-(BOOL)_deleteRecordsWithZoneRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteZombieRecordsWithZoneRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_deleteZoneWithRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_insertIndexSentinelWithZoneRow:(NSUInteger)arg0 modelType:(id)arg1 error:(*id)arg2 ;
-(BOOL)_resetOutputForRecordsWithBlockRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_selectRecordsWithZoneRow:(NSUInteger)arg0 modelType:(id)arg1 returning:(NSUInteger)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(BOOL)_updateBlockWithRow:(NSUInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)_updateItemWithZoneRow:(NSUInteger)arg0 blockRow:(NSUInteger)arg1 type:(NSUInteger)arg2 externalID:(id)arg3 externalData:(id)arg4 modelEncoding:(NSUInteger)arg5 modelData:(id)arg6 error:(*id)arg7 ;
-(BOOL)_updateRecordWithRow:(NSUInteger)arg0 externalID:(id)arg1 externalData:(id)arg2 error:(*id)arg3 ;
-(BOOL)_updateRecordWithRow:(NSUInteger)arg0 modelEncoding:(NSUInteger)arg1 modelData:(id)arg2 modelSchema:(id)arg3 error:(*id)arg4 ;
-(BOOL)_updateRecordWithRow:(NSUInteger)arg0 modelType:(id)arg1 modelSchema:(id)arg2 error:(*id)arg3 ;
-(BOOL)_updateRecordWithRow:(NSUInteger)arg0 pushBlockRow:(id)arg1 pushData:(id)arg2 pushEncoding:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)_updateRecordWithZoneRow:(NSUInteger)arg0 externalID:(id)arg1 externalData:(id)arg2 error:(*id)arg3 ;
-(BOOL)_updateRecordWithZoneRow:(NSUInteger)arg0 modelID:(id)arg1 externalData:(id)arg2 error:(*id)arg3 ;
-(BOOL)_updateRecordWithZoneRow:(NSUInteger)arg0 modelID:(id)arg1 pushEncoding:(NSUInteger)arg2 pushData:(id)arg3 pushBlockRow:(id)arg4 error:(*id)arg5 ;
-(BOOL)_updateRecordsClearPushWithPushBlockRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_updateZoneWithRow:(NSUInteger)arg0 replication:(id)arg1 error:(*id)arg2 ;
-(BOOL)sqlBlockWithActivity:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)sqlTransactionWithActivity:(id)arg0 error:(*id)arg1 block:(id)arg2 ;
-(NSInteger)migrateFromSchemaVersion:(NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)migrateToSchema01WithError:(*id)arg0 ;
-(NSInteger)verifyTables;
-(NSUInteger)_clearPushForRecordRow:(NSUInteger)arg0 expectedOutputBlockRow:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)_deleteRecordWithRow:(NSUInteger)arg0 expectedOutputBlockRow:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)_insertBlockWithZoneRow:(NSUInteger)arg0 type:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)_insertBlockWithZoneRow:(NSUInteger)arg0 type:(NSUInteger)arg1 options:(id)arg2 items:(id)arg3 error:(*id)arg4 ;
-(NSUInteger)_insertDeletionItemWithZoneRow:(NSUInteger)arg0 blockRow:(NSUInteger)arg1 type:(NSUInteger)arg2 modelID:(id)arg3 error:(*id)arg4 ;
-(NSUInteger)_insertDeletionItemsWithZoneRow:(NSUInteger)arg0 blockRow:(NSUInteger)arg1 type:(NSUInteger)arg2 modelType:(id)arg3 error:(*id)arg4 ;
-(NSUInteger)_insertDeletionItemsWithZoneRow:(NSUInteger)arg0 blockRow:(NSUInteger)arg1 type:(NSUInteger)arg2 parentModelID:(id)arg3 error:(*id)arg4 ;
-(NSUInteger)_insertItemWithZoneRow:(NSUInteger)arg0 blockRow:(NSUInteger)arg1 type:(NSUInteger)arg2 externalID:(id)arg3 externalData:(id)arg4 modelEncoding:(NSUInteger)arg5 modelData:(id)arg6 error:(*id)arg7 ;
-(NSUInteger)_insertItemWithZoneRow:(NSUInteger)arg0 blockRow:(NSUInteger)arg1 type:(NSUInteger)arg2 modelType:(id)arg3 error:(*id)arg4 ;
-(NSUInteger)_insertRecordWithZoneRow:(NSUInteger)arg0 externalID:(id)arg1 externalData:(id)arg2 modelID:(id)arg3 parentModelID:(id)arg4 modelType:(id)arg5 modelEncoding:(NSUInteger)arg6 modelData:(id)arg7 modelSchema:(id)arg8 pushEncoding:(NSUInteger)arg9 pushData:(id)arg10 pushBlockRow:(id)arg11 error:(*id)arg12 ;
-(NSUInteger)_insertZoneWithIdentification:(id)arg0 name:(id)arg1 error:(*id)arg2 ;
-(id)_fetchAllZones:(*id)arg0 ;
-(id)_selectBlockWithRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)_selectIndexSentinelForZoneRow:(NSUInteger)arg0 modelType:(id)arg1 error:(*id)arg2 ;
-(id)_selectItemsWithBlockRow:(NSUInteger)arg0 returning:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_selectItemsWithBlockRow:(NSUInteger)arg0 rowGreaterThan:(NSUInteger)arg1 limit:(NSUInteger)arg2 returning:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)_selectReadyBlocksWithZoneRow:(NSUInteger)arg0 type:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_selectRecordModelIDWithZoneRow:(NSUInteger)arg0 externalID:(id)arg1 error:(*id)arg2 ;
-(id)_selectRecordWithRow:(NSUInteger)arg0 returning:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_selectRecordWithZoneRow:(NSUInteger)arg0 externalID:(id)arg1 returning:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)_selectRecordWithZoneRow:(NSUInteger)arg0 modelID:(id)arg1 returning:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)_selectRecordWithZoneRow:(NSUInteger)arg0 parentModelID:(id)arg1 modelType:(id)arg2 returning:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)_selectRecordsWithBlockRow:(NSUInteger)arg0 returning:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_selectRecordsWithZoneRow:(NSUInteger)arg0 modelType:(id)arg1 returning:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)_selectRecordsWithZoneRow:(NSUInteger)arg0 parentModelID:(id)arg1 returning:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)_selectRecordsWithZoneRow:(NSUInteger)arg0 returning:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_selectZoneWithRow:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)flush:(BOOL)arg0 ;
-(id)initWithURL:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)initialize;
-(id)prepare;
-(id)selectAllRecordsWithZoneRow:(NSUInteger)arg0 returning:(NSUInteger)arg1 ;
-(id)sqlBlockWithActivity:(id)arg0 block:(id)arg1 ;
-(id)sqlTransactionWithActivity:(id)arg0 block:(id)arg1 ;
-(void)finalize;
-(void)prepareTables;
-(void)reloadSQLQueryMetadata;


@end


#endif