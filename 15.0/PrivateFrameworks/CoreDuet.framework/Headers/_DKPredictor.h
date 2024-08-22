// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKPREDICTOR_H
#define _DKPREDICTOR_H

@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface _DKPredictor : NSObject {
    id<_DKKnowledgeQuerying> *_knowledgeStore;
}




+(id)deviceActivityLikelihoodQueryPredicate;
+(id)predictorWithKnowledgeStore:(id)arg0 ;
-(id)deviceActivityLikelihood;
-(id)displayOnLikelihood;
-(id)expectedInBedPeriod;
-(id)launchLikelihoodForTopNApplications:(NSInteger)arg0 withLikelihoodGreaterThan:(CGFloat)arg1 withTemporalResolution:(int)arg2 ;
-(id)launchLikelihoodPredictionForApp:(id)arg0 ;
-(id)localInBedPeriod;
-(id)pluginLikelihood;
-(id)predictionForStreamWithName:(id)arg0 withPredicate:(id)arg1 withPredictionType:(NSUInteger)arg2 ;
-(id)predictionForStreamWithName:(id)arg0 withPredicate:(id)arg1 withPredictionType:(NSUInteger)arg2 asOfDate:(id)arg3 ;
-(id)predictionForStreamWithName:(id)arg0 withPredicate:(id)arg1 withPredictionType:(NSUInteger)arg2 withDataPartitionType:(NSUInteger)arg3 asOfDate:(id)arg4 ;
-(id)predictionForStreamsWithNames:(id)arg0 withPredicate:(id)arg1 withPredictionType:(NSUInteger)arg2 ;


@end


#endif