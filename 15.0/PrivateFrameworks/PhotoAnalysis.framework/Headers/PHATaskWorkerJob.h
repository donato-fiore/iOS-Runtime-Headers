// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHATASKWORKERJOB_H
#define PHATASKWORKERJOB_H

@class PGManager, MAProgressReporter;
@protocol OS_dispatch_queue, PHATask;


#import "PHAWorkerJob.h"
#import "PHATaskHealthRecorder.h"

@interface PHATaskWorkerJob : PHAWorkerJob {
    PGManager *_graphManager;
    PHATaskHealthRecorder *_taskHealthRecorder;
    NSObject<OS_dispatch_queue> *_executionQueue;
    MAProgressReporter *_progressReporter;
}


@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) NSObject<PHATask> *task; // ivar: _task
@property (readonly) NSUInteger taskCompletionState; // ivar: _taskCompletionState


+(id)stringForTaskCompletionState:(NSUInteger)arg0 ;
-(BOOL)finished;
-(BOOL)startProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(BOOL)stopProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(float)completionScore;
-(id)initWithWorkerType:(short)arg0 scenario:(NSUInteger)arg1 graphManager:(id)arg2 task:(id)arg3 ;
-(void)markTaskAsCompleted;


@end


#endif