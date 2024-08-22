// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCROLLVIEWGESTURESIMULATOR_H
#define _UISCROLLVIEWGESTURESIMULATOR_H

@class NSMutableArray, NSThread, CADisplayLink, NSTimer;

#import <Foundation/Foundation.h>


@interface _UIScrollViewGestureSimulator : NSObject {
    *__CFRunLoopSource _mainThreadRunLoopSource;
    NSMutableArray *_simulatedGestures;
    NSThread *_workThread;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    BOOL _hasSimulatedGestures;
    CGFloat _lastWakeUpTime;
}




+(id)sharedInstance;
-(id)init;
-(void)_displayLinkDidFire:(id)arg0 ;
-(void)_setHasSimulatedGestures:(id)arg0 ;
-(void)_signalMainThreadIfNecessary;
-(void)_threadMain;
-(void)_update;
-(void)dealloc;
// -(void)simulateGestureWithDuration:(CGFloat)arg0 begin:(id)arg1 update:(unk)arg2 end:(id)arg3  ;


@end


#endif