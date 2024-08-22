// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRBTCOREANALYTICS_H
#define PRBTCOREANALYTICS_H

@class NSString, AKAppleIDSession, NSNumber, NSDictionary, NSUUID, NSURLSession;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PRBTProximityMeasurement.h"
#import "CABTRunData.h"
#import "CABTSessionData.h"

@interface PRBTCoreAnalytics : NSObject {
    NSObject<OS_os_log> *_logger;
}


@property (retain, nonatomic) NSString *authHeaderValue; // ivar: _authHeaderValue
@property (retain, nonatomic) AKAppleIDSession *authSession; // ivar: _authSession
@property (retain, nonatomic) NSNumber *btRssiEstimate; // ivar: _btRssiEstimate
@property (retain) NSDictionary *customData; // ivar: _customData
@property (nonatomic) NSInteger eventNumber; // ivar: _eventNumber
@property (retain, nonatomic) PRBTProximityMeasurement *latestProximityLevel; // ivar: _latestProximityLevel
@property (retain, nonatomic) NSNumber *numberOfMeasurements; // ivar: _numberOfMeasurements
@property (retain, nonatomic) NSNumber *numberOfPoses; // ivar: _numberOfPoses
@property (retain, nonatomic) NSUUID *productUUID; // ivar: _productUUID
@property (retain, nonatomic) CABTRunData *runData; // ivar: _runData
@property (retain, nonatomic) NSUUID *runId; // ivar: _runId
@property (retain, nonatomic) CABTSessionData *sessionData; // ivar: _sessionData
@property (retain, nonatomic) NSUUID *sessionId; // ivar: _sessionId
@property (nonatomic) BOOL shouldLogEnteredArmsReachEvent; // ivar: _shouldLogEnteredArmsReachEvent
@property (nonatomic) BOOL shouldLogMotionEvent; // ivar: _shouldLogMotionEvent
@property (nonatomic) BOOL shouldLogProximityLevelFoundEvent; // ivar: _shouldLogProximityLevelFoundEvent
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (retain, nonatomic) NSNumber *traveledDistance; // ivar: _traveledDistance
@property (retain, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


+(BOOL)isInternalBuild;
-(BOOL)isRunning;
-(id)eventDictionaryWithEvent:(id)arg0 ;
-(id)init;
-(void)addLatestProximityLevel:(id)arg0 ;
-(void)configureComplete:(int)arg0 ;
-(void)configureSession:(BOOL)arg0 withProductUUID:(id)arg1 ;
-(void)deinit;
-(void)invalidPoseDetected;
-(void)rangingFailedWithError:(id)arg0 ;
-(void)resetState;
-(void)revokeProximityLevel;
-(void)sendAnalyticsEvent:(id)arg0 ;
-(void)sendLiveOnAnalytics:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)targetMovingStateChanged:(BOOL)arg0 ;
-(void)updateWithProximityLevel:(id)arg0 ;
-(void)updateWithRssiMeasurement:(id)arg0 ;


@end


#endif