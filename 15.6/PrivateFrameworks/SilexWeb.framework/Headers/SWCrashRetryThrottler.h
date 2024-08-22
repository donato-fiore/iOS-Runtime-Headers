// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWCRASHRETRYTHROTTLER_H
#define SWCRASHRETRYTHROTTLER_H

@class NSString;
@protocol SWProcessTerminationPolicyDecider;

#import <Foundation/Foundation.h>


@interface SWCrashRetryThrottler : NSObject <SWProcessTerminationPolicyDecider>



@property (nonatomic) BOOL crashed; // ivar: _crashed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger retryPolicy; // ivar: retryPolicy
@property (readonly) Class superclass;


-(BOOL)shouldReloadAfterWebProcessCrash;


@end


#endif