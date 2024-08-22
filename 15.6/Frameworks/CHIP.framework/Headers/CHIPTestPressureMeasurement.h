// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTPRESSUREMEASUREMENT_H
#define CHIPTESTPRESSUREMEASUREMENT_H



#import "CHIPPressureMeasurement.h"

@interface CHIPTestPressureMeasurement : CHIPPressureMeasurement {
    PressureMeasurementClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxMeasuredValueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMeasuredValueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinMeasuredValueWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif