// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSPGENDPOINTANALYZER_H
#define CSSPGENDPOINTANALYZER_H

@class EARCaesuraSilencePosteriorGenerator, NSString;
@protocol EARCaesuraSilencePosteriorGeneratorDelegate, CSSPGEndpointAnalyzerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSSPGEndpointAnalyzer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>



@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG; // ivar: _caesuraSPG
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSSPGEndpointAnalyzerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) float endpointThreshold; // ivar: _endpointThreshold
@property (nonatomic) BOOL hasReported; // ivar: _hasReported
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnalyzeMode; // ivar: _isAnalyzeMode
@property (nonatomic) CGFloat lastSilencePosterior; // ivar: _lastSilencePosterior
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(NSInteger)getFrameDurationMs;
-(id)init;
-(id)initWithAnalyzeMode;
-(id)initWithEndpointThreshold:(float)arg0 ;
-(void)addAudio:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)clientSilenceFeaturesAvailable:(id)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)silenceDurationEstimateAvailable:(*float)arg0 numEstimates:(NSUInteger)arg1 clientProcessedAudioMs:(float)arg2 ;
-(void)start;
-(void)stop;


@end


#endif