// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKSQLITECONNECTION_H
#define NNMKSQLITECONNECTION_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NNMKSQLiteConnection : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedPreparedStatementsBySQLPattern; // ivar: _cachedPreparedStatementsBySQLPattern
@property (retain, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (nonatomic) *sqlite3 db; // ivar: _db
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // ivar: _dbQueue
@property (nonatomic) BOOL isInTransaction; // ivar: _isInTransaction


+(BOOL)errorCodeMeansCorruptedDatabase:(int)arg0 ;
-(BOOL)_openDatabaseWithPath:(id)arg0 errorCode:(*int)arg1 ;
-(BOOL)beginTransaction;
-(BOOL)commitTransaction;
-(BOOL)rollbackTransaction;
-(BOOL)tableExists:(id)arg0 inDatabase:(id)arg1 ;
-(id)_lastErrorMessage;
-(id)initWithPath:(id)arg0 errorCode:(*int)arg1 ;
-(id)lastErrorMessage;
-(int)_executeSQL:(id)arg0 ;
-(int)_lastErrorCode;
-(int)_runRetryingIfNeeded:(id)arg0 ;
-(int)_stepPreparedStatement:(struct sqlite3_stmt *)arg0 ;
-(int)executeSQL:(id)arg0 ;
-(int)lastErrorCode;
-(int)stepPreparedStatement:(struct sqlite3_stmt *)arg0 ;
-(struct sqlite3_stmt *)_preparedStatementForPattern:(id)arg0 cacheStatement:(BOOL)arg1 ;
-(struct sqlite3_stmt *)preparedStatementForPattern:(id)arg0 ;
-(struct sqlite3_stmt *)preparedStatementForPattern:(id)arg0 cacheStatement:(BOOL)arg1 ;
-(void)_closeDatabase;
-(void)dealloc;


@end


#endif