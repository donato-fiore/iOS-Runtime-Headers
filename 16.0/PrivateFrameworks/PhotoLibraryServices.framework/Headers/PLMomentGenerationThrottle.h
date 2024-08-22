// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMOMENTGENERATIONTHROTTLE_H
#define PLMOMENTGENERATIONTHROTTLE_H

@class NSString;
@protocol OS_dispatch_queue, PLMomentGenerationThrottleTimeProvider;

#import <Foundation/Foundation.h>


@interface PLMomentGenerationThrottle : NSObject {
    BOOL _canDelayAnyQOS;
    id *_targetBlock;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_targetQueue;
    uint8_t _shouldRunAgain;
    uint8_t _isExecutingOrConsideringExecution;
    CGFloat _lastRunDuration;
    CGFloat _lastRunEndTime;
    CGFloat _nextExpectedRun;
}


@property (nonatomic) BOOL singleThreaded; // ivar: _singleThreaded
@property (readonly, nonatomic) NSObject<PLMomentGenerationThrottleTimeProvider> *timeProvider; // ivar: _timeProvider


-(BOOL)isIdle;
-(id)initWithName:(id)arg0 canDelayAnyQOS:(BOOL)arg1 singleThreadedMode:(BOOL)arg2 timeProvider:(id)arg3 targetQueue:(id)arg4 target:(id)arg5 ;
// -(void)_doAsyncUpdateWithCompletionBlock:(id)arg0 tryAgainLaterBlock:(unk)arg1 tryAgainAfterCurrentExecutionBlock:(id)arg2  ;
-(void)update;


@end


#endif