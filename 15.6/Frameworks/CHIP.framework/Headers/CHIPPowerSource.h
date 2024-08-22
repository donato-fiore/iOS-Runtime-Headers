// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPOWERSOURCE_H
#define CHIPPOWERSOURCE_H



#import "CHIPCluster.h"

@interface CHIPPowerSource : CHIPCluster {
    PowerSourceCluster _cppCluster;
}


@property ? cppCluster;


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeActiveBatteryFaultsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatteryChargeLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatteryChargeStateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatteryPercentRemainingWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatteryTimeRemainingWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBatteryVoltageWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDescriptionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOrderWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeStatusWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeActiveBatteryFaultsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatteryChargeLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatteryChargeStateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatteryPercentRemainingWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatteryTimeRemainingWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBatteryVoltageWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeDescriptionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOrderWithCompletionHandler:(id)arg0 ;
-(void)readAttributeStatusWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeActiveBatteryFaultsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatteryChargeLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatteryChargeStateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatteryPercentRemainingWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatteryTimeRemainingWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBatteryVoltageWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDescriptionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOrderWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeStatusWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;


@end


#endif