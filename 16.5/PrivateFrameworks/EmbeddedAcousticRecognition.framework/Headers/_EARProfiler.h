// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    NSString *_background_power_logfile_name;
    NSString *_runtime_power_logfile_name;
}


@property BOOL _hasPMP; // ivar: __hasPMP
@property BOOL _keepLogFiles; // ivar: __keepLogFiles
@property BOOL _memoryProfiler; // ivar: __memoryProfiler
@property BOOL _perfProfiler; // ivar: __perfProfiler
@property BOOL _powerProfiler; // ivar: __powerProfiler


+(id)sharedProfiler;
-(id)init;
-(id)reportProfilingAsDictionary;
-(void)KeepLogFiles:(BOOL)arg0 ;
-(void)addProfilingNetwork:(*void)arg0 ;
-(void)cleanupLogfiles;
-(void)finishProfiling;
-(void)finishProfilingNetworks;
-(void)parsePowerSummary:(id)arg0 writeTo:(struct powerSummary *)arg1 ;
-(void)reportProfiling;
-(void)reset;
-(void)sample;
-(void)setMemoryProfiler:(BOOL)arg0 ;
-(void)setPerfProfiler:(BOOL)arg0 ;
-(void)setPowerProfiler:(BOOL)arg0 powerProfilerName:(id)arg1 ;


@end


#endif