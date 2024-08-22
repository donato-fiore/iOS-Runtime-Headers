// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMMOTIONCONTEXTSESSION_H
#define CMMOTIONCONTEXTSESSION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMMotionContextSession : NSObject {
    unique_ptr<CMMotionContextLogger, std::default_delete<CMMotionContextLogger>> _logger;
    BOOL _logMSL;
    *Dispatcher _deviceMotionDispatcher;
    *Dispatcher _accessoryDeviceMotionDispatcher;
    *Dispatcher _accessoryDeviceMotionConfigDispatcher;
    CMPdr _pdr;
    CMAccessoryActivity _accessoryActivity;
    int _motionContextState;
    BOOL _drawPositionOnStart;
    PdrResults _result;
    float _totalSessionTime;
    int _auxSampleCounter;
    CGFloat _currentTime;
    NSObject<OS_dispatch_queue> *_stepCountClientQueue;
    id *_stepCountClientHandler;
    NSObject<OS_dispatch_queue> *_pdrClientQueue;
    id *_pdrClientHandler;
    CMVector<double, 2UL> _prevPDRPosition;
    NSObject<OS_dispatch_queue> *_motionContextClientQueue;
    id *_motionContextClientHandler;
    unique_ptr<CMPdrMLModel, std::default_delete<CMPdrMLModel>> hmlModel;
    BOOL _enableMLModel;
    unique_ptr<CMMotionContextSessionAnalyticsTracker, std::default_delete<CMMotionContextSessionAnalyticsTracker>> _analyticsTracker;
    float _distanceTravelledPerDVEvent;
    int _stepCountPerDVEvent;
    CGFloat _distractedViewingEnterTime;
    CMVector<double, 2UL> _initialPosition;
    float _initialHeadingDegrees;
    BOOL _inDVEvent;
    int _lastTrackingDisableRoute;
}




+(BOOL)isAvailable;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(void)enableMLModel:(BOOL)arg0 ;
-(void)enterDistractedViewingSession:(int)arg0 ;
-(void)exitDistractedViewingSession:(int)arg0 ;
-(void)feedARKitWorldPoseWithTimestamp:(CGFloat)arg0 pose:(struct ? )arg1 status:(int)arg2 ;
-(void)feedAccessoryConfig:(*void)arg0 ;
-(void)feedAudioAccessoryIMU:(*void)arg0 ;
-(void)feedGPSLocationWithTimestamp:(CGFloat)arg0 course:(CGFloat)arg1 speed:(CGFloat)arg2 latitude:(CGFloat)arg3 longitude:(CGFloat)arg4 horizontalAccuracy:(CGFloat)arg5 ;
-(void)feedSourceDeviceIMU:(struct Sample *)arg0 ;
-(void)initLoggerWithPrefix:(id)arg0 filePath:(id)arg1 ;
-(void)notifyMotionContextClient:(int)arg0 ;
-(void)notifyPdrClient:(*void)arg0 ;
-(void)notifyStepCountClient:(*void)arg0 ;
-(void)setAlgType:(int)arg0 ;
-(void)setSpeedEstType:(int)arg0 ;
-(void)setTrackingClientMode:(int)arg0 ;
-(void)start;
-(void)startMotionContextUpdatesToQueue:(id)arg0 andHandler:(id)arg1 ;
-(void)startPdrUpdatesToQueue:(id)arg0 andHandler:(id)arg1 ;
-(void)startStepCountUpdatesToQueue:(id)arg0 andHandler:(id)arg1 ;
-(void)stop;


@end


#endif