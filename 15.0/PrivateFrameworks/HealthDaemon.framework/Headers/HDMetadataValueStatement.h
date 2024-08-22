// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMETADATAVALUESTATEMENT_H
#define HDMETADATAVALUESTATEMENT_H



#import "HDSQLiteStatement.h"
#import "HDDatabaseTransaction.h"

@interface HDMetadataValueStatement : HDSQLiteStatement

@property (readonly, nonatomic) HDDatabaseTransaction *transaction; // ivar: _transaction


+(id)metadataValueStatementWithTransaction:(id)arg0 ;
-(BOOL)enumerateResultsForObjectID:(NSInteger)arg0 error:(*id)arg1 block:(id)arg2 ;


@end


#endif