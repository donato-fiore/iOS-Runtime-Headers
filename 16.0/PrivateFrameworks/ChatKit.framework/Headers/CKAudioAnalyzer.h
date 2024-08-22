// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKAUDIOANALYZER_H
#define CKAUDIOANALYZER_H

@class NSMutableData, NSDictionary, NSString;
@protocol Endpointer;

#import <Foundation/Foundation.h>


@interface CKAudioAnalyzer : NSObject <Endpointer>

 {
    BOOL _detectedMusic;
    CGFloat _sampleRate;
    CGFloat _samplesSeen;
    unsigned int _frameRate;
    NSMutableData *_floatSampleBuffer;
    NSUInteger _framesSeen;
    ? _frameAnalysisArray;
    *OpaqueAudioComponentInstance _audioUnitEPVAD;
    NSDictionary *_modelDict;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float decoderLatency; // ivar: _decoderLatency
@property (readonly, copy) NSString *description;
@property CGFloat endWaitTime; // ivar: _endWaitTime
@property int endpointMode; // ivar: _endpointMode
@property (readonly) NSUInteger hash;
@property (nonatomic) float heuristicTransitionRatio; // ivar: _heuristicTransitionRatio
@property (nonatomic) float heuristicWindowSec; // ivar: _heuristicWindowSec
@property (nonatomic) unsigned int inMaxSamplesPerBuffer; // ivar: _inMaxSamplesPerBuffer
@property CGFloat interspeechWaitTime; // ivar: _interspeechWaitTime
@property (nonatomic) float speechPaddingFactor; // ivar: _speechPaddingFactor
@property CGFloat startWaitTime; // ivar: _startWaitTime
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)configureWithSampleRate:(CGFloat)arg0 andFrameRate:(unsigned int)arg1 ;
-(id)init;
-(int)getStatus:(struct AudioQueueBuffer *)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif