// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKGOAL_H
#define GKGOAL_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GKPath.h"

@interface GKGoal : NSObject <NSCopying>

 {
    int _type;
    GKPath *_path;
    NSArray *_obstacles;
    NSArray *_agents;
    CGFloat _time;
    float _angle;
    float _distance;
    float _speed;
    BOOL _forward;
}




+(id)goalToAlignWithAgents:(id)arg0 maxDistance:(float)arg1 maxAngle:(float)arg2 ;
+(id)goalToAvoidAgents:(id)arg0 maxPredictionTime:(CGFloat)arg1 ;
+(id)goalToAvoidObstacles:(id)arg0 maxPredictionTime:(CGFloat)arg1 ;
+(id)goalToCohereWithAgents:(id)arg0 maxDistance:(float)arg1 maxAngle:(float)arg2 ;
+(id)goalToFleeAgent:(id)arg0 ;
+(id)goalToFollowPath:(id)arg0 maxPredictionTime:(CGFloat)arg1 forward:(BOOL)arg2 ;
+(id)goalToInterceptAgent:(id)arg0 maxPredictionTime:(CGFloat)arg1 ;
+(id)goalToReachTargetSpeed:(float)arg0 ;
+(id)goalToSeekAgent:(id)arg0 ;
+(id)goalToSeparateFromAgents:(id)arg0 maxDistance:(float)arg1 maxAngle:(float)arg2 ;
+(id)goalToStayOnPath:(id)arg0 maxPredictionTime:(CGFloat)arg1 ;
+(id)goalToWander:(float)arg0 ;
-(BOOL)isTargetSpeedGoal;
-(float)speed;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getForce:(id)arg0 agent;
-(id)init;
-(id)initToAlignWithAgents:(id)arg0 maxDistance:(float)arg1 maxAngle:(float)arg2 ;
-(id)initToAvoidAgents:(id)arg0 maxPredictionTime:(CGFloat)arg1 ;
-(id)initToAvoidObstacles:(id)arg0 maxPredictionTime:(CGFloat)arg1 ;
-(id)initToCohereWithAgents:(id)arg0 maxDistance:(float)arg1 maxAngle:(float)arg2 ;
-(id)initToFleeAgent:(id)arg0 ;
-(id)initToFollowPath:(id)arg0 maxPredictionTime:(CGFloat)arg1 forward:(BOOL)arg2 ;
-(id)initToInterceptAgent:(id)arg0 maxPredictionTime:(CGFloat)arg1 ;
-(id)initToReachTargetSpeed:(float)arg0 ;
-(id)initToSeekAgent:(id)arg0 ;
-(id)initToSeparateFromAgents:(id)arg0 maxDistance:(float)arg1 maxAngle:(float)arg2 ;
-(id)initToStayOnPath:(id)arg0 maxPredictionTime:(CGFloat)arg1 ;
-(id)initToWander:(float)arg0 ;


@end


#endif