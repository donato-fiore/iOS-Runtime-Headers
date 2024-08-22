// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTGPUDATASOURCE_H
#define DTGPUDATASOURCE_H

@class NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, DTGPUPerformanceStateControl, DTGPUDataSourceDelegate, MTLDevice;

#import <Foundation/Foundation.h>

#import "DTGPUCounterProfile.h"

@interface DTGPUDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    DTGPUCounterProfile *_collectingProfile;
    NSUInteger _windowLimit;
    NSUInteger _sampleInterval;
    NSUInteger _stopTime;
    BOOL _enableShaderProfiler;
    BOOL _isAGXDevice;
    vector<std::vector<DTGPUCounterSampleBuffer>, std::allocator<std::vector<DTGPUCounterSampleBuffer>>> _sampleBuffers;
    NSArray *_supportedCounterProfiles;
    id<DTGPUPerformanceStateControl> *_perfStateControl;
}


@property (readonly, nonatomic) DTGPUCounterProfile *collectingProfile;
@property (weak, nonatomic) NSObject<DTGPUDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSDictionary *deviceInfoDict;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSUInteger minSampleInterval;
@property (readonly, nonatomic) NSArray *supportedCounterProfiles;
@property (readonly, nonatomic) NSUInteger windowLimit;


-(BOOL)enableConsistentGPUPerformanceState:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)run;
-(NSUInteger)timestampOfFirstSample;
-(id)_queryDisplayInfoDict;
-(id)configure:(unsigned int)arg0 interval:(NSUInteger)arg1 windowLimit:(NSUInteger)arg2 ;
-(id)currentConsistentGPUPerformanceState;
-(id)disableConsistentGPUPerformanceState;
-(id)initWithMTLDevice:(id)arg0 workQueue:(id)arg1 ;
-(void)_sampleCounters;
-(void)enableShaderProfiler:(BOOL)arg0 ;
-(void)getRemainingData:(id)arg0 ;
-(void)reset;
-(void)stop;


@end


#endif