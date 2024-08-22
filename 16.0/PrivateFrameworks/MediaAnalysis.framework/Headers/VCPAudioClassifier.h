// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPAUDIOCLASSIFIER_H
#define VCPAUDIOCLASSIFIER_H

@class SNAudioStreamAnalyzer, AVAudioPCMBuffer, NSMutableArray;

#import <Foundation/Foundation.h>


@interface VCPAudioClassifier : NSObject {
    NSUInteger _analysisTypes;
    SNAudioStreamAnalyzer *_SNAnalyzer;
    AVAudioPCMBuffer *_pcmBuffer;
    NSInteger _framePosition;
    float _sampleRate;
    NSMutableArray *_detectors;
    NSMutableArray *_classifiers;
}




-(id)initWithTypes:(NSUInteger)arg0 ;
-(id)results;
-(int)finalizeAnalysisAtTime:(struct ? *)arg0 ;
-(int)processAudioSamples:(struct AudioBufferList *)arg0 timestamp:(struct AudioTimeStamp )arg1 ;
-(int)setupWithSample:(struct opaqueCMSampleBuffer *)arg0 trackDuration:(struct ? )arg1 andSampleBatchSize:(int)arg2 ;


@end


#endif