// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBIDLEBEHAVIOR_H
#define SBIDLEBEHAVIOR_H

@class NSString;
@protocol SBFIdleTimerBehaviorProviding;

#import <Foundation/Foundation.h>


@interface SBIdleBehavior : NSObject <SBFIdleTimerBehaviorProviding>



@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger warnMode; // ivar: _warnMode


-(id)initWithDuration:(NSInteger)arg0 warnMode:(NSInteger)arg1 ;


@end


#endif