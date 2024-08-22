// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKSQLITEUTILS_H
#define NNMKSQLITEUTILS_H


#import <Foundation/Foundation.h>


@interface NNMKSQLiteUtils : NSObject



+(BOOL)boolFromStatement:(struct sqlite3_stmt *)arg0 columnIndex:(int)arg1 ;
+(BOOL)isResponseOkFromPreparedStatementExecution:(int)arg0 ;
+(CGFloat)doubleFromStatement:(struct sqlite3_stmt *)arg0 columnIndex:(int)arg1 ;
+(NSUInteger)integerFromStatement:(struct sqlite3_stmt *)arg0 columnIndex:(int)arg1 ;
+(NSUInteger)unsignedIntegerFromStatement:(struct sqlite3_stmt *)arg0 columnIndex:(int)arg1 ;
+(id)dataFromStatement:(struct sqlite3_stmt *)arg0 columnIndex:(int)arg1 ;
+(id)dateFromStatement:(struct sqlite3_stmt *)arg0 columnIndex:(int)arg1 ;
+(id)stringFromStatement:(struct sqlite3_stmt *)arg0 columnIndex:(int)arg1 ;
+(void)bindBool:(BOOL)arg0 intoStatement:(struct sqlite3_stmt *)arg1 paramIndex:(int)arg2 ;
+(void)bindData:(id)arg0 intoStatement:(struct sqlite3_stmt *)arg1 paramIndex:(int)arg2 ;
+(void)bindDate:(id)arg0 intoStatement:(struct sqlite3_stmt *)arg1 paramIndex:(int)arg2 ;
+(void)bindDouble:(CGFloat)arg0 intoStatement:(struct sqlite3_stmt *)arg1 paramIndex:(int)arg2 ;
+(void)bindInteger:(NSInteger)arg0 intoStatement:(struct sqlite3_stmt *)arg1 paramIndex:(int)arg2 ;
+(void)bindString:(id)arg0 intoStatement:(struct sqlite3_stmt *)arg1 paramIndex:(int)arg2 ;
+(void)bindUnsignedInteger:(NSUInteger)arg0 intoStatement:(struct sqlite3_stmt *)arg1 paramIndex:(int)arg2 ;
+(void)closeExecutedPreparedStatement:(struct sqlite3_stmt *)arg0 ;


@end


#endif