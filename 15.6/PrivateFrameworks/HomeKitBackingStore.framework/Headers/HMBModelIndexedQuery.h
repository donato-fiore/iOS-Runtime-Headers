// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBMODELINDEXEDQUERY_H
#define HMBMODELINDEXEDQUERY_H

@class NSString, NSArray;


#import "HMBModelUnindexedQuery.h"

@interface HMBModelIndexedQuery : HMBModelUnindexedQuery

@property (readonly, nonatomic) NSString *indexName;
@property (readonly, nonatomic) NSString *indexNameSuffix; // ivar: _indexNameSuffix
@property (readonly, nonatomic) NSArray *indexedColumns; // ivar: _indexedColumns


+(id)queryWithSQLPredicate:(id)arg0 ascending:(BOOL)arg1 indexedProperties:(id)arg2 arguments:(id)arg3 ;
-(BOOL)hasExpectedIndexes;
-(id)initWithSQLPredicate:(id)arg0 sqlColumns:(id)arg1 initialSequence:(id)arg2 maximumRowsPerSelect:(NSUInteger)arg3 indexNameSuffix:(id)arg4 indexedColumns:(id)arg5 arguments:(id)arg6 ;


@end


#endif