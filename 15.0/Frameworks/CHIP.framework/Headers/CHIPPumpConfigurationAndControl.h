// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPUMPCONFIGURATIONANDCONTROL_H
#define CHIPPUMPCONFIGURATIONANDCONTROL_H



#import "CHIPCluster.h"

@interface CHIPPumpConfigurationAndControl : CHIPCluster

@property (readonly) PumpConfigurationAndControlCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)configureAttributeCapacityWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(short)arg2 responseHandler:(id)arg3 ;
-(void)readAttributeCapacityWithResponseHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeEffectiveControlModeWithResponseHandler:(id)arg0 ;
-(void)readAttributeEffectiveOperationModeWithResponseHandler:(id)arg0 ;
-(void)readAttributeMaxFlowWithResponseHandler:(id)arg0 ;
-(void)readAttributeMaxPressureWithResponseHandler:(id)arg0 ;
-(void)readAttributeMaxSpeedWithResponseHandler:(id)arg0 ;
-(void)readAttributeOperationModeWithResponseHandler:(id)arg0 ;
-(void)reportAttributeCapacityWithResponseHandler:(id)arg0 ;
-(void)writeAttributeOperationModeWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;


@end


#endif