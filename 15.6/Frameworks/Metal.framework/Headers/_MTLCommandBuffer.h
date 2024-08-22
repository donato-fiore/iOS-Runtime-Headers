// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MTLCOMMANDBUFFER_H
#define _MTLCOMMANDBUFFER_H

@class MTLObjectWithLabel, NSError, NSDictionary, NSMutableDictionary, NSMutableArray, NSString;
@protocol MTLCommandEncoder, MTLBuffer, MTLCommandQueue;



@interface _MTLCommandBuffer : MTLObjectWithLabel {
    id<MTLCommandEncoder> *_currentCommandEncoder;
    *MTLDispatch _scheduledDispatchList;
    *MTLDispatch _scheduledDispatchListTail;
    *MTLDispatch _completedDispatchList;
    *MTLDispatch _completedDispatchListTail;
    *MTLSyncDispatch _syncDispatchList;
    *MTLSyncDispatch _syncDispatchListTail;
    _opaque_pthread_mutex_t _mutex;
    _opaque_pthread_cond_t _cond;
    NSUInteger _creationTime;
    NSUInteger _enqueueTime;
    NSUInteger _commitTime;
    NSUInteger _submitToKernelTime;
    NSUInteger _submitToHardwareTime;
    NSUInteger _completionInterruptTime;
    NSUInteger _completionHandlerEnqueueTime;
    NSUInteger _completionHandlerExecutionTime;
    NSError *_error;
    BOOL _skipRender;
    BOOL _profilingEnabled;
    BOOL _scheduledCallbacksDone;
    BOOL _completedCallbacksDone;
    BOOL _strongObjectReferences;
    NSDictionary *_profilingResults;
    NSMutableDictionary *_userDictionary;
    NSUInteger _kernelStartTime;
    NSUInteger _kernelEndTime;
    NSUInteger _gpuStartTime;
    NSUInteger _gpuEndTime;
    BOOL _wakeOnCommit;
    NSMutableArray *_retainedObjects;
    BOOL _needsCommandBufferSemaphoreSignal;
    NSUInteger _labelTraceID;
    id *_perfSampleHandlerBlock;
    BOOL _hasPresent;
    id<MTLBuffer> *_progressBuffer;
    unsigned int _progressOffset;
    BOOL _creatingProgressEncoder;
    BOOL _needsFrameworkAssistedErrorTracking;
    NSMutableArray *_encoderInfos;
}


@property (readonly, nonatomic) CGFloat GPUEndTime;
@property (readonly, nonatomic) CGFloat GPUStartTime;
@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled; // ivar: _StatEnabled
@property (readonly) NSObject<MTLCommandQueue> *commandQueue; // ivar: _queue
@property (readonly) NSError *error;
@property (nonatomic) NSUInteger errorOptions; // ivar: _errorOptions
@property (readonly) NSUInteger globalTraceObjectID; // ivar: _globalTraceObjectID
@property (readonly, nonatomic) CGFloat kernelEndTime;
@property (readonly, nonatomic) CGFloat kernelStartTime;
@property (copy) NSString *label;
@property (readonly, nonatomic, getter=getListIndex) NSUInteger listIndex; // ivar: _listIndex
@property (readonly) NSMutableArray *logs; // ivar: _logs
@property (nonatomic) NSUInteger numEncoders; // ivar: _numEncoders
@property (nonatomic) NSUInteger numThisCommandBuffer; // ivar: _numThisCommandBuffer
@property (nonatomic) BOOL ownedByParallelEncoder; // ivar: _ownedByParallelEncoder
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly) BOOL retainedReferences; // ivar: _retainedReferences
@property (readonly) NSUInteger status; // ivar: _status
@property (readonly) BOOL synchronousDebugMode; // ivar: _synchronousDebugMode
@property (readonly, nonatomic) NSMutableDictionary *userDictionary;


+(void)initialize;
-(*void)debugBufferContentsWithLength:(*NSUInteger)arg0 ;
-(BOOL)commitAndWaitUntilSubmitted;
-(BOOL)isCommitted;
-(BOOL)skipRender;
-(NSUInteger)getAndIncrementNumEncoders;
-(id)accelerationStructureCommandEncoder;
-(id)blitCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoderWithDispatchType:(NSUInteger)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithQueue:(id)arg0 retainedReferences:(BOOL)arg1 ;
-(id)initWithQueue:(id)arg0 retainedReferences:(BOOL)arg1 synchronousDebugMode:(BOOL)arg2 ;
-(id)progressTrackingBlitCommandEncoder;
-(id)progressTrackingComputeCommandEncoder;
-(id)progressTrackingRenderCommandEncoder;
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg0 ;
-(void)_addRetainedObject:(id)arg0 ;
-(void)addCompletedHandler:(id)arg0 ;
-(void)addScheduledHandler:(id)arg0 ;
-(void)addSynchronizationNotification:(id)arg0 ;
-(void)commit;
-(void)commitAndHold;
-(void)commitAndReset;
-(void)dealloc;
-(void)didCompleteWithStartTime:(NSUInteger)arg0 endTime:(NSUInteger)arg1 error:(id)arg2 ;
-(void)didSchedule:(NSUInteger)arg0 error:(id)arg1 ;
-(void)didScheduleWithStartTime:(NSUInteger)arg0 endTime:(NSUInteger)arg1 error:(id)arg2 ;
-(void)encodeDashboardFinalizeForResourceGroup:(id)arg0 dashboard:(NSUInteger)arg1 value:(NSUInteger)arg2 forIndex:(NSUInteger)arg3 ;
-(void)encodeDashboardFinalizeForResourceGroup:(id)arg0 dashboard:(NSUInteger)arg1 values:(*NSUInteger)arg2 indices:(*NSUInteger)arg3 count:(NSUInteger)arg4 ;
-(void)encodeDashboardTagForResourceGroup:(id)arg0 ;
-(void)enqueue;
-(void)executeSynchronizationNotifications:(int)arg0 ;
-(void)executeSynchronizationNotifications:(int)arg0 scope:(NSUInteger)arg1 resources:(*id)arg2 count:(NSUInteger)arg3 ;
-(void)getDriverEncoderInfoData:(id)arg0 ;
-(void)initProgressTracking;
-(void)kernelSubmitTime;
-(void)popDebugGroup;
-(void)presentDrawable:(id)arg0 ;
-(void)presentDrawable:(id)arg0 afterMinimumDuration:(CGFloat)arg1 ;
-(void)presentDrawable:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)processEncoderInfos;
-(void)pushDebugGroup:(id)arg0 ;
-(void)runPerfCounterCallbackWithBlock:(id)arg0 ;
-(void)setCommitted:(BOOL)arg0 ;
-(void)setCurrentCommandEncoder:(id)arg0 ;
-(void)signalCommandBufferAvailable;
-(void)waitUntilCompleted;
-(void)waitUntilScheduled;


@end


#endif