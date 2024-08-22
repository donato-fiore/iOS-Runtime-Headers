// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARFACETRACKINGCONFIGURATION_H
#define ARFACETRACKINGCONFIGURATION_H



#import "ARConfiguration.h"

@interface ARFaceTrackingConfiguration : ARConfiguration

@property (nonatomic) BOOL lowPower; // ivar: _lowPower
@property (nonatomic) NSInteger maximumNumberOfTrackedFaces; // ivar: _maximumNumberOfTrackedFaces
@property (nonatomic, getter=isWorldTrackingEnabled) BOOL worldTrackingEnabled; // ivar: _worldTrackingEnabled


+(BOOL)isSupported;
+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
+(BOOL)supportsWorldTracking;
+(NSInteger)supportedNumberOfTrackedFaces;
+(id)_querySupportedVideoFormats;
+(id)_querySupportedVideoFormatsForWorldTracking;
+(id)fallbackVideoFormat;
+(id)fallbackVideoFormatWithCaptureDeviceType:(id)arg0 ;
+(id)new;
+(id)supportedVideoFormats;
+(id)supportedVideoFormatsForWorldTracking;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageSensorSettings;
-(id)imageSensorSettingsForLowPower;
-(id)imageSensorSettingsForWorldTracking;
-(id)init;
-(id)parentImageSensorSettings;
-(id)renderingTechnique;
-(id)secondaryTechniques;
-(void)createTechniques:(id)arg0 ;
-(void)setCameraPosition:(NSInteger)arg0 ;
-(void)setLightEstimationEnabled:(BOOL)arg0 ;
-(void)setMirroredFrameOutput:(BOOL)arg0 ;


@end


#endif