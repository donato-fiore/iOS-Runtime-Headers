// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHIDBUTTONSTATEARBITER_H
#define SBHIDBUTTONSTATEARBITER_H

@class BSAbsoluteMachTimer;
@protocol SBHIDButtonStateDelegate;

#import <Foundation/Foundation.h>


@interface SBHIDButtonStateArbiter : NSObject {
    BSAbsoluteMachTimer *_longPressTimer;
    NSUInteger _downEventSenderID;
    NSUInteger _downTime;
    CGFloat _longPressTimeoutAtDownEvent;
}


@property (weak, nonatomic) NSObject<SBHIDButtonStateDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isLongPressDisabled) BOOL longPressDisabled;
@property (nonatomic) CGFloat longPressTimeout; // ivar: _longPressTimeout
@property (readonly, nonatomic) NSInteger pressSequence; // ivar: _pressSequence


-(void)_invalidateLongPressTimer;
-(void)_startLongPressTimerWithTimeout:(CGFloat)arg0 ;
-(void)dealloc;
-(void)processEvent:(struct __IOHIDEvent *)arg0 ;
-(void)reset;


@end


#endif