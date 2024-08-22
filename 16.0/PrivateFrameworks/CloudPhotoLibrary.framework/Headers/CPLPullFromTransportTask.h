// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPULLFROMTRANSPORTTASK_H
#define CPLPULLFROMTRANSPORTTASK_H



#import "CPLEngineMultiscopeSyncTask.h"

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask



-(id)enumerateScopesForTaskInTransaction:(id)arg0 ;
-(id)newScopedTaskWithScope:(id)arg0 session:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3 ;
-(id)scopeFilterInTransaction:(id)arg0 ;
-(id)taskIdentifier;


@end


#endif