// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEWINDOWDRAGSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEWINDOWDRAGSWITCHERMODIFIER_H

@class UIViewFloatAnimatableProperty, NSString;
@protocol SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate;


#import "SBGestureSwitcherModifier.h"
#import "SBContinuousExposeWindowDragDestinationSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBDisplayItem.h"

@interface SBContinuousExposeWindowDragSwitcherModifier : SBGestureSwitcherModifier <SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate>

 {
    CGPoint _location;
    CGPoint _anchorPoint;
    CGPoint _initialAnchorPoint;
    BOOL _gestureWasCanceled;
    CGSize _sizeOfSelectedDisplayItem;
    BOOL _dragBeganInOurSwitcher;
    BOOL _dragBeganInOtherSwitcher;
    BOOL _dragBeganInAnyStrip;
    BOOL _dragBeganOnAnyStage;
    UIViewFloatAnimatableProperty *_anchorPointRampingProperty;
    SBContinuousExposeWindowDragDestinationSwitcherModifier *_destinationModifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBAppLayout *initialAppLayout; // ivar: _initialAppLayout
@property (readonly, nonatomic) SBAppLayout *proposedAppLayout;
@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem; // ivar: _selectedDisplayItem
@property (readonly) Class superclass;


-(BOOL)_anyItemExceedsWidthThresholdToHideStrip;
-(BOOL)_anyProposedAppLayoutContainsSelectedDisplayItem;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)shouldPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)wantsSceneResizesHostedContextForAppLayout:(id)arg0 ;
-(CGFloat)continuousExposeStripProgress;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)perspectiveAngleForAppLayout:(id)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(NSInteger)shadowStyleForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)_appLayoutContainingDisplayItem:(id)arg0 ;
-(id)_baseLayoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutContainingAppLayout:(id)arg0 ;
-(id)appLayoutOnStage;
-(id)handleEvent:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 initialAppLayout:(id)arg1 selectedDisplayItem:(id)arg2 ;
-(id)topMostLayoutElements;
-(id)visibleAppLayouts;
-(struct CGPoint )anchorPointForIndex:(NSUInteger)arg0 ;
-(struct CGPoint )preferredCenterForSelectedItemInDestinationModifier:(id)arg0 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct SBSwitcherAsyncRenderingAttributes )asyncRenderingAttributesForAppLayout:(id)arg0 ;
-(struct SBSwitcherGradientWallpaperAttributes )wallpaperGradientAttributesForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)_beginAnimatingAnchorPointRampingPropertyWithMode:(NSInteger)arg0 settings:(id)arg1 ;


@end


#endif