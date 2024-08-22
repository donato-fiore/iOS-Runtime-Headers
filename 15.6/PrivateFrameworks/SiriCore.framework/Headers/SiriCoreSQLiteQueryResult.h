// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRICORESQLITEQUERYRESULT_H
#define SIRICORESQLITEQUERYRESULT_H

@class NSArray, NSDictionary, NSError;

#import <Foundation/Foundation.h>

#import "SiriCoreSQLiteQuery.h"
#import "SiriCoreSQLiteStatement.h"

@interface SiriCoreSQLiteQueryResult : NSObject

@property (readonly, nonatomic) NSUInteger beginMachTime; // ivar: _beginMachTime
@property (readonly, copy, nonatomic) NSArray *columnNameTuple; // ivar: _columnNameTuple
@property (readonly, copy, nonatomic) NSArray *columnValueTuples; // ivar: _columnValueTuples
@property (readonly, copy, nonatomic) NSDictionary *columnValuesMap; // ivar: _columnValuesMap
@property (readonly, nonatomic) NSUInteger endMachTime; // ivar: _endMachTime
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) SiriCoreSQLiteQuery *query; // ivar: _query
@property (readonly, copy, nonatomic) NSArray *records; // ivar: _records
@property (readonly, copy, nonatomic) NSArray *rowValueMaps; // ivar: _rowValueMaps
@property (readonly, copy, nonatomic) NSArray *rowValueTuples; // ivar: _rowValueTuples
@property (readonly, nonatomic) SiriCoreSQLiteStatement *statement; // ivar: _statement


-(id)description;
-(id)initWithQuery:(id)arg0 beginMachTime:(NSUInteger)arg1 endMachTime:(NSUInteger)arg2 statement:(id)arg3 columnNameTuple:(id)arg4 columnValueTuples:(id)arg5 columnValuesMap:(id)arg6 rowValueTuples:(id)arg7 rowValueMaps:(id)arg8 records:(id)arg9 error:(id)arg10 ;


@end


#endif