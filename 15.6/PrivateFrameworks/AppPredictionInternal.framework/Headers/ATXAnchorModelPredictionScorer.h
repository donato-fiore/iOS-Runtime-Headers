// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXANCHORMODELPREDICTIONSCORER_H
#define ATXANCHORMODELPREDICTIONSCORER_H


#import <Foundation/Foundation.h>


@interface ATXAnchorModelPredictionScorer : NSObject



+(CGFloat)normalizeValue:(CGFloat)arg0 parameterKey:(id)arg1 ;
+(CGFloat)predictedProbabilityFromNormalizedClassConditionalProbability:(CGFloat)arg0 posteriorProbability:(CGFloat)arg1 minutesAfterAnchor:(CGFloat)arg2 standardDeviation:(CGFloat)arg3 uniqueOccurrences:(CGFloat)arg4 ;
-(CGFloat)scoreForTrainingResult:(id)arg0 ;


@end


#endif