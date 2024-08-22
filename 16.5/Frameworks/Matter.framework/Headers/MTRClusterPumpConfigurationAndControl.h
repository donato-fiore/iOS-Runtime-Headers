// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERPUMPCONFIGURATIONANDCONTROL_H
#define MTRCLUSTERPUMPCONFIGURATIONANDCONTROL_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterPumpConfigurationAndControl : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeCapacityWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeControlModeWithParams:(id)arg0 ;
-(id)readAttributeEffectiveControlModeWithParams:(id)arg0 ;
-(id)readAttributeEffectiveOperationModeWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeLifetimeEnergyConsumedWithParams:(id)arg0 ;
-(id)readAttributeLifetimeRunningHoursWithParams:(id)arg0 ;
-(id)readAttributeMaxCompPressureWithParams:(id)arg0 ;
-(id)readAttributeMaxConstFlowWithParams:(id)arg0 ;
-(id)readAttributeMaxConstPressureWithParams:(id)arg0 ;
-(id)readAttributeMaxConstSpeedWithParams:(id)arg0 ;
-(id)readAttributeMaxConstTempWithParams:(id)arg0 ;
-(id)readAttributeMaxFlowWithParams:(id)arg0 ;
-(id)readAttributeMaxPressureWithParams:(id)arg0 ;
-(id)readAttributeMaxSpeedWithParams:(id)arg0 ;
-(id)readAttributeMinCompPressureWithParams:(id)arg0 ;
-(id)readAttributeMinConstFlowWithParams:(id)arg0 ;
-(id)readAttributeMinConstPressureWithParams:(id)arg0 ;
-(id)readAttributeMinConstSpeedWithParams:(id)arg0 ;
-(id)readAttributeMinConstTempWithParams:(id)arg0 ;
-(id)readAttributeOperationModeWithParams:(id)arg0 ;
-(id)readAttributePowerWithParams:(id)arg0 ;
-(id)readAttributePumpStatusWithParams:(id)arg0 ;
-(id)readAttributeSpeedWithParams:(id)arg0 ;
-(void)writeAttributeControlModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeControlModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLifetimeEnergyConsumedWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLifetimeEnergyConsumedWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLifetimeRunningHoursWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLifetimeRunningHoursWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOperationModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOperationModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif