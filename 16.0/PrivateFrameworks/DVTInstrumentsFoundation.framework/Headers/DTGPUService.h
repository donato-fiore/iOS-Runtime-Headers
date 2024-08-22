// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTGPUSERVICE_H
#define DTGPUSERVICE_H

@class DTXService, NSMutableDictionary, NSString;
@protocol DTGPUServiceAuthorizedAPI, DTGPUDataSourceDelegate, OS_dispatch_queue, OS_dispatch_source, NSObject;



@interface DTGPUService : DTXService <DTGPUServiceAuthorizedAPI, DTGPUDataSourceDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_waitingForDeviceTimer;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    id<NSObject> *_deviceObserver;
    BOOL _enableShaderProfiler;
    BOOL _enableConsistentPerfState;
    BOOL _enableMultiSourceCounters;
    NSUInteger _targetPerfState;
    NSMutableDictionary *_collectingDataSources;
    NSMutableDictionary *_dataSourceDict;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceName;
+(void)registerCapabilities:(id)arg0 ;
-(BOOL)enableConsistentGPUPerformanceState:(NSUInteger)arg0 acceleratorID:(NSUInteger)arg1 ;
-(id)_constructMessagePayload:(*NSUInteger)arg0 sampleCount:(NSUInteger)arg1 length:(NSUInteger)arg2 dataSource:(id)arg3 sampleType:(NSUInteger)arg4 ringBufferIndex:(unsigned int)arg5 sourceIndex:(unsigned int)arg6 ;
-(id)_findDataSourcesForTargetProcess:(int)arg0 ;
-(id)currentConsistentGPUPerformanceState;
-(id)dataSourceFromGPUIndex:(NSUInteger)arg0 ;
-(id)disableConsistentGPUPerformanceState:(NSUInteger)arg0 ;
-(id)flushRemainingData;
-(id)initWithChannel:(id)arg0 ;
-(id)requestDeviceGPUInfo;
-(id)stopCollectingCounters;
-(void)_addGPU:(id)arg0 ;
-(void)_configureDataSourcesAndSendMessage:(id)arg0 counterProfile:(unsigned int)arg1 interval:(NSUInteger)arg2 windowLimit:(NSUInteger)arg3 ;
-(void)_removeGPU:(NSUInteger)arg0 ;
-(void)_resetAllDataSources;
-(void)_sendErrorMessage:(id)arg0 code:(NSUInteger)arg1 ;
-(void)_setupDataSources;
-(void)_startHeartbeatTimer;
-(void)_stopHeartbeatTimer;
-(void)_waitForProcessMetalDevice:(int)arg0 counterProfile:(unsigned int)arg1 interval:(NSUInteger)arg2 windowLimit:(NSUInteger)arg3 ;
-(void)configureCounters:(NSUInteger)arg0 counterProfile:(unsigned int)arg1 interval:(NSUInteger)arg2 windowLimit:(NSUInteger)arg3 tracingPID:(int)arg4 ;
-(void)enableMultiSourceCounters;
-(void)enableShaderProfiler;
-(void)messageReceived:(id)arg0 ;
-(void)readyToSendData:(*NSUInteger)arg0 sampleCount:(NSUInteger)arg1 length:(NSUInteger)arg2 dataSource:(id)arg3 sampleType:(NSUInteger)arg4 ringBufferIndex:(unsigned int)arg5 sourceIndex:(unsigned int)arg6 ;
-(void)startCollectingCounters;


@end


#endif