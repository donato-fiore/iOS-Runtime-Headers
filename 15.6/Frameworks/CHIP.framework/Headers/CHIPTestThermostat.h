// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTTHERMOSTAT_H
#define CHIPTESTTHERMOSTAT_H



#import "CHIPThermostat.h"

@interface CHIPTestThermostat : CHIPThermostat {
    ThermostatClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAbsMaxCoolSetpointLimitWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAbsMaxHeatSetpointLimitWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAbsMinCoolSetpointLimitWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAbsMinHeatSetpointLimitWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLocalTemperatureWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNumberOfDailyTransitionsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNumberOfWeeklyTransitionsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeStartOfWeekWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif