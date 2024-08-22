// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBMODELFINITEQUERY_H
#define HMBMODELFINITEQUERY_H



#import "HMBModelIndexedQuery.h"

@interface HMBModelFiniteQuery : HMBModelIndexedQuery



+(id)queryWithSQLPredicate:(id)arg0 maximumRowsReturned:(NSUInteger)arg1 indexedProperties:(id)arg2 arguments:(id)arg3 ;
-(id)indexName;
-(id)performQueryOn:(id)arg0 arguments:(id)arg1 ;


@end


#endif