// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXACTIONPREDICTIONS_H
#define ATXACTIONPREDICTIONS_H


#import <Foundation/Foundation.h>


@interface ATXActionPredictions : NSObject



+(BOOL)actionScoreAboveThresholdOrWhitelistedAction:(id)arg0 confidenceThreshold:(CGFloat)arg1 actionKeyWhitelist:(id)arg2 actionTypeWhitelist:(id)arg3 ;
+(NSUInteger)numActionResultsWithOnlyPredictionItemForLogging:(id)arg0 ;
+(id)_actionPredictionCandidatesForCandidateBundleIdentifiers:(id)arg0 candidateActiontypes:(id)arg1 firstStageScoreLogger:(id)arg2 secondStageScoreLogger:(id)arg3 multiStageScoreLogger:(id)arg4 context:(id)arg5 featureCache:(id)arg6 remainingPredictionItems:(*void)arg7 ;
+(id)_actionPredictionCandidatesForCandidateBundleIdentifiers:(id)arg0 candidateActiontypes:(id)arg1 firstStageScoreLogger:(id)arg2 secondStageScoreLogger:(id)arg3 multiStageScoreLogger:(id)arg4 featureCache:(id)arg5 remainingPredictionItems:(*void)arg6 ;
+(id)_predictionsForConsumerSubType:(unsigned char)arg0 thirdStageScoreLogger:(id)arg1 multiStageScoreLogger:(id)arg2 actionPredictionCandidates:(id)arg3 remainingPredictionItems:(*void)arg4 predictionsPerAppActionLimit:(id)arg5 ;
+(id)_predictionsForConsumerSubType:(unsigned char)arg0 thirdStageScoreLogger:(id)arg1 multiStageScoreLogger:(id)arg2 context:(id)arg3 actionPredictionCandidates:(id)arg4 remainingPredictionItems:(*void)arg5 predictionsPerAppActionLimit:(id)arg6 ;
+(id)actionResultsForCandidateBundleIdentifiers:(id)arg0 candidateActiontypes:(id)arg1 consumerSubType:(unsigned char)arg2 firstStageScoreLogger:(id)arg3 secondStageScoreLogger:(id)arg4 thirdStageScoreLogger:(id)arg5 multiStageScoreLogger:(id)arg6 predictionsPerAppActionLimit:(id)arg7 ;
+(id)actionsFromActions:(id)arg0 byMovingActionsWithBundleIdentifiers:(id)arg1 toRemainingPredictionItems:(*void)arg2 ;
+(id)filterHighQualityActionResults:(id)arg0 consumerSubType:(unsigned char)arg1 ;
+(id)predictionsWithCandidateBundleIdentifiers:(id)arg0 candidateActiontypes:(id)arg1 consumerSubType:(unsigned char)arg2 firstStageScoreLogger:(id)arg3 secondStageScoreLogger:(id)arg4 thirdStageScoreLogger:(id)arg5 multiStageScoreLogger:(id)arg6 ;
+(id)removeActionsBelowThresholdForActionPredictions:(id)arg0 withThreshold:(CGFloat)arg1 actionKeyWhitelist:(id)arg2 actionTypeWhitelist:(id)arg3 ;
+(id)scoredActionsWithoutLog:(id)arg0 ;
+(id)sortStageScores:(id)arg0 ;
+(void)fetchDataAndUpdateContentAttributeSetForActions:(id)arg0 ;
+(void)penalizeMultipleActionsPerAppAndKeepSorted:(id)arg0 ;
+(void)setTVActionPredictionsConfidenceToLow:(id)arg0 ;
-(id)init;


@end


#endif