// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFANALYTICSCCPREDICTIONEVENT_H
#define HFANALYTICSCCPREDICTIONEVENT_H



#import "HFAnalyticsEvent.h"

@interface HFAnalyticsCCPredictionEvent : HFAnalyticsEvent

@property (nonatomic) NSUInteger predictionCount; // ivar: _predictionCount
@property (nonatomic) NSUInteger predictionStage; // ivar: _predictionStage


+(void)sendMetricsForPredictionEventAtStage:(NSUInteger)arg0 withCount:(NSUInteger)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)payload;


@end


#endif