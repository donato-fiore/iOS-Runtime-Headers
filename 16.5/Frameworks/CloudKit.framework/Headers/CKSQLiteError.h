// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSQLITEERROR_H
#define CKSQLITEERROR_H



#import "CKInternalError.h"

@interface CKSQLiteError : CKInternalError

@property (readonly, nonatomic) int sqliteCode;
@property (readonly, nonatomic) int sqliteExtendedCode;


+(BOOL)isConstraintError:(id)arg0 ;
+(BOOL)isCorruptDatabaseError:(id)arg0 ;
+(BOOL)isNoMatchingRowError:(id)arg0 ;
+(BOOL)isNoUniqueRowError:(id)arg0 ;
+(BOOL)isUniqueConstraintError:(id)arg0 ;
+(id)databaseCorruptError;
+(id)errorForSQLite:(struct sqlite3 *)arg0 message:(id)arg1 ;
+(id)errorForSQLite:(struct sqlite3 *)arg0 message:(id)arg1 args:(char *)arg2 ;
-(BOOL)CK_isCKSQLiteError;
-(id)description;


@end


#endif