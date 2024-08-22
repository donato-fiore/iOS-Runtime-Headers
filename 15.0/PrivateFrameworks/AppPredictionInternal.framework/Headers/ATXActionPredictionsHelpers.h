// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXACTIONPREDICTIONSHELPERS_H
#define ATXACTIONPREDICTIONSHELPERS_H


#import <Foundation/Foundation.h>


@interface ATXActionPredictionsHelpers : NSObject



+(id)limitTheNumberOfPredictions:(id)arg0 withLimit:(int)arg1 ;
+(id)processCandidateActionPredictions:(id)arg0 limit:(int)arg1 predictionItemsToKeep:(*void)arg2 ;
+(id)sortedPredictions:(id)arg0 ;
+(void)applyJointLogProbabilityToActionPredictions:(id)arg0 withAppActionTypePredictionScore:(CGFloat)arg1 ;
+(void)applyLogOfLinearProbabilityTransformationToPredictions:(id)arg0 ;
+(void)applyLogSoftmaxToPredictions:(id)arg0 ;
+(void)applyNormalizationToPredictions:(id)arg0 ;
+(void)keepRandomPredictionItems:(id)arg0 limit:(NSUInteger)arg1 predictionItemsToKeep:(*void)arg2 ;
+(void)sortPredictions:(id)arg0 ;


@end


#endif