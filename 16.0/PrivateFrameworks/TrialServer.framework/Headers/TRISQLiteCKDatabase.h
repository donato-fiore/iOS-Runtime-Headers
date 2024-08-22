// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRISQLITECKDATABASE_H
#define TRISQLITECKDATABASE_H

@class NSString, _PASSqliteDatabase, CKContainer;
@protocol _PASDatabaseMigrationProtocol, OS_dispatch_queue, TRISQLiteCKDatabaseDelegate;

#import <Foundation/Foundation.h>


@interface TRISQLiteCKDatabase : NSObject <_PASDatabaseMigrationProtocol>

 {
    NSString *_parentDir;
    NSString *_assetDir;
    NSString *_assetCacheDir;
    _PASSqliteDatabase *_db;
    NSObject<OS_dispatch_queue> *_opQueue;
}


@property (weak, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<TRISQLiteCKDatabaseDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly) Class superclass;


+(id)mockContainerWithIdentifier:(id)arg0 database:(id)arg1 ;
-(BOOL)_evalQueryOperationWithRecordType:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 offset:(NSUInteger)arg3 resultsLimit:(NSUInteger)arg4 desiredKeys:(id)arg5 txn:(id)arg6 error:(*id)arg7 recordMatchedBlock:(id)arg8 ;
-(BOOL)_parseArrayExpression:(id)arg0 forRecordType:(id)arg1 usingCTEName:(id)arg2 toSQLCommonTableExpression:(*id)arg3 paramBindings:(*id)arg4 error:(*id)arg5 ;
-(BOOL)_parseDecimalString:(id)arg0 value:(*NSUInteger)arg1 ;
-(BOOL)_parseDesiredKeys:(id)arg0 recordType:(id)arg1 unindexedFields:(*id)arg2 indexedFields:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_parseScalarExpression:(id)arg0 forRecordType:(id)arg1 toSQLExpr:(*id)arg2 paramBindings:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_replaceArrayFieldWithKey:(id)arg0 recordType:(id)arg1 recordId:(id)arg2 values:(id)arg3 txn:(id)arg4 error:(*id)arg5 ;
-(BOOL)_translateAnyModifiedArrayRHSComparisonPredicate:(id)arg0 forRecordType:(id)arg1 toSQLExpr:(*id)arg2 paramBindings:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_translateAnyModifiedScalarComparisonPredicate:(id)arg0 forRecordType:(id)arg1 toSQLExpr:(*id)arg2 paramBindings:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_translateArrayRHSComparisonPredicate:(id)arg0 forRecordType:(id)arg1 toSQLExpr:(*id)arg2 paramBindings:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_translateComparisonPredicate:(id)arg0 forRecordType:(id)arg1 toSQLExpr:(*id)arg2 paramBindings:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_translateCompoundPredicate:(id)arg0 forRecordType:(id)arg1 toSQLExpr:(*id)arg2 paramBindings:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_translateDirectModifiedArrayRHSComparisonPredicate:(id)arg0 forRecordType:(id)arg1 toSQLExpr:(*id)arg2 paramBindings:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_translateDirectModifiedScalarComparisonPredicate:(id)arg0 forRecordType:(id)arg1 toSQLExpr:(*id)arg2 paramBindings:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_translatePredicate:(id)arg0 forRecordType:(id)arg1 toSQLExpr:(*id)arg2 paramBindings:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_translateScalarComparisonPredicate:(id)arg0 forRecordType:(id)arg1 toSQLExpr:(*id)arg2 paramBindings:(*id)arg3 error:(*id)arg4 ;
-(BOOL)_upsertRecord:(id)arg0 txn:(id)arg1 error:(*id)arg2 ;
-(BOOL)migrateToVersion:(unsigned int)arg0 ;
-(id)_allRecordTypes;
-(id)_assetForLocallyStoredAssetWithFilename:(id)arg0 forRecordId:(id)arg1 error:(*id)arg2 ;
-(id)_createRecordFromSelectRow:(id)arg0 recordType:(id)arg1 unindexedDesiredKeys:(id)arg2 indexedDesiredKeys:(id)arg3 txn:(id)arg4 error:(*id)arg5 ;
-(id)_createTableForArrayFieldWithKey:(id)arg0 attachedToRecordType:(id)arg1 sqliteContainedType:(id)arg2 ;
-(id)_createTableForRecordType:(id)arg0 scalarFields:(id)arg1 ;
-(id)_errorWithCode:(NSInteger)arg0 message:(id)arg1 ;
-(id)_evalFetchRecordsOperationWithRecordIds:(id)arg0 recordType:(id)arg1 desiredKeys:(id)arg2 txn:(id)arg3 error:(*id)arg4 ;
-(id)_filenameForLocallyCopiedAsset:(id)arg0 forRecordId:(id)arg1 error:(*id)arg2 ;
-(id)_keysForFieldsOfRecordType:(id)arg0 ;
-(id)_loadArrayForRecordType:(id)arg0 recordId:(id)arg1 fieldKey:(id)arg2 indexRange:(struct _NSRange )arg3 txn:(id)arg4 error:(*id)arg5 ;
-(id)_parseIndexedFieldKey:(id)arg0 indexRange:(struct _NSRange *)arg1 ;
-(id)_valueTypesForFieldsOfRecordType:(id)arg0 ;
-(id)databaseHandle;
-(id)init;
-(id)initWithParentDir:(id)arg0 assetCacheDir:(id)arg1 ;
-(id)migrations;
-(id)queriesToSkipFromEmptyToVersion:(*unsigned int)arg0 ;
-(void)_bindParam:(int)arg0 toScalarValue:(id)arg1 forStatement:(id)arg2 recordId:(id)arg3 ;
-(void)_deleteRecordsWithRecordIds:(id)arg0 recordType:(id)arg1 txn:(id)arg2 ;
-(void)_processFetchRecordsOperation:(id)arg0 ;
-(void)_processModifyRecordsOperation:(id)arg0 ;
-(void)_processQueryOperation:(id)arg0 ;
-(void)addOperation:(id)arg0 ;
-(void)closePermanently;
-(void)deleteRecordZoneWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveRecordZone:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif