// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPERSISTENCEDATABASECONNECTION_IOS_H
#define MFPERSISTENCEDATABASECONNECTION_IOS_H

@class EDPersistenceDatabaseConnection;


#import "_MFSearchMatcherContext.h"

@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection {
    *void _ICUSearchContext;
    _MFSearchMatcherContext *_CPSearchContext;
}




-(BOOL)performWithOptions:(NSUInteger)arg0 transactionError:(*id)arg1 block:(id)arg2 ;
-(NSInteger)transactionTypeForWriting;
-(int)configureSQLConnection;
-(void)_handleBusyError;
-(void)_handleCorruptDatabase;
-(void)_handleDetachedDatabaseIOError;
-(void)_handleFullDatabase;
-(void)_handleIOError;
-(void)_handleInvalidDatabaseIOError;
-(void)_handleProtectedDataIOError;
-(void)_logFileSystemStats;
-(void)dealloc;
-(void)handleSQLResult:(int)arg0 message:(id)arg1 ;


@end


#endif