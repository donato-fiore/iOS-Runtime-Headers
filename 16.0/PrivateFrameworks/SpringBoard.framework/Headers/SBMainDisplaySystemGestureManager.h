// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMAINDISPLAYSYSTEMGESTUREMANAGER_H
#define SBMAINDISPLAYSYSTEMGESTUREMANAGER_H

@class FBSDisplayIdentity, SBGestureDefaults, SBFZStackParticipant, NSString;
@protocol SBFZStackParticipantDelegate;


#import "SBSystemGestureManager.h"

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager <SBFZStackParticipantDelegate>

 {
    FBSDisplayIdentity *_displayIdentity;
    SBGestureDefaults *_gestureDefaults;
    BOOL _multitaskingGesturesEnabled;
}


@property (retain, nonatomic) SBFZStackParticipant *accessibilityZStackParticipant; // ivar: _accessibilityZStackParticipant
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isGestureWithTypeAllowed:(NSUInteger)arg0 ;
-(BOOL)_shouldEnableSystemGestureWithType:(NSUInteger)arg0 ;
-(BOOL)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint )arg0 ;
-(BOOL)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint )arg0 ignoringUCB:(BOOL)arg1 ;
-(id)_init;
-(id)_initWithDisplayIdentity:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(void)_evaluateEnablement;
-(void)_updateUserPreferences;
-(void)dealloc;
-(void)setSystemGesturesDisabledForAccessibility:(BOOL)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif