// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTPOWERSOURCE_H
#define CHIPTESTPOWERSOURCE_H



#import "CHIPPowerSource.h"

@interface CHIPTestPowerSource : CHIPPowerSource {
    PowerSourceClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeActiveBatteryFaultsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBatteryChargeLevelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBatteryChargeStateWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBatteryPercentRemainingWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBatteryTimeRemainingWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBatteryVoltageWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDescriptionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOrderWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeStatusWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif