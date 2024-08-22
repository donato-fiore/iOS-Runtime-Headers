// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZERSCHEDULER_H
#define HMIVIDEOANALYZERSCHEDULER_H

@class HMFObject, HMFTimer, NSArray, NSString, NSPointerArray;
@protocol HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate;


#import "HMISystemResourceUsageMonitor.h"

@interface HMIVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate>

 {
    os_unfair_lock_s _lock;
    os_unfair_lock_s _registerLock;
    HMFTimer *_tick;
    HMISystemResourceUsageMonitor *_usageMonitor;
    NSInteger _usageLevel;
}


@property (readonly) NSArray *analyzerConfigurations;
@property (readonly) NSArray *analyzerStates;
@property (readonly) NSArray *analyzers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL ignoreThermalAndSystemResourceUsageLevel; // ivar: _ignoreThermalAndSystemResourceUsageLevel
@property (readonly) NSPointerArray *internalAnalyzers; // ivar: _internalAnalyzers
@property NSInteger logStateCount; // ivar: _logStateCount
@property NSUInteger maxH264VideoDecoders; // ivar: _maxH264VideoDecoders
@property NSUInteger maxH264VideoEncoders; // ivar: _maxH264VideoEncoders
@property NSUInteger maxH265VideoEncoders; // ivar: _maxH265VideoEncoders
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedInstance;
-(BOOL)_shouldSkipLogState;
-(id)analyzerWithConfiguration:(id)arg0 block:(id)arg1 ;
-(id)init;
-(id)reducedConfiguration:(id)arg0 ;
-(id)reducedConfiguration:(id)arg0 configurations:(id)arg1 ;
-(id)reducedConfiguration:(id)arg0 states:(id)arg1 ;
-(void)_compactInternalAnalyzers;
-(void)_logState;
-(void)_updateAnalyzer:(id)arg0 withIndex:(NSUInteger)arg1 ;
-(void)registerAnalyzer:(id)arg0 ;
-(void)systemResourceUsageDidChangeTo:(NSInteger)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif