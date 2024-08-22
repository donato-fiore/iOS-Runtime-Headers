// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNPHYSICSVEHICLE_H
#define SCNPHYSICSVEHICLE_H

@class NSArray;


#import "SCNPhysicsBehavior.h"
#import "SCNPhysicsBody.h"
#import "SCNPhysicsWorld.h"

@interface SCNPhysicsVehicle : SCNPhysicsBehavior {
    SCNPhysicsBody *_chassisBody;
    NSArray *_wheels;
    SCNPhysicsWorld *_world;
    *void _vehicle;
    CGFloat _speedKmHour;
}


@property (readonly, nonatomic) SCNPhysicsBody *chassisBody;
@property (readonly, nonatomic) CGFloat speedInKilometersPerHour;
@property (readonly, nonatomic) NSArray *wheels;


+(BOOL)supportsSecureCoding;
+(id)vehicleWithChassisBody:(id)arg0 wheels:(id)arg1 ;
-(*void)btVehicle;
-(BOOL)hasReferenceToPhysicsBody:(id)arg0 ;
-(id)initWithChassisBody:(id)arg0 wheels:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)physicsWorld;
-(id)valueForKeyPath:(id)arg0 ;
-(id)wheelAtIndex:(NSUInteger)arg0 ;
-(void)_addToPhysicsWorld:(id)arg0 definition:(struct ? )arg1 ;
-(void)_copyDefinition:(struct ? *)arg0 ;
-(void)_createWheel:(id)arg0 ;
-(void)_customDecodingOfSCNPhysicsVehicle:(id)arg0 ;
-(void)_handleCreateIfNeeded:(BOOL)arg0 ;
-(void)_initializeWheelsArray;
-(void)_update;
-(void)_willRemoveFromPhysicsWorld:(id)arg0 ;
-(void)applyBrakingForce:(CGFloat)arg0 forWheelAtIndex:(NSInteger)arg1 ;
-(void)applyEngineForce:(CGFloat)arg0 forWheelAtIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setSteeringAngle:(CGFloat)arg0 forWheelAtIndex:(NSInteger)arg1 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;


@end


#endif