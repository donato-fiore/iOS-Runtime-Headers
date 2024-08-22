// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSREGIONCONTAINERPROXY_H
#define _UIFOCUSREGIONCONTAINERPROXY_H

@class NSString, NSArray;
@protocol _UIFocusRegionContainer, UIFocusItemContainer, UIFocusEnvironment;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer>



@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFocusEnvironment; // ivar: _isFocusEnvironment
@property (retain, nonatomic) NSObject<UIFocusItemContainer> *itemContainer; // ivar: _itemContainer
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) NSInteger preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;


-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_focusEnvironment;
-(id)_preferredFocusRegionCoordinateSpace;
-(id)_regionForFocusedItem:(id)arg0 inCoordinateSpace:(id)arg1 ;
-(id)initWithItemContainer:(id)arg0 ;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;


@end


#endif