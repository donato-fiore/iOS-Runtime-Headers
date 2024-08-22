// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABLEVIEWCELLPROMISEREGION_H
#define _UITABLEVIEWCELLPROMISEREGION_H

@class NSString, NSIndexPath, NSArray;
@protocol _UILegacyFocusRegion, _UIFocusRegionContainer, UIFocusItemContainer, UIFocusEnvironment;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UITableView.h"

@interface _UITableViewCellPromiseRegion : NSObject <_UILegacyFocusRegion, _UIFocusRegionContainer>



@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) NSInteger preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_isPromiseFocusRegion;
-(BOOL)_isTransparentFocusRegion;
-(BOOL)canBecomeFocused;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_childFocusRegionsInRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(id)_focusDebugOverlayParentView;
-(id)_focusRegionFocusSystem;
-(id)_focusRegionGuides;
-(id)_focusRegionView;
-(id)_fulfillPromisedFocusRegion;
-(id)_preferredFocusRegionCoordinateSpace;
-(id)_regionForFocusedItem:(id)arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGRect )_focusRegionFrame;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;


@end


#endif