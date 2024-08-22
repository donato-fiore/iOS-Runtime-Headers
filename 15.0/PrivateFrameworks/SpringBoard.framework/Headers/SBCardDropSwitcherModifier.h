// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCARDDROPSWITCHERMODIFIER_H
#define SBCARDDROPSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBSwitcherDropRegionContext.h"
#import "SBAppLayout.h"

@interface SBCardDropSwitcherModifier : SBSwitcherModifier {
    NSUInteger _phase;
    SBSwitcherDropRegionContext *_dropContext;
    SBAppLayout *_finalAppLayout;
    SBAppLayout *_remainingAppLayout;
    SBAppLayout *_evictedAppLayout;
    CGPoint _referenceCardOffsetFromPageBoundary;
    BOOL _shouldExpectMainTransitionEvent;
    BOOL _handledMainTransitionEvent;
    BOOL _isFinalAppLayoutBlurred;
    BOOL _waitingForReflowAnimation;
    BOOL _waitingForHeaderFadeIn;
}




-(BOOL)_appLayoutContainsModifiedAppLayout:(id)arg0 ;
-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isScrollEnabled;
-(BOOL)shouldAccessoryDrawShadowForAppLayout:(id)arg0 ;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)shouldScaleContentToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldShowBackdropViewAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(CGFloat)modelValueForAnimatableProperty:(id)arg0 currentValue:(CGFloat)arg1 creating:(BOOL)arg2 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(NSInteger)updateModeForAnimatableProperty:(id)arg0 ;
-(NSUInteger)blurTargetPreferenceForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)animatablePropertyIdentifiers;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleAnimatablePropertyChangedEvent:(id)arg0 ;
-(id)handleBlurProgressEvent:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)handleSwitcherDropEvent:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithDropContext:(id)arg0 ;
-(id)settingsForAnimatableProperty:(id)arg0 ;
-(id)topMostLayoutElements;
-(struct CGPoint )contentOffsetForIndex:(NSUInteger)arg0 alignment:(NSInteger)arg1 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(void)_completeIfNeeded;
-(void)_recomputeBlurStateWithCompletion:(id)arg0 ;


@end


#endif