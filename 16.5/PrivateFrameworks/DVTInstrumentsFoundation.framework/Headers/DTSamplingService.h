// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTSAMPLINGSERVICE_H
#define DTSAMPLINGSERVICE_H

@class DTXService, NSString;
@protocol DTSamplingServiceAuthorizedAPI;



@interface DTSamplingService : DTXService <DTSamplingServiceAuthorizedAPI>

 {
    *sampling_context_t _context;
    BOOL _doCollectData;
    NSUInteger _samplingRate;
    NSUInteger _outputRate;
    NSUInteger _outputRateDelta;
    *NSUInteger _backtraceBuffer;
    NSUInteger _backtraceBufferSize;
    NSUInteger _backtraceBufferUsedSize;
    unsigned int _task;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)initWithChannel:(id)arg0 ;
-(void)_allocateBuffer;
-(void)_outputData;
-(void)addSampleWithTimeInfo:(struct __CFDictionary *)arg0 useZeroDelta:(BOOL)arg1 ;
-(void)collectData;
-(void)dealloc;
-(void)setOutputRate:(id)arg0 ;
-(void)setSamplingRate:(id)arg0 ;
-(void)setTargetPid:(id)arg0 ;
-(void)startSampling;
-(void)stopSampling;


@end


#endif