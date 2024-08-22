// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBARSWIPEAFFORDANCECONTROLLER_H
#define SBBARSWIPEAFFORDANCECONTROLLER_H

@class NSString, SBFZStackParticipant;
@protocol SBBarSwipeAffordanceControlling, SBBarSwipeAffordanceControllingDelegate, SBHomeGrabberPointerClickDelegate;

#import <Foundation/Foundation.h>

#import "SBBarSwipeAffordanceView.h"
#import "SBWindowScene.h"

@interface SBBarSwipeAffordanceController : NSObject <SBBarSwipeAffordanceControlling>

 {
    NSInteger _zStackParticipantIdentifier;
}


@property (nonatomic) NSInteger activationPolicyForParticipantsBelow; // ivar: _activationPolicyForParticipantsBelow
@property (readonly, nonatomic) SBBarSwipeAffordanceView *barSwipeAffordanceView; // ivar: _barSwipeAffordanceView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBBarSwipeAffordanceControllingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SBHomeGrabberPointerClickDelegate> *pointerClickDelegate; // ivar: _pointerClickDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressAffordance; // ivar: _suppressAffordance
@property (nonatomic) BOOL wantsToBeActiveAffordance; // ivar: _wantsToBeActiveAffordance
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


-(id)initWithZStackParticipantIdentifier:(NSInteger)arg0 windowScene:(id)arg1 ;
-(void)_beginTryingToBecomeActiveAffordance;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_setKeyboardHomeAffordanceVisible:(BOOL)arg0 ;
-(void)_stopTryingToBecomeActiveAffordance;
-(void)_updateActiveState;
-(void)dealloc;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif