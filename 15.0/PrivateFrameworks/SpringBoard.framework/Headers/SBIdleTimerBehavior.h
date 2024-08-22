// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBIDLETIMERBEHAVIOR_H
#define SBIDLETIMERBEHAVIOR_H

@class NSString;
@protocol SBFIdleTimerBehaviorProviding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBIdleTimerBehavior : NSObject <SBFIdleTimerBehaviorProviding, BSDescriptionProviding>



@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout; // ivar: _customIdleExpirationTimeout
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout; // ivar: _customIdleWarningTimeout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger idleTimerDuration; // ivar: _idleTimerDuration
@property (readonly, nonatomic) NSInteger idleTimerMode; // ivar: _idleTimerMode
@property (readonly, nonatomic) NSInteger idleWarnMode; // ivar: _idleWarnMode
@property (readonly) Class superclass;


+(id)autoLockBehavior;
+(id)behaviorForBehaviorProvider:(id)arg0 ;
+(id)behaviorWithDuration:(NSInteger)arg0 mode:(NSInteger)arg1 warnMode:(NSInteger)arg2 ;
+(id)defaultBehavior;
+(id)disabledBehavior;
+(id)lockScreenBehavior;
-(id)_initWithBehaviorProvider:(id)arg0 ;
-(id)_initWithDuration:(NSInteger)arg0 mode:(NSInteger)arg1 warnMode:(NSInteger)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif