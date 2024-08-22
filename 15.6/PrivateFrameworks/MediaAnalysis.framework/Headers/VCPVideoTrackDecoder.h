// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVIDEOTRACKDECODER_H
#define VCPVIDEOTRACKDECODER_H

@class AVAssetTrack;

#import <Foundation/Foundation.h>


@interface VCPVideoTrackDecoder : NSObject {
    AVAssetTrack *_track;
}




+(struct ? )decodeDimensionsForTrack:(id)arg0 ;
-(BOOL)validateDecodedFrame:(struct __CVBuffer *)arg0 withSettings:(id)arg1 ;
-(NSInteger)status;
-(id)init;
-(id)initWithTrack:(id)arg0 ;
-(id)settings;
-(struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
-(struct opaqueCMSampleBuffer *)getNextCaptureSampleBuffer;


@end


#endif