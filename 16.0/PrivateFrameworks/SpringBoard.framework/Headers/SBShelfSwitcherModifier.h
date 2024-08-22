// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSHELFSWITCHERMODIFIER_H
#define SBSHELFSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherShelf.h"

@interface SBShelfSwitcherModifier : SBSwitcherModifier {
    NSInteger _layoutRole;
    SBAppLayout *_activeFullScreenAppLayout;
    SBAppLayout *_activeFloatingAppLayout;
    NSUInteger _contentOptions;
    CGRect _presentationTargetFrame;
    SBAppLayout *_presentedFromAppLayout;
    NSUInteger _animationStyle;
    BOOL _isPendingDismissal;
    BOOL _isPendingDismissalFromGesture;
}


@property (readonly, nonatomic) SBSwitcherShelf *shelf; // ivar: _shelf


+(NSUInteger)contentOptionsForTransitionEvent:(id)arg0 context:(id)arg1 ;
-(id)_responseForDismissingIfNeededGestureInitiated:(BOOL)arg0 ;
-(id)containerLeafAppLayoutForShelf:(id)arg0 ;
-(id)focusedAppLayoutForShelf:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)homeAffordanceLayoutElementToPortalIntoShelf:(id)arg0 ;
-(id)ignoredDisplayItemsForShelf:(id)arg0 ;
-(id)initWithShelf:(id)arg0 contentOptions:(NSUInteger)arg1 activeFullScreenAppLayout:(id)arg2 activeFloatingAppLayout:(id)arg3 presentationTargetFrame:(struct CGRect )arg4 presentedFromAppLayout:(id)arg5 ;
-(id)topMostLayoutElements;
-(id)visibleShelves;
-(struct CGRect )frameForShelf:(id)arg0 ;
-(struct SBSwitcherShelfPresentationAttributes )presentationAttributesForShelf:(id)arg0 ;


@end


#endif