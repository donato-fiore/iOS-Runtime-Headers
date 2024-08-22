// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXCLIENTMODELSHADOWMETRICSDATASOURCEBASE_H
#define _ATXCLIENTMODELSHADOWMETRICSDATASOURCEBASE_H


#import <Foundation/Foundation.h>


@interface _ATXClientModelShadowMetricsDataSourceBase : NSObject {
    NSInteger _clientModelType;
}




-(BOOL)isPrediction:(id)arg0 equalToPrediction:(id)arg1 ;
-(NSUInteger)numberOfPredictionsInCache:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)_eventBodyDateForEvent:(id)arg0 ;
-(id)initWithClientModelType:(NSInteger)arg0 ;
-(id)predictionCachePublisherFromStartDate:(id)arg0 ;
-(void)enumeratePredictionsInCache:(id)arg0 ofType:(NSInteger)arg1 usingBlock:(id)arg2 ;
// -(void)replayHistoryWithShadowEventPublisher:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 shadowEventHandler:(id)arg3 predictionCacheHandler:(unk)arg4  ;


@end


#endif