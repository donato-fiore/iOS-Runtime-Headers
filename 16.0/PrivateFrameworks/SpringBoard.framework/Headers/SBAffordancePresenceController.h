// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAFFORDANCEPRESENCECONTROLLER_H
#define SBAFFORDANCEPRESENCECONTROLLER_H

@class NSMutableSet, SBFHomeGrabberSettings, NSString;
@protocol PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, SBTransientUITapToUnhideParticipant, SBAffordancePresenceControllerDelegate;

#import <Foundation/Foundation.h>

#import "SBAttentionAwarenessClient.h"
#import "SBAppSwitcherSettings.h"

@interface SBAffordancePresenceController : NSObject <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, SBTransientUITapToUnhideParticipant>

 {
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    NSInteger _touchState;
    NSInteger _presence;
    NSUInteger _lastActivatingToken;
    NSUInteger _lastInitialHideToken;
    BOOL _edgeProtectEnabled;
    BOOL _shouldEnableGestures;
    NSMutableSet *_hiddenOverrides;
    NSUInteger _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    SBAppSwitcherSettings *_appSwitcherSettings;
    SBFHomeGrabberSettings *_homeGrabberSettings;
}


@property (nonatomic) BOOL autoHideAffordance; // ivar: _autoHideAffordance
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBAffordancePresenceControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)transientUIHandledTouch:(id)arg0 withSystemGestureRecognizer:(id)arg1 ;
-(NSInteger)_calculatePresence;
-(NSInteger)currentPresence;
-(id)_animationSettingsForTransitionFromPresence:(NSInteger)arg0 toPresence:(NSInteger)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_unhideIfAutoHidden;
-(void)_updateIdleTouchAwarenessClient;
-(void)_updatePresence;
-(void)_updatePresence:(NSInteger)arg0 withAnimationSettings:(id)arg1 ;
-(void)client:(id)arg0 attentionLostTimeoutDidExpire:(CGFloat)arg1 forConfigurationGeneration:(NSUInteger)arg2 withAssociatedObject:(id)arg3 ;
-(void)clientDidResetForUserAttention:(id)arg0 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg0 forReason:(id)arg1 animated:(BOOL)arg2 ;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)transientUI:(id)arg0 wasIndirectPannedToDismissFromGestureRecognizer:(id)arg1 ;
-(void)transientUI:(id)arg0 wasTappedToUnhideFromGestureRecognizer:(id)arg1 ;


@end


#endif