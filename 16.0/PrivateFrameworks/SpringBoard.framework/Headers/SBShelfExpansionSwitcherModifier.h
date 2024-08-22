// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSHELFEXPANSIONSWITCHERMODIFIER_H
#define SBSHELFEXPANSIONSWITCHERMODIFIER_H

@class SBFFluidBehaviorSettings, NSArray;
@protocol SBShelfExpansionSwitcherModifierDelegate;


#import "SBTransitionSwitcherModifier.h"

@interface SBShelfExpansionSwitcherModifier : SBTransitionSwitcherModifier {
    BOOL _expand;
    NSUInteger _style;
    CGPoint _target;
    CGFloat _perIndexResponseIncrement;
    CGFloat _dismissalScale;
    SBFFluidBehaviorSettings *_settings;
    SBFFluidBehaviorSettings *_ropeSettings;
    CGFloat _bezierCurvePointYDeltaFromTarget;
    CGFloat _bezierCurveXExponent;
    CGFloat _bezierCurveYExponent;
    CGFloat _bezierCurveScaleExponent;
    CGPoint _cached_scrollViewContentOffset;
    NSUInteger _cached_appLayoutsGenCount;
    NSArray *_cached_visibleOrderedAppLayouts;
    NSUInteger _topMostLayoutElements_lastAppLayoutsGenCount;
    NSInteger _topMostLayoutElements_lastOrientation;
    CGRect _topMostLayoutElements_lastContainerViewBounds;
    CGRect _topMostLayoutElements_lastSwitcherViewBounds;
    CGPoint _topMostLayoutElements_lastContentOffset;
    NSArray *_topMostLayoutElements_lastElements;
}


@property (readonly, weak, nonatomic) NSObject<SBShelfExpansionSwitcherModifierDelegate> *animationDelegate; // ivar: _animationDelegate


-(BOOL)_isEffectivelyInShelf;
-(BOOL)_isMovingFromLeadingToTrailing;
-(BOOL)isFocusEnabledForAppLayout:(id)arg0 ;
-(BOOL)shouldInterruptForRemovalEvent:(id)arg0 ;
-(BOOL)shouldUpdateAnimatableProperty:(id)arg0 ;
-(CGFloat)_presentationValueForIndex:(NSUInteger)arg0 ;
-(CGFloat)modelValueForAnimatableProperty:(id)arg0 currentValue:(CGFloat)arg1 creating:(BOOL)arg2 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)shelfBackgroundBlurOpacity;
-(NSInteger)updateModeForAnimatableProperty:(id)arg0 ;
-(NSUInteger)transactionCompletionOptions;
-(id)_visibleOrderedAppLayouts;
-(id)animatablePropertyIdentifiers;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleAnimatablePropertyChangedEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 expand:(BOOL)arg1 style:(NSUInteger)arg2 target:(struct CGPoint )arg3 animationDelegate:(id)arg4 ;
-(id)settingsForAnimatableProperty:(id)arg0 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(struct CGPoint )_bezierPointFromTime:(CGFloat)arg0 start:(struct CGPoint )arg1 target:(struct CGPoint )arg2 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif