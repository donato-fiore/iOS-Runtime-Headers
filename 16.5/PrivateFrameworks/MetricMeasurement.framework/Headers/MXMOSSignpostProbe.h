// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXMOSSIGNPOSTPROBE_H
#define MXMOSSIGNPOSTPROBE_H

@class SignpostSupportObjectExtractor, NSURL, NSDate;
@protocol OS_dispatch_semaphore;


#import "MXMProbe.h"
#import "MXMMutableSampleData.h"

@interface MXMOSSignpostProbe : MXMProbe {
    SignpostSupportObjectExtractor *_extractor;
    NSUInteger _mode;
    NSURL *_logArchivePath;
    NSDate *_startDate;
    NSDate *_endDate;
    NSUInteger _startMachContTime;
    NSUInteger _stopMachContTime;
    NSObject<OS_dispatch_semaphore> *_finishedProcessingSema;
    MXMMutableSampleData *_data;
}




+(id)probeHostLive;
+(id)probeHostSystemLogArchiveWithRelativeTimeInterval:(CGFloat)arg0 ;
+(id)probeHostSystemLogArchiveWithStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)probeHostSystemLogArchiveWithStartDate:(id)arg0 endDate:(id)arg1 startMachTime:(NSUInteger)arg2 stopMachTime:(NSUInteger)arg3 ;
+(id)probeWithLogArchivePath:(id)arg0 ;
+(id)probeWithLogArchivePath:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
+(id)probeWithLogArchivePath:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 startMachTime:(NSUInteger)arg3 stopMachTime:(NSUInteger)arg4 ;
-(id)_buildSampleSetWithData:(id)arg0 tag:(id)arg1 unit:(id)arg2 attributes:(id)arg3 signpostObject:(id)arg4 ;
-(id)initWithLogArchive:(id)arg0 ;
-(id)initWithLogArchive:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)initWithMode:(NSUInteger)arg0 logArchive:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithMode:(NSUInteger)arg0 logArchive:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 startMachTime:(NSUInteger)arg4 stopMachTime:(NSUInteger)arg5 ;
-(id)sampleWithTimeout:(CGFloat)arg0 stopReason:(*NSUInteger)arg1 ;
-(void)_addAnimationFrameCountToData:(id)arg0 fromSignpostAnimationInterval:(id)arg1 ;
-(void)_addAnimationFrameRateToData:(id)arg0 fromSignpostAnimationInterval:(id)arg1 ;
-(void)_addAnimationGlitchTimeRatioToData:(id)arg0 fromSignpostAnimationInterval:(id)arg1 ;
-(void)_addAnimationGlitchesTotalDurationToData:(id)arg0 fromSignpostAnimationInterval:(id)arg1 ;
-(void)_addAnimationNumberOfGlitchesToData:(id)arg0 fromSignpostAnimationInterval:(id)arg1 ;
-(void)_beginUpdates;
-(void)_buildData:(id)arg0 attributes:(id)arg1 signpostEvent:(id)arg2 ;
-(void)_buildData:(id)arg0 signpostAnimationInterval:(id)arg1 ;
-(void)_buildData:(id)arg0 signpostInterval:(id)arg1 ;
-(void)_setupProcessingBlocks;
-(void)_setupProcessingFilter;
-(void)_stopUpdates;
-(void)dealloc;


@end


#endif