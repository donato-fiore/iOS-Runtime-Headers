// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARPROFILER_H
#define _EARPROFILER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _EARProfiler : NSObject {
    NSUInteger _n_samples;
    CGFloat _max_rss;
    CGFloat _jetsam_max;
    CGFloat _jetsam_tot;
    vector<float, std::allocator<float>> _background_power;
    vector<void *, std::allocator<void *>> _networks;
    powerSummary _power_summary;
    CGFloat _start_time;
    CGFloat _end_time;
    CGFloat _ane_time;
    NSString *_power_profiler_name;
}


@property BOOL _memoryProfiler; // ivar: __memoryProfiler
@property BOOL _perfProfiler; // ivar: __perfProfiler
@property BOOL _powerProfiler; // ivar: __powerProfiler


+(id)sharedProfiler;
+(void)parsePowerSummary:(id)arg0 writeTo:(struct powerSummary *)arg1 ;
-(id)init;
-(void)addProfilingNetwork:(*void)arg0 ;
-(void)dealloc;
-(void)finishProfiling;
-(void)finishProfilingNetworks;
-(void)reportProfiling;
-(void)sample;
-(void)setMemoryProfiler:(BOOL)arg0 ;
-(void)setPerfProfiler:(BOOL)arg0 ;
-(void)setPowerProfiler:(BOOL)arg0 powerProfilerName:(id)arg1 ;


@end


#endif