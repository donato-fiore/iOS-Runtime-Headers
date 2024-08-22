// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARGEOTRACKINGCONFIGURATION_H
#define ARGEOTRACKINGCONFIGURATION_H

@class NSSet;


#import "ARConfiguration.h"
#import "ARImageSensorSettings.h"

@interface ARGeoTrackingConfiguration : ARConfiguration {
    CGFloat _posteriorVisualLocalizationCallInterval;
}


@property (nonatomic) BOOL alwaysUsePrimaryCameraForTracking; // ivar: _alwaysUsePrimaryCameraForTracking
@property (nonatomic) BOOL appClipCodeTrackingEnabled; // ivar: _appClipCodeTrackingEnabled
@property (nonatomic) BOOL automaticImageScaleEstimationEnabled; // ivar: _automaticImageScaleEstimationEnabled
@property (nonatomic) BOOL depthOptimizedForStaticScene; // ivar: _depthOptimizedForStaticScene
@property (copy, nonatomic) NSSet *detectionImages; // ivar: _detectionImages
@property (copy, nonatomic) NSSet *detectionObjects; // ivar: _detectionObjects
@property (nonatomic) NSInteger environmentTexturing; // ivar: _environmentTexturing
@property (nonatomic) BOOL ignoreAppClipCodeURLLimitation; // ivar: _ignoreAppClipCodeURLLimitation
@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (nonatomic, getter=isLowQosSchedulingEnabled) BOOL lowQosSchedulingEnabled; // ivar: _lowQosSchedulingEnabled
@property (nonatomic) NSInteger maximumNumberOfTrackedImages; // ivar: _maximumNumberOfTrackedImages
@property (nonatomic) CGFloat minVergenceAngle; // ivar: _minVergenceAngle
@property (nonatomic, getter=isMLModelEnabled) BOOL mlModelEnabled; // ivar: _mlModelEnabled
@property (nonatomic) NSUInteger planeDetection; // ivar: _planeDetection
@property (nonatomic) BOOL shouldUseUltraWideIfAvailable; // ivar: _shouldUseUltraWideIfAvailable
@property (nonatomic) NSUInteger supportEnablementOptions; // ivar: _supportEnablementOptions
@property (nonatomic) BOOL useLidarIfAvailable; // ivar: _useLidarIfAvailable
@property (nonatomic) CGFloat visualLocalizationCallInterval; // ivar: _visualLocalizationCallInterval
@property (nonatomic) BOOL visualLocalizationUpdatesRequested; // ivar: _visualLocalizationUpdatesRequested
@property (nonatomic) BOOL wantsHDREnvironmentTextures; // ivar: _wantsHDREnvironmentTextures
@property (nonatomic) NSInteger worldAlignment;


+(BOOL)_verifyLocationPermissionsWithLocationManager:(id)arg0 handler:(id)arg1 ;
+(BOOL)isSupported;
+(BOOL)isSupportedWithOptions:(NSUInteger)arg0 ;
+(BOOL)supportsAppClipCodeTracking;
+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
+(BOOL)verifyLocationPermissions;
+(id)checkAvailabilityQueue;
+(id)locationManagerQueue;
+(id)new;
+(id)recommendedVideoFormatFor4KResolution;
+(id)recommendedVideoFormatForHighResolutionFrameCapturing;
+(id)supportedVideoFormats;
+(id)supportedVideoFormatsForUltraWide;
+(void)checkAvailabilityAtCoordinate:(struct CLLocationCoordinate2D )arg0 completionHandler:(id)arg1 ;
+(void)checkAvailabilityAtCoordinate:(struct CLLocationCoordinate2D )arg0 withOptions:(NSUInteger)arg1 completionHandler:(id)arg2 ;
+(void)checkAvailabilityWithCompletionHandler:(id)arg0 ;
+(void)checkAvailabilityWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldEnableVisionDataForImageSensorSettings:(id)arg0 ;
-(BOOL)shouldUseJasper;
-(BOOL)shouldUseUltraWide;
-(NSInteger)_depthPrioritization;
-(id)_trackingOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)imageSensorSettings;
-(id)init;
-(id)parentImageSensorSettings;
-(void)createTechniques:(id)arg0 ;
-(void)setVideoFormat:(id)arg0 ;


@end


#endif