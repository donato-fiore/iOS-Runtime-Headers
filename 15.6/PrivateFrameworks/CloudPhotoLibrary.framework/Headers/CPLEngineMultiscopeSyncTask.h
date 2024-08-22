// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINEMULTISCOPESYNCTASK_H
#define CPLENGINEMULTISCOPESYNCTASK_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol CPLEngineSyncTaskDelegate, OS_dispatch_queue;


#import "CPLEngineSyncTask.h"
#import "CPLEngineScopedTask.h"
#import "CPLScopeFilter.h"
#import "CPLEngineScopeStorage.h"

@interface CPLEngineMultiscopeSyncTask : CPLEngineSyncTask <CPLEngineSyncTaskDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_currentTaskQueue;
    CPLEngineScopedTask *_currentTask;
    NSMutableArray *_coveredScopes;
    NSMutableArray *_excludedScopes;
    NSMutableDictionary *_transportScopes;
    NSString *_clientCacheIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPLScopeFilter *scopeFilter; // ivar: _scopeFilter
@property (readonly, nonatomic) CPLEngineScopeStorage *scopes; // ivar: _scopes
@property (readonly, nonatomic) BOOL shouldSkipScopesWithMissingTransportScope;
@property (readonly) Class superclass;


-(BOOL)shouldContinueAfterError:(id)arg0 fromTask:(id)arg1 ;
-(BOOL)shouldProcessScope:(id)arg0 inTransaction:(id)arg1 ;
-(BOOL)shouldStartTaskInTransaction:(id)arg0 ;
-(id)_currentScope;
-(id)_currentTask;
-(id)enumerateScopesForTaskInTransaction:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 ;
-(id)newScopedTaskWithScope:(id)arg0 session:(id)arg1 transportScope:(id)arg2 clientCacheIdentifier:(id)arg3 ;
-(id)phaseDescription;
-(id)phaseDescriptionLastChangeDate:(*id)arg0 ;
-(void)_launchTaskForNextScope;
-(void)_setCurrentTask:(id)arg0 ;
-(void)cancel;
-(void)dispatchAsyncWithCurrentSubtask:(id)arg0 ;
-(void)launch;
-(void)setForceSync:(BOOL)arg0 ;
-(void)setForeground:(BOOL)arg0 ;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)task:(id)arg0 didProgress:(float)arg1 userInfo:(id)arg2 ;


@end


#endif