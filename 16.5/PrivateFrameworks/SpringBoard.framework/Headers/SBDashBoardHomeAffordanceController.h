// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDASHBOARDHOMEAFFORDANCECONTROLLER_H
#define SBDASHBOARDHOMEAFFORDANCECONTROLLER_H

@class NSString, BSAnimationSettings, UIPanGestureRecognizer;
@protocol CSHomeAffordanceControlling, UIViewSpringAnimationBehaviorDescribing;

#import <Foundation/Foundation.h>

#import "SBNotificationHomeAffordanceController.h"

@interface SBDashBoardHomeAffordanceController : NSObject <CSHomeAffordanceControlling>

 {
    SBNotificationHomeAffordanceController *_notificationHomeAffordanceController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (readonly, nonatomic) UIPanGestureRecognizer *screenEdgePanGesture;
@property (readonly, nonatomic) NSObject<UIViewSpringAnimationBehaviorDescribing> *settleHomeAffordanceAnimationBehaviorDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;


-(id)init;
-(id)keyboardAssertionForGestureWindow:(id)arg0 ;
-(void)registerHomeGestureParticipant:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(void)unregisterHomeGestureParticipant:(id)arg0 withIdentifier:(NSInteger)arg1 ;


@end


#endif