// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSQLITEUTILS_H
#define SHSQLITEUTILS_H


#import <Foundation/Foundation.h>


@interface SHSQLiteUtils : NSObject



+(BOOL)closeDatabase:(struct sqlite3 *)arg0 error:(*id)arg1 ;
+(BOOL)createDatabase:(struct sqlite3 **)arg0 atURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)database:(struct sqlite3 *)arg0 hasPopulatedTable:(id)arg1 error:(*id)arg2 ;
+(BOOL)defenseAgainstBadDatabase:(struct sqlite3 *)arg0 ;
+(BOOL)openDatabase:(struct sqlite3 **)arg0 atURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)runNoResultSQL:(id)arg0 onDatabase:(struct sqlite3 *)arg1 error:(*id)arg2 ;
// +(BOOL)runSQL:(id)arg0 onDatabase:(struct sqlite3 *)arg1 replacingTokens:(id)arg2 withObjects:(id)arg3 rowHandler:(id)arg4 error:(unk)arg5  ;
+(id)queryStringForCount:(NSUInteger)arg0 ;
+(void)commitTransactionOnDatabase:(struct sqlite3 *)arg0 ;
+(void)startTransactionOnDatabase:(struct sqlite3 *)arg0 ;


@end


#endif