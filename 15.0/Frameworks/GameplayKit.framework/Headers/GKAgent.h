// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKAGENT_H
#define GKAGENT_H

@protocol NSSecureCoding, GKAgentDelegate;


#import "GKComponent.h"
#import "GKBehavior.h"

@interface GKAgent : GKComponent <NSSecureCoding>

 {
    GKSimpleVehicle _vehicle;
}


@property (retain, nonatomic) GKBehavior *behavior; // ivar: _behavior
@property (weak, nonatomic) NSObject<GKAgentDelegate> *delegate; // ivar: _delegate
@property (nonatomic) float mass;
@property (nonatomic) float maxAcceleration;
@property (nonatomic) float maxSpeed;
@property (nonatomic) float radius;
@property (nonatomic) float speed;


+(BOOL)supportsSecureCoding;
-(*void)vehicle;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)position3;
-(id)steerForAlignment:(float)arg0 maxDistance:(float)arg1 maxAngle;
-(id)steerForCohesion:(float)arg0 maxDistance:(float)arg1 maxAngle;
-(id)steerForFlee;
-(id)steerForIntercept:(CGFloat)arg0 maxPredictionTime;
-(id)steerForSeek;
-(id)steerForSeparation:(float)arg0 maxDistance:(float)arg1 maxAngle;
-(id)steerForTargetSpeed;
-(id)steerForWander:(float)arg0 speed;
-(id)steerToAvoidAgents:(CGFloat)arg0 timeBeforeCollisionToAvoid;
-(id)steerToAvoidObstacles:(CGFloat)arg0 timeBeforeCollisionToAvoid;
-(id)steerToFollowPath:(CGFloat)arg0 maxPredictionTime:(BOOL)arg1 forward;
-(id)steerToStayOnPath:(CGFloat)arg0 maxPredictionTime;
-(id)velocity3;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif