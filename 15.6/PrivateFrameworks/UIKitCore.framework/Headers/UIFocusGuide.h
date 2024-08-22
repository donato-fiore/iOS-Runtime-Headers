// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIFOCUSGUIDE_H
#define UIFOCUSGUIDE_H

@class NSString, NSArray;
@protocol UIFocusItem, _UILegacyFocusRegion, _UIFocusRegionContainer, _UIFocusGuideRegionDelegate, UIFocusItemContainer, UIFocusEnvironment;


#import "UILayoutGuide.h"
#import "UIFocusEffect.h"
#import "UIView.h"

@interface UIFocusGuide : UILayoutGuide <UIFocusItem, _UILegacyFocusRegion, _UIFocusRegionContainer, _UIFocusGuideRegionDelegate>

 {
    BOOL _didSetPreferredFocusedEnvironments;
}


@property (nonatomic) BOOL areChildrenFocused;
@property (nonatomic, getter=_automaticallyDisableWhenIntersectingFocus, setter=_setAutomaticallyDisableWhenIntersectingFocus:) BOOL automaticallyDisableWhenIntersectingFocus; // ivar: _automaticallyDisableWhenIntersectingFocus
@property (nonatomic, getter=_automaticallyPreferOwningView, setter=_setAutomaticallyPreferOwningView:) BOOL automaticallyPreferOwningView; // ivar: _automaticallyPreferOwningView
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSInteger focusGroupPriority;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, nonatomic) NSObject<UIFocusItem> *focusItemForSorting;
@property (readonly, nonatomic) CGRect frame;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (copy, nonatomic) NSArray *preferredFocusEnvironments; // ivar: _preferredFocusEnvironments
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) NSInteger preferredFocusMovementStyle;
@property (weak, nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;


-(BOOL)_ignoresSpeedBumpEdges;
-(BOOL)_isPromiseFocusRegion;
-(BOOL)_isTransparentFocusRegion;
-(BOOL)_isUnclippable;
-(BOOL)_isUnoccludable;
-(BOOL)_uili_isFocusGuide;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(CGFloat)_focusPriority;
-(id)_childFocusRegionsInRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(id)_encodablePreferredFocusEnvironments;
-(id)_focusDebugOverlayParentView;
-(id)_focusRegionFocusSystem;
-(id)_focusRegionGuides;
-(id)_focusRegionView;
-(id)_fulfillPromisedFocusRegion;
-(id)_preferredFocusRegionCoordinateSpace;
-(id)_regionForFocusedItem:(id)arg0 inCoordinateSpace:(id)arg1 ;
-(id)focusGuideRegion:(id)arg0 preferredFocusEnvironmentsForMovementRequest:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGRect )_focusRegionFrame;
-(void)_didUpdateFocusToPreferredFocusedView;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)focusGuideRegion:(id)arg0 willParticipateAsDestinationRegionInFocusUpdate:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;


@end


#endif