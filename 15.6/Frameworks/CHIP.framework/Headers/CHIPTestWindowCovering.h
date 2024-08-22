// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTWINDOWCOVERING_H
#define CHIPTESTWINDOWCOVERING_H



#import "CHIPWindowCovering.h"

@interface CHIPTestWindowCovering : CHIPWindowCovering {
    WindowCoveringClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeConfigStatusWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentPositionLiftPercent100thsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentPositionLiftPercentageWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentPositionLiftWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentPositionTiltPercent100thsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentPositionTiltPercentageWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentPositionTiltWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEndProductTypeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeInstalledClosedLimitLiftWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeInstalledClosedLimitTiltWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeInstalledOpenLimitLiftWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeInstalledOpenLimitTiltWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOperationalStatusWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSafetyStatusWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTargetPositionLiftPercent100thsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTargetPositionTiltPercent100thsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTypeWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif