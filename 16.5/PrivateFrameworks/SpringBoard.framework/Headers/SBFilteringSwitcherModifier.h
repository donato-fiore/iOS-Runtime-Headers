// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFILTERINGSWITCHERMODIFIER_H
#define SBFILTERINGSWITCHERMODIFIER_H

@class NSSet, NSArray, NSString;
@protocol SBRoutingSwitcherModifierDelegate;


#import "SBSwitcherModifier.h"
#import "SBRoutingSwitcherModifier.h"
#import "_SBFilteringPassthroughTargetSwitcherModifier.h"

@interface SBFilteringSwitcherModifier : SBSwitcherModifier <SBRoutingSwitcherModifierDelegate>

 {
    SBRoutingSwitcherModifier *_routingModifier;
    _SBFilteringPassthroughTargetSwitcherModifier *_passthroughModifier;
    NSSet *_displayItemsToFilter;
}


@property (readonly, copy, nonatomic) NSArray *appLayoutsToFilter; // ivar: _appLayoutsToFilter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBSwitcherModifier *modifier; // ivar: _modifier
@property (readonly) Class superclass;


-(id)fallbackModifierForRoutingModifier:(id)arg0 ;
-(id)homeScreenModifierForRoutingModifier:(id)arg0 ;
-(id)initWithAppLayouts:(id)arg0 modifier:(id)arg1 ;
-(id)routingModifier:(id)arg0 animationAttributesModifierForLayoutElement:(id)arg1 ;
-(id)routingModifier:(id)arg0 event:(id)arg1 forModifier:(id)arg2 ;
-(id)routingModifier:(id)arg0 filteredAppLayouts:(id)arg1 forModifier:(id)arg2 ;
-(id)routingModifier:(id)arg0 filteredContinuousExposeIdentifiers:(id)arg1 forModifier:(id)arg2 ;
-(id)routingModifier:(id)arg0 modifierForAppLayout:(id)arg1 ;
-(id)scrollModifierForRoutingModifier:(id)arg0 ;
-(id)transactionCompletionOptionsModifierForRoutingModifier:(id)arg0 ;
-(struct CGRect )routingModifier:(id)arg0 containerViewBoundsForModifier:(id)arg1 ;
-(struct CGRect )routingModifier:(id)arg0 switcherViewBoundsForModifier:(id)arg1 ;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif