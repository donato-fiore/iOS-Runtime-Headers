// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSKEYWORDANALYZERNDAPI_H
#define CSKEYWORDANALYZERNDAPI_H


#import <Foundation/Foundation.h>

#import "CSNovDetector.h"

@interface CSKeywordAnalyzerNDAPI : NSObject {
    CSNovDetector *_novDetector;
    NSUInteger _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    NSUInteger _lastSampleFed;
    NSUInteger _sampleFedWrapAroundOffset;
}


@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (nonatomic) unsigned int activePhId; // ivar: _activePhId


-(float)getLoggingThreshold;
-(float)getRejectLoggingThreshold;
-(float)getThreshold;
-(id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)arg0 phId:(NSUInteger)arg1 ;
-(id)getAnalyzedResults;
-(id)getAnalyzedResultsFromAudioChunk:(id)arg0 ;
-(id)getBestAnalyzedResults;
-(id)getBestAnalyzedResultsFromAudioChunk:(id)arg0 ;
-(id)getSuperVectorWithEndPoint:(NSUInteger)arg0 ;
-(id)initWithConfigPath:(id)arg0 resourcePath:(id)arg1 ;
-(void)_processAudioChunk:(id)arg0 ;
-(void)_resetStartAnalyzeTime;
-(void)_setStartAnalyzeTime:(NSUInteger)arg0 ;
-(void)analyzeWavData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)analyzeWavFloatData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)processAudioChunk:(id)arg0 ;
-(void)reset;
-(void)resetBest;


@end


#endif