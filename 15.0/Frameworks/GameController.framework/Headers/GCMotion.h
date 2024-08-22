// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCMOTION_H
#define GCMOTION_H

@class NSString;
@protocol _GCMotionEventSink, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCController.h"

@interface GCMotion : NSObject <_GCMotionEventSink, NSSecureCoding>

 {
    id *_motionEventObservation;
    ? _acceleration;
    GCQuaternion _prevAttitude;
    ? _eulerAngles;
    ? _prevEulerAngles;
    float _tip;
    float _tilt;
    BOOL _motionLite;
    BOOL _compassEnabled;
    BOOL _hasAttitude;
    BOOL _hasRotationRate;
    id *_valueChangedHandler;
    id<NSObject><NSCopying><NSSecureCoding> *_identifier;
}


@property (readonly, nonatomic) ? acceleration;
@property (readonly, nonatomic) GCQuaternion attitude; // ivar: _attitude
@property (readonly, weak, nonatomic) GCController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? gravity; // ivar: _gravity
@property (readonly, nonatomic) BOOL hasAttitude;
@property (readonly, nonatomic) BOOL hasAttitudeAndRotationRate;
@property (readonly, nonatomic) BOOL hasGravityAndUserAcceleration;
@property (readonly, nonatomic) BOOL hasRotationRate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? rotationRate; // ivar: _rotationRate
@property (nonatomic) BOOL sensorsActive; // ivar: _sensorsActive
@property (readonly, nonatomic) BOOL sensorsRequireManualActivation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? userAcceleration; // ivar: _userAcceleration
@property (copy, nonatomic) id *valueChangedHandler;


+(BOOL)supportsSecureCoding;
-(BOOL)_isUpdatingDeviceMotion;
-(BOOL)isEmulatedMicroGamepad;
-(float)_tilt;
-(float)_tip;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_pauseMotionUpdates:(BOOL)arg0 ;
-(void)_setCompassEnabled:(BOOL)arg0 ;
-(void)_setMotionLite:(BOOL)arg0 ;
-(void)_startDeviceMotionUpdates;
-(void)_stopDeviceMotionUpdates;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMotionEventSource:(id)arg0 ;
-(void)setStateFromMotion:(id)arg0 ;


@end


#endif