// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLBACKGROUNDDOWNLOADSTASK_H
#define CPLBACKGROUNDDOWNLOADSTASK_H

@class NSMutableArray, NSError, NSArray;
@protocol OS_dispatch_queue;


#import "CPLEngineSyncTask.h"

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask {
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableArray *_transportTasks;
    BOOL _shouldStop;
    NSError *_badError;
    NSError *_stopError;
    BOOL _prioritizeNonDerivatives;
    BOOL _hasResetQueue;
    NSUInteger _successfullyDownloadedResourcesCount;
    NSUInteger _failedDownloadedResourcesCount;
    NSUInteger _total;
    NSUInteger _activeTransferTaskCount;
    NSUInteger _transportTaskCount;
    os_unfair_lock_s _taskCountLock;
    NSArray *_intentsToDownload;
    NSUInteger _currentIntentIndex;
}




-(BOOL)_isErrorCountingForARetry:(id)arg0 ;
-(NSUInteger)_activeTransferTaskCount;
-(NSUInteger)_transportTaskCount;
-(id)description;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 ;
-(id)taskIdentifier;
-(void)_completeBackgroundDownloadForResource:(id)arg0 error:(id)arg1 withTransaction:(id)arg2 ;
-(void)_downloadTask:(id)arg0 didFinishWithErrorLocked:(id)arg1 ;
-(void)_enqueueTasksLocked;
-(void)_finishTaskLocked;
-(void)_getResourceTypesToDownload:(**NSUInteger)arg0 ;
-(void)_launchNecessaryDownloadTasksWithTransaction:(id)arg0 ;
-(void)_transportTaskDidFinish:(id)arg0 ;
-(void)_updateActiveDownloadTaskCount;
-(void)cancel;
-(void)launch;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif