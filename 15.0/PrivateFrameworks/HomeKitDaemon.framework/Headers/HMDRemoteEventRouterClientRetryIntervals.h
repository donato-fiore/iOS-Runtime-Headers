// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEEVENTROUTERCLIENTRETRYINTERVALS_H
#define HMDREMOTEEVENTROUTERCLIENTRETRYINTERVALS_H

@class NSArray;
@protocol HMETimerIntervalProvider;

#import <Foundation/Foundation.h>


@interface HMDRemoteEventRouterClientRetryIntervals : NSObject <HMETimerIntervalProvider>



@property NSInteger currentIndex; // ivar: _currentIndex
@property (readonly) NSArray *intervals; // ivar: _intervals


-(CGFloat)nextInterval;
-(id)init;
-(void)reset;


@end


#endif