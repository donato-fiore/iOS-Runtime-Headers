// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTVIEWPLACEMENTTRANSITION_H
#define UIINPUTVIEWPLACEMENTTRANSITION_H

@protocol NSObject, UIInputViewAnimationController;

#import <Foundation/Foundation.h>

#import "UIInputViewAnimationStyle.h"
#import "UIInputViewSetPlacement.h"
#import "UIInputViewSetNotificationInfo.h"

@interface UIInputViewPlacementTransition : NSObject

@property (retain, nonatomic) NSObject<NSObject> *animationContext; // ivar: animationContext
@property (retain, nonatomic) NSObject<UIInputViewAnimationController> *animationController; // ivar: animationController
@property (nonatomic) int animationState; // ivar: animationState
@property (retain, nonatomic) UIInputViewAnimationStyle *animationStyle; // ivar: animationStyle
@property (nonatomic) BOOL cancelled; // ivar: cancelled
@property (retain, nonatomic) UIInputViewSetPlacement *fromPlacement; // ivar: fromPlacement
@property (retain, nonatomic) UIInputViewSetNotificationInfo *notificationInfo; // ivar: notificationInfo
@property (nonatomic) NSUInteger notifications; // ivar: notifications
@property (retain, nonatomic) UIInputViewSetPlacement *toPlacement; // ivar: toPlacement


+(id)transitionFromPlacement:(id)arg0 toPlacement:(id)arg1 withAnimationStyle:(id)arg2 ;
-(BOOL)didAdvanceAnimationToState:(int)arg0 ;
-(void)dealloc;


@end


#endif