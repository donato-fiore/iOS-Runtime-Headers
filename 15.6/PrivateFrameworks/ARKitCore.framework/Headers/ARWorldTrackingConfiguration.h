// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARWORLDTRACKINGCONFIGURATION_H
#define ARWORLDTRACKINGCONFIGURATION_H

@class NSSet, NSString;


#import "ARConfiguration.h"
#import "ARImageSensorSettings.h"
#import "ARWorldMap.h"
#import "ARSceneReconstructionOptions.h"

@interface ARWorldTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAccuratePlaneExtentCheckEnabled) BOOL accuratePlaneExtentCheckEnabled; // ivar: _accuratePlaneExtentCheckEnabled
@property (nonatomic) BOOL alwaysUsePrimaryCameraForTracking; // ivar: _alwaysUsePrimaryCameraForTracking
@property (nonatomic) NSInteger appClipCodePerformanceTestingMode; // ivar: _appClipCodePerformanceTestingMode
@property (nonatomic) BOOL appClipCodeTrackingEnabled; // ivar: _appClipCodeTrackingEnabled
@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;
@property (nonatomic) BOOL automaticImageScaleEstimationEnabled; // ivar: _automaticImageScaleEstimationEnabled
@property (nonatomic, getter=isCollaborationEnabled) BOOL collaborationEnabled; // ivar: _collaborationEnabled
@property (nonatomic) BOOL deliverRawSceneUnderstandingResults; // ivar: _deliverRawSceneUnderstandingResults
@property (nonatomic) BOOL depthOptimizedForStaticScene; // ivar: _depthOptimizedForStaticScene
@property (nonatomic) BOOL depthTemporalSmoothingEnabled; // ivar: _depthTemporalSmoothingEnabled
@property (copy, nonatomic) NSSet *detectionImages; // ivar: _detectionImages
@property (copy, nonatomic) NSSet *detectionObjects; // ivar: _detectionObjects
@property (nonatomic) NSInteger environmentTexturing; // ivar: _environmentTexturing
@property (nonatomic) BOOL ignoreAppClipCodeURLLimitation; // ivar: _ignoreAppClipCodeURLLimitation
@property (readonly, nonatomic) ARImageSensorSettings *imageSensorSettingsForUltraWide;
@property (retain, nonatomic) ARWorldMap *initialWorldMap; // ivar: _initialWorldMap
@property (nonatomic, getter=isLowQosSchedulingEnabled) BOOL lowQosSchedulingEnabled; // ivar: _lowQosSchedulingEnabled
@property (nonatomic) NSInteger maximumNumberOfTrackedImages; // ivar: _maximumNumberOfTrackedImages
@property (nonatomic) CGFloat minVergenceAngle; // ivar: _minVergenceAngle
@property (nonatomic, getter=isMLModelEnabled) BOOL mlModelEnabled; // ivar: _mlModelEnabled
@property (nonatomic) NSUInteger planeDetection; // ivar: _planeDetection
@property (nonatomic) BOOL recordForGeoTracking; // ivar: _recordForGeoTracking
@property (nonatomic) BOOL relocalizationEnabled; // ivar: _relocalizationEnabled
@property (nonatomic) NSUInteger sceneReconstruction; // ivar: _sceneReconstruction
@property (retain, nonatomic) ARSceneReconstructionOptions *sceneReconstructionOptions; // ivar: _sceneReconstructionOptions
@property (nonatomic) BOOL shouldUseUltraWideIfAvailable; // ivar: _shouldUseUltraWideIfAvailable
@property (copy, nonatomic) NSString *slamConfiguration; // ivar: _slamConfiguration
@property (nonatomic) ARSpatialMappingParameters spatialMappingParameters;
@property (nonatomic) BOOL useSpatialMappingQualityMode;
@property (nonatomic, getter=userFaceTrackingEnabled) BOOL userFaceTrackingEnabled; // ivar: _userFaceTrackingEnabled
@property (nonatomic) BOOL wantsHDREnvironmentTextures; // ivar: _wantsHDREnvironmentTextures


+(BOOL)isSupported;
+(BOOL)shouldProvide30FPSVideoFormats;
+(BOOL)supportsAppClipCodeTracking;
+(BOOL)supportsFrameSemantics:(NSUInteger)arg0 ;
+(BOOL)supportsFrontCameraFaceAnchors;
+(BOOL)supportsSceneReconstruction:(NSUInteger)arg0 ;
+(BOOL)supportsUserFaceTracking;
+(id)_querySupportedVideoFormats;
+(id)_querySupportedVideoFormatsForUltraWide;
+(id)_querySupportedVideoFormatsForUserFaceTracking;
+(id)new;
+(id)supportedVideoFormats;
+(id)supportedVideoFormatsForUltraWide;
+(id)supportedVideoFormatsForUserFaceTracking;
+(void)setShouldProvide30FPSVideoFormats:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldEnableVisionDataForImageSensorSettings:(id)arg0 ;
-(BOOL)shouldUseJasper;
-(BOOL)shouldUseUltraWide;
-(NSInteger)_depthPrioritization;
-(id)_trackingOptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)imageSensorSettings;
-(id)imageSensorSettingsForUserFaceTracking;
-(id)init;
-(id)parentImageSensorSettings;
-(id)secondaryTechniques;
-(void)createTechniques:(id)arg0 ;
-(void)setFrontCameraFaceAnchorsEnabled:(BOOL)arg0 ;


@end


#endif