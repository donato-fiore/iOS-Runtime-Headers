// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTANALYZERNDAPI_H
#define VTANALYZERNDAPI_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VTAnalyzerNDAPI : NSObject {
    *void _novDetect;
    NSDictionary *_decodedInfo;
}




-(BOOL)_getBooleanValueFromConfigurationName:(id)arg0 defaultTo:(BOOL)arg1 ;
-(BOOL)getDoSAT;
-(BOOL)getDoSupervectorSecondaryTest;
-(BOOL)getUseFallbackThresholdUponTimeout;
-(BOOL)getUseKeywordSpotting;
-(BOOL)getUseRecognizer;
-(BOOL)initializeSAT:(id)arg0 ;
-(CGFloat)_getFloatValueFromConfigurationName:(id)arg0 defaultTo:(CGFloat)arg1 ;
-(CGFloat)getCombinedLoggingThreshold;
-(CGFloat)getCombinedSecondChanceThreshold;
-(CGFloat)getCombinedTriggerThreshold;
-(CGFloat)getExtraSamplesAtStart;
-(CGFloat)getNDAPILoggingThreshold;
-(CGFloat)getNDAPISecondChanceThreshold;
-(CGFloat)getNDAPITriggerThreshold;
-(CGFloat)getRecognizerScoreScaleFactor;
-(CGFloat)getRecognizerThresholdOffset;
-(CGFloat)getRecognizerWaitTime;
-(CGFloat)getRetrainExplicitUttThresholdSAT;
-(CGFloat)getRetrainExplicitUttThresholdTDSR;
-(CGFloat)getRetrainThresholdSAT;
-(CGFloat)getRetrainThresholdTDSR;
-(CGFloat)getRetrainThresholdTrigger;
-(CGFloat)getSecondPassTrailingTime;
-(CGFloat)getThresholdPresuperVector;
-(CGFloat)getThresholdSAT;
-(char *)_getOptionValueFromConfigurationName:(id)arg0 ;
-(id)_decodeJson:(id)arg0 ;
-(id)_getNumberForKey:(id)arg0 category:(id)arg1 default:(id)arg2 ;
-(id)_getStringValueFromConfigurationName:(id)arg0 defaultTo:(id)arg1 ;
-(id)getRecognizerConfig;
-(id)getRetrainSamplingPolicy;
-(id)getTriggerTokens;
-(id)getVoiceProfilePruningCookie;
-(id)initWithConfigPath:(id)arg0 resourcePath:(id)arg1 ;
-(int)_getIntValueFromConfigurationName:(id)arg0 defaultTo:(int)arg1 ;
-(int)getMaximumSpeakerVectors;
-(int)getPayloadUtteranceLifeTimeInDays;
-(int)getRetrainNumExplicitUtt;
-(int)getRetrainNumImplicitUtt;
-(int)getSATVectorCount;
-(int)getVoiceProfilePruningNumRetentionUtterances;
-(struct _ndresult *)getAnalyzedResult;
-(struct _ndresult *)getAnalyzedResult:(unsigned int)arg0 ;
-(struct _ndsupervec *)getSuperVectorWithEndPoint:(unsigned int)arg0 ;
-(struct _ndsvscore *)analyzeSAT:(*float)arg0 size:(unsigned int)arg1 ;
-(struct _ndsvscore *)getScoreSuperVector:(*float)arg0 size:(unsigned int)arg1 ;
-(void)analyzeWavData:(*short)arg0 length:(int)arg1 ;
-(void)dealloc;
-(void)deleteVectorIndex:(int)arg0 ;
-(void)reset;
-(void)resetBest;
-(void)updateSAT;


@end


#endif