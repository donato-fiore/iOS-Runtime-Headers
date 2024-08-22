// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDIDLETIMERPROVIDER_H
#define SBDASHBOARDIDLETIMERPROVIDER_H

@class NSMutableSet, NSString;
@protocol SBIdleTimerObserving, BSDescriptionProviding, SBFIdleTimerBehaviorProviding, BSInvalidatable, SBDashBoardIdleTimerProviderDelegate, SBIdleTimer;

#import <Foundation/Foundation.h>


@interface SBDashBoardIdleTimerProvider : NSObject <SBIdleTimerObserving, BSDescriptionProviding>

 {
    id<SBFIdleTimerBehaviorProviding> *_idleTimerProvider;
    id<BSInvalidatable> *_stateCaptureAssertion;
    NSMutableSet *_disabledIdleTimerAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBDashBoardIdleTimerProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SBIdleTimer> *idleTimer; // ivar: _idleTimer
@property (readonly, nonatomic, getter=isIdleTimerEnabled) BOOL idleTimerEnabled;
@property (readonly) Class superclass;


-(BOOL)isDisabledAssertionActiveForReason:(id)arg0 ;
-(id)_copyIdleTimerBehaviorForBehaviorProvider:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)effectiveIdleTimerBehavior;
-(id)initWithDelegate:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_proposeEffectiveIdleTimerBehaviorForReason:(id)arg0 ;
-(void)_proposeIdleTimerBehavior:(id)arg0 forReason:(id)arg1 ;
-(void)addDisabledIdleTimerAssertionReason:(id)arg0 ;
-(void)dealloc;
-(void)idleTimerDidExpire:(id)arg0 ;
-(void)idleTimerDidRefresh:(id)arg0 ;
-(void)idleTimerDidWarn:(id)arg0 ;
-(void)removeDisabledIdleTimerAssertionReason:(id)arg0 ;
-(void)updateIdleTimerWithIdleDimProvider:(id)arg0 reason:(id)arg1 ;


@end


#endif