// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNOTIFICATIONHOMEAFFORDANCECONTROLLER_H
#define SBNOTIFICATIONHOMEAFFORDANCECONTROLLER_H

@class NSMapTable, NSString, BSAnimationSettings;
@protocol SBFZStackParticipantDelegate, UIViewSpringAnimationBehaviorDescribing;

#import <Foundation/Foundation.h>

#import "SBHomeGesturePanGestureRecognizer.h"
#import "SBScreenEdgePanGestureRecognizer.h"

@interface SBNotificationHomeAffordanceController : NSObject <SBFZStackParticipantDelegate>

 {
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
-(void)registerClient:(id)arg0 withZStackIdentifier:(NSInteger)arg1 ;
-(void)unregisterClient:(id)arg0 withZStackIdentifier:(NSInteger)arg1 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif