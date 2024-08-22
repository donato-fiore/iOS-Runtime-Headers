// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTGPUCOUNTERPROFILE_GPURAWCOUNTERS_H
#define DTGPUCOUNTERPROFILE_GPURAWCOUNTERS_H

@class NSArray, NSString, NSMutableDictionary;
@protocol MTLDevice, GPURawCounterSourceGroup, GPURawCounterSource;


#import "DTGPUCounterProfile.h"
#import "DTGPUAGXCounterSource.h"

@interface DTGPUCounterProfile_GPURawCounters : DTGPUCounterProfile {
    NSUInteger _currentIORegSamplingInterval;
    EMA<unsigned long long> _deviceUtilization;
    id<MTLDevice> *_device;
    id<GPURawCounterSourceGroup> *_sourceGroup;
    id<GPURawCounterSource> *_source;
    DTGPUAGXCounterSource *_agxSource;
    NSArray *_rawCounters;
    NSString *_sourceName;
    NSUInteger _startTime;
    NSUInteger _firstGpuTime;
    mach_timebase_info _timeBaseInfo;
    NSInteger _gpuTimeIndex;
    unsigned int _vendor;
    NSMutableDictionary *_gpuConfigurationVariables;
}




+(id)_sourceNameFromProfile:(NSUInteger)arg0 ;
+(id)_supportedProfileNameFromEnum:(NSUInteger)arg0 vendor:(unsigned int)arg1 ;
+(id)create:(id)arg0 profile:(NSUInteger)arg1 ;
+(unsigned int)vendorFromDevice:(id)arg0 ;
-(BOOL)_validateAndConfigureRawCounters;
-(BOOL)prepare;
-(BOOL)start:(NSUInteger)arg0 vendorFeatures:(id)arg1 ;
-(NSUInteger)ringBufferCount;
-(NSUInteger)sampleSize;
-(id)counterProfileForHost;
-(id)initWithDevice:(id)arg0 profile:(NSUInteger)arg1 ;
-(id)initWithDevice:(id)arg0 sourceName:(id)arg1 profile:(NSUInteger)arg2 ;
-(id)initWithLimitersProfile:(id)arg0 ;
-(void)_releaseCounterSource;
-(void)_releaseDataSource;
-(void)sampleCounters:(NSUInteger)arg0 callback:(id)arg1 ;
-(void)stop;


@end


#endif