// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBMODELINFINITEQUERY_H
#define HMBMODELINFINITEQUERY_H

@class NSString;


#import "HMBModelFiniteQuery.h"

@interface HMBModelInfiniteQuery : HMBModelFiniteQuery

@property (readonly, copy) NSString *sequenceArgumentName; // ivar: _sequenceArgumentName


+(id)queryWithSQLPredicate:(id)arg0 sequenceArgumentName:(id)arg1 indexedProperties:(id)arg2 arguments:(id)arg3 ;
-(id)initWithSQLPredicate:(id)arg0 sqlColumns:(id)arg1 sequenceArgumentName:(id)arg2 maximumRowsPerSelect:(NSUInteger)arg3 indexNameSuffix:(id)arg4 indexedColumns:(id)arg5 arguments:(id)arg6 ;
-(id)performQueryOn:(id)arg0 arguments:(id)arg1 ;


@end


#endif