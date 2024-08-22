// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARSESSIONMETRICS_H
#define ARSESSIONMETRICS_H

@class NSDate, NSArray, CLLocation;
@protocol ARSessionMetricsReporting;

#import <Foundation/Foundation.h>

#import "ARConfiguration.h"

@interface ARSessionMetrics : NSObject {
    id<ARSessionMetricsReporting> *_reporter;
    BOOL _isAutoFocusEnabled;
    BOOL _sessionWasThrottled;
    float _timeUntilThrottling;
    float _badFramePercentage10;
    float _badFramePercentage60;
    float _badFramePercentageMoreThan60;
    Class _configClass;
    ARConfiguration *_currentConfiguration;
    NSDate *_startDate;
    NSDate *_frameStartDate;
    CGFloat _sessionTimeForLastBadFrameRecording;
    BOOL _initializingVIO;
    NSUInteger _frameCount;
    NSUInteger _badFrameCount;
    CGFloat _vioInitializationTime;
    BOOL _positionInitialized;
    ? _minPos;
    ? _maxPos;
    NSArray *_lastUpdatedFrameAnchors;
    CLLocation *_lastUpdatedFrameLocation;
    NSUInteger _currentVIOMapSize;
    NSUInteger _numberOfCameraSwitches;
    NSUInteger _numberOfReinitializationAttempts;
    BOOL _hasInitialWorldMap;
    BOOL _relocalizingToInitialWorldMap;
    BOOL _sessionDidFailWithError;
    NSUInteger _raycastCount;
    NSUInteger _hiResFrameCaptureCount;
    NSInteger _coachingOverlayGoal;
    NSUInteger _coachingOverlayActivationCount;
    BOOL _geoTrackingLocalized;
    BOOL _geoTrackingTrueNorthUnavailable;
    CGFloat _geoTrackingInitializationTime;
    CGFloat _geoTrackingLocalizationTime;
    NSUInteger _geoTrackingLowAccuracyFrameCount;
    NSUInteger _geoTrackingMediumAccuracyFrameCount;
    NSUInteger _geoTrackingHighAccuracyFrameCount;
    NSUInteger _geoTrackingLocalizationCount;
    NSInteger _geoTrackingFailureReason;
    CGFloat _geoTrackingClFirstGps;
    CGFloat _geoTrackingClFirstNonGps;
    CGFloat _geoTrackingClFirstDem;
    CGFloat _geoTrackingAngleFirstUp;
    CGFloat _geoTrackingAngleBackToDown;
    CGFloat _geoTrackingVlBeforeAvailabilityCall;
    CGFloat _geoTrackingVlAfterAvailabilityCall;
    CGFloat _geoTrackingVlBeforeLocalizationCall;
    CGFloat _geoTrackingVlAfterLocalizationCall;
    CGFloat _geoTrackingVlFirstNonLocalized;
    CGFloat _geoTrackingVioFirstPose;
    CGFloat _geoTrackingVioFirstNormalPose;
    CGFloat _geoTrackingVioBackToLimited;
    CGFloat _geoTrackingFirstImage;
}




+(id)getRenderEngineString:(id)arg0 ;
+(void)recordAltitudeLookupAttemptWithDuration:(CGFloat)arg0 andResult:(id)arg1 ;
+(void)recordHitTest:(NSUInteger)arg0 ;
+(void)recordReplayMetrics:(id)arg0 ;
+(void)setRenderType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithReporter:(id)arg0 ;
-(id)queue;
-(void)_processFrameProperties:(id)arg0 ;
-(void)_recordBadFramePercentageFinal:(BOOL)arg0 ;
-(void)_recordSessionEnd;
-(void)recordCoachingOverlayUsage:(int)arg0 ;
-(void)recordHiResFrameCapture;
-(void)recordRaycast:(id)arg0 tracked:(BOOL)arg1 ;
-(void)recordSaveMap:(NSInteger)arg0 numberOfFeaturePoints:(NSUInteger)arg1 ;
-(void)recordTrueNorthUnavailable;
-(void)reportSessionFailure:(id)arg0 ;
-(void)sessionDidUpdateFrame:(id)arg0 ;
-(void)sessionStarted:(id)arg0 withConfiguration:(id)arg1 ;
-(void)sessionStopped;
-(void)sessionUpdateThermalState:(NSInteger)arg0 ;


@end


#endif