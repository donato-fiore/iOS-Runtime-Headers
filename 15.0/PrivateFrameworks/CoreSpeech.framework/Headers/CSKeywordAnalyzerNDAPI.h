// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSKEYWORDANALYZERNDAPI_H
#define CSKEYWORDANALYZERNDAPI_H

@protocol CSKeywordAnalyzerNDAPIScoreDelegate;

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
@property (nonatomic) unsigned int activePhraseId; // ivar: _activePhraseId
@property (weak, nonatomic) NSObject<CSKeywordAnalyzerNDAPIScoreDelegate> *delegate; // ivar: _delegate


-(float)getLoggingThreshold;
-(float)getRejectLoggingThreshold;
-(float)getThreshold;
-(id)_keywordAnalyzerNDAPIResultForPhraseId:(unsigned int)arg0 withNovDetectorResult:(id)arg1 ;
-(id)getAnalyzedMpVtResults;
-(id)getAnalyzedResult;
-(id)getSuperVectorWithEndPoint:(NSUInteger)arg0 ;
-(id)initWithConfigPath:(id)arg0 resourcePath:(id)arg1 ;
-(void)_resetStartAnalyzeTime;
-(void)_setStartAnalyzeTime:(NSUInteger)arg0 ;
-(void)analyzeWavData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)analyzeWavFloatData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)processAudioChunk:(id)arg0 ;
-(void)reset;
-(void)resetBest;


@end


#endif