// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXREPETITIVEPAUSABLETIMER_H
#define PXREPETITIVEPAUSABLETIMER_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface PXRepetitivePausableTimer : NSObject {
    CGFloat _repetitiveInterval;
    id *_callBlock;
    int _reasonsToPause;
    NSTimer *_timer;
}




-(id)initWithRepeatedInterval:(CGFloat)arg0 initialTrigger:(BOOL)arg1 target:(id)arg2 ;
-(void)_handleTimer:(id)arg0 ;
-(void)_pauseWithReasons:(int)arg0 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)_unpauseWithReasons:(int)arg0 ;
-(void)pause;
-(void)reset;
-(void)unpause;


@end


#endif