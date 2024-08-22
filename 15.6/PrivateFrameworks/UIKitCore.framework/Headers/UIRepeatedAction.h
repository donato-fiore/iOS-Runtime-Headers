// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIREPEATEDACTION_H
#define UIREPEATEDACTION_H

@class NSInvocation, NSTimer;
@protocol UIRepeatedActionDelegate;

#import <Foundation/Foundation.h>


@interface UIRepeatedAction : NSObject {
    BOOL _didCompletePreInvocationDelay;
    BOOL _didCompleteInvocationDelay;
}


@property (weak, nonatomic) NSObject<UIRepeatedActionDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableRepeat; // ivar: _disableRepeat
@property (retain, nonatomic) NSInvocation *invocation; // ivar: _invocation
@property (retain, nonatomic) id *invocationArgument; // ivar: _invocationArgument
@property (nonatomic) CGFloat invocationDelay; // ivar: _invocationDelay
@property (nonatomic) CGFloat preInvocationDelay; // ivar: _preInvocationDelay
@property (nonatomic) CGFloat repeatedDelay; // ivar: _repeatedDelay
@property (nonatomic) BOOL skipInitialFire; // ivar: _skipInitialFire
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


+(id)_invocationForTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
+(id)actionWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
-(BOOL)invoke;
-(id)initWithInvocation:(id)arg0 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
-(void)_adjustInvocationForPhase:(NSUInteger)arg0 ;
-(void)_preInvocationTimerFire;
-(void)_repeatedTimerFire;
-(void)dealloc;
-(void)invalidate;
-(void)reset;
-(void)schedule;
-(void)scheduleWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;


@end


#endif