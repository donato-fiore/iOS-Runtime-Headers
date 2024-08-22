// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBMODELUNINDEXEDQUERY_H
#define HMBMODELUNINDEXEDQUERY_H



#import "HMBModelQuery.h"

@interface HMBModelUnindexedQuery : HMBModelQuery



+(id)queryWithSQLPredicate:(id)arg0 ascending:(BOOL)arg1 arguments:(id)arg2 ;
-(id)performQueryOn:(id)arg0 arguments:(id)arg1 ;


@end


#endif