// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPTHERMOSTAT_H
#define CHIPTHERMOSTAT_H



#import "CHIPCluster.h"

@interface CHIPThermostat : CHIPCluster

@property (readonly) ThermostatCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)clearWeeklySchedule:(id)arg0 ;
-(void)configureAttributeLocalTemperatureWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(short)arg2 responseHandler:(id)arg3 ;
-(void)getRelayStatusLog:(id)arg0 ;
-(void)getWeeklySchedule:(unsigned char)arg0 modeToReturn:(unsigned char)arg1 responseHandler:(id)arg2 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeControlSequenceOfOperationWithResponseHandler:(id)arg0 ;
-(void)readAttributeLocalTemperatureWithResponseHandler:(id)arg0 ;
-(void)readAttributeOccupiedCoolingSetpointWithResponseHandler:(id)arg0 ;
-(void)readAttributeOccupiedHeatingSetpointWithResponseHandler:(id)arg0 ;
-(void)readAttributeSystemModeWithResponseHandler:(id)arg0 ;
-(void)reportAttributeLocalTemperatureWithResponseHandler:(id)arg0 ;
-(void)setWeeklySchedule:(unsigned char)arg0 dayOfWeekForSequence:(unsigned char)arg1 modeForSequence:(unsigned char)arg2 payload:(unsigned char)arg3 responseHandler:(id)arg4 ;
-(void)setpointRaiseLower:(unsigned char)arg0 amount:(char)arg1 responseHandler:(id)arg2 ;
-(void)writeAttributeControlSequenceOfOperationWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeOccupiedCoolingSetpointWithValue:(short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeOccupiedHeatingSetpointWithValue:(short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeSystemModeWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;


@end


#endif