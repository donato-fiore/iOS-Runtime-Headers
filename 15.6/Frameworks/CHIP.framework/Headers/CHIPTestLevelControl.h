// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTLEVELCONTROL_H
#define CHIPTESTLEVELCONTROL_H



#import "CHIPLevelControl.h"

@interface CHIPTestLevelControl : CHIPLevelControl {
    LevelControlClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentFrequencyWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentLevelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxFrequencyWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxLevelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinFrequencyWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMinLevelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRemainingTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif