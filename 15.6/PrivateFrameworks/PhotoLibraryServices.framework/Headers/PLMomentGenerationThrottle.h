// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMOMENTGENERATIONTHROTTLE_H
#define PLMOMENTGENERATIONTHROTTLE_H

@class NSString;
@protocol PLMomentGenerationThrottleTimeProvider;

#import <Foundation/Foundation.h>


@interface PLMomentGenerationThrottle : NSObject {
    BOOL _canDelayAnyQOS;
    id *_targetBlock;
    NSString *_name;
    id<PLMomentGenerationThrottleTimeProvider> *_timeProvider;
    BOOL _singleThreaded;
    atomic_flag _shouldRunAgain;
    atomic_flag _isExecutingOrConsideringExecution;
    CGFloat _lastRunDuration;
    CGFloat _lastRunEndTime;
    CGFloat _nextExpectedRun;
}




-(BOOL)isIdle;
-(id)initWithName:(id)arg0 canDelayAnyQOS:(BOOL)arg1 singleThreadedMode:(BOOL)arg2 timeProvider:(id)arg3 target:(id)arg4 ;
-(void)update;


@end


#endif