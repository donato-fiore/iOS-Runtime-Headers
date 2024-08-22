// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTBARRIERCONTROL_H
#define CHIPTESTBARRIERCONTROL_H



#import "CHIPBarrierControl.h"

@interface CHIPTestBarrierControl : CHIPBarrierControl {
    BarrierControlClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierCapabilitiesWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierMovingStateWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierPositionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierSafetyStatusWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif