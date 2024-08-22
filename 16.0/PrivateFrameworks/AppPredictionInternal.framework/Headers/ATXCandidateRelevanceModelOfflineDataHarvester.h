// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCANDIDATERELEVANCEMODELOFFLINEDATAHARVESTER_H
#define ATXCANDIDATERELEVANCEMODELOFFLINEDATAHARVESTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ATXCandidateRelevanceModelOfflineDataHarvester : NSObject {
    NSArray *_configs;
}




+(float)calculateF1ScoreWithPrecision:(float)arg0 recall:(float)arg1 ;
+(id)candidateMetricsFromConfig:(id)arg0 ;
+(id)evaluationMetricsFromConfig:(id)arg0 startTime:(id)arg1 endTime:(id)arg2 ;
+(id)metricsForConfig:(id)arg0 ;
+(id)modelMetricsForConfig:(id)arg0 ;
+(unsigned int)daysBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
+(void)harvestDataUsingConfig:(id)arg0 ;
-(id)init;
-(id)initWithConfigs:(id)arg0 ;
-(void)harvestData;


@end


#endif