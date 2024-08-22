// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARWORLDALIGNMENTTECHNIQUE_H
#define ARWORLDALIGNMENTTECHNIQUE_H

@class CMMotionManager;
@protocol OS_dispatch_semaphore;


#import "ARTechnique.h"
#import "ARTimeKeyedList.h"
#import "ARWorldAlignmentData.h"

@interface ARWorldAlignmentTechnique : ARTechnique {
    ARTimeKeyedList *_deviceOrientationDataByTime;
    float _deviceOrientationAlignmentAngle;
    float _trackingAlignmentAngle;
    ? _trackingAlignmentTranslation;
    BOOL _deviceOrientationReferenced;
    BOOL _trackingReferenced;
    BOOL _imageMirrored;
    NSInteger _lastTrackingStateReason;
    CGFloat _lastMajorRelocalizationTimestamp;
    CGFloat _lastHeadingUpdateTimestamp;
    BOOL _relocalizing;
    ARWorldAlignmentData *_relocalizedAlignmentData;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
}


@property (readonly, nonatomic) NSInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) NSInteger cameraPosition; // ivar: _cameraPosition
@property (retain, nonatomic) CMMotionManager *motionManager; // ivar: _motionManager


-(BOOL)isBusy;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)optionalSensorDataTypes;
-(float)_trackingAlignmentAngleForPoseData:(id)arg0 deviceOrientation:(id)arg1 ;
-(id)_deviceOrientationPoseDataFromDeviceOrientation:(id)arg0 ;
-(id)_fullDescription;
-(id)_referenceTrackingAlignmentWithPoseData:(id)arg0 deviceOrientation:(id)arg1 ;
-(id)_updateHeadingAlignmentWithPoseData:(id)arg0 deviceOrientation:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithAlignment:(NSInteger)arg0 ;
-(id)initWithAlignment:(NSInteger)arg0 cameraPosition:(NSInteger)arg1 ;
-(id)predictedResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(id)processData:(id)arg0 ;
-(id)resultDataClasses;
-(void)_handleTrackingStateChanges:(id)arg0 initialized:(*BOOL)arg1 relocalized:(*BOOL)arg2 ;
-(void)_referenceDeviceOrientation:(id)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif