// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPAUDIOANALYZER_H
#define VCPAUDIOANALYZER_H


#import <Foundation/Foundation.h>

#import "VCPVoiceDetector.h"
#import "VCPAudioClassifier.h"
#import "VCPLoudnessAnalyzer.h"
#import "VCPSongDetector.h"

@interface VCPAudioAnalyzer : NSObject {
    *void _inputBuffer;
    AudioTimeStamp _audioTimestamp;
    AudioBufferList _audioBufferList;
    int _sampleBatchSize;
    VCPVoiceDetector *_voiceDetector;
    VCPAudioClassifier *_audioClassifier;
    VCPLoudnessAnalyzer *_loudnessAnalyzer;
    VCPSongDetector *_songDetector;
    int _bufferedSamples;
    BOOL _initialized;
}




-(id)audioFormatRequirements;
-(id)initWithAnalysisTypes:(NSUInteger)arg0 forStreaming:(BOOL)arg1 ;
-(id)voiceDetections;
// -(int)analyzeAsset:(id)arg0 cancel:(id)arg1 results:(unk)arg2  ;
-(int)analyzeSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)finalizeAnalysisAtTime:(struct ? *)arg0 ;
-(int)processAudioSamples:(struct AudioBufferList *)arg0 timestamp:(struct AudioTimeStamp )arg1 ;
-(int)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)setupWithSample:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;


@end


#endif