// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBMODELCOUNTMATCHESQUERY_H
#define HMBMODELCOUNTMATCHESQUERY_H



#import "HMBModelFiniteQuery.h"

@interface HMBModelCountMatchesQuery : HMBModelFiniteQuery



+(id)queryWithSQLPredicate:(id)arg0 indexedProperties:(id)arg1 arguments:(id)arg2 ;
-(id)countMatchesOn:(id)arg0 arguments:(id)arg1 error:(*id)arg2 ;


@end


#endif