// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPCOLORCONTROL_H
#define CHIPCOLORCONTROL_H



#import "CHIPCluster.h"

@interface CHIPColorControl : CHIPCluster

@property (readonly) ColorControlCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)configureAttributeColorTemperatureWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(unsigned short)arg2 responseHandler:(id)arg3 ;
-(void)configureAttributeCurrentHueWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(unsigned char)arg2 responseHandler:(id)arg3 ;
-(void)configureAttributeCurrentSaturationWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(unsigned char)arg2 responseHandler:(id)arg3 ;
-(void)configureAttributeCurrentXWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(unsigned short)arg2 responseHandler:(id)arg3 ;
-(void)configureAttributeCurrentYWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(unsigned short)arg2 responseHandler:(id)arg3 ;
-(void)moveColor:(short)arg0 rateY:(short)arg1 optionsMask:(unsigned char)arg2 optionsOverride:(unsigned char)arg3 responseHandler:(id)arg4 ;
-(void)moveColorTemperature:(unsigned char)arg0 rate:(unsigned short)arg1 colorTemperatureMinimum:(unsigned short)arg2 colorTemperatureMaximum:(unsigned short)arg3 optionsMask:(unsigned char)arg4 optionsOverride:(unsigned char)arg5 responseHandler:(id)arg6 ;
-(void)moveHue:(unsigned char)arg0 rate:(unsigned char)arg1 optionsMask:(unsigned char)arg2 optionsOverride:(unsigned char)arg3 responseHandler:(id)arg4 ;
-(void)moveSaturation:(unsigned char)arg0 rate:(unsigned char)arg1 optionsMask:(unsigned char)arg2 optionsOverride:(unsigned char)arg3 responseHandler:(id)arg4 ;
-(void)moveToColor:(unsigned short)arg0 colorY:(unsigned short)arg1 transitionTime:(unsigned short)arg2 optionsMask:(unsigned char)arg3 optionsOverride:(unsigned char)arg4 responseHandler:(id)arg5 ;
-(void)moveToColorTemperature:(unsigned short)arg0 transitionTime:(unsigned short)arg1 optionsMask:(unsigned char)arg2 optionsOverride:(unsigned char)arg3 responseHandler:(id)arg4 ;
-(void)moveToHue:(unsigned char)arg0 direction:(unsigned char)arg1 transitionTime:(unsigned short)arg2 optionsMask:(unsigned char)arg3 optionsOverride:(unsigned char)arg4 responseHandler:(id)arg5 ;
-(void)moveToHueAndSaturation:(unsigned char)arg0 saturation:(unsigned char)arg1 transitionTime:(unsigned short)arg2 optionsMask:(unsigned char)arg3 optionsOverride:(unsigned char)arg4 responseHandler:(id)arg5 ;
-(void)moveToSaturation:(unsigned char)arg0 transitionTime:(unsigned short)arg1 optionsMask:(unsigned char)arg2 optionsOverride:(unsigned char)arg3 responseHandler:(id)arg4 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorCapabilitiesWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorControlOptionsWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorLoopActiveWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorLoopDirectionWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorLoopTimeWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorModeWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorPointBIntensityWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorPointBXWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorPointBYWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorPointGIntensityWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorPointGXWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorPointGYWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorPointRIntensityWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorPointRXWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorPointRYWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorTempPhysicalMaxWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorTempPhysicalMinWithResponseHandler:(id)arg0 ;
-(void)readAttributeColorTemperatureWithResponseHandler:(id)arg0 ;
-(void)readAttributeCompensationTextWithResponseHandler:(id)arg0 ;
-(void)readAttributeCoupleColorTempToLevelMinMiredsWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentHueWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentSaturationWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentXWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentYWithResponseHandler:(id)arg0 ;
-(void)readAttributeDriftCompensationWithResponseHandler:(id)arg0 ;
-(void)readAttributeEnhancedColorModeWithResponseHandler:(id)arg0 ;
-(void)readAttributeEnhancedCurrentHueWithResponseHandler:(id)arg0 ;
-(void)readAttributeNumberOfPrimariesWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary1IntensityWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary1XWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary1YWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary2IntensityWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary2XWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary2YWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary3IntensityWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary3XWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary3YWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary4IntensityWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary4XWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary4YWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary5IntensityWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary5XWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary5YWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary6IntensityWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary6XWithResponseHandler:(id)arg0 ;
-(void)readAttributePrimary6YWithResponseHandler:(id)arg0 ;
-(void)readAttributeRemainingTimeWithResponseHandler:(id)arg0 ;
-(void)readAttributeStartUpColorTemperatureMiredsWithResponseHandler:(id)arg0 ;
-(void)readAttributeWhitePointXWithResponseHandler:(id)arg0 ;
-(void)readAttributeWhitePointYWithResponseHandler:(id)arg0 ;
-(void)reportAttributeColorTemperatureWithResponseHandler:(id)arg0 ;
-(void)reportAttributeCurrentHueWithResponseHandler:(id)arg0 ;
-(void)reportAttributeCurrentSaturationWithResponseHandler:(id)arg0 ;
-(void)reportAttributeCurrentXWithResponseHandler:(id)arg0 ;
-(void)reportAttributeCurrentYWithResponseHandler:(id)arg0 ;
-(void)stepColor:(short)arg0 stepY:(short)arg1 transitionTime:(unsigned short)arg2 optionsMask:(unsigned char)arg3 optionsOverride:(unsigned char)arg4 responseHandler:(id)arg5 ;
-(void)stepColorTemperature:(unsigned char)arg0 stepSize:(unsigned short)arg1 transitionTime:(unsigned short)arg2 colorTemperatureMinimum:(unsigned short)arg3 colorTemperatureMaximum:(unsigned short)arg4 optionsMask:(unsigned char)arg5 optionsOverride:(unsigned char)arg6 responseHandler:(id)arg7 ;
-(void)stepHue:(unsigned char)arg0 stepSize:(unsigned char)arg1 transitionTime:(unsigned char)arg2 optionsMask:(unsigned char)arg3 optionsOverride:(unsigned char)arg4 responseHandler:(id)arg5 ;
-(void)stepSaturation:(unsigned char)arg0 stepSize:(unsigned char)arg1 transitionTime:(unsigned char)arg2 optionsMask:(unsigned char)arg3 optionsOverride:(unsigned char)arg4 responseHandler:(id)arg5 ;
-(void)stopMoveStep:(unsigned char)arg0 optionsOverride:(unsigned char)arg1 responseHandler:(id)arg2 ;
-(void)writeAttributeColorControlOptionsWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeColorPointBIntensityWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeColorPointBXWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeColorPointBYWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeColorPointGIntensityWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeColorPointGXWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeColorPointGYWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeColorPointRIntensityWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeColorPointRXWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeColorPointRYWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeStartUpColorTemperatureMiredsWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeWhitePointXWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeWhitePointYWithValue:(unsigned short)arg0 responseHandler:(id)arg1 ;


@end


#endif