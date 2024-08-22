// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTEMPERATUREMEASUREMENT_H
#define CHIPTEMPERATUREMEASUREMENT_H



#import "CHIPCluster.h"

@interface CHIPTemperatureMeasurement : CHIPCluster {
    TemperatureMeasurementCluster _cppCluster;
}


@property ? cppCluster;


+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxMeasuredValueWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMeasuredValueWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinMeasuredValueWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeToleranceWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxMeasuredValueWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMeasuredValueWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinMeasuredValueWithCompletionHandler:(id)arg0 ;
-(void)readAttributeToleranceWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxMeasuredValueWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMeasuredValueWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinMeasuredValueWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeToleranceWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;


@end


#endif