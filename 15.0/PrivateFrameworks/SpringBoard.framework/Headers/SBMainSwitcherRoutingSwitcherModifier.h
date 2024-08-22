// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINSWITCHERROUTINGSWITCHERMODIFIER_H
#define SBMAINSWITCHERROUTINGSWITCHERMODIFIER_H

@class NSString;
@protocol SBChainableModifierDelegate, SBRoutingSwitcherModifierDelegate;


#import "SBSwitcherModifier.h"
#import "SBRoutingSwitcherModifier.h"

@interface SBMainSwitcherRoutingSwitcherModifier : SBSwitcherModifier <SBChainableModifierDelegate, SBRoutingSwitcherModifierDelegate>

 {
    SBRoutingSwitcherModifier *_routingModifier;
    SBSwitcherModifier *_mainModifierSubtree;
    SBSwitcherModifier *_floatingModifierSubtree;
    SBSwitcherModifier *_currentScrollableSubtree;
    SBSwitcherModifier *_activeSubtree;
    NSInteger _currentEnvironmentMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(id)_modifierToHandleLayoutElement:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugPotentialChildModifiers;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)homeScreenModifierForRoutingModifier:(id)arg0 ;
-(id)initWithMainModifierSubtree:(id)arg0 floatingModifierSubtree:(id)arg1 ;
-(id)routingModifier:(id)arg0 animationAttributesModifierForLayoutElement:(id)arg1 ;
-(id)routingModifier:(id)arg0 event:(id)arg1 forModifier:(id)arg2 ;
-(id)routingModifier:(id)arg0 filteredAppLayouts:(id)arg1 forModifier:(id)arg2 ;
-(id)routingModifier:(id)arg0 modifierForAppLayout:(id)arg1 ;
-(id)scrollModifierForRoutingModifier:(id)arg0 ;
-(id)transactionCompletionOptionsModifierForRoutingModifier:(id)arg0 ;
-(struct CGRect )routingModifier:(id)arg0 containerViewBoundsForModifier:(id)arg1 ;
-(struct CGRect )routingModifier:(id)arg0 switcherViewBoundsForModifier:(id)arg1 ;


@end


#endif