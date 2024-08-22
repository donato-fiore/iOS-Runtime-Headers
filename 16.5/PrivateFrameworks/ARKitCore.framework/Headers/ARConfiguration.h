// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCONFIGURATION_H
#define ARCONFIGURATION_H

@class NSArray, NSString;
@protocol NSCopying, ARReplaySensorProtocol;

#import <Foundation/Foundation.h>

#import "ARImageSensorSettings.h"
#import "ARParentImageSensorSettings.h"
#import "ARVideoFormat.h"

@interface ARConfiguration : NSObject <NSCopying>

 {
    NSInteger _jasperFrameRate;
}


@property (nonatomic) BOOL allowCameraInMultipleForegroundAppLayout; // ivar: _allowCameraInMultipleForegroundAppLayout
@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled; // ivar: _autoFocusEnabled
@property (nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (retain, nonatomic) NSArray *customSensors; // ivar: _customSensors
@property (readonly, nonatomic) NSString *deviceModel;
@property (nonatomic) BOOL disableMLRelocalization; // ivar: _disableMLRelocalization
@property (nonatomic) BOOL disableOcclusionForPersonSegmentation; // ivar: _disableOcclusionForPersonSegmentation
@property (nonatomic) BOOL disableRenderSyncScheduling; // ivar: _disableRenderSyncScheduling
@property (nonatomic) NSUInteger frameDebugOptions; // ivar: _frameDebugOptions
@property (nonatomic) NSUInteger frameSemantics; // ivar: _frameSemantics
@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettings;
@property (nonatomic) NSInteger jasperFrameRate;
@property (nonatomic) NSUInteger lightEstimation; // ivar: _lightEstimation
@property (nonatomic, getter=isLightEstimationEnabled) BOOL lightEstimationEnabled;
@property (nonatomic) NSInteger maxUltrawideImageForwardingFrameRate; // ivar: _maxUltrawideImageForwardingFrameRate
@property (nonatomic) BOOL mirroredFrameOutput; // ivar: _mirroredFrameOutput
@property (readonly, nonatomic) ARParentImageSensorSettings *parentImageSensorSettings;
@property (nonatomic, getter=isPersonMetadataEnabled) BOOL personMetadataEnabled; // ivar: _personMetadataEnabled
@property (nonatomic) BOOL providesAudioData; // ivar: _providesAudioData
@property (readonly, nonatomic) NSObject<ARReplaySensorProtocol> *replaySensor;
@property (nonatomic) BOOL smartPersonOcclusionEnabled; // ivar: _smartPersonOcclusionEnabled
@property (retain, nonatomic) NSString *timeOfFlightProjectorMode; // ivar: _timeOfFlightProjectorMode
@property (retain, nonatomic) ARVideoFormat *videoFormat; // ivar: _videoFormat
@property (nonatomic) BOOL videoHDRAllowed; // ivar: _videoHDRAllowed
@property (nonatomic) NSInteger worldAlignment; // ivar: _worldAlignment


+(BOOL)isSupported;
+(BOOL)shouldProvideNonBinnedVideoFormats;
+(BOOL)shouldProvideX420VideoFormat;
+(BOOL)shouldUse30FPSJasperFormats;
+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
+(BOOL)supportsTimeOfFlightProjectorMode;
+(id)_querySupportedVideoFormatsForJasper;
+(id)_supportedVideoFormatsForJasper;
+(id)configurableCaptureDeviceForPrimaryCamera;
+(id)recommendedVideoFormatFor4KResolution;
+(id)recommendedVideoFormatForHighResolutionFrameCapturing;
+(id)supportedVideoFormats;
+(void)setShouldProvideNonBinnedVideoFormats:(BOOL)arg0 ;
+(void)setShouldProvideX420VideoFormat:(BOOL)arg0 ;
+(void)setShouldUse30FPSJasperFormats:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKindOfConfiguration:(Class)arg0 ;
-(BOOL)shouldUseJasper;
-(NSInteger)_depthPrioritization;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)depthSensorSettingsForJasper;
-(id)description;
-(id)descriptionWithoutBrackets;
-(id)getAsKindOfConfiguration:(Class)arg0 ;
-(id)init;
-(id)initPrivate;
-(id)renderingTechnique;
-(id)secondaryTechniques;
-(id)techniques;
-(void)createTechniques:(id)arg0 ;


@end


#endif