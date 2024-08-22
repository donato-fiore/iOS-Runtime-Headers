// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKDYNAMICANIMATION_H
#define VKDYNAMICANIMATION_H



#import "VKAnimation.h"

@interface VKDynamicAnimation : VKAnimation {
    CGFloat _lastTimestamp;
    BOOL _resuming;
}


@property (copy, nonatomic) id *dynamicStepHandler; // ivar: _dynamicStepHandler


-(BOOL)runsForever;
-(id)init;
-(void)dealloc;
-(void)onTimerFired:(CGFloat)arg0 ;
-(void)pause;
-(void)resume;
-(void)setRunsForever:(BOOL)arg0 ;
-(void)stopAnimation:(BOOL)arg0 ;


@end


#endif