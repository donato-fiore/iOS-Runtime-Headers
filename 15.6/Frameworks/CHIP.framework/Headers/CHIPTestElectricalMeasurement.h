// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTELECTRICALMEASUREMENT_H
#define CHIPTESTELECTRICALMEASUREMENT_H



#import "CHIPElectricalMeasurement.h"

@interface CHIPTestElectricalMeasurement : CHIPElectricalMeasurement {
    ElectricalMeasurementClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeActivePowerMaxWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeActivePowerMinWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeActivePowerWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMeasurementTypeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRmsCurrentMaxWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRmsCurrentMinWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRmsCurrentWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRmsVoltageMaxWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRmsVoltageMinWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRmsVoltageWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTotalActivePowerWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif