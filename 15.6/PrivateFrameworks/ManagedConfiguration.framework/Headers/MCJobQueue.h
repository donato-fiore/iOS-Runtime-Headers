// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCJOBQUEUE_H
#define MCJOBQUEUE_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_group, MCJobQueueObserver;

#import <Foundation/Foundation.h>


@interface MCJobQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // ivar: _executionQueue
@property (copy, nonatomic) id *executionQueueAbortCompletionBlock; // ivar: _executionQueueAbortCompletionBlock
@property (retain, nonatomic) NSObject<OS_dispatch_group> *jobGroup; // ivar: _jobGroup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *jobQueue; // ivar: _jobQueue
@property unsigned int nextJobSequenceNumber; // ivar: _nextJobSequenceNumber
@property (weak, nonatomic) NSObject<MCJobQueueObserver> *observer; // ivar: _observer
@property (retain, nonatomic) NSString *queueID; // ivar: _queueID


-(id)init;
-(void)abortEnqueuedJobsCompletionBlock:(id)arg0 ;
-(void)dealloc;
-(void)fromFunction:(char *)arg0 enqueueJob:(id)arg1 ;
-(void)jobDidFinishFromFunction:(char *)arg0 ;
-(void)waitForEnqueuedJobsToCompleteCompletionBlock:(id)arg0 ;


@end


#endif