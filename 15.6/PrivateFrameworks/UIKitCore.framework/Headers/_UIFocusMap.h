// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSMAP_H
#define _UIFOCUSMAP_H

@protocol UICoordinateSpace, _UIFocusRegionContainer;

#import <Foundation/Foundation.h>

#import "_UIFocusMapSearchInfo.h"
#import "_UIFocusGroupMap.h"
#import "UIFocusSystem.h"
#import "_UIFocusSearchInfo.h"

@interface _UIFocusMap : NSObject {
    BOOL _minimumSearchAreaIsEmpty;
    BOOL _trackingSearchInfo;
    BOOL _needsSearchInfo;
    BOOL _ignoresRootContainerClippingRect;
}


@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, nonatomic, getter=_defaultItemSearchContext) _UIFocusMapSearchInfo *defaultItemSearchInfo; // ivar: _defaultItemSearchInfo
@property (readonly, nonatomic) _UIFocusGroupMap *focusGroupMap; // ivar: _focusGroupMap
@property (readonly, nonatomic, getter=_focusMovementSearchContext) _UIFocusMapSearchInfo *focusMovementSearchInfo; // ivar: _focusMovementSearchInfo
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem; // ivar: _focusSystem
@property (nonatomic) CGRect minimumSearchArea; // ivar: _minimumSearchArea
@property (readonly, weak, nonatomic) NSObject<_UIFocusRegionContainer> *rootContainer; // ivar: _rootContainer
@property (readonly, nonatomic) _UIFocusSearchInfo *searchInfo; // ivar: _searchInfo


-(BOOL)verifyFocusabilityForItem:(id)arg0 ;
-(NSUInteger)_adjustedIndexPreventingScrollingForLinearMovementFromIndex:(NSUInteger)arg0 toProposedIndex:(NSUInteger)arg1 inItems:(id)arg2 groupBoundaries:(id)arg3 linearHeading:(NSUInteger)arg4 ;
-(id)_allDefaultFocusableRegionsInContainer:(id)arg0 intersectingRegion:(id)arg1 ;
-(id)_allFocusableItemsInEnvironment:(id)arg0 ;
-(id)_closestFocusableItemToPoint:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 excludingItems:(id)arg2 distanceMeasuringUnitPoint:(struct CGPoint )arg3 ;
-(id)_defaultFocusItemInEnvironment:(id)arg0 limitScopeUsingFocusPreferences:(BOOL)arg1 ;
-(id)_defaultMapSnapshotter;
-(id)_findAllDefaultFocusableRegionsWithSnapshotter:(id)arg0 ;
-(id)_linearlySortedFocusItemsForItems:(id)arg0 groupFilter:(NSInteger)arg1 itemStandInMap:(id)arg2 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 inRegions:(id)arg1 withSnapshot:(id)arg2 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 startingFromRegion:(id)arg1 ;
-(id)_nextFocusedItemForFocusMovementRequest:(id)arg0 startingFromRegion:(id)arg1 inRegions:(id)arg2 withSnapshot:(id)arg3 ;
-(id)_nextFocusedItemForLinearFocusMovementRequest:(id)arg0 startingFromRegion:(id)arg1 inRegions:(id)arg2 withSnapshot:(id)arg3 ;
-(id)_nextFocusedItemForNonLinearFocusMovementRequest:(id)arg0 startingFromRegion:(id)arg1 inRegions:(id)arg2 withSnapshot:(id)arg3 ;
-(id)_stopTrackingSearches;
-(id)_tests_defaultFocusItemInEnvironment:(id)arg0 ;
-(id)init;
-(id)initWithFocusSystem:(id)arg0 rootContainer:(id)arg1 ;
-(id)initWithFocusSystem:(id)arg0 rootContainer:(id)arg1 coordinateSpace:(id)arg2 searchInfo:(id)arg3 ignoresRootContainerClippingRect:(BOOL)arg4 ;
-(void)_beginTrackingDefaultItemSearchInfoIfNecessary;
-(void)_beginTrackingFocusMovementSearchInfoIfNecessary;
-(void)_beginTrackingSearches;
-(void)_trackExternalSnapshot:(id)arg0 ;
-(void)diagnoseFocusabilityForItem:(id)arg0 report:(id)arg1 ;


@end


#endif