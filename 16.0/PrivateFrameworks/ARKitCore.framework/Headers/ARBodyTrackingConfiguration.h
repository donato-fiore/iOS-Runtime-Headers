// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARBODYTRACKINGCONFIGURATION_H
#define ARBODYTRACKINGCONFIGURATION_H

@class NSSet;


#import "ARConfiguration.h"
#import "ARImageSensorSettings.h"
#import "ARWorldMap.h"

@interface ARBodyTrackingConfiguration : ARConfiguration

@property (nonatomic) BOOL alwaysUsePrimaryCameraForTracking; // ivar: _alwaysUsePrimaryCameraForTracking
@property (nonatomic) BOOL appClipCodeTrackingEnabled; // ivar: _appClipCodeTrackingEnabled
@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (nonatomic) BOOL automaticImageScaleEstimationEnabled; // ivar: _automaticImageScaleEstimationEnabled
@property (nonatomic) BOOL automaticSkeletonScaleEstimationEnabled; // ivar: _automaticSkeletonScaleEstimationEnabled
@property (copy, nonatomic) NSSet *detectionImages; // ivar: _detectionImages
@property (nonatomic) NSInteger environmentTexturing; // ivar: _environmentTexturing
@property (nonatomic) BOOL ignoreAppClipCodeURLLimitation; // ivar: _ignoreAppClipCodeURLLimitation
@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (retain, nonatomic) ARWorldMap *initialWorldMap; // ivar: _initialWorldMap
@property (nonatomic, getter=isLowQosSchedulingEnabled) BOOL lowQosSchedulingEnabled; // ivar: _lowQosSchedulingEnabled
@property (nonatomic) NSInteger maximumNumberOfTrackedImages; // ivar: _maximumNumberOfTrackedImages
@property (nonatomic) NSUInteger planeDetection; // ivar: _planeDetection
@property (nonatomic) BOOL wantsHDREnvironmentTextures; // ivar: _wantsHDREnvironmentTextures


+(BOOL)isSupported;
+(BOOL)supportsAppClipCodeTracking;
+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
+(BOOL)supportsUserFaceTracking;
+(id)_querySupportedVideoFormatsForUltraWide;
+(id)new;
+(id)recommendedVideoFormatFor4KResolution;
+(id)recommendedVideoFormatForHighResolutionFrameCapturing;
+(id)supportedVideoFormats;
+(id)supportedVideoFormatsForUltraWide;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldEnableVisionDataForImageSensorSettings:(id)arg0 ;
-(BOOL)shouldUseJasper;
-(BOOL)shouldUseUltraWide;
-(id)_trackingOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)imageSensorSettings;
-(id)imageSensorSettingsForUserFaceTracking;
-(id)init;
-(id)parentImageSensorSettings;
-(void)createTechniques:(id)arg0 ;
-(void)setVideoFormat:(id)arg0 ;


@end


#endif