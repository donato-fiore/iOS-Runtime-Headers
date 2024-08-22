// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTGRAPHICSSERVICE_H
#define DTGRAPHICSSERVICE_H

@class DTXService, NSMutableArray, NSDictionary, NSString;
@protocol DTGraphicsServiceAuthorizedAPI, OS_dispatch_semaphore;



@interface DTGraphicsService : DTXService <DTGraphicsServiceAuthorizedAPI>

 {
    BOOL _doCollectData;
    NSUInteger _samplingRate;
    int _targetPid;
    NSMutableArray *_availableGlobalStatistics;
    NSMutableArray *_availableProcessStatistics;
    NSDictionary *_availableStatistics;
    NSMutableArray *_driverNames;
    unsigned int _lastFPSCount;
    unsigned int _maxFPS;
    CGFloat _startTime;
    CGFloat _lastTimeStampInSeconds;
    unsigned int _globalService;
    unsigned int _perProcessService;
    NSObject<OS_dispatch_semaphore> *_stopSamplingSemaphore;
    BOOL _capFPS;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)_collectSampleForService;
-(id)availableStatistics;
-(id)currentFramesPerSecond:(CGFloat)arg0 ;
-(id)driverNames;
-(id)initWithChannel:(id)arg0 ;
-(id)queryGlobalStatistics;
-(id)queryPidStatistics;
-(id)valueForSwitch:(id)arg0 ;
-(void)_collectData;
-(void)_releaseIOServices;
-(void)_setupIOServices;
-(void)cleanup;
-(void)dealloc;
-(void)queryCards;
-(void)setSamplingRate:(id)arg0 ;
-(void)setValue:(id)arg0 forSwitchName:(id)arg1 ;
-(void)startSamplingAtTimeInterval:(id)arg0 ;
-(void)startSamplingAtTimeInterval:(id)arg0 processIdentifier:(id)arg1 ;
-(void)stopSampling;


@end


#endif