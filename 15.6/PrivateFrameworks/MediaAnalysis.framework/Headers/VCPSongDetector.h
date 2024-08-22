// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPSONGDETECTOR_H
#define VCPSONGDETECTOR_H

@class AVAudioPCMBuffer, SHMutableSignature;

#import <Foundation/Foundation.h>


@interface VCPSongDetector : NSObject {
    AVAudioPCMBuffer *_pcmBuffer;
    NSInteger _framePosition;
    float _sampleRate;
    SHMutableSignature *_signature;
    ? _startTime;
    ? _endTime;
}




-(id)init;
-(id)results;
-(int)finalizeAnalysisAtTime:(struct ? *)arg0 ;
-(int)processAudioSamples:(struct AudioBufferList *)arg0 timestamp:(struct AudioTimeStamp )arg1 ;
-(int)setupWithSample:(struct opaqueCMSampleBuffer *)arg0 andSampleBatchSize:(int)arg1 ;


@end


#endif