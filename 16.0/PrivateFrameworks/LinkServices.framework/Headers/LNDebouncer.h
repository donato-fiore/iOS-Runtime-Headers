// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNDEBOUNCER_H
#define LNDEBOUNCER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "LNWatchdogTimer.h"

@interface LNDebouncer : NSObject

@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, nonatomic) LNWatchdogTimer *longTimer; // ivar: _longTimer
@property (readonly, nonatomic) CGFloat maxDelay; // ivar: _maxDelay
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) LNWatchdogTimer *timer; // ivar: _timer


-(id)initWithDelay:(CGFloat)arg0 maxDelay:(CGFloat)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)trigger;


@end


#endif