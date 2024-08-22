// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKTHROTTLECALLBACK_H
#define HKTHROTTLECALLBACK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKThrottleCallback : NSObject

@property (nonatomic) BOOL delayInProgress; // ivar: _delayInProgress
@property (copy, nonatomic) id *lastExecutionBlock; // ivar: _lastExecutionBlock
@property (nonatomic) NSInteger throttleDelayInNanoseconds; // ivar: _throttleDelayInNanoseconds
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *throttlingQueue; // ivar: _throttlingQueue


-(id)initWithThrottleDelay:(CGFloat)arg0 ;
-(void)executeWithThrottle:(id)arg0 ;


@end


#endif