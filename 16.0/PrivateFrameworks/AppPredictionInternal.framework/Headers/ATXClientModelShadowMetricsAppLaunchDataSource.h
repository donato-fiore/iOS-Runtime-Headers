// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCLIENTMODELSHADOWMETRICSAPPLAUNCHDATASOURCE_H
#define ATXCLIENTMODELSHADOWMETRICSAPPLAUNCHDATASOURCE_H

@class ATXClientModelShadowMetricsDataSourceBase, NSString;
@protocol ATXShadowMetricsDataSource;



@interface ATXClientModelShadowMetricsAppLaunchDataSource : ATXClientModelShadowMetricsDataSourceBase <ATXShadowMetricsDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isPrediction:(id)arg0 equalToPrediction:(id)arg1 ;
-(NSUInteger)cacheHitIndexForShadowEvent:(id)arg0 predictionCache:(id)arg1 ;
-(NSUInteger)numberOfPredictionsInCache:(id)arg0 ;
-(void)enumeratePredictionsInCache:(id)arg0 usingBlock:(id)arg1 ;
// -(void)replayHistoryBetweenStartDate:(id)arg0 endDate:(id)arg1 shadowEventHandler:(id)arg2 predictionCacheHandler:(unk)arg3  ;


@end


#endif