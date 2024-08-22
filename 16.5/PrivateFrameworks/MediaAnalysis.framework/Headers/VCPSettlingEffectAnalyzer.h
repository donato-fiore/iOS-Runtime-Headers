// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPSETTLINGEFFECTANALYZER_H
#define VCPSETTLINGEFFECTANALYZER_H

@class FRCFrameInterpolator, FRCFrame, NSString, AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, NSArray;


#import "VCPVideoAnalyzer.h"
#import "VCPMovieAssetWriter.h"

@interface VCPSettlingEffectAnalyzer : VCPVideoAnalyzer {
    FRCFrameInterpolator *_frameInterpolator;
    FRCFrame *_previousFrame;
    VCPMovieAssetWriter *_assetWriter;
    NSUInteger _anchorIndex;
    NSUInteger _timingCurveIdx;
    ? _settlingStartPTS;
    ? _anchorPTS;
    ? _stillPTS;
    ? _outputFrameDuration;
    NSString *_filePath;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_livePhotoInfoOutput;
    AVAssetTrack *_originalTrack;
    *opaqueCMSampleBuffer _previousMetadata;
    NSArray *_framePTSList;
    NSArray *_timingCurveList;
}


@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (readonly) BOOL processAborted; // ivar: _processAborted


+(NSInteger)getFRCQualityMode;
-(?)createLivePhotoInfoSample:(?)arg0 withTimestamp:(?)arg1 isInterpolatedupdatedSample;
-(id)findLivePhotoInfoOutput:(id)arg0 ;
-(id)getFramePTSList:(id)arg0 before:(struct ? )arg1 ;
-(id)getRetimingCurve;
-(id)initWithTimestamps:(id)arg0 andTrack:(id)arg1 ;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)finishAnalysisPass:(struct ? )arg0 withStillImageBuffer:(struct __CVBuffer *)arg1 ;
-(int)setupLivePhotoInfoOutput:(id)arg0 ;
-(struct CGSize )getFrameSize:(id)arg0 ;
-(void)dealloc;


@end


#endif