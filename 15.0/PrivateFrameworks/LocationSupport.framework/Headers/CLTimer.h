// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLTIMER_H
#define CLTIMER_H

@protocol CLTimerScheduler;

#import <Foundation/Foundation.h>

#import "CLSilo.h"

@interface CLTimer : NSObject {
    CGFloat _delaySetAtTime;
    CLSilo *_silo;
    id<CLTimerScheduler> *_scheduler;
}


@property (nonatomic) CGFloat fireInterval; // ivar: _fireInterval
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) CGFloat nextFireDelay; // ivar: _nextFireDelay
@property (nonatomic) CGFloat nextFireTime;


-(id)initInSilo:(id)arg0 withScheduler:(id)arg1 ;
-(void)dbgAssertInside;
-(void)invalidate;
-(void)shouldFire;
-(void)updateScheduler;


@end


#endif