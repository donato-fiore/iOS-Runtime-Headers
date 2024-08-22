// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBWATCHDOGTRANSITIONCONTEXT_H
#define FBWATCHDOGTRANSITIONCONTEXT_H

@protocol NSCopying, NSMutableCopying, FBProcessWatchdogProviding;

#import <Foundation/Foundation.h>


@interface FBWatchdogTransitionContext : NSObject <NSCopying, NSMutableCopying>



@property (nonatomic) BOOL runIndependently; // ivar: _runIndependently
@property (nonatomic) NSInteger watchdogBehavior; // ivar: _watchdogBehavior
@property (retain, nonatomic) NSObject<FBProcessWatchdogProviding> *watchdogProvider; // ivar: _watchdogProvider


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif