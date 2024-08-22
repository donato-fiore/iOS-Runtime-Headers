// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTTEMPERATUREMEASUREMENT_H
#define CHIPTESTTEMPERATUREMEASUREMENT_H



#import "CHIPTemperatureMeasurement.h"

@interface CHIPTestTemperatureMeasurement : CHIPTemperatureMeasurement {
    TemperatureMeasurementClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxMeasuredValueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMeasuredValueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinMeasuredValueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeToleranceWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif