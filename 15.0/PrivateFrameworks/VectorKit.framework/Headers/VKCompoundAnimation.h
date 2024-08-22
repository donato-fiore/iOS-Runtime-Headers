// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCOMPOUNDANIMATION_H
#define VKCOMPOUNDANIMATION_H

@class NSMutableArray;


#import "VKAnimation.h"

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations; // ivar: _animations
@property (copy, nonatomic) id *groupStepHandler; // ivar: _groupStepHandler


-(BOOL)running;
-(BOOL)runsForever;
-(BOOL)timed;
-(CGFloat)duration;
-(id)initWithAnimations:(id)arg0 ;
-(void)dealloc;
-(void)onTimerFired:(CGFloat)arg0 ;
-(void)pause;
-(void)resume;
-(void)setDuration:(CGFloat)arg0 ;
-(void)setRunsForever:(BOOL)arg0 ;
-(void)startWithRunner:(id)arg0 ;
-(void)stopAnimation:(BOOL)arg0 ;


@end


#endif