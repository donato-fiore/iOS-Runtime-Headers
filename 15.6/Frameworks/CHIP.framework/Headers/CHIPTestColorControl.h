// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTCOLORCONTROL_H
#define CHIPTESTCOLORCONTROL_H



#import "CHIPColorControl.h"

@interface CHIPTestColorControl : CHIPColorControl {
    ColorControlClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeColorCapabilitiesWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeColorLoopActiveWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeColorLoopDirectionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeColorLoopStartEnhancedHueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeColorLoopStoredEnhancedHueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeColorLoopTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeColorModeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeColorTempPhysicalMaxWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeColorTempPhysicalMinWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeColorTemperatureWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCompensationTextWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCoupleColorTempToLevelMinMiredsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentHueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentSaturationWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentXWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentYWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDriftCompensationWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEnhancedColorModeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeEnhancedCurrentHueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNumberOfPrimariesWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary1IntensityWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary1XWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary1YWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary2IntensityWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary2XWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary2YWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary3IntensityWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary3XWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary3YWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary4IntensityWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary4XWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary4YWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary5IntensityWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary5XWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary5YWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary6IntensityWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary6XWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePrimary6YWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRemainingTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif