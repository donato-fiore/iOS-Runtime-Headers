// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDEVICEMOTIONPREDICTOR_H
#define REDEVICEMOTIONPREDICTOR_H

@class CMMotionActivityManager, CMMotionActivity;
@protocol REDeviceMotionPredictorProperties;


#import "REPredictor.h"
#import "REUpNextScheduler.h"

@interface REDeviceMotionPredictor : REPredictor <REDeviceMotionPredictorProperties>

 {
    CMMotionActivityManager *_activityManager;
    REUpNextScheduler *_scheduler;
    CMMotionActivity *_lastActivity;
}


@property (readonly, nonatomic) CMMotionActivityManager *activityManager;
@property NSUInteger motionType; // ivar: _motionType
@property (getter=isStationary) BOOL stationary; // ivar: _stationary


+(id)supportedFeatures;
-(id)_init;
-(id)featureValueForFeature:(id)arg0 element:(id)arg1 engine:(id)arg2 trainingContext:(id)arg3 ;
-(void)_updateWithActivity:(id)arg0 ;
-(void)pause;
-(void)resume;


@end


#endif