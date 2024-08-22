// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINDISPLAYSYSTEMGESTUREMANAGER_H
#define SBMAINDISPLAYSYSTEMGESTUREMANAGER_H

@class SBGestureDefaults, SBFZStackParticipant, NSString;
@protocol SBFZStackParticipantDelegate, BSInvalidatable;


#import "SBSystemGestureManager.h"
#import "SBHomeGestureParticipant.h"

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager <SBFZStackParticipantDelegate>

 {
    SBGestureDefaults *_gestureDefaults;
    id<BSInvalidatable> *_systemGestureEventDeferringRule;
    id<BSInvalidatable> *_pointerEventRoutingAssertion;
    BOOL _multitaskingGesturesEnabled;
}


@property (retain, nonatomic) SBHomeGestureParticipant *accessibilityHomeGestureParticipant; // ivar: _accessibilityHomeGestureParticipant
@property (retain, nonatomic) SBFZStackParticipant *accessibilityZStackParticipant; // ivar: _accessibilityZStackParticipant
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isGestureWithTypeAllowed:(NSUInteger)arg0 ;
-(BOOL)_isTouchGestureWithType:(NSUInteger)arg0 ;
-(BOOL)_shouldEnableSystemGestureWithType:(NSUInteger)arg0 ;
-(BOOL)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint )arg0 ;
-(id)_init;
-(id)_initWithDisplayIdentity:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(void)_evaluateEnablement;
-(void)_setupSystemGestureEventDeferringIfNeeded;
-(void)_updateUserPreferences;
-(void)addGestureRecognizer:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)setSystemGesturesDisabledForAccessibility:(BOOL)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif