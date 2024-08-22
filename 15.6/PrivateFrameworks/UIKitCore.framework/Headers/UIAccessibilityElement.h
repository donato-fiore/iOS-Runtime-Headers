// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYELEMENT_H
#define UIACCESSIBILITYELEMENT_H

@class NSString, NSArray;
@protocol UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer, UIAccessibilityIdentification, UICoordinateSpace, UIFocusEnvironment;


#import "UIResponder.h"
#import "UIFocusEffect.h"
#import "UIView.h"

@interface UIAccessibilityElement : UIResponder <UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer, UIAccessibilityIdentification>

 {
    BOOL _areChildrenFocused;
}


@property (weak, nonatomic) id *accessibilityContainer;
@property (nonatomic) CGRect accessibilityFrame;
@property (nonatomic) CGRect accessibilityFrameInContainerSpace; // ivar: _accessibilityFrameInContainerSpace
@property (retain, nonatomic) NSString *accessibilityHint;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) NSUInteger accessibilityTraits;
@property (retain, nonatomic) NSString *accessibilityValue;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSInteger focusGroupPriority;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, nonatomic) CGRect frame;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAccessibilityElement;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) NSInteger preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;


-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_firstViewAncestor;
-(id)_preferredFocusRegionCoordinateSpace;
-(id)_regionForFocusedItem:(id)arg0 inCoordinateSpace:(id)arg1 ;
-(id)focusItemsInRect:(struct CGRect )arg0 ;
-(id)initWithAccessibilityContainer:(id)arg0 ;
-(id)nextResponder;
-(void)_destroyFocusLayer;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)_updateFocusLayerFrame;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;


@end


#endif