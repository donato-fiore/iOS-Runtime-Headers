// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LOGGINGHELPER_H
#define LOGGINGHELPER_H

@class NSUUID, NSString;

#import <Foundation/Foundation.h>


@interface LoggingHelper : NSObject {
    NSUUID *_dodmlId;
    NSString *_experimentName;
    NSString *_trialExperimentId;
    NSUUID *_trialTreatmentId;
    NSInteger _trialDeploymentId;
}


@property (retain, nonatomic) NSString *datapackVersion; // ivar: _datapackVersion


-(id)_alignmentInfosFromAlignmentDict:(id)arg0 ;
-(id)_audioFileResultsFromResultDict:(id)arg0 privateAudioFileResultsOut:(*id)arg1 ;
-(id)_choiceInfosFromChoiceInfoDicts:(id)arg0 privateTokens:(id)arg1 ;
-(id)_decodingMetricsFromMetricsDict:(id)arg0 ;
-(id)_decodingResultsWithAudioDict:(id)arg0 privateTokensOut:(*id)arg1 ;
-(id)_lmMetricsFromEvalDict:(id)arg0 perplexityName:(id)arg1 timesDict:(id)arg2 ;
-(id)_plmMetricsFromPlmDict:(id)arg0 ;
-(id)_resultInfosFromResultInfoDict:(id)arg0 privateTokens:(id)arg1 ;
-(id)_tokensFromTokenDict:(id)arg0 privateTokens:(id)arg1 ;
-(id)_tokensFromTokensArray:(id)arg0 privateTokens:(id)arg1 ;
-(id)_transcriptMetadataFromPopDict:(id)arg0 ;
-(id)_utteranceInfosFromUtteranceInfoDict:(id)arg0 privateTokens:(id)arg1 ;
-(id)initWithExperimentName:(id)arg0 ;
-(id)initWithExperimentName:(id)arg0 trialExperimentId:(id)arg1 trialTreatmentId:(id)arg2 trialDeploymentId:(NSInteger)arg3 ;
-(void)_wrapAndEmitTopLevelEvent:(id)arg0 ;
-(void)logDictationPersonalizationExperimentEndedAndTier1WithResultsDict:(id)arg0 ;
-(void)logDictationPersonalizationExperimentStartedOrChanged;
-(void)logUserEditExperimentEndedAndTier1WithResultsDict:(id)arg0 ;
-(void)logUserEditExperimentStartedOrChanged;


@end


#endif