// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIANIMATOR_H
#define UIANIMATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface UIAnimator : NSObject {
    NSMutableArray *_animations;
    CGFloat _lastUpdateTime;
    id _heartbeat;
    int _heartbeatClientCount;
    *_UIUpdateSequenceItemInternal _updateSequenceItem;
}




+(id)sharedAnimator;
+(void)disableAnimation;
+(void)enableAnimation;
-(BOOL)_isRunningAnimation:(id)arg0 ;
-(void)_LCDHeartbeatCallback:(id)arg0 ;
-(void)_TVHeartbeatCallback:(id)arg0 ;
-(void)_TimerHeartbeatCallback:(id)arg0 ;
-(void)_addAnimation:(id)arg0 withDuration:(CGFloat)arg1 start:(BOOL)arg2 startTime:(CGFloat)arg3 ;
-(void)_advanceAnimationsOfType:(int)arg0 withTimestamp:(CGFloat)arg1 ;
-(void)_startAnimation:(id)arg0 withStartTime:(CGFloat)arg1 ;
-(void)addAnimation:(id)arg0 withDuration:(CGFloat)arg1 start:(BOOL)arg2 ;
-(void)addAnimations:(id)arg0 withDuration:(CGFloat)arg1 start:(BOOL)arg2 ;
-(void)dealloc;
-(void)removeAnimationsForTarget:(id)arg0 ;
-(void)removeAnimationsForTarget:(id)arg0 ofKind:(Class)arg1 ;
-(void)startAnimation:(id)arg0 ;
-(void)stopAnimation:(id)arg0 ;


@end


#endif