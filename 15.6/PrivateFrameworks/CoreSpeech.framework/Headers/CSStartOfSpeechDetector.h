// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSTARTOFSPEECHDETECTOR_H
#define CSSTARTOFSPEECHDETECTOR_H

@class EARCaesuraSilencePosteriorGenerator, NSString;
@protocol EARCaesuraSilencePosteriorGeneratorDelegate, CSStartOfSpeechDetectorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSStartOfSpeechDetector : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>



@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG; // ivar: _caesuraSPG
@property (retain, nonatomic) NSString *configFile; // ivar: _configFile
@property (nonatomic) NSUInteger curSpeechFrames; // ivar: _curSpeechFrames
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSStartOfSpeechDetectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger minSpeechFrames; // ivar: _minSpeechFrames
@property (nonatomic) NSUInteger numLeadingFrames; // ivar: _numLeadingFrames
@property (nonatomic) float prevAudioProcessedMs; // ivar: _prevAudioProcessedMs
@property (nonatomic) NSUInteger samplingRate; // ivar: _samplingRate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sosQueue; // ivar: _sosQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *spgQueue; // ivar: _spgQueue
@property (nonatomic) BOOL startDetected; // ivar: _startDetected
@property (readonly) Class superclass;


-(id)initWithConfig:(id)arg0 samplingRate:(NSUInteger)arg1 minSpeechFrames:(NSUInteger)arg2 numLeadingFrames:(NSUInteger)arg3 delegate:(id)arg4 ;
-(void)addAudio:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)clientSilenceFeaturesAvailable:(id)arg0 ;
-(void)endAudio;
-(void)resetForNewRequest;


@end


#endif