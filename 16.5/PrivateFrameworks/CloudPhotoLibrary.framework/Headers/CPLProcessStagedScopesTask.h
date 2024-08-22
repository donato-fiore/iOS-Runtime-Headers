// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLPROCESSSTAGEDSCOPESTASK_H
#define CPLPROCESSSTAGEDSCOPESTASK_H



#import "CPLEngineMultiscopeSyncTask.h"

@interface CPLProcessStagedScopesTask : CPLEngineMultiscopeSyncTask {
    BOOL _hasProcessedStagedScopes;
}




-(BOOL)shouldSkipScopesWithMissingTransportScope;
-(id)enumerateScopesForTaskInTransaction:(id)arg0 ;
-(id)newScopedTaskWithScope:(id)arg0 session:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3 ;
-(id)taskIdentifier;
-(void)didProcessStagedScope:(id)arg0 ;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif