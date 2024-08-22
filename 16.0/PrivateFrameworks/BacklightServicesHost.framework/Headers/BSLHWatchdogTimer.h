// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSLHWATCHDOGTIMER_H
#define BSLHWATCHDOGTIMER_H

@class BSAbsoluteMachTimer, NSString;
@protocol BLSHWatchdogTiming, BLSHWatchdogDelegate;

#import <Foundation/Foundation.h>

#import "BLSHWatchdogProvider.h"

@interface BSLHWatchdogTimer : NSObject <BLSHWatchdogTiming>

 {
    BSAbsoluteMachTimer *_timer;
    NSString *_explanation;
    id<BLSHWatchdogDelegate> *_delegate;
    BLSHWatchdogProvider *_provider;
    CGFloat _lock_timeout;
    CGFloat _lock_watchdogStart;
    os_unfair_lock_s _lock;
    BOOL _lock_invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


-(id)initWithExplanation:(id)arg0 delegate:(id)arg1 provider:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)scheduleWithTimeout:(CGFloat)arg0 ;
-(void)timerFired;


@end


#endif