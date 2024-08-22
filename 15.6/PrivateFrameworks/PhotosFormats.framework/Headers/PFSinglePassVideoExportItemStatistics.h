// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFSINGLEPASSVIDEOEXPORTITEMSTATISTICS_H
#define PFSINGLEPASSVIDEOEXPORTITEMSTATISTICS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PFSinglePassVideoExportItemStatistics : NSObject

@property (readonly) NSUInteger averageOutputChunkBytes;
@property (readonly) CGFloat averageOutputChunkTimeInterval;
@property CGFloat conversionDuration; // ivar: _conversionDuration
@property (readonly) NSInteger effectiveEncodingBitRate;
@property float frameRate; // ivar: _frameRate
@property NSUInteger lastOutputChunkTimestamp; // ivar: _lastOutputChunkTimestamp
@property CGFloat lastProcessedInputFramePresentationTime; // ivar: _lastProcessedInputFramePresentationTime
@property (retain) NSMutableArray *outputChunkMeasurements; // ivar: _outputChunkMeasurements
@property NSUInteger processedAdditionalSampleBytes; // ivar: _processedAdditionalSampleBytes
@property (readonly) NSUInteger processedOutputBytesPerSecond;
@property NSInteger processedOutputFrameCount; // ivar: _processedOutputFrameCount
@property NSUInteger processedOutputTotalBytes; // ivar: _processedOutputTotalBytes
@property NSUInteger processedVideoSampleBytes; // ivar: _processedVideoSampleBytes
@property (readonly) float processingFramesPerSecond;
@property (readonly) NSInteger targetEncodingBitRate;
@property NSUInteger targetOutputTotalBytes; // ivar: _targetOutputTotalBytes
@property CGFloat targetPlaybackDuration; // ivar: _targetPlaybackDuration


+(id)statisticsWithTargetPlaybackDuration:(struct ? )arg0 frameRate:(float)arg1 targetOutputTotalBytes:(NSUInteger)arg2 ;
-(id)init;
-(id)summaryDescription;
-(void)addMeasurementForBytesDelivered:(NSUInteger)arg0 ;
-(void)enumerateOutputChunkMeasurementsWithHandler:(id)arg0 ;


@end


#endif