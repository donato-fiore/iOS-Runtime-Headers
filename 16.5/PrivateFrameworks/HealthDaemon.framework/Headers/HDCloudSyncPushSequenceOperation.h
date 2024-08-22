// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCPUSHSEQUENCEOPERATION_H
#define HDCLOUDSYNCPUSHSEQUENCEOPERATION_H

@class NSMutableArray, NSString;
@protocol HDSynchronousTaskGroupDelegate, HDSyncSessionDelegate, OS_dispatch_queue;


#import "HDCloudSyncOperation.h"
#import "HDCloudSyncTarget.h"
#import "HDCloudSyncSequenceRecord.h"
#import "HDSynchronousTaskGroup.h"
#import "HDCloudSyncSessionContext.h"
#import "HDCloudSyncSequenceState.h"

@interface HDCloudSyncPushSequenceOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate, HDSyncSessionDelegate>

 {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_syncQueue;
    HDSynchronousTaskGroup *_taskGroup;
    HDCloudSyncSessionContext *_sessionContext;
    NSMutableArray *_changeRecordsPendingPush;
    NSMutableArray *_recordsPendingDeletion;
    BOOL _isPerformingRecentRecordRoll;
    BOOL _shouldClearRebaselineDeadline;
    HDCloudSyncSequenceState *_sequenceState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMadeForwardProgress; // ivar: _hasMadeForwardProgress
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCloudSyncSequenceState *sequenceState;
@property (readonly) Class superclass;


+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldPerformRecentRecordRollingForUnfrozenRecords:(id)arg0 configuration:(id)arg1 ;
+(id)operationTagDependencies;
+(id)unfrozenChangeRecordsForPushTarget:(id)arg0 sequenceRecord:(id)arg1 configuration:(id)arg2 error:(*id)arg3 ;
-(BOOL)syncSession:(id)arg0 didEndTransactionWithError:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 target:(id)arg2 sequence:(id)arg3 ;
-(void)main;
-(void)syncSession:(id)arg0 didFinishSuccessfully:(BOOL)arg1 error:(id)arg2 ;
-(void)syncSession:(id)arg0 sendChanges:(id)arg1 completion:(id)arg2 ;
-(void)syncSession:(id)arg0 willSyncAnchorRanges:(id)arg1 ;
-(void)syncSessionWillBegin:(id)arg0 ;
-(void)synchronousTaskGroup:(id)arg0 didFinishWithSuccess:(BOOL)arg1 errors:(id)arg2 ;


@end


#endif