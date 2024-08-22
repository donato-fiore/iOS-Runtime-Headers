// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSQLITECONNECTION_H
#define ICSQLITECONNECTION_H

@class NSMutableArray, NSMapTable, NSError, NSNumber;
@protocol ICSQLiteConnectionDelegate;

#import <Foundation/Foundation.h>

#import "ICSQLiteConnectionOptions.h"

@interface ICSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    *sqlite3 _database;
    BOOL _didResetForCorruption;
    NSMapTable *_preparedStatements;
    NSInteger _transactionDepth;
    BOOL _transactionWantsRollback;
}


@property (readonly, copy, nonatomic) NSError *currentError;
@property (weak, nonatomic) NSObject<ICSQLiteConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger lastChangeCount;
@property (readonly, copy, nonatomic) ICSQLiteConnectionOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSNumber *userVersion;


-(BOOL)_close;
-(BOOL)_executeStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)_open;
-(BOOL)_performResetAfterCorruptionError;
-(BOOL)close;
-(BOOL)executePreparedStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)executePreparedStatement:(id)arg0 error:(*id)arg1 bindings:(id)arg2 ;
-(BOOL)executeStatement:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeStatement:(id)arg0 error:(*id)arg1 bindings:(id)arg2 ;
-(BOOL)open;
-(BOOL)resetAfterCorruptionError;
-(BOOL)resetAfterIOError;
-(BOOL)truncate;
-(id)_prepareStatement:(id)arg0 error:(*id)arg1 ;
-(id)_statementForPreparedStatement:(id)arg0 error:(*id)arg1 ;
-(id)_verifiedStatementForPreparedStatement:(id)arg0 error:(*id)arg1 ;
-(id)_verifiedStatementForSQL:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 ;
-(id)prepareStatement:(id)arg0 error:(*id)arg1 ;
-(void)_finalizeAllStatements;
-(void)_flushAfterTransactionBlocks;
-(void)dispatchAfterTransaction:(id)arg0 ;
-(void)executePreparedQuery:(id)arg0 withResults:(id)arg1 ;
-(void)executeQuery:(id)arg0 withResults:(id)arg1 ;
-(void)performTransaction:(id)arg0 ;


@end


#endif