// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAUDIOTIMEERRORCALCULATOR_H
#define TSAUDIOTIMEERRORCALCULATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSAudioTimeErrorCalculator : NSObject {
    NSInteger _numberOfSamples;
    NSInteger _maxMeasurements;
    NSInteger _measurementsInBuffer;
    *float _channelASamples;
    *float _channelBSamples;
    *CGFloat _sampleTimestamps;
    *CGFloat _timeErrors;
    BOOL _calculatedTimeError;
    NSInteger _interval;
    NSInteger _correlationLength;
    NSInteger _upscaleFactor;
    CGFloat _samplingRate;
    NSInteger _correlationType;
    BOOL _noCopy;
}


@property (readonly, copy, nonatomic) NSArray *audioTimeErrors;
@property (readonly, copy, nonatomic) NSArray *timeErrors;


-(BOOL)exportTimeErrorToDirectoryURL:(id)arg0 ;
-(BOOL)exportTimeErrorToDirectoryURL:(id)arg0 withFilename:(id)arg1 ;
-(BOOL)exportTimeErrorToPath:(id)arg0 ;
-(id)initNoCopyWithChannelA:(*float)arg0 andChannelB:(*float)arg1 ofLength:(NSInteger)arg2 withInterval:(NSInteger)arg3 correlationLength:(NSInteger)arg4 upscaleFactor:(NSInteger)arg5 atSamplingRate:(CGFloat)arg6 ;
-(id)initNoCopyWithChannelA:(*float)arg0 andChannelB:(*float)arg1 ofLength:(NSInteger)arg2 withInterval:(NSInteger)arg3 correlationLength:(NSInteger)arg4 upscaleFactor:(NSInteger)arg5 atSamplingRate:(CGFloat)arg6 correlationType:(NSInteger)arg7 ;
-(id)initWithChannelA:(*float)arg0 andChannelB:(*float)arg1 ofLength:(NSInteger)arg2 withInterval:(NSInteger)arg3 correlationLength:(NSInteger)arg4 upscaleFactor:(NSInteger)arg5 atSamplingRate:(CGFloat)arg6 ;
-(id)initWithChannelA:(*float)arg0 andChannelB:(*float)arg1 ofLength:(NSInteger)arg2 withInterval:(NSInteger)arg3 correlationLength:(NSInteger)arg4 upscaleFactor:(NSInteger)arg5 atSamplingRate:(CGFloat)arg6 correlationType:(NSInteger)arg7 ;
-(void)_processTimeErrorFromStartOffset:(NSInteger)arg0 atIndex:(NSInteger)arg1 withCount:(NSInteger)arg2 ;
-(void)calculateTimeError;
-(void)calculateTimeErrorFromStartOffset:(NSInteger)arg0 toEndOffset:(NSInteger)arg1 ;
-(void)calculateTimeErrorFromStartOffset:(NSInteger)arg0 toEndOffset:(NSInteger)arg1 withThreadingOption:(NSInteger)arg2 ;
-(void)calculateTimeErrorWithThreadingOption:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif