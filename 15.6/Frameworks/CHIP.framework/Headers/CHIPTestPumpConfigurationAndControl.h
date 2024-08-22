// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTPUMPCONFIGURATIONANDCONTROL_H
#define CHIPTESTPUMPCONFIGURATIONANDCONTROL_H



#import "CHIPPumpConfigurationAndControl.h"

@interface CHIPTestPumpConfigurationAndControl : CHIPPumpConfigurationAndControl {
    PumpConfigurationAndControlClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAlarmMaskWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCapacityWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEffectiveControlModeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEffectiveOperationModeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxCompPressureWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxConstFlowWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxConstPressureWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxConstSpeedWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxConstTempWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxFlowWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxPressureWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxSpeedWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinCompPressureWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinConstFlowWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinConstPressureWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinConstSpeedWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinConstTempWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePowerWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePumpStatusWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSpeedWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif