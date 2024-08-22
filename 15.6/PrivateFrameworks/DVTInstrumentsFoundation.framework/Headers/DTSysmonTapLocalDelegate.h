// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTSYSMONTAPLOCALDELEGATE_H
#define DTSYSMONTAPLOCALDELEGATE_H

@class NSSet, NSMutableArray, NSMutableDictionary, NSDictionary, NSArray, NSString;
@protocol DTTapLocalDelegate, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore, OS_sysmon_request;

#import <Foundation/Foundation.h>

#import "DTTapLocal.h"
#import "DTSysmonTapConfig.h"

@interface DTSysmonTapLocalDelegate : NSObject <DTTapLocalDelegate>

 {
    DTTapLocal *_tap;
    DTSysmonTapConfig *_config;
    NSSet *_pidFilter;
    BOOL _isWindowed;
    NSUInteger _lastWindowPurgeTime;
    NSUInteger _purgeEveryNTicks;
    NSUInteger _effectiveWindowSize;
    BOOL _stopWasCalled;
    NSObject<OS_dispatch_source> *_pollTimer;
    NSObject<OS_dispatch_queue> *_serialQ;
    NSObject<OS_dispatch_semaphore> *_samplesLock;
    NSMutableArray *_samples;
    NSMutableDictionary *_newAttributesSample;
    NSDictionary *_processesFromLastSample;
    NSDictionary *_coalitionsFromLastSample;
    NSMutableDictionary *_processesAtWindowBeginning;
    NSMutableDictionary *_systemAtWindowBeginning;
    NSMutableDictionary *_coalitionsAtWindowBeginning;
    NSArray *_processAttributes;
    NSArray *_systemAttributes;
    NSArray *_coalitionAttributes;
    NSObject<OS_sysmon_request> *_processRequest;
    NSObject<OS_sysmon_request> *_systemRequest;
    NSObject<OS_sysmon_request> *_coalitionRequest;
    NSUInteger _processLastSampleTime;
    NSUInteger _systemLastSampleTime;
    NSUInteger _coalitionLastSampleTime;
    unsigned int _cpuCount;
    *processor_cpu_load_info _savedTicks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canFetchWhileArchiving;
-(id)_getSessionMetadata;
-(id)initWithConfig:(id)arg0 ;
-(id)validateConfig;
-(void)_addCPUUsageToSample:(id)arg0 ;
-(void)_addSample:(id)arg0 ;
-(void)_createAttributesSample;
-(void)_handleSysmonCoalitionTable:(id)arg0 startTime:(NSUInteger)arg1 endTime:(NSUInteger)arg2 ;
-(void)_handleSysmonProcessTable:(id)arg0 startTime:(NSUInteger)arg1 endTime:(NSUInteger)arg2 ;
-(void)_handleSysmonSystemTable:(id)arg0 startTime:(NSUInteger)arg1 endTime:(NSUInteger)arg2 ;
-(void)_purgeOldSamplesForCurrentTime:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)fetchDataForReason:(NSUInteger)arg0 block:(id)arg1 ;
-(void)pause;
-(void)setTap:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)unpause;


@end


#endif