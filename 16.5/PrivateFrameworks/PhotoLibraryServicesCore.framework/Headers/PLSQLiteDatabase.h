// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSQLITEDATABASE_H
#define PLSQLITEDATABASE_H


#import <Foundation/Foundation.h>


@interface PLSQLiteDatabase : NSObject {
    *sqlite3 _database;
}




+(id)openDatabaseAtPath:(id)arg0 capabilities:(id)arg1 ;
+(int)dataProtectionOpenFlagForCapabilities:(id)arg0 ;
+(int)dataProtectionOpenFlagForPath:(id)arg0 ;
+(int)setLockProxyFileForDatabase:(struct sqlite3 *)arg0 lockFilePath:(id)arg1 ;
+(struct sqlite3 *)_openSQLiteDatabaseAtPath:(char *)arg0 capabilities:(id)arg1 ;
-(BOOL)_execute:(id)arg0 ;
-(BOOL)beginDeferredTransaction;
-(BOOL)beginExclusiveTransaction;
-(BOOL)close;
-(BOOL)commitTransaction;
-(BOOL)prepareAndEvaluateStatement:(id)arg0 ;
-(BOOL)prepareStatement:(id)arg0 andStepThroughResultsWithBlock:(id)arg1 ;
-(BOOL)rollbackTransaction;
-(id)initWithOpenedSQLite3Database:(struct sqlite3 *)arg0 ;
-(struct sqlite3_stmt *)_prepareStatement:(id)arg0 ;


@end


#endif