// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARWORLDTRACKINGOPTIONS_H
#define ARWORLDTRACKINGOPTIONS_H

@class NSMutableDictionary, NSString, NSDictionary, NSNumber;
@protocol NSCopying, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "ARImageSensorSettings.h"
#import "ARWorldMap.h"
#import "ARSceneReconstructionOptions.h"

@interface ARWorldTrackingOptions : NSObject <NSCopying>

 {
    NSMutableDictionary *_activeVideoFormatsMap;
    NSObject<OS_dispatch_semaphore> *_activeVideoFormatsSemaphore;
    NSString *_slamConfigurationPreset;
}


@property (readonly, nonatomic) NSDictionary *activeVideoFormatsMap;
@property (nonatomic) BOOL alwaysUsePrimaryCameraForTracking; // ivar: _alwaysUsePrimaryCameraForTracking
@property (nonatomic, getter=isCollaborationEnabled) BOOL collaborationEnabled; // ivar: _collaborationEnabled
@property (nonatomic) BOOL depthBuffersWillBeProvided; // ivar: _depthBuffersWillBeProvided
@property (nonatomic) BOOL deterministicMode; // ivar: _deterministicMode
@property (copy, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (copy, nonatomic) ARImageSensorSettings *imageSensorSettings; // ivar: _imageSensorSettings
@property (copy, nonatomic) ARImageSensorSettings *imageSensorSettingsForUltraWide; // ivar: _imageSensorSettingsForUltraWide
@property (copy, nonatomic) ARWorldMap *initialWorldMap; // ivar: _initialWorldMap
@property (nonatomic) BOOL lowQosSchedulingEnabled; // ivar: _lowQosSchedulingEnabled
@property (nonatomic) CGFloat minVergenceAngle; // ivar: _minVergenceAngle
@property (nonatomic) BOOL mlModelEnabled; // ivar: _mlModelEnabled
@property (nonatomic) NSUInteger planeDetection; // ivar: _planeDetection
@property (nonatomic) BOOL planeEstimationShouldUseJasperData; // ivar: _planeEstimationShouldUseJasperData
@property (nonatomic) BOOL recordForGeoTracking; // ivar: _recordForGeoTracking
@property (nonatomic) BOOL relocalizationEnabled; // ivar: _relocalizationEnabled
@property (nonatomic) NSUInteger sceneReconstruction; // ivar: _sceneReconstruction
@property (retain, nonatomic) ARSceneReconstructionOptions *sceneReconstructionOptions; // ivar: _sceneReconstructionOptions
@property (copy, nonatomic) NSString *slamConfiguration;
@property (retain, nonatomic) NSNumber *vioSessionID; // ivar: _vioSessionID


-(?)createSLAMCalibration;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldUseUltraWide;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithImageSensorSettings:(id)arg0 ;
-(int)setupCameraCalibration:(struct CV3DSLAMCalibration **)arg0 forImageSensorSettings:(id)arg1 deviceModel:(int)arg2 ;
-(unsigned int)cameraIdForCaptureDeviceType:(id)arg0 ;
-(void)createSLAMConfig:(struct CV3DSLAMConfig **)arg0 calibration:(struct CV3DSLAMCalibration *)arg1 ;
-(void)updateCameraMap;


@end


#endif