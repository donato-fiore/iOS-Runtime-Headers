// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBIDLETIMERINFO_H
#define SBIDLETIMERINFO_H

@class NSString;
@protocol SBFIdleTimerBehaviorProviding, SBIdleTimerProviding;

#import <Foundation/Foundation.h>

#import "SBIdleTimerProxy.h"

@interface SBIdleTimerInfo : NSObject

@property (retain, nonatomic) NSObject<SBFIdleTimerBehaviorProviding> *behavior; // ivar: _behavior
@property (retain, nonatomic) SBIdleTimerProxy *idleTimerProxy; // ivar: _idleTimerProxy
@property (readonly, weak, nonatomic) NSObject<SBIdleTimerProviding> *provider; // ivar: _provider
@property (copy, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithProvider:(id)arg0 behavior:(id)arg1 reason:(id)arg2 idleTimerProxy:(id)arg3 ;


@end


#endif