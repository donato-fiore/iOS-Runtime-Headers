// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSQLITEDATABASEIMPL_H
#define SGSQLITEDATABASEIMPL_H

@class PASSqliteDatabase;


#import "SGSqliteDatabase.h"

@interface SGSqliteDatabaseImpl : PASSqliteDatabase {
    SGSqliteDatabase *_sgDb;
}




-(BOOL)handleError:(NSInteger)arg0 sqliteError:(int)arg1 forQuery:(id)arg2 onError:(id)arg3 ;
-(id)initWithFilename:(id)arg0 flags:(int)arg1 error:(*id)arg2 sgDb:(id)arg3 ;


@end


#endif