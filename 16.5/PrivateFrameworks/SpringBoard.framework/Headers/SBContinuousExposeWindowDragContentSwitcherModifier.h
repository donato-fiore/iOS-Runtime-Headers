// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEWINDOWDRAGCONTENTSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEWINDOWDRAGCONTENTSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBContinuousExposeWindowDragSwitcherModifier.h"
#import "SBDisplayItem.h"

@interface SBContinuousExposeWindowDragContentSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBContinuousExposeWindowDragSwitcherModifier *gestureModifier; // ivar: _gestureModifier
@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem; // ivar: _selectedDisplayItem


-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 initialAppLayout:(id)arg1 selectedDisplayItem:(id)arg2 ;


@end


#endif