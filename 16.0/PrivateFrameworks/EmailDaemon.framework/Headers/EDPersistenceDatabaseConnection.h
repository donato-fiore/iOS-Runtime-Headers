// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPERSISTENCEDATABASECONNECTION_H
#define EDPERSISTENCEDATABASECONNECTION_H

@class NSString, EFSQLConnection;
@protocol EFLoggable, EDPersistenceDatabaseConnectionDelegate;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabaseJournal.h"

@interface EDPersistenceDatabaseConnection : NSObject <EFLoggable>

 {
    BOOL _isWriter;
    id<EDPersistenceDatabaseConnectionDelegate> *_delegate;
    NSString *_protectedDatabaseName;
    NSString *_journalDatabaseName;
    EDPersistenceDatabaseJournal *_journal;
}


@property (readonly, nonatomic) NSString *basePath; // ivar: _basePath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fullPath;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isWriter;
@property (readonly, nonatomic) BOOL journalDatabaseAttached;
@property (readonly, nonatomic) NSInteger lastInsertedDatabaseID;
@property (readonly, nonatomic) BOOL protectedDatabaseAttached;
@property (readonly, copy, nonatomic) NSString *protectedDatabasePath;
@property (readonly, nonatomic) EFSQLConnection *sqlConnection; // ivar: _sqlConnection
@property (readonly, nonatomic) *sqlite3 sqlDB;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger transactionGeneration;


+(id)log;
-(BOOL)attachJournalDatabase:(id)arg0 withName:(id)arg1 ;
-(BOOL)attachJournalDatabase:(id)arg0 withName:(id)arg1 error:(*id)arg2 ;
-(BOOL)attachProtectedDatabaseWithName:(id)arg0 ;
-(BOOL)attachProtectedDatabaseWithName:(id)arg0 error:(*id)arg1 ;
-(BOOL)attachProtectedDatabaseWithName:(id)arg0 url:(id)arg1 error:(*id)arg2 ;
-(BOOL)checkForConnectionErrorWithMessage:(id)arg0 ;
-(BOOL)columnExists:(id)arg0 inTable:(id)arg1 database:(id)arg2 type:(*NSUInteger)arg3 ;
-(BOOL)columnExists:(id)arg0 inTable:(id)arg1 type:(*NSUInteger)arg2 ;
-(BOOL)databaseIsAttached:(id)arg0 ;
-(BOOL)detachJournalDatabase;
-(BOOL)detachProtectedDatabase;
-(BOOL)executeDeleteStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeDeleteStatement:(id)arg0 rowsChanged:(*NSUInteger)arg1 ;
-(BOOL)executeInsertStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeInsertStatement:(id)arg0 rowsChanged:(*NSUInteger)arg1 ;
// -(BOOL)executeSelectStatement:(id)arg0 withBlock:(id)arg1 error:(unk)arg2  ;
-(BOOL)executeStatementString:(id)arg0 errorMessage:(id)arg1 ;
-(BOOL)executeUpdateStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeUpdateStatement:(id)arg0 rowsChanged:(*NSUInteger)arg1 ;
-(BOOL)executeUpsertStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeUpsertStatement:(id)arg0 rowsChanged:(*NSUInteger)arg1 ;
-(BOOL)performWithOptions:(NSUInteger)arg0 transactionError:(*id)arg1 block:(id)arg2 ;
-(BOOL)tableExists:(id)arg0 ;
-(BOOL)tableExists:(id)arg0 inDatabase:(id)arg1 ;
-(NSInteger)transactionTypeForWriting;
-(id)init;
-(id)initForInMemoryDatabaseIsWriter:(BOOL)arg0 delegate:(id)arg1 ;
-(id)initWithBasePath:(id)arg0 databaseName:(id)arg1 isWriter:(BOOL)arg2 delegate:(id)arg3 ;
-(id)initWithSQLDB:(struct sqlite3 *)arg0 isWriter:(BOOL)arg1 delegate:(id)arg2 ;
-(id)preparedStatementForQueryString:(id)arg0 ;
-(int)configureSQLConnection;
-(void)clearLastInsertedDatabaseID;
-(void)close;
-(void)dealloc;
-(void)handleError:(id)arg0 message:(id)arg1 ;
-(void)handleSQLResult:(int)arg0 message:(id)arg1 ;
-(void)open;


@end


#endif