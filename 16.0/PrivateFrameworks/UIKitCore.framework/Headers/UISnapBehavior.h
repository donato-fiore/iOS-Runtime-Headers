// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISNAPBEHAVIOR_H
#define UISNAPBEHAVIOR_H

@class NSMutableArray, PKPhysicsBody;


#import "UIDynamicBehavior.h"

@interface UISnapBehavior : UIDynamicBehavior {
    CGPoint _anchorPoint;
    CGFloat _distance;
    CGFloat _frequency;
    ? _stateFlags;
    NSMutableArray *_joints;
    PKPhysicsBody *_anchorBody;
}


@property (nonatomic) CGFloat damping; // ivar: _damping
@property (nonatomic) CGPoint snapPoint;


+(BOOL)_isPrimitiveBehavior;
-(CGFloat)_distance;
-(CGFloat)_frequency;
-(id)description;
-(id)init;
-(id)initWithItem:(id)arg0 snapToPoint:(struct CGPoint )arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)_setDistance:(CGFloat)arg0 ;
-(void)_setFrequency:(CGFloat)arg0 ;


@end


#endif