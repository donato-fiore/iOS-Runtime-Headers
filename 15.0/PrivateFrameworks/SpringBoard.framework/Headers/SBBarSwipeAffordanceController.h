// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBARSWIPEAFFORDANCECONTROLLER_H
#define SBBARSWIPEAFFORDANCECONTROLLER_H

@class NSString, SBFZStackParticipant;
@protocol SBBarSwipeAffordanceControlling, SBBarSwipeAffordanceControllingDelegate, SBHomeGrabberPointerClickDelegate;

#import <Foundation/Foundation.h>

#import "SBBarSwipeAffordanceView.h"
#import "SBHomeGestureParticipant.h"

@interface SBBarSwipeAffordanceController : NSObject <SBBarSwipeAffordanceControlling>

 {
    NSInteger _homeGestureParticipantIdentifier;
    NSInteger _zStackParticipantIdentifier;
}


@property (nonatomic) NSInteger activationPolicyForParticipantsBelow; // ivar: _activationPolicyForParticipantsBelow
@property (readonly, nonatomic) SBBarSwipeAffordanceView *barSwipeAffordanceView; // ivar: _barSwipeAffordanceView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBBarSwipeAffordanceControllingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // ivar: _homeGestureParticipant
@property (weak, nonatomic) NSObject<SBHomeGrabberPointerClickDelegate> *pointerClickDelegate; // ivar: _pointerClickDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressAffordance; // ivar: _suppressAffordance
@property (nonatomic) BOOL wantsToBeActiveAffordance; // ivar: _wantsToBeActiveAffordance
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


-(id)initWithHomeGestureParticipantIdentifier:(NSInteger)arg0 ;
-(id)initWithHomeGestureParticipantIdentifier:(NSInteger)arg0 zStackParticipantIdentifier:(NSInteger)arg1 ;
-(void)_beginTryingToBecomeActiveAffordance;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_setKeyboardHomeAffordanceVisible:(BOOL)arg0 ;
-(void)_stopTryingToBecomeActiveAffordance;
-(void)_updateActiveState;
-(void)dealloc;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)homeGestureParticipantResolvedHomeAffordanceSuppressionDidChange:(id)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif