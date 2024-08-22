// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBIDLETIMERPROXY_H
#define SBIDLETIMERPROXY_H

@class NSString;
@protocol SBIdleTimerObserving, SBIdleTimer;


#import "SBIdleTimerBase.h"

@interface SBIdleTimerProxy : SBIdleTimerBase <SBIdleTimerObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBIdleTimer> *sourceTimer; // ivar: _sourceTimer
@property (readonly) Class superclass;


+(id)disabledIdleTimerProxy;
-(BOOL)isActivated;
-(BOOL)isDisabled;
-(id)initWithIdleTimerSource:(id)arg0 ;
-(void)_logExpirationTimeout:(CGFloat)arg0 ;
-(void)idleTimerDidExpire:(id)arg0 ;
-(void)idleTimerDidRefresh:(id)arg0 ;
-(void)idleTimerDidResetForUserAttention:(id)arg0 ;
-(void)idleTimerDidWarn:(id)arg0 ;
-(void)reset;
-(void)setActivated:(BOOL)arg0 ;


@end


#endif