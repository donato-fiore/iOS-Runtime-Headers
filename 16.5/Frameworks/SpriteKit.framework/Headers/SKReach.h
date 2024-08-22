// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKREACH_H
#define SKREACH_H

@class NSMutableArray;


#import "SKAction.h"
#import "SKNode.h"

@interface SKReach : SKAction {
    SKNode *_ikRoot;
    CGPoint _goalPosition;
    NSMutableArray *_ikChain;
    CGFloat _velocity;
    BOOL _timeConstrained;
    CGFloat _zRotationSpeed;
}




+(id)reachTo:(struct CGPoint )arg0 rootNode:(id)arg1 duration:(CGFloat)arg2 ;
+(id)reachTo:(struct CGPoint )arg0 rootNode:(id)arg1 duration:(CGFloat)arg2 maxZRotationSpeed:(CGFloat)arg3 ;
+(id)reachTo:(struct CGPoint )arg0 rootNode:(id)arg1 velocity:(CGFloat)arg2 ;
+(id)reachTo:(struct CGPoint )arg0 rootNode:(id)arg1 zRotationSpeed:(CGFloat)arg2 maxDuration:(CGFloat)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)solveIKWithTarget:(id)arg0 ;
-(void)updateWithTarget:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)willStartWithTarget:(id)arg0 atTime:(CGFloat)arg1 ;


@end


#endif