// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCAPPLETVREMOTEMOTIONPROFILE_H
#define _GCAPPLETVREMOTEMOTIONPROFILE_H

@class CMMotionManager;


#import "GCMotion.h"
#import "GCController.h"

@interface _GCAppleTVRemoteMotionProfile : GCMotion {
    ? _gravity;
    ? _prevGravity;
    ? _userAcceleration;
    GCQuaternion _attitude;
    GCQuaternion _prevAttitude;
    ? _eulerAngles;
    ? _prevEulerAngles;
    ? _rotationRate;
    float _tip;
    float _tilt;
    CMMotionManager *_motionMgr;
    BOOL _linkedOnOrAfterCompassFeature;
    BOOL _motionLite;
    BOOL _compassEnabled;
    id *_valueChangedHandler;
    id *_internalValueChangedHandler;
    BOOL _emulatedMotionEnabled;
    BOOL _motionUpdatedEnabled;
    BOOL _paused;
    GCController *_controller;
}




-(BOOL)_isUpdatingDeviceMotion;
-(BOOL)hasAttitude;
-(BOOL)hasAttitudeAndRotationRate;
-(BOOL)hasGravityAndUserAcceleration;
-(BOOL)hasRotationRate;
-(BOOL)isEmulatedMicroGamepad;
-(float)_tilt;
-(float)_tip;
-(id)_motionLiteFusedHandler:(SEL)arg0 ;
-(id)controller;
-(id)initWithController:(id)arg0 ;
-(id)internalValueChangedHandler:(SEL)arg0 ;
-(id)valueChangedHandler:(SEL)arg0 ;
-(struct ? )gravity;
-(struct ? )rotationRate;
-(struct ? )userAcceleration;
-(struct GCQuaternion )attitude;
-(void)_pauseMotionUpdates:(BOOL)arg0 ;
-(void)_setAttitude:(struct GCQuaternion )arg0 ;
-(void)_setCompassEnabled:(BOOL)arg0 ;
-(void)_setGravity:(struct ? )arg0 ;
-(void)_setMotionLite:(BOOL)arg0 ;
-(void)_setRotationRate:(struct ? )arg0 ;
-(void)_setUserAcceleration:(struct ? )arg0 ;
-(void)_startDeviceMotionUpdates;
-(void)_startDeviceMotionUpdatesHelper;
-(void)_stopDeviceMotionUpdates;
-(void)_stopDeviceMotionUpdatesHelper;
-(void)setInternalValueChangedHandler:(id)arg0 ;
-(void)setValueChangedHandler:(id)arg0 ;


@end


#endif