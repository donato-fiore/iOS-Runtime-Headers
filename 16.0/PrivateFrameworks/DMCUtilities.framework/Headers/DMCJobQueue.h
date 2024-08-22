// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCJOBQUEUE_H
#define DMCJOBQUEUE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DMCHangDetectionQueue.h"

@interface DMCJobQueue : NSObject

@property (retain, nonatomic) DMCHangDetectionQueue *executionQueue; // ivar: _executionQueue
@property (copy, nonatomic) id *executionQueueAbortCompletionBlock; // ivar: _executionQueueAbortCompletionBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *jobQueue; // ivar: _jobQueue
@property unsigned int nextJobSequenceNumber; // ivar: _nextJobSequenceNumber
@property (retain, nonatomic) NSString *queueID; // ivar: _queueID


-(id)init;
-(id)initWithExecutionQueue:(id)arg0 ;
-(void)dealloc;
-(void)fromFunction:(char *)arg0 enqueueJob:(id)arg1 ;
-(void)jobDidFinishFromFunction:(char *)arg0 jobBlockDescription:(id)arg1 ;
-(void)queueBlock:(id)arg0 ;
-(void)waitForEnqueuedJobsToCompleteCompletionBlock:(id)arg0 ;


@end


#endif