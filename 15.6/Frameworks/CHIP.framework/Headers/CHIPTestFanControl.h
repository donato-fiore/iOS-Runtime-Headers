// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTFANCONTROL_H
#define CHIPTESTFANCONTROL_H



#import "CHIPFanControl.h"

@interface CHIPTestFanControl : CHIPFanControl {
    FanControlClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePercentCurrentWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRockSupportWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSpeedCurrentWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSpeedMaxWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeWindSupportWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif