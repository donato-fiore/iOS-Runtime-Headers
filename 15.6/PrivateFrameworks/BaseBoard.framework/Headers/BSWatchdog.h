// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSWATCHDOG_H
#define BSWATCHDOG_H

@class NSDate;
@protocol BSWatchdogDelegate, BSWatchdogProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BSAbsoluteMachTimer.h"

@interface BSWatchdog : NSObject {
    BSAbsoluteMachTimer *_timer;
    id *_completion;
    BOOL _invalidated;
    BOOL _completed;
}


@property (retain, nonatomic) NSObject<BSWatchdogDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=hasFired) BOOL fired; // ivar: _hasFired
@property (readonly, nonatomic) NSObject<BSWatchdogProviding> *provider; // ivar: _provider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


-(id)description;
-(id)initWithProvider:(id)arg0 queue:(id)arg1 ;
-(id)initWithProvider:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(id)initWithTimeout:(CGFloat)arg0 queue:(id)arg1 ;
-(id)initWithTimeout:(CGFloat)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)_watchdogInvalidated;
-(void)_watchdogTimerFired;
-(void)dealloc;
-(void)invalidate;
-(void)start;


@end


#endif