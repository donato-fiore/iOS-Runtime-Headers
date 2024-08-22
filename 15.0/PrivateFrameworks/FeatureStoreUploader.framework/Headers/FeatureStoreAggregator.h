// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FEATURESTOREAGGREGATOR_H
#define FEATURESTOREAGGREGATOR_H


#import <Foundation/Foundation.h>


@interface FeatureStoreAggregator : NSObject



+(BOOL)isEventTime:(CGFloat)arg0 withinStart:(CGFloat)arg1 andEnd:(CGFloat)arg2 ;
+(id)createSampleAggregateDataWithInteractionId:(id)arg0 withQueryDate:(id)arg1 withEvaluationFeature:(id)arg2 withGroundTruth:(id)arg3 withNluRequest:(id)arg4 withNLuResponse:(id)arg5 ;
+(id)interactionIdFeatureMapFromEventStream:(id)arg0 from:(id)arg1 to:(id)arg2 ;
+(id)jsonFromBiomeEvent:(id)arg0 ;
+(id)popEventJsonWithinTimeOfCuareEvaluation:(id)arg0 fromEvents:(id)arg1 ;
+(id)retrieveCurrentFeatureSets;


@end


#endif