// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPVIDEOTRACKSTANDARDDECODER_H
#define VCPVIDEOTRACKSTANDARDDECODER_H

@class AVAssetReader, AVAssetReaderTrackOutput;


#import "VCPVideoTrackDecoder.h"

@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder {
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    *opaqueCMSampleBuffer _nextSample;
    NSInteger _status;
}




-(NSInteger)status;
-(id)initWithTrack:(id)arg0 timerange:(struct ? *)arg1 ;
-(id)initWithTrack:(id)arg0 timerange:(struct ? *)arg1 withSettings:(id)arg2 applyTransform:(BOOL)arg3 ;
-(struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
-(void)dealloc;


@end


#endif