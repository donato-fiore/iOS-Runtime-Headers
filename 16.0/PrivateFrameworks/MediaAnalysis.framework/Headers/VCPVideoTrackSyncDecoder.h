// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOTRACKSYNCDECODER_H
#define VCPVIDEOTRACKSYNCDECODER_H

@class AVAssetReader, AVAssetReaderSampleReferenceOutput;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;


#import "VCPVideoTrackDecoder.h"

@interface VCPVideoTrackSyncDecoder : VCPVideoTrackDecoder {
    AVAssetReader *_assetReader;
    AVAssetReaderSampleReferenceOutput *_trackReader;
    ? _timerange;
    BOOL _launchOnce;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_semaphore> *_inputSemaphore;
    NSObject<OS_dispatch_semaphore> *_outputSemaphore;
    BOOL _cancelDecode;
    int _decodeError;
    BOOL _decodeFinished;
    int _decodedFrames;
    int _outputFrameIdx;
    ? _sampleBuffer;
}




-(?)decodeSamplesample;
-(NSInteger)status;
-(id)initWithTrack:(id)arg0 timerange:(struct ? *)arg1 ;
-(int)findNextSample:(BOOL)arg0 timerange:(struct ? *)arg1 ;
-(struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
-(void)dealloc;
-(void)decodeTask;


@end


#endif