// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSQLITEERROR_H
#define CKSQLITEERROR_H



#import "CKInternalError.h"

@interface CKSQLiteError : CKInternalError

@property (readonly, nonatomic) BOOL databaseIsCorrupt;
@property (readonly, nonatomic) int sqliteCode;
@property (readonly, nonatomic) int sqliteExtendedCode;


+(id)errorForSQLite:(struct sqlite3 *)arg0 message:(id)arg1 ;
+(id)errorForSQLite:(struct sqlite3 *)arg0 message:(id)arg1 args:(char *)arg2 ;
+(id)testErrorWithDatabaseCorruption;
-(BOOL)CK_isCKSQLiteError;
-(id)description;


@end


#endif