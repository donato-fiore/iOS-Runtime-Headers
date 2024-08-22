// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSHISTOGRAMFEATURES_H
#define _PSHISTOGRAMFEATURES_H


#import <Foundation/Foundation.h>


@interface _PSHistogramFeatures : NSObject



+(id)computeFactorNameForFeature:(id)arg0 ;
+(id)conditionedProbabilityAcrossAllBucketsWithCandidates:(id)arg0 featureName:(int)arg1 predictionContext:(id)arg2 histogramFeatureData:(id)arg3 histogramSmoothingParameterK:(id)arg4 histogramSmoothingParameterV:(id)arg5 ;
+(id)conditionedProbabilityAcrossAllCandidatesWithCandidates:(id)arg0 featureName:(int)arg1 predictionContext:(id)arg2 histogramFeatureData:(id)arg3 histogramSmoothingParameterK:(id)arg4 histogramSmoothingParameterV:(id)arg5 ;
+(id)fetchBucketNamesFromPredictionContextForFeatureName:(int)arg0 predictionContext:(id)arg1 ;
+(id)fetchIntervalStringForFeatureName:(int)arg0 ;
+(id)hasEverInBucketWithCandidates:(id)arg0 featureName:(int)arg1 predictionContext:(id)arg2 histogramFeatureData:(id)arg3 ;
+(int)bucketCounttimeIntervalForFeatureName:(int)arg0 ;
+(int)virtualFeatureToDurableFeatureSourceMapping:(int)arg0 ;


@end


#endif