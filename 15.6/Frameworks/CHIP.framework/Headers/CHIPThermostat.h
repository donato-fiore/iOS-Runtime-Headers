// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTHERMOSTAT_H
#define CHIPTHERMOSTAT_H



#import "CHIPCluster.h"

@interface CHIPThermostat : CHIPCluster {
    ThermostatCluster _cppCluster;
}


@property ? cppCluster;


+(void)readAttributeAbsMaxCoolSetpointLimitWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAbsMaxHeatSetpointLimitWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAbsMinCoolSetpointLimitWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAbsMinHeatSetpointLimitWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeControlSequenceOfOperationWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLocalTemperatureWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxCoolSetpointLimitWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxHeatSetpointLimitWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinCoolSetpointLimitWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinHeatSetpointLimitWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinSetpointDeadBandWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfDailyTransitionsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNumberOfWeeklyTransitionsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOccupiedCoolingSetpointWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOccupiedHeatingSetpointWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeStartOfWeekWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSystemModeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearWeeklyScheduleWithCompletionHandler:(id)arg0 ;
-(void)getRelayStatusLogWithCompletionHandler:(id)arg0 ;
-(void)getWeeklyScheduleWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAbsMaxCoolSetpointLimitWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAbsMaxHeatSetpointLimitWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAbsMinCoolSetpointLimitWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAbsMinHeatSetpointLimitWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeControlSequenceOfOperationWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLocalTemperatureWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxCoolSetpointLimitWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxHeatSetpointLimitWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinCoolSetpointLimitWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinHeatSetpointLimitWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinSetpointDeadBandWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfDailyTransitionsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNumberOfWeeklyTransitionsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOccupiedCoolingSetpointWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOccupiedHeatingSetpointWithCompletionHandler:(id)arg0 ;
-(void)readAttributeStartOfWeekWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSystemModeWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAbsMaxCoolSetpointLimitWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAbsMaxHeatSetpointLimitWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAbsMinCoolSetpointLimitWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAbsMinHeatSetpointLimitWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeControlSequenceOfOperationWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLocalTemperatureWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxCoolSetpointLimitWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxHeatSetpointLimitWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinCoolSetpointLimitWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinHeatSetpointLimitWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinSetpointDeadBandWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfDailyTransitionsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNumberOfWeeklyTransitionsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOccupiedCoolingSetpointWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOccupiedHeatingSetpointWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeStartOfWeekWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSystemModeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
-(void)writeAttributeControlSequenceOfOperationWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxCoolSetpointLimitWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxHeatSetpointLimitWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinCoolSetpointLimitWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinHeatSetpointLimitWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinSetpointDeadBandWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOccupiedCoolingSetpointWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOccupiedHeatingSetpointWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSystemModeWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif