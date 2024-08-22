// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFAUDIOANALYZER_H
#define AFAUDIOANALYZER_H

@class NSMutableData, NSDictionary, NSString;
@protocol Endpointer, OS_dispatch_queue, AFAudioAnalyzerDelegate;

#import <Foundation/Foundation.h>


@interface AFAudioAnalyzer : NSObject <Endpointer>

 {
    BOOL _detectedOneShotStartpoint;
    BOOL _detectedRecurrentStartpoint;
    BOOL _communicatedStartPointDetection;
    BOOL _detectedOneShotEndpoint;
    BOOL _detectedRecurrentEndpoint;
    BOOL _communicatedEndpointDetection;
    BOOL _haveSeenNonZeroSamples;
    CGFloat _sampleRate;
    CGFloat _samplesSeen;
    unsigned int _frameRate;
    CGFloat _totalSamples;
    CGFloat _lastOneShotStartpoint;
    CGFloat _lastOneShotEndpoint;
    CGFloat _lastRecurrentStartpoint;
    CGFloat _lastRecurrentEndpoint;
    NSMutableData *_floatSampleBuffer;
    NSDictionary *_topLevelParameterDict;
    NSString *_modelDictPath;
    *OpaqueAudioComponentInstance _audioUnitEPVAD2;
    BOOL _isConfigured;
    BOOL _saveSampleSeenInReset;
    CGFloat _previousSamplesSeen;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) CGFloat automaticEndpointingSuspensionEndTime; // ivar: _automaticEndpointingSuspensionEndTime
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (weak, nonatomic) NSObject<AFAudioAnalyzerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property CGFloat endWaitTime; // ivar: _endWaitTime
@property int endpointMode; // ivar: _endpointMode
@property (readonly) NSUInteger hash;
@property CGFloat interspeechWaitTime; // ivar: _interspeechWaitTime
@property (readonly, nonatomic) CGFloat lastEndOfVoiceActivityTime;
@property (readonly, nonatomic) CGFloat lastStartOfVoiceActivityTime;
@property (nonatomic) CGFloat minimumDurationForEndpointer; // ivar: _minimumDurationForEndpointer
@property CGFloat startWaitTime; // ivar: _startWaitTime
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(BOOL)configureWithASBD:(struct AudioStreamBasicDescription *)arg0 andFrameRate:(unsigned int)arg1 ;
-(id)init;
-(int)getStatus:(struct AudioQueueBuffer *)arg0 ;
-(void)_configureWithSampleRate:(CGFloat)arg0 andFrameRate:(unsigned int)arg1 ;
-(void)_detectVoiceActivityInSamples:(*float)arg0 numSamples:(unsigned int)arg1 ;
-(void)dealloc;
-(void)preheat;
-(void)reset;
-(void)saveSamplesSeenOnNextReset;


@end


#endif