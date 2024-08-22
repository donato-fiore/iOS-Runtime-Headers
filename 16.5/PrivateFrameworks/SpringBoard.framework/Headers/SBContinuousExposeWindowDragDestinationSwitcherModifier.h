// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEWINDOWDRAGDESTINATIONSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEWINDOWDRAGDESTINATIONSWITCHERMODIFIER_H

@protocol SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate;


#import "SBSwitcherModifier.h"
#import "SBDisplayItemLayoutAttributes.h"
#import "SBChamoisOverlappingModel.h"
#import "SBAppLayout.h"
#import "SBDisplayItem.h"

@interface SBContinuousExposeWindowDragDestinationSwitcherModifier : SBSwitcherModifier {
    CGPoint _location;
    CGPoint _velocity;
    CGPoint _initialLocation;
    SBDisplayItemLayoutAttributes *_initialSelectedDisplayItemLayoutAttributes;
    BOOL _dragBeganInOtherSwitcher;
    SBChamoisOverlappingModel *_initialOverlappingModel;
    SBAppLayout *_lastAppLayoutForStripCalculation;
}


@property (readonly, weak, nonatomic) NSObject<SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate> *destinationDelegate; // ivar: _destinationDelegate
@property (readonly, nonatomic) SBAppLayout *initialAppLayout; // ivar: _initialAppLayout
@property (readonly, nonatomic) SBAppLayout *proposedAppLayout; // ivar: _proposedAppLayout
@property (readonly, nonatomic) NSUInteger proposedDestination; // ivar: _proposedDestination
@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem; // ivar: _selectedDisplayItem


-(BOOL)_anyProposedAppLayoutContainsSelectedDisplayItem;
-(id)_appLayoutByAddingItem:(id)arg0 toAppLayout:(id)arg1 size:(struct CGSize )arg2 center:(struct CGPoint )arg3 ;
-(id)_appLayoutContainingDisplayItem:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)initWithSelectedDisplayItem:(id)arg0 initialAppLayout:(id)arg1 delegate:(id)arg2 ;
-(struct CGRect )_frameForSelectedDisplayItem;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif