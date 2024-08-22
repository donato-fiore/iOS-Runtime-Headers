// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSDANALYZER_H
#define OSDANALYZER_H

@class EARCaesuraSilencePosteriorGenerator, NSString, NSDictionary;
@protocol EARCaesuraSilencePosteriorGeneratorDelegate, OSDAnalyzerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "OSDFeatures.h"

@interface OSDAnalyzer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>

 {
    NSUInteger _numConsecutiveNonSilenceFrames;
}


@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG; // ivar: _caesuraSPG
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<OSDAnalyzerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL endOfSpeechDetected; // ivar: _endOfSpeechDetected
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *osdContext; // ivar: _osdContext
@property (retain, nonatomic) OSDFeatures *osdFeatures; // ivar: _osdFeatures
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL startOfSpeechDetected; // ivar: _startOfSpeechDetected
@property (readonly) Class superclass;


-(NSInteger)getFrameDurationMs;
-(id)getCurrentOSDFeatures;
-(id)initWithConfigFile:(id)arg0 sampleRate:(NSUInteger)arg1 context:(id)arg2 queue:(id)arg3 delegate:(id)arg4 ;
-(void)addAudio:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)clientSilenceFeaturesAvailable:(id)arg0 ;
-(void)endAudio;
-(void)resetForNewRequestWithContext:(id)arg0 ;


@end


#endif