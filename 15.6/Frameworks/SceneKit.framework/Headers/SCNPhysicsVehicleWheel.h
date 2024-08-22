// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNPHYSICSVEHICLEWHEEL_H
#define SCNPHYSICSVEHICLEWHEEL_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCNNode.h"
#import "SCNPhysicsVehicle.h"

@interface SCNPhysicsVehicleWheel : NSObject <NSCopying, NSSecureCoding>

 {
    SCNNode *_node;
    SCNPhysicsVehicle *_vehicle;
    int _wheelIndex;
    CGFloat _suspensionStiffness;
    CGFloat _suspensionCompression;
    CGFloat _suspensionDamping;
    CGFloat _maximumSuspensionTravel;
    CGFloat _frictionSlip;
    CGFloat _maximumSuspensionForce;
    SCNVector3 _connectionPosition;
    SCNVector3 _steeringAxis;
    SCNVector3 _axle;
    CGFloat _radius;
    CGFloat _suspensionRestLength;
    BOOL _isFront;
}


@property SCNVector3 axle;
@property SCNVector3 connectionPosition;
@property CGFloat frictionSlip;
@property CGFloat maximumSuspensionForce;
@property CGFloat maximumSuspensionTravel;
@property (readonly) SCNNode *node;
@property CGFloat radius;
@property SCNVector3 steeringAxis;
@property CGFloat suspensionCompression;
@property CGFloat suspensionDamping;
@property CGFloat suspensionRestLength;
@property CGFloat suspensionStiffness;


+(BOOL)supportsSecureCoding;
+(id)wheelWithNode:(id)arg0 ;
-(BOOL)isFront;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_setVehicle:(id)arg0 ;
-(void)_setWheelIndex:(int)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setIsFront:(BOOL)arg0 ;


@end


#endif