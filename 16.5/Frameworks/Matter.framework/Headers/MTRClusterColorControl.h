// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERCOLORCONTROL_H
#define MTRCLUSTERCOLORCONTROL_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterColorControl : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeColorCapabilitiesWithParams:(id)arg0 ;
-(id)readAttributeColorLoopActiveWithParams:(id)arg0 ;
-(id)readAttributeColorLoopDirectionWithParams:(id)arg0 ;
-(id)readAttributeColorLoopStartEnhancedHueWithParams:(id)arg0 ;
-(id)readAttributeColorLoopStoredEnhancedHueWithParams:(id)arg0 ;
-(id)readAttributeColorLoopTimeWithParams:(id)arg0 ;
-(id)readAttributeColorModeWithParams:(id)arg0 ;
-(id)readAttributeColorPointBIntensityWithParams:(id)arg0 ;
-(id)readAttributeColorPointBXWithParams:(id)arg0 ;
-(id)readAttributeColorPointBYWithParams:(id)arg0 ;
-(id)readAttributeColorPointGIntensityWithParams:(id)arg0 ;
-(id)readAttributeColorPointGXWithParams:(id)arg0 ;
-(id)readAttributeColorPointGYWithParams:(id)arg0 ;
-(id)readAttributeColorPointRIntensityWithParams:(id)arg0 ;
-(id)readAttributeColorPointRXWithParams:(id)arg0 ;
-(id)readAttributeColorPointRYWithParams:(id)arg0 ;
-(id)readAttributeColorTempPhysicalMaxMiredsWithParams:(id)arg0 ;
-(id)readAttributeColorTempPhysicalMinMiredsWithParams:(id)arg0 ;
-(id)readAttributeColorTemperatureMiredsWithParams:(id)arg0 ;
-(id)readAttributeCompensationTextWithParams:(id)arg0 ;
-(id)readAttributeCoupleColorTempToLevelMinMiredsWithParams:(id)arg0 ;
-(id)readAttributeCurrentHueWithParams:(id)arg0 ;
-(id)readAttributeCurrentSaturationWithParams:(id)arg0 ;
-(id)readAttributeCurrentXWithParams:(id)arg0 ;
-(id)readAttributeCurrentYWithParams:(id)arg0 ;
-(id)readAttributeDriftCompensationWithParams:(id)arg0 ;
-(id)readAttributeEnhancedColorModeWithParams:(id)arg0 ;
-(id)readAttributeEnhancedCurrentHueWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeNumberOfPrimariesWithParams:(id)arg0 ;
-(id)readAttributeOptionsWithParams:(id)arg0 ;
-(id)readAttributePrimary1IntensityWithParams:(id)arg0 ;
-(id)readAttributePrimary1XWithParams:(id)arg0 ;
-(id)readAttributePrimary1YWithParams:(id)arg0 ;
-(id)readAttributePrimary2IntensityWithParams:(id)arg0 ;
-(id)readAttributePrimary2XWithParams:(id)arg0 ;
-(id)readAttributePrimary2YWithParams:(id)arg0 ;
-(id)readAttributePrimary3IntensityWithParams:(id)arg0 ;
-(id)readAttributePrimary3XWithParams:(id)arg0 ;
-(id)readAttributePrimary3YWithParams:(id)arg0 ;
-(id)readAttributePrimary4IntensityWithParams:(id)arg0 ;
-(id)readAttributePrimary4XWithParams:(id)arg0 ;
-(id)readAttributePrimary4YWithParams:(id)arg0 ;
-(id)readAttributePrimary5IntensityWithParams:(id)arg0 ;
-(id)readAttributePrimary5XWithParams:(id)arg0 ;
-(id)readAttributePrimary5YWithParams:(id)arg0 ;
-(id)readAttributePrimary6IntensityWithParams:(id)arg0 ;
-(id)readAttributePrimary6XWithParams:(id)arg0 ;
-(id)readAttributePrimary6YWithParams:(id)arg0 ;
-(id)readAttributeRemainingTimeWithParams:(id)arg0 ;
-(id)readAttributeStartUpColorTemperatureMiredsWithParams:(id)arg0 ;
-(id)readAttributeWhitePointXWithParams:(id)arg0 ;
-(id)readAttributeWhitePointYWithParams:(id)arg0 ;
-(void)colorLoopSetWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)colorLoopSetWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)enhancedMoveHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)enhancedMoveHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)enhancedMoveToHueAndSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)enhancedMoveToHueAndSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)enhancedMoveToHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)enhancedMoveToHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)enhancedStepHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)enhancedStepHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveColorTemperatureWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveColorTemperatureWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveColorWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveColorWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveToColorTemperatureWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveToColorTemperatureWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveToColorWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveToColorWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveToHueAndSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveToHueAndSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveToHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveToHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveToSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveToSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stepColorTemperatureWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stepColorTemperatureWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stepColorWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stepColorWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stepHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stepHueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stepSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stepSaturationWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stopMoveStepWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stopMoveStepWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeColorPointBIntensityWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeColorPointBIntensityWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeColorPointBXWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeColorPointBXWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeColorPointBYWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeColorPointBYWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeColorPointGIntensityWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeColorPointGIntensityWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeColorPointGXWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeColorPointGXWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeColorPointGYWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeColorPointGYWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeColorPointRIntensityWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeColorPointRIntensityWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeColorPointRXWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeColorPointRXWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeColorPointRYWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeColorPointRYWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOptionsWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOptionsWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeStartUpColorTemperatureMiredsWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeStartUpColorTemperatureMiredsWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeWhitePointXWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeWhitePointXWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeWhitePointYWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeWhitePointYWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif