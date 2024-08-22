// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRFINDMYCOREANALYTICS_H
#define PRFINDMYCOREANALYTICS_H

@class NSString, AKAppleIDSession, NSDictionary, NSNumber, NSUUID, NSURLSession;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PRTargetEstimate.h"
#import "PRPose.h"
#import "CARunData.h"
#import "CASessionData.h"

@interface PRFindMyCoreAnalytics : NSObject {
    NSObject<OS_os_log> *_logger;
}


@property (retain, nonatomic) NSString *authHeaderValue; // ivar: _authHeaderValue
@property (retain, nonatomic) AKAppleIDSession *authSession; // ivar: _authSession
@property (retain) NSDictionary *customData; // ivar: _customData
@property (nonatomic) NSInteger eventNumber; // ivar: _eventNumber
@property (retain, nonatomic) PRTargetEstimate *latestTarget; // ivar: _latestTarget
@property (retain, nonatomic) NSNumber *numberOfPoses; // ivar: _numberOfPoses
@property (retain, nonatomic) NSNumber *numberOfRanges; // ivar: _numberOfRanges
@property (retain, nonatomic) PRPose *oldPreviousPoseOfUser; // ivar: _oldPreviousPoseOfUser
@property (retain, nonatomic) PRPose *previousPose; // ivar: _previousPose
@property (retain, nonatomic) PRPose *previousPoseOfUser; // ivar: _previousPoseOfUser
@property (retain, nonatomic) NSNumber *rangeEstimate; // ivar: _rangeEstimate
@property (retain, nonatomic) CARunData *runData; // ivar: _runData
@property (retain, nonatomic) NSUUID *runId; // ivar: _runId
@property (retain, nonatomic) CASessionData *sessionData; // ivar: _sessionData
@property (retain, nonatomic) NSUUID *sessionId; // ivar: _sessionId
@property (nonatomic) BOOL shouldLogEnteredArmsReachEvent; // ivar: _shouldLogEnteredArmsReachEvent
@property (nonatomic) BOOL shouldLogMotionEvent; // ivar: _shouldLogMotionEvent
@property (nonatomic) BOOL shouldLogTargetFoundEvent; // ivar: _shouldLogTargetFoundEvent
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (retain, nonatomic) NSNumber *traveledDistance; // ivar: _traveledDistance
@property (retain, nonatomic) NSNumber *traveledDistanceOfUser; // ivar: _traveledDistanceOfUser
@property (retain, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


+(BOOL)isInternalBuild;
-(BOOL)isRunning;
-(id)eventDictionaryWithEvent:(id)arg0 ;
-(id)init;
-(void)addLatestTarget:(id)arg0 ;
-(void)configureComplete;
-(void)configureSession;
-(void)deinit;
-(void)firstArrowFromAoA;
-(void)firstArrowFromRange;
-(void)invalidPoseDetected;
-(void)rangingFailedWithError:(id)arg0 ;
-(void)resetState;
-(void)revokeRangeEstimate;
-(void)sendAnalyticsEvent:(id)arg0 ;
-(void)sendLiveOnAnalytics:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)targetComputed:(id)arg0 ;
-(void)targetMovingStateChanged:(BOOL)arg0 ;
-(void)targetRevokedWithReason:(NSUInteger)arg0 ;
-(void)torchButtonPresented;
-(void)torchChangedState:(BOOL)arg0 ;
-(void)updateTravelDistanceWithPose:(id)arg0 ;
-(void)updateWithRangeEstimate:(id)arg0 ;


@end


#endif