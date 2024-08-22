// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLSCOPEUPDATETASK_H
#define CPLSCOPEUPDATETASK_H

@class NSMutableSet;


#import "CPLEngineMultiscopeSyncTask.h"

@interface CPLScopeUpdateTask : CPLEngineMultiscopeSyncTask {
    NSMutableSet *_possibleStagedScopes;
}




-(BOOL)shouldSkipScopesWithMissingTransportScope;
-(id)enumerateScopesForTaskInTransaction:(id)arg0 ;
-(id)newScopedTaskWithScope:(id)arg0 session:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3 ;
-(id)taskIdentifier;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif