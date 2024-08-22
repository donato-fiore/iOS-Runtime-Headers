// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONTINUOUSEXPOSEWINDOWDROPSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEWINDOWDROPSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBDisplayItem.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeWindowDropSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem; // ivar: _selectedDisplayItem
@property (readonly, nonatomic) SBAppLayout *toAppLayout; // ivar: _toAppLayout


-(BOOL)_isLayoutRolePartOfWindowDragInteraction:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)_appLayoutContainingDisplayItem:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 selectedDisplayItem:(id)arg1 toAppLayout:(id)arg2 ;
-(id)transitionDidEnd;


@end


#endif