// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPBARRIERCONTROL_H
#define CHIPBARRIERCONTROL_H



#import "CHIPCluster.h"

@interface CHIPBarrierControl : CHIPCluster

@property (readonly) BarrierControlCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)barrierControlGoToPercent:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)barrierControlStop:(id)arg0 ;
-(void)readAttributeBarrierCapabilitiesWithResponseHandler:(id)arg0 ;
-(void)readAttributeBarrierMovingStateWithResponseHandler:(id)arg0 ;
-(void)readAttributeBarrierPositionWithResponseHandler:(id)arg0 ;
-(void)readAttributeBarrierSafetyStatusWithResponseHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;


@end


#endif