// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBACKLIGHTIDLETIMER_H
#define SBBACKLIGHTIDLETIMER_H

@class ITAttentionAwareIdleTimer, NSString;
@protocol ITIdleTimerDelegate, BSDescriptionProviding;


#import "SBIdleTimerBase.h"
#import "SBIdleTimerDescriptor.h"

@interface SBBacklightIdleTimer : SBIdleTimerBase <ITIdleTimerDelegate, BSDescriptionProviding>

 {
    ITAttentionAwareIdleTimer *_attentionAwareTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) SBIdleTimerDescriptor *descriptor; // ivar: _descriptor
@property (nonatomic) NSUInteger expectation; // ivar: _expectation
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL requiresManualReset; // ivar: _requiresManualReset
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeMultiplier; // ivar: _timeMultiplier


-(BOOL)isActivated;
-(BOOL)isDisabled;
-(CGFloat)_effectiveExpireTimeoutDuration;
-(CGFloat)_effectiveQuickUnwarnTimeoutDurationForWarnTimeout:(CGFloat)arg0 ;
-(CGFloat)_effectiveTimeoutForBaseTimeout:(CGFloat)arg0 ;
-(CGFloat)_effectiveWarnTimeoutDuration;
-(id)_initWithAttentionAwareTimer:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithConfigurationIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_reconfigureAttentionClientAndReset:(BOOL)arg0 ;
-(void)_stopIfManual;
-(void)idleTimer:(id)arg0 attentionLostTimeoutDidExpire:(id)arg1 ;
-(void)idleTimerDidReset:(id)arg0 forUserAttention:(NSUInteger)arg1 at:(CGFloat)arg2 ;
-(void)reset;
-(void)setActivated:(BOOL)arg0 ;


@end


#endif