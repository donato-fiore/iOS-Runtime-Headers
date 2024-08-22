// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBGESTURESWITCHERMODIFIER_H
#define SBGESTURESWITCHERMODIFIER_H

@class NSUUID;


#import "SBSwitcherModifier.h"
#import "SBGestureSwitcherModifierEvent.h"

@interface SBGestureSwitcherModifier : SBSwitcherModifier {
    NSUUID *_gestureID;
    SBGestureSwitcherModifierEvent *_lastGestureEvent;
}


@property (readonly, nonatomic) NSUInteger gesturePhase; // ivar: _gesturePhase


-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)isItemResizingAllowedForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isPreparingLayout;
-(BOOL)isUpdatingLayout;
-(CGFloat)visibleMarginForItemContainerAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)maskedCornersForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)handleEvent:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 ;


@end


#endif