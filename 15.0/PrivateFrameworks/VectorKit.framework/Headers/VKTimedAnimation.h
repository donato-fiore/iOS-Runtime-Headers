// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKTIMEDANIMATION_H
#define VKTIMEDANIMATION_H



#import "VKAnimation.h"

@interface VKTimedAnimation : VKAnimation {
    CGFloat _duration;
    CGFloat _startTimestamp;
    CGFloat _lastTimestamp;
    BOOL _resuming;
    BOOL _startTimestampSet;
}


@property (copy, nonatomic) id *stepHandler; // ivar: _stepHandler
@property (copy, nonatomic) id *timingFunction; // ivar: _timingFunction


+(void)setDragCoefficientGetter:(id)arg0 ;
-(BOOL)timed;
-(CGFloat)duration;
-(id)init;
-(id)initWithDuration:(CGFloat)arg0 ;
-(id)initWithDuration:(CGFloat)arg0 name:(id)arg1 ;
-(id)initWithDuration:(CGFloat)arg0 priority:(NSInteger)arg1 name:(id)arg2 ;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;
-(void)onTimerFired:(CGFloat)arg0 ;
-(void)pause;
-(void)resume;
-(void)setDuration:(CGFloat)arg0 ;
-(void)stopAnimation:(BOOL)arg0 ;


@end


#endif