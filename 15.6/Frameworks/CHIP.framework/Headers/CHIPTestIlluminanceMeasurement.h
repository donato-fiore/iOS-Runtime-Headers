// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTILLUMINANCEMEASUREMENT_H
#define CHIPTESTILLUMINANCEMEASUREMENT_H



#import "CHIPIlluminanceMeasurement.h"

@interface CHIPTestIlluminanceMeasurement : CHIPIlluminanceMeasurement {
    IlluminanceMeasurementClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLightSensorTypeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxMeasuredValueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMeasuredValueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinMeasuredValueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeToleranceWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif