// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTIMEDANIMATIONGROUP_H
#define PUTIMEDANIMATIONGROUP_H



#import "PUAnimationGroup.h"

@interface PUTimedAnimationGroup : PUAnimationGroup {
    BOOL _areAnimationsPaused;
    CGFloat _pausedElapsedTime;
}


@property (nonatomic) CGFloat beginTime; // ivar: _beginTime
@property (readonly, nonatomic) CGFloat currentTime;


-(CGFloat)elapsedTime;
-(id)init;
-(void)_update;
-(void)pauseAnimations;
-(void)resumeAnimations;
-(void)setElapsedTime:(CGFloat)arg0 ;
-(void)updateAnimations;


@end


#endif