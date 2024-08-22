// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPTEMPERATUREMEASUREMENT_H
#define CHIPTEMPERATUREMEASUREMENT_H



#import "CHIPCluster.h"

@interface CHIPTemperatureMeasurement : CHIPCluster

@property (readonly) TemperatureMeasurementCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)configureAttributeMeasuredValueWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(short)arg2 responseHandler:(id)arg3 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeMaxMeasuredValueWithResponseHandler:(id)arg0 ;
-(void)readAttributeMeasuredValueWithResponseHandler:(id)arg0 ;
-(void)readAttributeMinMeasuredValueWithResponseHandler:(id)arg0 ;
-(void)reportAttributeMeasuredValueWithResponseHandler:(id)arg0 ;


@end


#endif