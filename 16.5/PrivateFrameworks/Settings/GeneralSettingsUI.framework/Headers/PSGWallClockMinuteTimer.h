// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGWALLCLOCKMINUTETIMER_H
#define PSGWALLCLOCKMINUTETIMER_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface PSGWallClockMinuteTimer : NSObject {
    id *_target;
    SEL _action;
    NSTimer *_timer;
}




-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)_fireAction;
-(void)invalidate;
-(void)startTimer;


@end


#endif