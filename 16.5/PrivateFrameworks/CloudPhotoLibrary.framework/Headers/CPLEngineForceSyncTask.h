// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINEFORCESYNCTASK_H
#define CPLENGINEFORCESYNCTASK_H

@class NSEnumerator, NSDate, NSString;
@protocol CPLEngineSyncTaskDelegate, OS_dispatch_queue, CPLEngineForceSyncTaskDelegate, OS_xpc_object, CPLEngineStoreUserIdentifier;


#import "CPLForceSyncTask.h"
#import "CPLEngineSyncTask.h"
#import "CPLSyncSession.h"
#import "CPLEngineLibrary.h"
#import "CPLScopeFilter.h"

@interface CPLEngineForceSyncTask : CPLForceSyncTask <CPLEngineSyncTaskDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _currentTaskLock;
    BOOL _reallyLaunched;
    BOOL _reallyCancelled;
    CPLEngineSyncTask *_currentTask;
    CPLSyncSession *_fakeSession;
    NSEnumerator *_syncTaskEnumerator;
}


@property (nonatomic) BOOL bypassForceSyncLimitations; // ivar: _bypassForceSyncLimitations
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPLEngineForceSyncTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CPLEngineLibrary *engineLibrary; // ivar: _engineLibrary
@property (retain, nonatomic) CPLScopeFilter *filter; // ivar: _filter
@property (readonly, nonatomic) BOOL forBackup;
@property (readonly, nonatomic) BOOL forcingProcessedStagedScopes;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_xpc_object> *taskActivity;
@property (copy, nonatomic) id *taskDidFinishWithErrorBlock; // ivar: _taskDidFinishWithErrorBlock
@property (retain, nonatomic) NSObject<CPLEngineStoreUserIdentifier> *transportUserIdentifier; // ivar: _transportUserIdentifier


-(id)_currentTask;
-(id)_phaseDescription;
-(id)initWithScopeIdentifiers:(id)arg0 engineLibrary:(id)arg1 filter:(id)arg2 delegate:(id)arg3 ;
-(void)_dispatchNextSyncTask;
-(void)_dispatchSyncTask:(id)arg0 ;
-(void)_dropCurrentTask;
-(void)_finishWithError:(id)arg0 ;
-(void)cancelTask;
-(void)dealloc;
-(void)launchTask;
-(void)reallyCancel;
-(void)reallyLaunch;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)task:(id)arg0 didProgress:(float)arg1 userInfo:(id)arg2 ;


@end


#endif