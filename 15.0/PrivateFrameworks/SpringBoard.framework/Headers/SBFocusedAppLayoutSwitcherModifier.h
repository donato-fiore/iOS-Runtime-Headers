// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFOCUSEDAPPLAYOUTSWITCHERMODIFIER_H
#define SBFOCUSEDAPPLAYOUTSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBFocusedAppLayoutSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_focusedAppLayout;
}




-(BOOL)shouldShowBackdropViewAtIndex:(NSUInteger)arg0 ;
-(id)handleUpdateFocusedAppLayoutEvent:(id)arg0 ;
-(id)initWithFocusedAppLayout:(id)arg0 ;
-(id)visibleAppLayouts;


@end


#endif