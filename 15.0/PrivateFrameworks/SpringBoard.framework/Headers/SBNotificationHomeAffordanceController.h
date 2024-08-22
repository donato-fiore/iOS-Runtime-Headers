// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBNOTIFICATIONHOMEAFFORDANCECONTROLLER_H
#define SBNOTIFICATIONHOMEAFFORDANCECONTROLLER_H

@class NSMapTable, NSString, BSAnimationSettings;
@protocol SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, UIViewSpringAnimationBehaviorDescribing;

#import <Foundation/Foundation.h>

#import "SBHomeGesturePanGestureRecognizer.h"
#import "SBScreenEdgePanGestureRecognizer.h"

@interface SBNotificationHomeAffordanceController : NSObject <SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate>

 {
    NSMapTable *_clientsToHomeGestureParticipants;
    NSMapTable *_clientsToZStackParticipants;
    SBHomeGesturePanGestureRecognizer *_screenEdgePanGesture;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (readonly, nonatomic) SBScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property (readonly, nonatomic) NSObject<UIViewSpringAnimationBehaviorDescribing> *settleHomeAffordanceAnimationBehaviorDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;


+(id)sharedInstance;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)registerClient:(id)arg0 withHomeGestureIdentifier:(NSInteger)arg1 zStackIdentifier:(NSInteger)arg2 ;
-(void)unregisterClient:(id)arg0 withHomeGestureIdentifier:(NSInteger)arg1 zStackIdentifier:(NSInteger)arg2 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif