// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSSQLITECONNECTION_H
#define AMSSQLITECONNECTION_H

@class NSMutableArray, NSMapTable, NSError;
@protocol AMSSQLiteConnectionDelegate;

#import <Foundation/Foundation.h>

#import "AMSSQLiteConnectionOptions.h"

@interface AMSSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    *sqlite3 _database;
    BOOL _didResetForCorruption;
    NSMapTable *_preparedStatements;
    NSInteger _transactionDepth;
    BOOL _transactionWantsRollback;
}


@property (readonly, copy, nonatomic) NSError *currentError;
@property (weak, nonatomic) NSObject<AMSSQLiteConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger lastChangeCount;
@property (readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options; // ivar: _options


-(BOOL)_close;
-(BOOL)_executeStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)_executeWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(BOOL)_open;
-(BOOL)_openAndAllowRetry:(BOOL)arg0 ;
-(BOOL)_performResetAfterCorruptionError;
-(BOOL)_resetAfterCorruptionError;
-(BOOL)_resetAfterIOError;
-(BOOL)close;
-(BOOL)executePreparedStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)executePreparedStatement:(id)arg0 error:(*id)arg1 bindings:(id)arg2 ;
-(BOOL)executeStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeStatement:(id)arg0 error:(*id)arg1 bindings:(id)arg2 ;
-(BOOL)executeWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(BOOL)finalizePreparedStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)open;
-(BOOL)truncate;
-(id)_prepareStatement:(id)arg0 error:(*id)arg1 ;
-(id)_statementForPreparedStatement:(id)arg0 error:(*id)arg1 ;
-(id)_verifiedStatementForPreparedStatement:(id)arg0 error:(*id)arg1 ;
-(id)_verifiedStatementForSQL:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(id)prepareStatement:(id)arg0 error:(*id)arg1 ;
-(void)_finalizeAllStatements;
-(void)_flushAfterTransactionBlocks;
-(void)dealloc;
-(void)dispatchAfterTransaction:(id)arg0 ;
-(void)executePreparedQuery:(id)arg0 withResults:(id)arg1 ;
-(void)executeQuery:(id)arg0 withResults:(id)arg1 ;
-(void)performTransaction:(id)arg0 ;


@end


#endif