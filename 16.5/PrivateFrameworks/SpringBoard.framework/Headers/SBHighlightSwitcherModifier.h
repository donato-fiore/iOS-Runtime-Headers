// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHIGHLIGHTSWITCHERMODIFIER_H
#define SBHIGHLIGHTSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBHighlightSwitcherModifier : SBSwitcherModifier {
    NSInteger _layoutRole;
    SBAppLayout *_appLayout;
    SBAppLayout *_leafAppLayout;
    NSUInteger _phase;
    BOOL _listensForHighlightEvents;
}


@property (nonatomic) BOOL stylesCornerRadii; // ivar: _stylesCornerRadii


-(BOOL)shouldAccessoryDrawShadowForAppLayout:(id)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleHighlightEvent:(id)arg0 ;
-(id)initWithLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 listensForHighlightEvents:(BOOL)arg2 ;
-(id)topMostLayoutElements;
-(id)topMostLayoutRolesForAppLayout:(id)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withCornerRadii:(struct UIRectCornerRadii )arg2 ;


@end


#endif