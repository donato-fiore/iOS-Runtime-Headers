// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOINTERPOLATOR_H
#define VCPVIDEOINTERPOLATOR_H

@class NSArray, FRCFrameInterpolator, FRCFrame, NSString, AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, NSMutableArray;


#import "VCPVideoAnalyzer.h"
#import "VCPMovieAssetWriter.h"

@interface VCPVideoInterpolator : VCPVideoAnalyzer {
    NSArray *_frameInsertionLists;
    FRCFrameInterpolator *_frameInterpolator;
    FRCFrame *_previousFrame;
    VCPMovieAssetWriter *_assetWriter;
    NSUInteger _anchorIndex;
    ? _anchorPTS;
    ? _stillPTS;
    ? _startAdjustedPTS;
    ? _endAdjustedPTS;
    NSString *_filePath;
    NSString *_combinedFilePath;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_livePhotoInfoOutput;
    AVAssetTrack *_originalTrack;
    *opaqueCMSampleBuffer _previousMetadata;
    NSMutableArray *_intraFrameList;
}


@property (readonly) ? adjustedTimeRange; // ivar: _adjustedTimeRange
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (readonly) BOOL processAborted; // ivar: _processAborted


+(BOOL)allowMultipleFormats;
+(BOOL)isEnabled;
+(NSInteger)getFRCQualityMode;
+(void)sendPreGatedAnalytics;
-(?)updateLivePhotoInfoSample:(?)arg0 withTimestamp:(?)arg1 withMetadata:(?)arg2 isInterpolatedupdatedSample;
-(BOOL)isIntraFrame:(struct ? )arg0 ;
-(id)deserializeMetadata:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)findLivePhotoInfoOutput:(id)arg0 ;
-(id)initWithTimestamps:(id)arg0 andIdentifier:(id)arg1 andTrack:(id)arg2 ;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)appendOutput:(id)arg0 toTrack:(id)arg1 startTimeStamp:(struct ? )arg2 endTimeStamp:(struct ? )arg3 offset:(struct ? )arg4 duration:(struct ? *)arg5 ;
-(int)combineVideoSegments;
-(int)findIntraFrameList:(id)arg0 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;
-(int)setupLivePhotoInfoOutput:(id)arg0 ;
-(struct CGSize )getFrameSize:(id)arg0 ;
-(void)dealloc;


@end


#endif