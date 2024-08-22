// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIREPEATINGGESTURECLOCK_H
#define _UIREPEATINGGESTURECLOCK_H

@protocol _UIRepeatingGestureClockDelegate;

#import <Foundation/Foundation.h>


@interface _UIRepeatingGestureClock : NSObject {
    NSUInteger _delayIndex;
    BOOL _timerOn;
}


@property (weak, nonatomic) NSObject<_UIRepeatingGestureClockDelegate> *delegate; // ivar: _delegate


-(void)_cancelTimer;
-(void)_createTick:(id)arg0 ;
-(void)_performTick:(id)arg0 ;
-(void)_scheduleTimer;
-(void)dealloc;
-(void)startClock;
-(void)stopClock;


@end


#endif