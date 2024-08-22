// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPULLSCOPESTASK_H
#define CPLPULLSCOPESTASK_H

@class NSString, NSError;
@protocol CPLEngineTransportFetchScopeListChangesTask;


#import "CPLEngineSyncTask.h"
#import "CPLEngineStore.h"
#import "CPLEngineScopeStorage.h"

@interface CPLPullScopesTask : CPLEngineSyncTask {
    BOOL _ignoreNewChanges;
    CPLEngineStore *_store;
    CPLEngineScopeStorage *_scopes;
    NSString *_clientCacheIdentifier;
    id<CPLEngineTransportFetchScopeListChangesTask> *_fetchChangesTask;
    NSError *_badError;
    NSUInteger _deletedScopeCount;
    NSUInteger _newScopeCount;
    NSUInteger _modifiedScopeCount;
}




-(BOOL)_checkShouldHandleBatchInTransaction:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 ;
-(id)taskIdentifier;
-(void)_handleChangedOrNewScopes:(id)arg0 deletedScopeIdentifiers:(id)arg1 newScopeListSyncAnchor:(id)arg2 ;
-(void)_handleFinalScopeListSyncAnchor:(id)arg0 error:(id)arg1 ;
-(void)cancel;
-(void)launch;


@end


#endif