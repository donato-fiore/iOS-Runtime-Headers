// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSMAPSNAPSHOT_H
#define _UIFOCUSMAPSNAPSHOT_H

@class NSMutableArray, NSHashTable, NSArray, NSString;
@protocol _UIFocusRegionSearchContext, UICoordinateSpace, _UIFocusRegionContainer;

#import <Foundation/Foundation.h>

#import "_UIFocusMapSnapshotDebugInfo.h"
#import "UIFocusSystem.h"
#import "_UIFocusRegion.h"
#import "_UIFocusMapRect.h"
#import "UIScreen.h"
#import "_UIFocusSearchInfo.h"

@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext>

 {
    NSMutableArray *_mutableUnoccludedRegions;
    NSHashTable *_filteredOriginalRegions;
    *__CFDictionary _subregionToRegionMap;
    *__CFDictionary _regionToOccludingRegionsMap;
    *__CFDictionary _regionToFocusItemCache;
    *__CFDictionary _regionFrameCache;
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
@property (readonly, nonatomic) _UIFocusMapRect *mapArea; // ivar: _mapArea
@property (readonly, copy, nonatomic) NSArray *originalRegions;
@property (readonly, copy, nonatomic) NSArray *regions;
@property (readonly, weak, nonatomic) NSObject<_UIFocusRegionContainer> *regionsContainer; // ivar: _regionsContainer
@property (readonly, weak, nonatomic) NSObject<_UIFocusRegionContainer> *rootContainer; // ivar: _rootContainer
@property (readonly, weak, nonatomic) UIScreen *screen;
@property (readonly, nonatomic, getter=_searchArea) _UIFocusMapRect *searchArea; // ivar: _searchArea
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo; // ivar: _searchInfo
@property (readonly) Class superclass;


-(id)_cachedNextFocusedItemForRegion:(id)arg0 withFocusMovementRequest:(id)arg1 inMap:(id)arg2 ;
-(id)_debugInfoWithFocusMapSearchInfo:(id)arg0 ;
-(id)_initWithSnapshotter:(id)arg0 mapArea:(id)arg1 searchArea:(id)arg2 ;
-(id)debugQuickLookObject;
-(id)init;
-(id)occludingRegionsForRegion:(id)arg0 ;
-(id)originalRegionForRegion:(id)arg0 ;
-(id)regionsForOriginalRegion:(id)arg0 ;
-(id)searchArea;
-(struct CGRect )snapshotFrameForRegion:(id)arg0 ;
-(void)_capture;
-(void)_trackOccludingRegion:(id)arg0 forRegion:(id)arg1 ;
-(void)_trackSubregion:(id)arg0 forRegion:(id)arg1 ;
-(void)addRegion:(id)arg0 ;
-(void)addRegions:(id)arg0 ;
-(void)addRegionsInContainer:(id)arg0 ;
-(void)addRegionsInContainers:(id)arg0 ;
-(void)consumeRegionInformationForRegions:(id)arg0 fromSnapshot:(id)arg1 ;
-(void)dealloc;


@end


#endif