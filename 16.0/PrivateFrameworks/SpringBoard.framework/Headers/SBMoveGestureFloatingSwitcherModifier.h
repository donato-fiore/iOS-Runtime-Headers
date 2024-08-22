// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMOVEGESTUREFLOATINGSWITCHERMODIFIER_H
#define SBMOVEGESTUREFLOATINGSWITCHERMODIFIER_H



#import "SBGestureSwitcherModifier.h"

@interface SBMoveGestureFloatingSwitcherModifier : SBGestureSwitcherModifier

@property (nonatomic) BOOL hideSlideOverTongueForDragFromStashedConfiguration; // ivar: _hideSlideOverTongueForDragFromStashedConfiguration
@property (nonatomic) NSInteger initialFloatingConfiguration; // ivar: _initialFloatingConfiguration
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic) CGPoint translation; // ivar: _translation


-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)shadowOffsetForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(NSUInteger)slideOverTongueDirection;
-(NSUInteger)slideOverTongueState;
-(id)_updateForGestureDidBeginWithEvent:(id)arg0 ;
-(id)_updateForGestureDidChangeWithEvent:(id)arg0 ;
-(id)_updateForGestureDidEndWithEvent:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutToAttachSlideOverTongue;
-(id)appLayoutsToCacheSnapshots;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 initialFloatingConfiguration:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(struct CGRect )containerViewBounds;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;


@end


#endif