// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRITEMLOCALIZER_H
#define PRITEMLOCALIZER_H

@class NSOperationQueue, NSDictionary, NSString, CMMotionActivityManager, PRRoseSolution, NSTimer, PRRemoteDevice, PRCompanionRangingSession, NSMutableArray;
@protocol PRDevicePoseProviderDelegate, PRGenericRangingSessionDelegate, OS_os_log, PRItemLocalizerDataRecorder, PRItemLocalizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PRFindMyCoreAnalytics.h"
#import "PRDevicePoseProvider.h"

@interface PRItemLocalizer : NSObject <PRDevicePoseProviderDelegate, PRGenericRangingSessionDelegate>

 {
    unique_ptr<RoseSyntheticApertureFiltering::PRRoseSyntheticApertureBatchFilter, std::default_delete<RoseSyntheticApertureFiltering::PRRoseSyntheticApertureBatchFilter>> _itemLocationFilter;
    unique_ptr<RoseSyntheticApertureFiltering::PRRoseRangeFilter, std::default_delete<RoseSyntheticApertureFiltering::PRRoseRangeFilter>> _rangeFilter;
    NSObject<OS_os_log> *_logger;
    int _clientState;
    int _rangingState;
    CGFloat _lastSuccessfulCompanionCommunicationOrInitMachContinuousTimeSeconds;
    BatchSolution _lastSolution;
}


@property (retain, nonatomic) NSOperationQueue *activityQueue; // ivar: _activityQueue
@property (retain, nonatomic) PRFindMyCoreAnalytics *analytics; // ivar: _analytics
@property (retain, nonatomic) NSDictionary *configurationParameters; // ivar: _configurationParameters
@property (retain, nonatomic) NSObject<PRItemLocalizerDataRecorder> *dataRecorder; // ivar: _dataRecorder
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRItemLocalizerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CMMotionActivityManager *deviceActivityManager; // ivar: _deviceActivityManager
@property BOOL deviceIsMoving; // ivar: _deviceIsMoving
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *estimatorQueue; // ivar: _estimatorQueue
@property (nonatomic) BOOL firstAoAArrow; // ivar: _firstAoAArrow
@property (nonatomic) BOOL firstRangeArrow; // ivar: _firstRangeArrow
@property (readonly) NSUInteger hash;
@property ? lastSolution;
@property (retain, nonatomic) PRRoseSolution *latestProximity; // ivar: _latestProximity
@property (retain, nonatomic) NSTimer *movementTimer; // ivar: _movementTimer
@property BOOL pathIsDegenerate; // ivar: _pathIsDegenerate
@property (retain, nonatomic) PRDevicePoseProvider *poseProvider; // ivar: _poseProvider
@property (nonatomic) CGFloat previousVIOPoseTime; // ivar: _previousVIOPoseTime
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *proximityQueue; // ivar: _proximityQueue
@property (retain, nonatomic) PRRemoteDevice *remoteDevice; // ivar: _remoteDevice
@property (retain, nonatomic) PRCompanionRangingSession *session; // ivar: _session
@property (readonly) Class superclass;
@property BOOL targetIsMoving; // ivar: _targetIsMoving
@property (retain, nonatomic) NSMutableArray *trajectory; // ivar: _trajectory


-(BOOL)commonConfigure:(id)arg0 ;
-(BOOL)configureForDeviceWithId:(id)arg0 ;
-(BOOL)startWithDevicePoseProvider:(id)arg0 error:(*id)arg1 ;
-(BOOL)stop:(*id)arg0 ;
-(NSUInteger)trajectoryIndexForTime:(CGFloat)arg0 ;
-(id)estimatorInputForProximity:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)performRangeFilteringWithVIO:(id)arg0 ;
-(id)performRangeFilteringWithoutVIO:(id)arg0 targetMoving:(BOOL)arg1 deviceMoving:(BOOL)arg2 ;
-(id)produceBlendedRangeEstimateForPose:(id)arg0 ;
-(struct BatchSolution )performLocationFiltering:(id)arg0 ;
-(void)analyticsLogTorchChangedState:(BOOL)arg0 ;
-(void)deleteTrajectoryWaypointsBeforeTime:(CGFloat)arg0 ;
-(void)devicePoseUpdated:(id)arg0 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didReceiveNewSolutions:(id)arg0 ;
-(void)logAndPresentSolution:(struct BatchSolution )arg0 withTimeStamp:(CGFloat)arg1 ;
-(void)logEstimatorInput:(id)arg0 ;
-(void)logRangeEstimate:(id)arg0 ;
-(void)logTargetEstimates:(id)arg0 ;
-(void)logTargetIsMovingChange:(BOOL)arg0 ;
-(void)performFilteringWithEstimatorInput:(id)arg0 targetMoving:(BOOL)arg1 deviceMoving:(BOOL)arg2 ;
-(void)presentRangeEstimate:(id)arg0 ;
-(void)presentTargetEstimate:(id)arg0 ;
-(void)rangingRequestDidUpdateStatus:(NSUInteger)arg0 ;
-(void)rangingServiceDidUpdateState:(NSUInteger)arg0 cause:(NSInteger)arg1 ;
-(void)remoteDevice:(id)arg0 didChangeState:(NSInteger)arg1 ;
-(void)revokeRangeOrAoATargetEstimate:(struct BatchSolution )arg0 ;
-(void)revokeTargetEstimate:(NSUInteger)arg0 ;
-(void)sendItemLocalizerChangedActivity:(NSUInteger)arg0 ;
-(void)sendItemLocalizerChangedState:(NSUInteger)arg0 ;
-(void)sendPRItemState:(NSUInteger)arg0 ;
-(void)updateDelegateWithSelector:(SEL)arg0 object:(id)arg1 ;


@end


#endif