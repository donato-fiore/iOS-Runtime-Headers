// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMLCLASSIFICATIONEVALUATIONMETRICS_H
#define PMLCLASSIFICATIONEVALUATIONMETRICS_H


#import <Foundation/Foundation.h>


@interface PMLClassificationEvaluationMetrics : NSObject



+(NSUInteger)falseNegatives:(id)arg0 predictions:(id)arg1 predicate:(id)arg2 ;
+(NSUInteger)falsePositives:(id)arg0 predictions:(id)arg1 predicate:(id)arg2 ;
+(NSUInteger)trueNegatives:(id)arg0 predictions:(id)arg1 predicate:(id)arg2 ;
+(NSUInteger)truePositives:(id)arg0 predictions:(id)arg1 predicate:(id)arg2 ;
+(float)f1Score:(id)arg0 predictions:(id)arg1 predicate:(id)arg2 ;
+(float)precision:(id)arg0 predictions:(id)arg1 predicate:(id)arg2 ;
+(float)recall:(id)arg0 predictions:(id)arg1 predicate:(id)arg2 ;
+(float)roundFloatToSigFigs:(float)arg0 sigFigs:(int)arg1 ;
// +(void)addScoresForOutcomes:(id)arg0 predictions:(id)arg1 predicate:(id)arg2 metrics:(unk)arg3  ;
+(void)setReportSamplingRate:(unsigned int)arg0 ;


@end


#endif