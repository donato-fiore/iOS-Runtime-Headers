// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALHOMEGESTUREFLOATINGSWITCHERMODIFIER_H
#define SBEXTERNALHOMEGESTUREFLOATINGSWITCHERMODIFIER_H

@class NSString;
@protocol SBHomeGestureDockSwitcherModifierDelegate;


#import "SBGestureSwitcherModifier.h"
#import "SBHomeGestureDockSwitcherModifier.h"

@interface SBExternalHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate>

 {
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    NSInteger _initialFloatingConfiguration;
    NSInteger _interfaceOrientation;
    BOOL _stashed;
    CGRect _stashedContainerViewBounds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isFloatingDockGesturePossible;
-(NSInteger)currentFinalDestination;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToResignActive;
-(id)handleGestureEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 initialFloatingConfiguration:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(struct CGRect )containerViewBounds;
-(void)_updateForGestureDidBeginOrChangeWithEvent:(id)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif