// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEWINDOWDRAGCONTAINERSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEWINDOWDRAGCONTAINERSWITCHERMODIFIER_H



#import "SBFilteringSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBDisplayItem.h"
#import "SBContinuousExposeWindowDragContentSwitcherModifier.h"
#import "SBContinuousExposeWindowDragSwitcherModifier.h"

@interface SBContinuousExposeWindowDragContainerSwitcherModifier : SBFilteringSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *initialAppLayout; // ivar: _initialAppLayout
@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem; // ivar: _selectedDisplayItem
@property (readonly, nonatomic) SBContinuousExposeWindowDragContentSwitcherModifier *windowDragContentSwitcherModifier; // ivar: _windowDragContentSwitcherModifier
@property (readonly, nonatomic) SBContinuousExposeWindowDragSwitcherModifier *windowDragModifier; // ivar: _windowDragModifier


-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)wantsSceneResizesHostedContextForAppLayout:(id)arg0 ;
-(CGFloat)blurDelayForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutOnStage;
-(id)appLayoutsForContinuousExposeIdentifier:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithAppLayouts:(id)arg0 initialAppLayout:(id)arg1 selectedDisplayItem:(id)arg2 windowDragContentSwitcherModifier:(id)arg3 ;


@end


#endif