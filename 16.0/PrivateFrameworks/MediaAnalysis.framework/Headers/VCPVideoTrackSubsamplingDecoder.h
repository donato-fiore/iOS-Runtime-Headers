// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOTRACKSUBSAMPLINGDECODER_H
#define VCPVIDEOTRACKSUBSAMPLINGDECODER_H

@class AVAssetReader, AVAssetReaderTrackOutput;


#import "VCPVideoTrackDecoder.h"

@interface VCPVideoTrackSubsamplingDecoder : VCPVideoTrackDecoder {
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    ? _decodeEnd;
    ? _sampleDuration;
    ? _nextSampleTime;
    *opaqueCMSampleBuffer _currentSample;
    *opaqueCMSampleBuffer _nextSample;
}




-(NSInteger)status;
-(id)initWithTrack:(id)arg0 timerange:(struct ? *)arg1 atInterval:(struct ? *)arg2 ;
-(struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
-(struct opaqueCMSampleBuffer *)getNextCaptureSampleBuffer;
-(void)dealloc;


@end


#endif