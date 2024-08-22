// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROANALYSISAUDIOHELPERS_H
#define MIROANALYSISAUDIOHELPERS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MiroAnalysisAudioHelpers : NSObject {
    *OpaqueAudioComponentInstance _audioUnitEPVAD;
    *CAStreamBasicDescription _processFormat;
    *AUOutputBL _intAudioBufferList;
    *AUOutputBL _floatAudioBufferList;
    *AUTimestampGenerator _timeGenerator;
    ? _currentRangeStartTime;
    ? _recordingStartTime;
    ? _recordingEndTime;
    BOOL _initializedAudioUnit;
    unsigned int _numberOfSamplesPerBuffer;
    *LkFsMeasure _loudnessAnalyzer;
    vector<double, std::allocator<double>> _momentaryEnergyValues;
    vector<float, std::allocator<float>> _loudnessSampleBuffer;
    float _peakValue;
}


@property (nonatomic) NSInteger projectNaturalFrameRate; // ivar: projectNaturalFrameRate
@property (nonatomic) NSArray *timeRanges; // ivar: _timeRanges


-(BOOL)_processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 options:(NSUInteger)arg1 voiceRange:(*id)arg2 ;
-(BOOL)_processFloatBufferWithNumberOfFrames:(NSInteger)arg0 options:(NSUInteger)arg1 voiceRange:(*id)arg2 ;
-(BOOL)_setupAndStartReadingTrack:(id)arg0 usingTimeRange:(struct ? )arg1 outputSettings:(id)arg2 assetReader:(*id)arg3 trackOutput:(*id)arg4 error:(*id)arg5 ;
-(BOOL)_startLoudnessDetection;
-(BOOL)_startProcessingWithStartTime:(struct ? )arg0 audioStreamDescription:(struct AudioStreamBasicDescription )arg1 numberOfSamplesPerBuffer:(unsigned int)arg2 ;
-(BOOL)_startVoiceDetection;
-(id)_outputLoudnessRangeWithDetectionTime:(struct ? )arg0 ;
-(id)_outputVoiceRangeWithDetectionTime:(struct ? )arg0 ;
-(id)init;
-(int)_setPropertiesWithNumberOfSamplesPerBuffer:(unsigned int)arg0 ;
-(void)_processSamplesForPeaksAndLoudness:(*float)arg0 numberOfFrames:(unsigned int)arg1 sampleRate:(float)arg2 ;
-(void)_stopDetectingLoudnessWithTimeRange:(struct ? )arg0 loudnessRanges:(*id)arg1 ;
-(void)_stopDetectingVoiceWithEndTime:(struct ? )arg0 lastVoiceRanges:(*id)arg1 ;
-(void)_stopProcessing;
-(void)dealloc;
// -(void)processAVAsset:(id)arg0 options:(NSUInteger)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif