// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLRESHARETASK_H
#define CPLRESHARETASK_H



#import "CPLEngineMultiscopeSyncTask.h"

@interface CPLReshareTask : CPLEngineMultiscopeSyncTask



+(id)cutoffDate;
-(id)enumerateScopesForTaskInTransaction:(id)arg0 ;
-(id)newScopedTaskWithScope:(id)arg0 session:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3 ;
-(id)scopeFilterInTransaction:(id)arg0 ;
-(id)taskIdentifier;


@end


#endif