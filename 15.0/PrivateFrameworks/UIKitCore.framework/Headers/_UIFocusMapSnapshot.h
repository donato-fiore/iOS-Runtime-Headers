// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSMAPSNAPSHOT_H
#define _UIFOCUSMAPSNAPSHOT_H

@class NSMutableArray, NSHashTable, NSArray, NSString;
@protocol _UIFocusRegionSearchContext, UICoordinateSpace, _UIFocusMapArea, _UIFocusRegionContainer;

#import <Foundation/Foundation.h>

#import "_UIFocusMapSnapshotDebugInfo.h"
#import "UIFocusSystem.h"
#import "_UIFocusRegion.h"
#import "UIScreen.h"
#import "_UIFocusSearchInfo.h"

@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext>

 {
    NSMutableArray *_mutableUnoccludedRegions;
    NSHashTable *_filteredOriginalRegions;
    NSMutableArray *_containersBeingAdded;
    NSMutableArray *_containersBeingAddedFocusSystems;
    NSMutableArray *_clippingRectsBeingAdded;
    NSHashTable *_eligibleEnvironments;
    NSHashTable *_ineligibleEnvironments;
    NSArray *_regions;
    ? _flags;
}


@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=_debugInfo) _UIFocusMapSnapshotDebugInfo *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem; // ivar: _focusSystem
@property (readonly, copy, nonatomic) _UIFocusRegion *focusedRegion; // ivar: _focusedRegion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<_UIFocusMapArea> *mapArea; // ivar: _mapArea
@property (readonly, copy, nonatomic) NSArray *originalRegions;
@property (readonly, copy, nonatomic) NSArray *regions;
@property (readonly, weak, nonatomic) NSObject<_UIFocusRegionContainer> *regionsContainer; // ivar: _regionsContainer
@property (readonly, weak, nonatomic) NSObject<_UIFocusRegionContainer> *rootContainer; // ivar: _rootContainer
@property (readonly, weak, nonatomic) UIScreen *screen;
@property (readonly, nonatomic, getter=_searchArea) NSObject<_UIFocusMapArea> *searchArea; // ivar: _searchArea
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo; // ivar: _searchInfo
@property (readonly) Class superclass;


-(id)_debugInfoWithFocusMapSearchInfo:(id)arg0 ;
-(id)_initWithSnapshotter:(id)arg0 mapArea:(id)arg1 searchArea:(id)arg2 ;
-(id)debugQuickLookObject;
-(id)init;
-(id)regionsForOriginalRegion:(id)arg0 ;
-(id)searchArea;
-(void)_capture;
-(void)addRegion:(id)arg0 ;
-(void)addRegions:(id)arg0 ;
-(void)addRegionsInContainer:(id)arg0 ;
-(void)addRegionsInContainers:(id)arg0 ;


@end


#endif