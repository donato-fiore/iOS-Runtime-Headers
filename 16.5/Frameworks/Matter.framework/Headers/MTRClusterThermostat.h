// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERTHERMOSTAT_H
#define MTRCLUSTERTHERMOSTAT_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterThermostat : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeACCapacityWithParams:(id)arg0 ;
-(id)readAttributeACCapacityformatWithParams:(id)arg0 ;
-(id)readAttributeACCoilTemperatureWithParams:(id)arg0 ;
-(id)readAttributeACCompressorTypeWithParams:(id)arg0 ;
-(id)readAttributeACErrorCodeWithParams:(id)arg0 ;
-(id)readAttributeACLouverPositionWithParams:(id)arg0 ;
-(id)readAttributeACRefrigerantTypeWithParams:(id)arg0 ;
-(id)readAttributeACTypeWithParams:(id)arg0 ;
-(id)readAttributeAbsMaxCoolSetpointLimitWithParams:(id)arg0 ;
-(id)readAttributeAbsMaxHeatSetpointLimitWithParams:(id)arg0 ;
-(id)readAttributeAbsMinCoolSetpointLimitWithParams:(id)arg0 ;
-(id)readAttributeAbsMinHeatSetpointLimitWithParams:(id)arg0 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeControlSequenceOfOperationWithParams:(id)arg0 ;
-(id)readAttributeEmergencyHeatDeltaWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeHVACSystemTypeConfigurationWithParams:(id)arg0 ;
-(id)readAttributeLocalTemperatureCalibrationWithParams:(id)arg0 ;
-(id)readAttributeLocalTemperatureWithParams:(id)arg0 ;
-(id)readAttributeMaxCoolSetpointLimitWithParams:(id)arg0 ;
-(id)readAttributeMaxHeatSetpointLimitWithParams:(id)arg0 ;
-(id)readAttributeMinCoolSetpointLimitWithParams:(id)arg0 ;
-(id)readAttributeMinHeatSetpointLimitWithParams:(id)arg0 ;
-(id)readAttributeMinSetpointDeadBandWithParams:(id)arg0 ;
-(id)readAttributeNumberOfDailyTransitionsWithParams:(id)arg0 ;
-(id)readAttributeNumberOfWeeklyTransitionsWithParams:(id)arg0 ;
-(id)readAttributeOccupancyWithParams:(id)arg0 ;
-(id)readAttributeOccupiedCoolingSetpointWithParams:(id)arg0 ;
-(id)readAttributeOccupiedHeatingSetpointWithParams:(id)arg0 ;
-(id)readAttributeOccupiedSetbackMaxWithParams:(id)arg0 ;
-(id)readAttributeOccupiedSetbackMinWithParams:(id)arg0 ;
-(id)readAttributeOccupiedSetbackWithParams:(id)arg0 ;
-(id)readAttributeOutdoorTemperatureWithParams:(id)arg0 ;
-(id)readAttributePICoolingDemandWithParams:(id)arg0 ;
-(id)readAttributePIHeatingDemandWithParams:(id)arg0 ;
-(id)readAttributeRemoteSensingWithParams:(id)arg0 ;
-(id)readAttributeSetpointChangeAmountWithParams:(id)arg0 ;
-(id)readAttributeSetpointChangeSourceTimestampWithParams:(id)arg0 ;
-(id)readAttributeSetpointChangeSourceWithParams:(id)arg0 ;
-(id)readAttributeStartOfWeekWithParams:(id)arg0 ;
-(id)readAttributeSystemModeWithParams:(id)arg0 ;
-(id)readAttributeTemperatureSetpointHoldDurationWithParams:(id)arg0 ;
-(id)readAttributeTemperatureSetpointHoldWithParams:(id)arg0 ;
-(id)readAttributeThermostatProgrammingOperationModeWithParams:(id)arg0 ;
-(id)readAttributeThermostatRunningModeWithParams:(id)arg0 ;
-(id)readAttributeThermostatRunningStateWithParams:(id)arg0 ;
-(id)readAttributeUnoccupiedCoolingSetpointWithParams:(id)arg0 ;
-(id)readAttributeUnoccupiedHeatingSetpointWithParams:(id)arg0 ;
-(id)readAttributeUnoccupiedSetbackMaxWithParams:(id)arg0 ;
-(id)readAttributeUnoccupiedSetbackMinWithParams:(id)arg0 ;
-(id)readAttributeUnoccupiedSetbackWithParams:(id)arg0 ;
-(void)clearWeeklyScheduleWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)clearWeeklyScheduleWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)clearWeeklyScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)clearWeeklyScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)getWeeklyScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)getWeeklyScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)setWeeklyScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)setWeeklyScheduleWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)setpointRaiseLowerWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)setpointRaiseLowerWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeACCapacityWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeACCapacityWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeACCapacityformatWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeACCapacityformatWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeACCompressorTypeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeACCompressorTypeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeACErrorCodeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeACErrorCodeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeACLouverPositionWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeACLouverPositionWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeACRefrigerantTypeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeACRefrigerantTypeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeACTypeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeACTypeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeControlSequenceOfOperationWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeControlSequenceOfOperationWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeEmergencyHeatDeltaWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeEmergencyHeatDeltaWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeHVACSystemTypeConfigurationWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeHVACSystemTypeConfigurationWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLocalTemperatureCalibrationWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLocalTemperatureCalibrationWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeMaxCoolSetpointLimitWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeMaxCoolSetpointLimitWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeMaxHeatSetpointLimitWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeMaxHeatSetpointLimitWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeMinCoolSetpointLimitWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeMinCoolSetpointLimitWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeMinHeatSetpointLimitWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeMinHeatSetpointLimitWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeMinSetpointDeadBandWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeMinSetpointDeadBandWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOccupiedCoolingSetpointWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOccupiedCoolingSetpointWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOccupiedHeatingSetpointWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOccupiedHeatingSetpointWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOccupiedSetbackWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOccupiedSetbackWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeRemoteSensingWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeRemoteSensingWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeSystemModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeSystemModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeTemperatureSetpointHoldDurationWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeTemperatureSetpointHoldDurationWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeTemperatureSetpointHoldWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeTemperatureSetpointHoldWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeThermostatProgrammingOperationModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeThermostatProgrammingOperationModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeUnoccupiedCoolingSetpointWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeUnoccupiedCoolingSetpointWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeUnoccupiedHeatingSetpointWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeUnoccupiedHeatingSetpointWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeUnoccupiedSetbackWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeUnoccupiedSetbackWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif