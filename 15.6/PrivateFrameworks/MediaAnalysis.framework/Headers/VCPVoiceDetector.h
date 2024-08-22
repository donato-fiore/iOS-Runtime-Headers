// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPVOICEDETECTOR_H
#define VCPVOICEDETECTOR_H

@class NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCPVoiceDetector : NSObject {
    NSDictionary *_model;
    AudioStreamBasicDescription _audioStream;
    int _sampleBatchSize;
    ? _trackStart;
    BOOL _voiceActivity;
    ? _voiceStart;
    NSMutableArray *_utteranceDetections;
    NSMutableArray *_musicDetections;
}


@property (retain) NSMutableArray *voiceDetections; // ivar: _voiceDetections


+(id)detector;
-(id)audioFormatRequirements;
-(id)init;
-(id)results;
-(int)finalizeAnalysisAtTime:(struct ? *)arg0 ;
-(int)loadModel;
-(int)processAudioSamples:(struct AudioBufferList *)arg0 timestamp:(struct AudioTimeStamp )arg1 ;
-(int)setupWithAudioStream:(struct AudioStreamBasicDescription *)arg0 ;
-(int)setupWithSample:(struct opaqueCMSampleBuffer *)arg0 andSampleBatchSize:(int)arg1 ;
-(void)addDetectionFromTime:(struct ? *)arg0 toTime:(struct ? *)arg1 result:(id)arg2 ;


@end


#endif