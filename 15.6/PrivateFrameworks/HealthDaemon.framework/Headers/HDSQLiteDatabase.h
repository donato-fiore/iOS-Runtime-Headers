// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITEDATABASE_H
#define HDSQLITEDATABASE_H

@class NSMutableDictionary, NSMutableArray, NSError, NSString, NSURL, NSNumber;
@protocol HDSQLiteDatabaseDelegate;

#import <Foundation/Foundation.h>

#import "HDSQLiteStatementCache.h"

@interface HDSQLiteDatabase : NSObject {
    *sqlite3 _db;
    BOOL _isInTransaction;
    BOOL _requiresRollback;
    NSInteger _transactionType;
    NSMutableDictionary *_attachedDatabaseURLsByName;
    uint8_t _transactionInterruptRequested;
    BOOL _isHandlingTransactionEnd;
    NSMutableArray *_beforeCommitBlocks;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    os_unfair_lock_s _interruptionLock;
}


@property (nonatomic) NSInteger cacheScope; // ivar: _cacheScope
@property (nonatomic) BOOL checkpointRequired; // ivar: _checkpointRequired
@property (readonly, copy, nonatomic) NSError *corruptionError; // ivar: _corruptionError
@property (weak, nonatomic) NSObject<HDSQLiteDatabaseDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL encounteredOutOfSpace; // ivar: _encounteredOutOfSpace
@property (copy, nonatomic) NSString *fileProtectionType; // ivar: _fileProtectionType
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, copy, nonatomic) NSNumber *lastInsertRowID;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (readonly, nonatomic) HDSQLiteStatementCache *statementCache; // ivar: _statementCache
@property BOOL transactionInterruptRequested;
@property (nonatomic, getter=isWriter) BOOL writer; // ivar: _writer


+(BOOL)databaseSchemas:(id)arg0 containTable:(id)arg1 ;
+(id)highFrequencyDatabaseURLWithProfileDirectoryPath:(id)arg0 ;
+(id)mainDatabaseURLWithProfileDirectoryPath:(id)arg0 ;
+(id)memoryDatabaseFromURL:(id)arg0 ;
+(id)protectedDatabaseURLWithProfileDirectoryPath:(id)arg0 ;
-(BOOL)accessHFDForReadingWithError:(*id)arg0 block:(id)arg1 ;
-(BOOL)accessHFDForWritingWithError:(*id)arg0 block:(id)arg1 ;
-(BOOL)attachDatabaseWithName:(id)arg0 fileURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)attachProtectedDatabaseWithURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)columnIsNullable:(id)arg0 inTable:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteDataEntitySubclassTable:(id)arg0 intermediateTables:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteDataEntitySubclassTablesIfExist:(id)arg0 intermediateTables:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteRowsFromDataEntitySubclassTable:(id)arg0 intermediateTables:(id)arg1 error:(*id)arg2 ;
-(BOOL)detachDatabaseWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)detachProtectedDatabaseWithError:(*id)arg0 ;
-(BOOL)enableIncrementalAutovacuumForDatabaseWithName:(id)arg0 error:(*id)arg1 ;
// -(BOOL)executeCachedStatementForKey:(char *)arg0 error:(*id)arg1 SQLGenerator:(id)arg2 bindingHandler:(unk)arg3 enumerationHandler:(id)arg4  ;
// -(BOOL)executeSQL:(id)arg0 error:(*id)arg1 bindingHandler:(id)arg2 enumerationHandler:(unk)arg3  ;
-(BOOL)executeSQLStatements:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeUncachedSQL:(id)arg0 error:(*id)arg1 ;
// -(BOOL)executeUncachedSQL:(id)arg0 error:(*id)arg1 bindingHandler:(id)arg2 enumerationHandler:(unk)arg3  ;
-(BOOL)foreignKeyExistsFromTable:(id)arg0 column:(id)arg1 toTable:(id)arg2 column:(id)arg3 error:(*id)arg4 ;
-(BOOL)incrementalVacuumDatabaseIfNeeded:(id)arg0 error:(*id)arg1 ;
-(BOOL)isDatabaseWithNameAttached:(id)arg0 ;
-(BOOL)isProtectedDatabaseAttached;
-(BOOL)performIntegrityCheckOnDatabase:(id)arg0 error:(*id)arg1 integrityErrorHandler:(id)arg2 ;
-(BOOL)performTransactionWithType:(NSInteger)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)setUserVersion:(NSInteger)arg0 withDatabaseName:(id)arg1 error:(*id)arg2 ;
-(BOOL)table:(id)arg0 hasColumnWithName:(id)arg1 error:(*id)arg2 ;
-(NSInteger)userVersionWithDatabaseName:(id)arg0 error:(*id)arg1 ;
-(NSInteger)validateForeignKeysForTable:(id)arg0 databaseName:(id)arg1 error:(*id)arg2 ;
-(id)dumpSchemaWithError:(*id)arg0 ;
-(id)getLastErrorWithStatement:(struct sqlite3_stmt *)arg0 context:(id)arg1 ;
-(id)initMemoryDatabase;
-(id)initWithDatabaseURL:(id)arg0 ;
-(id)typeOfColumn:(id)arg0 inTable:(id)arg1 error:(*id)arg2 ;
-(int)getChangesCount;
-(int)openForReadingWithError:(*id)arg0 ;
-(int)openWithError:(*id)arg0 ;
-(void)accessDatabaseUsingBlock:(id)arg0 ;
-(void)beforeCommit:(id)arg0 ;
-(void)close;
-(void)dealloc;
// -(void)onCommit:(id)arg0 orRollback:(unk)arg1  ;
-(void)requireRollback;


@end


#endif