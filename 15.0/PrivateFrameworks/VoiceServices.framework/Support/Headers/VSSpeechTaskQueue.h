// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSPEECHTASKQUEUE_H
#define VSSPEECHTASKQUEUE_H

@class NSOperation<VSSpeechTaskProtocol>, NSMutableArray, VSSpeechRequest;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VSSpeechTaskQueue : NSObject

@property (retain, nonatomic) NSOperation<VSSpeechTaskProtocol> *currentTask; // ivar: _currentTask
@property (retain, nonatomic) NSMutableArray *eagerTasks; // ivar: _eagerTasks
@property (retain, nonatomic) VSSpeechRequest *lastSynthesisRequest; // ivar: _lastSynthesisRequest
@property (nonatomic) NSUInteger lastSynthesisRequestCreatedTimeStamp; // ivar: _lastSynthesisRequestCreatedTimeStamp
@property (retain, nonatomic) NSMutableArray *speakTasks; // ivar: _speakTasks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *speakingQueue; // ivar: _speakingQueue
@property (nonatomic) _opaque_pthread_mutex_t threadMutex; // ivar: _threadMutex
@property (nonatomic) _opaque_pthread_mutexattr_t threadMutexAttr; // ivar: _threadMutexAttr


+(id)mainDeviceQueue;
+(id)parallelQueueWithIdentifier:(id)arg0 ;
-(NSUInteger)createdTimestampWithTask:(id)arg0 ;
-(id)init;
-(id)taskWithCreatedTimeStamp:(NSUInteger)arg0 ;
-(id)tasksWithDelegate:(id)arg0 ;
-(void)addTask:(id)arg0 ;
-(void)cancelTask:(id)arg0 ;
-(void)resumeCurrentTask;
-(void)spinNextTask;
-(void)suspendCurrentTask;


@end


#endif