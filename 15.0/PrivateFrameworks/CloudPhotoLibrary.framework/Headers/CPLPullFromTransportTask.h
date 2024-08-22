// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLPULLFROMTRANSPORTTASK_H
#define CPLPULLFROMTRANSPORTTASK_H



#import "CPLEngineMultiscopeSyncTask.h"
#import "CPLScopeFilter.h"

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask {
    CPLScopeFilter *_additionalScopeFilter;
}




-(BOOL)shouldProcessScope:(id)arg0 inTransaction:(id)arg1 ;
-(id)enumerateScopesForTaskInTransaction:(id)arg0 ;
-(id)newScopedTaskWithScope:(id)arg0 session:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3 ;
-(id)taskIdentifier;


@end


#endif