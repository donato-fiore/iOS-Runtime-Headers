// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIRORESOURCEUSAGEMONITOR_H
#define MIRORESOURCEUSAGEMONITOR_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MiroResourceUsageMonitor : NSObject {
    NSInteger __initialResidentMemoryBytes;
    NSInteger __initialPeakResidentMemoryBytes;
    NSInteger __maxResidentMemoryBytes;
    BOOL __isRunning;
    CGFloat __processorUsage;
    NSInteger __memoryUsage;
    NSInteger __peakMemoryUsage;
}


@property (nonatomic) NSInteger _initialPeakResidentMemoryKBytes; // ivar: __initialPeakResidentMemoryKBytes
@property (nonatomic) NSInteger _initialResidentMemoryKBytes; // ivar: __initialResidentMemoryKBytes
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_isolationQueue; // ivar: __isolationQueue
@property (nonatomic) NSInteger _maxResidentMemoryKBytes; // ivar: __maxResidentMemoryKBytes
@property (retain, nonatomic) NSObject<OS_dispatch_source> *_pollingTimer; // ivar: __pollingTimer
@property (nonatomic) rusage _rusageStart; // ivar: __rusageStart
@property (nonatomic) CGFloat _timeStart; // ivar: __timeStart
@property (readonly, nonatomic) NSInteger memoryUsage;
@property (readonly, nonatomic) CGFloat processorUsage;


+(NSInteger)_getResidentMemoryKBytes:(*NSInteger)arg0 ;
+(id)sharedResourceUsageMonitor;
-(BOOL)isRunning;
-(BOOL)start;
-(BOOL)stop;
-(id)description;
-(id)init;
-(void)_inqueue_start;
-(void)_inqueue_stop;
-(void)dealloc;


@end


#endif