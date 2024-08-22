// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMDEBOUNCETIMER_H
#define RMDEBOUNCETIMER_H

@class NSString;
@protocol RMDebounceTimerDelegate;

#import <Foundation/Foundation.h>

#import "RMTimedDispatch.h"

@interface RMDebounceTimer : NSObject {
    NSObject *_lock;
}


@property (weak) NSObject<RMDebounceTimerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *lastTimerID; // ivar: _lastTimerID
@property (nonatomic) CGFloat maximumInterval; // ivar: _maximumInterval
@property (retain, nonatomic) RMTimedDispatch *maximumTimer; // ivar: _maximumTimer
@property (nonatomic) CGFloat minimumInterval; // ivar: _minimumInterval
@property (retain, nonatomic) RMTimedDispatch *minimumTimer; // ivar: _minimumTimer


+(id)debounceTimerWithMinimumInterval:(CGFloat)arg0 maximumInterval:(CGFloat)arg1 delegate:(id)arg2 ;
-(id)initWithMinimumInterval:(CGFloat)arg0 maximumInterval:(CGFloat)arg1 delegate:(id)arg2 ;
-(void)_timerDidFire;
-(void)trigger;


@end


#endif