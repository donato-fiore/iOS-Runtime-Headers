// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCMOTIONEVENTIMPL_H
#define _GCMOTIONEVENTIMPL_H

@class NSString;
@protocol _GCMotionEvent;

#import <Foundation/Foundation.h>


@interface _GCMotionEventImpl : NSObject <_GCMotionEvent>



@property (nonatomic) CGFloat accelerometerX; // ivar: _accelerometerX
@property (nonatomic) CGFloat accelerometerY; // ivar: _accelerometerY
@property (nonatomic) CGFloat accelerometerZ; // ivar: _accelerometerZ
@property (nonatomic) CGFloat attitudeW; // ivar: _attitudeW
@property (nonatomic) CGFloat attitudeX; // ivar: _attitudeX
@property (nonatomic) CGFloat attitudeY; // ivar: _attitudeY
@property (nonatomic) CGFloat attitudeZ; // ivar: _attitudeZ
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat gyroPitch; // ivar: _gyroPitch
@property (nonatomic) CGFloat gyroRoll; // ivar: _gyroRoll
@property (nonatomic) CGFloat gyroYaw; // ivar: _gyroYaw
@property (nonatomic) BOOL hasAccelerometer; // ivar: _hasAccelerometer
@property (nonatomic) BOOL hasAttitude; // ivar: _hasAttitude
@property (nonatomic) BOOL hasGyro; // ivar: _hasGyro
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMotionEvent:(id)arg0 ;


@end


#endif