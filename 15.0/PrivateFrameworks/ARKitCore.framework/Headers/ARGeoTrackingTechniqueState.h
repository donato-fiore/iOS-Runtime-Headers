// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARGEOTRACKINGTECHNIQUESTATE_H
#define ARGEOTRACKINGTECHNIQUESTATE_H

@class VLLocalizer, NSMutableArray;

#import <Foundation/Foundation.h>

#import "ARGeoTrackingConsensusAndAverageFilter.h"
#import "ARCircularArray.h"
#import "ARLocationData.h"
#import "ARGeoTrackingGradualCorrectionFilter.h"
#import "ARDeviceOrientationData.h"

@interface ARGeoTrackingTechniqueState : NSObject {
    os_unfair_lock_s _enuFromVIOLock;
    os_unfair_lock_s _vioPoseBufferLock;
    os_unfair_lock_s _deviceMotionBufferLock;
    ? _lastLoggedVioPosition;
}


@property (retain, nonatomic) VLLocalizer *VLHandle; // ivar: _VLHandle
@property (retain, nonatomic) ARGeoTrackingConsensusAndAverageFilter *consensusAverageFilter; // ivar: _consensusAverageFilter
@property (retain, nonatomic) ARCircularArray *deviceMotionCircularBuffer; // ivar: _deviceMotionCircularBuffer
@property (nonatomic) ? enuFromVIO; // ivar: _enuFromVIO
@property (retain) ARLocationData *enuOrigin; // ivar: _enuOrigin
@property (nonatomic) NSInteger failureLogCount; // ivar: _failureLogCount
@property NSInteger failureReasons; // ivar: _failureReasons
@property (nonatomic) CGFloat firstVLExecutionAttemptTimestamp; // ivar: _firstVLExecutionAttemptTimestamp
@property (retain, nonatomic) ARGeoTrackingGradualCorrectionFilter *gradualCorrectionFilter; // ivar: _gradualCorrectionFilter
@property (nonatomic) BOOL hasStartedAvailabilityCheck; // ivar: _hasStartedAvailabilityCheck
@property (retain) ARLocationData *lastCLLocation; // ivar: _lastCLLocation
@property (retain) ARDeviceOrientationData *lastCMDeviceMotion; // ivar: _lastCMDeviceMotion
@property (nonatomic) CGFloat lastGradualCorrectionTime; // ivar: _lastGradualCorrectionTime
@property (retain, nonatomic) ARLocationData *lastLocationProcessedForFusion; // ivar: _lastLocationProcessedForFusion
@property (nonatomic) NSInteger lastLoggedFailureReasons; // ivar: _lastLoggedFailureReasons
@property ? lastLoggedVioPosition;
@property (nonatomic) CGFloat lastLoggedVioTimestamp; // ivar: _lastLoggedVioTimestamp
@property (nonatomic) CGFloat lastPoseOriginTimestamp; // ivar: _lastPoseOriginTimestamp
@property (nonatomic) CGFloat lastVLExecutionAttemptTimestamp; // ivar: _lastVLExecutionAttemptTimestamp
@property CGFloat lastVLExecutionTimestamp; // ivar: _lastVLExecutionTimestamp
@property (nonatomic) int poseOkCount; // ivar: _poseOkCount
@property (nonatomic) NSInteger resetCount; // ivar: _resetCount
@property (retain, nonatomic) NSMutableArray *resultDatas; // ivar: _resultDatas
@property NSInteger trackingAccuracy; // ivar: _trackingAccuracy
@property NSInteger trackingState; // ivar: _trackingState
@property (retain, nonatomic) ARCircularArray *vioPoseCircularBuffer; // ivar: _vioPoseCircularBuffer


+(id)_findClosestDataToTimestamp:(CGFloat)arg0 inBuffer:(id)arg1 ;
-(id)findClosestDeviceMotionDataToTimestamp:(CGFloat)arg0 ;
-(id)findClosestVioPoseToTimestamp:(CGFloat)arg0 ;
-(void)addDeviceMotionData:(id)arg0 ;
-(void)addFailureReason:(NSInteger)arg0 ;
-(void)addVioPoseData:(id)arg0 ;
-(void)removeFailureReason:(NSInteger)arg0 ;


@end


#endif