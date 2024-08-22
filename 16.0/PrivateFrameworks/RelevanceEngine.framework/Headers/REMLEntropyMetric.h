// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMLENTROPYMETRIC_H
#define REMLENTROPYMETRIC_H

@class NSString, NSMutableArray;
@protocol REMLMetricsProvider;

#import <Foundation/Foundation.h>


@interface REMLEntropyMetric : NSObject <REMLMetricsProvider>

 {
    NSString *_metricName;
    NSString *_predictionFeatureName;
    NSString *_truthFeatureName;
    NSInteger _arrayFeatureIndex;
    NSInteger _numExamples;
    CGFloat _sumTruth;
    CGFloat _sumPrediction;
    CGFloat _logScore;
    CGFloat _normalizedLogScore;
    NSUInteger _calibrationCurveNumBuckets;
    NSMutableArray *_calibrationCurveTotal;
    NSMutableArray *_calibrationCurveTrue;
}




-(CGFloat)getDoubleFromFeatureValue:(id)arg0 ;
-(NSInteger)numberOfExamples;
-(NSUInteger)calibrationCurveNumBuckets;
-(id)calibrationCurveTotal;
-(id)calibrationCurveTrue;
-(id)initWithName:(id)arg0 featureName:(id)arg1 ;
-(id)meanEntropy;
-(id)meanNormalizedEntropy;
-(id)meanPrediction;
-(id)meanTruth;
-(id)name;
-(void)createCheckpoint;
-(void)reset;
-(void)resetToLastCheckpointBeforeDate:(id)arg0 ;
-(void)updateMetricsFromFeatures:(id)arg0 prediction:(id)arg1 truth:(id)arg2 ;


@end


#endif