// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSPLITDISPLAYITEMPULSETRANSITIONSWITCHERMODIFIER_H
#define SBSPLITDISPLAYITEMPULSETRANSITIONSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBSplitDisplayItemPulseTransitionSwitcherModifier : SBSwitcherModifier {
    NSInteger _floatingConfiguration;
}


@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) NSInteger layoutRole; // ivar: _layoutRole


-(BOOL)completesWhenChildrenComplete;
-(CGFloat)backgroundOpacityForIndex:(NSUInteger)arg0 ;
-(id)_previousHomeAffordanceAppLayout;
-(id)containerLeafAppLayoutForShelf:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)homeAffordanceLayoutElementToPortalIntoShelf:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 appLayout:(id)arg1 layoutRole:(NSInteger)arg2 ;
-(id)topMostLayoutElements;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGRect )frameForShelf:(id)arg0 ;


@end


#endif