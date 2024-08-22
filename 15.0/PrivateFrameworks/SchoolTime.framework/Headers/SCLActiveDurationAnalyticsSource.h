// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLACTIVEDURATIONANALYTICSSOURCE_H
#define SCLACTIVEDURATIONANALYTICSSOURCE_H


#import <Foundation/Foundation.h>

#import "SCLState.h"

@interface SCLActiveDurationAnalyticsSource : NSObject

@property (nonatomic) NSUInteger activeStartTimestamp; // ivar: _activeStartTimestamp
@property (copy, nonatomic) SCLState *currentState; // ivar: _currentState
@property (readonly, nonatomic) mach_timebase_info timebase; // ivar: _timebase


-(BOOL)isActiveForState:(id)arg0 ;
-(NSUInteger)secondsSinceContinuousTimestamp:(NSUInteger)arg0 ;
-(NSUInteger)secondsWithMachTimeInterval:(NSUInteger)arg0 ;
-(id)initWithInitialState:(id)arg0 ;
-(void)commitAnalyticsEventForTransitionFromState:(id)arg0 toState:(id)arg1 ;
-(void)server:(id)arg0 didUpdateState:(id)arg1 fromState:(id)arg2 ;


@end


#endif