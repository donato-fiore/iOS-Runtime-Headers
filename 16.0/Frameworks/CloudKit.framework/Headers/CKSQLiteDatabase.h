// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSQLITEDATABASE_H
#define CKSQLITEDATABASE_H

@class NSMutableArray, NSMutableSet, NSDate, NSString, NSMapTable, NSData;
@protocol CKSQLiteDatabaseKeyValueProperties, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CKSQLiteTOCTableGroupTable.h"
#import "CKSQLiteTOCTable.h"

@interface CKSQLiteDatabase : NSObject <CKSQLiteDatabaseKeyValueProperties>

 {
    *sqlite3 _db;
    ? _serializer;
    unsigned int _savepointNestCount;
    NSMutableArray *_transactionCompletionHandlers;
    NSMutableSet *_validatedTableGroups;
    uint8_t _tableOrGroupCount;
    NSObject<OS_dispatch_group> *_databaseGroup;
    NSDate *_activityCoalesceDate;
}


@property (readonly, copy, nonatomic) NSString *databaseDirectory; // ivar: _databaseDirectory
@property (readonly, nonatomic) BOOL databaseWasCreated; // ivar: _databaseWasCreated
@property (nonatomic) BOOL removeWhenClosed; // ivar: _removeWhenClosed
@property (readonly, nonatomic) NSMapTable *tableGroupCache; // ivar: _tableGroupCache
@property (readonly, nonatomic) CKSQLiteTOCTableGroupTable *tableGroupTable; // ivar: _tableGroupTable
@property (readonly, nonatomic) CKSQLiteTOCTable *tocTable; // ivar: _tocTable
@property (readonly, nonatomic) NSData *uniquingKey; // ivar: _uniquingKey


+(NSUInteger)openDatabaseCount;
+(id)databaseArchiveWithObject:(id)arg0 ;
+(id)databaseFilePathInDirectory:(id)arg0 ;
+(id)databaseInDirectory:(id)arg0 error:(*id)arg1 ;
+(id)databaseInDirectory:(id)arg0 options:(int)arg1 error:(*id)arg2 ;
+(id)unarchivedObjectFromDatabaseArchive:(id)arg0 ;
+(id)uniquingKeyForDatabaseDirectory:(id)arg0 ;
+(void)initialize;
+(void)removeLegacyDatabaseAtPath:(id)arg0 ;
-(*void)compiledStatementWithSQL:(id)arg0 error:(*id)arg1 ;
-(*void)serializer;
-(BOOL)tableGroupWasPreviouslyValidated:(id)arg0 ;
-(NSInteger)lastInsertRowID;
-(NSUInteger)changeCount;
-(id)UUIDValueForKey:(id)arg0 ;
-(id)_pruneTables;
-(id)_validateVersionNumbers;
-(id)allTableNames:(*id)arg0 ;
-(id)bootstrap;
-(id)createNewDatabase;
-(id)dataValueForKey:(id)arg0 ;
-(id)databaseFilePath;
-(id)dateValueForKey:(id)arg0 ;
-(id)description;
-(id)dropTable:(id)arg0 ;
-(id)executeSQL:(id)arg0 ;
-(id)initWithDatabaseDirectory:(id)arg0 ;
-(id)numberValueForKey:(id)arg0 ;
-(id)objectValueForKey:(id)arg0 ;
-(id)openExistingDatabase;
-(id)performDatabaseTransaction:(id)arg0 ;
-(id)performTOCTransaction:(id)arg0 ;
-(id)removeDatabaseDirectory;
-(id)sqlErrorWithMessage:(id)arg0 ;
-(id)stringValueForKey:(id)arg0 ;
-(id)validateOpenDatabase;
-(void)addTransactionCompletionHandler:(id)arg0 ;
-(void)assertDbNotSerialized;
-(void)assertDbSerialized;
-(void)assertInTransaction;
-(void)closeDatabase;
-(void)dealloc;
-(void)decrementTableOrGroupCount;
-(void)forceClosedForUnitTest;
-(void)incrementTableOrGroupCount;
-(void)invalidateCachedStatements;
-(void)serializeDatabase:(id)arg0 ;
-(void)setDataValue:(id)arg0 forKey:(id)arg1 ;
-(void)setDateValue:(id)arg0 forKey:(id)arg1 ;
-(void)setNumberValue:(id)arg0 forKey:(id)arg1 ;
-(void)setObjectValue:(id)arg0 forKey:(id)arg1 ;
-(void)setStringValue:(id)arg0 forKey:(id)arg1 ;
-(void)setUUIDValue:(id)arg0 forKey:(id)arg1 ;
-(void)setupDatabaseConnection;
-(void)tableGroupPassedValidation:(id)arg0 ;


@end


#endif