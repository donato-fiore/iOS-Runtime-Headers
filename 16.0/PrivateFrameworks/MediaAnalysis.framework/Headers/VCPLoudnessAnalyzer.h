// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPLOUDNESSANALYZER_H
#define VCPLOUDNESSANALYZER_H

@class AVAudioPCMBuffer, NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCPLoudnessAnalyzer : NSObject {
    AVAudioPCMBuffer *_pcmBuffer;
    NSInteger _framePosition;
    *LkFsMeasure _loudnessAnalyzer;
    *CAStreamBasicDescription _processFormat;
    float _sampleRate;
    vector<double, std::allocator<double>> _peakValues;
    vector<double, std::allocator<double>> _momentaryEnergyValues;
    vector<float, std::allocator<float>> _loudnessSampleBuffer;
    NSMutableArray *_loudnessResults;
    unsigned int _samplesFor100ms;
    *AUOutputBL _samplesForProcessingBufferList;
}




-(id)init;
-(id)results;
-(int)finalizeAnalysisAtTime:(struct ? *)arg0 ;
-(int)processAudioSamples:(struct AudioBufferList *)arg0 timestamp:(struct AudioTimeStamp )arg1 ;
-(int)setupWithSample:(struct opaqueCMSampleBuffer *)arg0 andSampleBatchSize:(int)arg1 ;
-(void)dealloc;


@end


#endif