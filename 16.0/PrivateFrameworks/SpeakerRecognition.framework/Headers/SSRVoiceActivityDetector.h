// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSRVOICEACTIVITYDETECTOR_H
#define SSRVOICEACTIVITYDETECTOR_H

@class NSString, _EARDefaultServerEndpointFeatures, EARCaesuraSilencePosteriorGenerator, _EAREndpointer;
@protocol EARCaesuraSilencePosteriorGeneratorDelegate, SSRVoiceActivityDetectorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSRSpeakerRecognitionContext.h"

@interface SSRVoiceActivityDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>

 {
    NSUInteger _numConsecutiveNonSilenceFrames;
}


@property (retain, nonatomic) SSRSpeakerRecognitionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _EARDefaultServerEndpointFeatures *defSepFeats; // ivar: _defSepFeats
@property (weak, nonatomic) NSObject<SSRVoiceActivityDetectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *earSpg; // ivar: _earSpg
@property (nonatomic) BOOL endpointReported; // ivar: _endpointReported
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _EAREndpointer *hybridClassifier; // ivar: _hybridClassifier
@property (nonatomic) NSUInteger numSamplesProcessed; // ivar: _numSamplesProcessed
@property (nonatomic) NSInteger segmentStartPointSampleCount; // ivar: _segmentStartPointSampleCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *spgQueue; // ivar: _spgQueue
@property (nonatomic) BOOL startpointReported; // ivar: _startpointReported
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)_initializeSPGWithContext:(id)arg0 ;
-(void)clientSilenceFeaturesAvailable:(id)arg0 ;
-(void)endAudio;
-(void)processAudioData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)resetWithContext:(id)arg0 ;


@end


#endif