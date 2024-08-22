// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LABELNAVROUTELABELER_H
#define LABELNAVROUTELABELER_H

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

#import <Foundation/Foundation.h>

#import "VKLabelNavRoadGraph.h"
#import "VKPolylineOverlay.h"

@interface LabelNavRouteLabeler : NSObject {
    BOOL _isOnRoute;
    NSUInteger _stepIndex;
    BOOL _checkOnRouteLabelsAlignment;
    BOOL _disableTileParseForOneLayout;
    unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> _tiles;
    unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> _pendingTiles;
    NSMutableArray *_junctions;
    VKLabelNavRoadGraph *_roadGraph;
    NSMutableArray *_fadingLabels;
    NSMutableDictionary *_visibleLabelsByName;
    NSMutableArray *_visibleLabels;
    NSMutableSet *_visibleShieldGroups;
    NSUInteger _countVisibleOnRouteRoadSigns;
    NSUInteger _countVisibleOffRouteRoadSigns;
    NSUInteger _countVisibleRoadSigns;
    NSUInteger _maxVisibleOnRouteRoadSigns;
    NSUInteger _maxVisibleOffRouteRoadSigns;
    NSUInteger _maxVisibleRoadSigns;
    NSUInteger _maxOnRoadGraphRoadSigns;
    NSUInteger _minVisibleOffRoadGraphRoadSigns;
    NSUInteger _minVisibleProceedToRouteRoadSigns;
    BOOL _preferRightSideLabelPlacement;
    float _minSignOffsetDistance;
    NSMutableSet *_roadNamesInGuidance;
    NSMutableArray *_guidanceStepInfos;
    NSMutableArray *_routeRoadInfos;
    NSInteger _currentRoadNameIndex;
    BOOL _checkIfRouteSubrangeChanged;
    BOOL _useRouteSubrange;
    BOOL _regenerateRoadSigns;
    BOOL _isStylesheetAnimating;
    PolylineCoordinate _routeSubrangeStart;
    PolylineCoordinate _routeSubrangeEnd;
    shared_ptr<md::NavCurrentRoadSign> _currentRoadSign;
    NSUInteger _debugCachedMaxVisibleOffRouteRoadSigns;
    NSUInteger _debugCachedMaxVisibleOnRouteRoadSigns;
    ? _styleManager;
    BOOL _shouldLabelOppositeCarriageways;
    vector<md::AvoidanceRectWithPriority, geo::StdAllocator<md::AvoidanceRectWithPriority, mdm::Allocator>> _avoidanceRects;
    BOOL _hasPendingTilesInSnappingRegion;
    BOOL _needsDebugConsoleClear;
    range_map<geo::Unit<RadianUnitDescription, float>, md::OrientationAction, std::less<geo::Unit<RadianUnitDescription, float>>, std::allocator<std::pair<const gm::Range<geo::Unit<RadianUnitDescription, float>>, md::OrientationAction>>> _onRouteOrientations;
    range_map<geo::Unit<RadianUnitDescription, float>, md::OrientationAction, std::less<geo::Unit<RadianUnitDescription, float>>, std::allocator<std::pair<const gm::Range<geo::Unit<RadianUnitDescription, float>>, md::OrientationAction>>> _relatedRouteOrientations;
}


@property (readonly, nonatomic) *void activeSigns; // ivar: _activeSigns
@property (nonatomic) *void artworkCache; // ivar: _artworkCache
@property (retain, nonatomic) NSString *currentLocationText; // ivar: _currentLocationText
@property (retain, nonatomic) NSString *currentRoadName; // ivar: _currentRoadName
@property (readonly, nonatomic) *void currentRoadSign;
@property (readonly, nonatomic) float currentRoadSignPixelHeight;
@property (retain, nonatomic) NSString *currentShieldGroup; // ivar: _currentShieldGroup
@property (nonatomic) BOOL debugDisableRoadSignLimit; // ivar: _debugDisableRoadSignLimit
@property (nonatomic) BOOL debugEnableShieldsOnRouteLine; // ivar: _debugEnableShieldsOnRouteLine
@property (nonatomic) BOOL drawRoadSigns; // ivar: _drawRoadSigns
@property (readonly, nonatomic) BOOL needsLayout; // ivar: _needsLayout
@property (retain, nonatomic) VKPolylineOverlay *route; // ivar: _route
@property (nonatomic) PolylineCoordinate routeUserOffset; // ivar: _routeUserOffset
@property (readonly, nonatomic) *void visibleSigns; // ivar: _visibleSigns


-(?)setStyleManager;
-(BOOL)_addJunctionsForTile:(*void)arg0 ;
-(BOOL)_collideLabel:(id)arg0 activeLabel:(id)arg1 labelsToRemove:(id)arg2 ;
-(BOOL)_findRouteOverlappingJunctionFrom:(NSInteger)arg0 routeJunctions:(*void)arg1 lookBackward:(BOOL)arg2 firstOverlap:(*NSInteger)arg3 secondOverlap:(*NSInteger)arg4 ;
-(BOOL)_updateActiveRouteRange;
-(BOOL)isNavMode;
-(BOOL)needsDebugDraw;
-(id)init;
-(struct optional<md::RoadSignOrientationResolver> )createRoadSignOrientationResolver:(id)arg0 navContext:(struct NavContext *)arg1 ;
-(unsigned char)computeRoutePositionForPOIAtPixel:(*void)arg0 currentPosition:(unsigned char)arg1 context:(struct NavContext *)arg2 ;
-(unsigned char)orientationForRoadSign:(id)arg0 roadLabel:(id)arg1 navContext:(struct NavContext *)arg2 ;
-(unsigned char)resolveOrientation:(struct NavContext *)arg0 road:(id)arg1 currentOrientation:(unsigned char)arg2 ;
-(void)_addLabelsAtJunctions:(id)arg0 withContext:(struct NavContext *)arg1 maxLabelsToAdd:(NSUInteger)arg2 ;
-(void)_addLabelsForJunctions:(id)arg0 withContext:(struct NavContext *)arg1 maxLabelsToAdd:(NSUInteger)arg2 useAllJunctions:(BOOL)arg3 placeShieldsFrontToBack:(BOOL)arg4 ;
-(void)_addVisibleSigns;
-(void)_createOrUpdateLabelForRoad:(id)arg0 isShield:(BOOL)arg1 navContext:(struct NavContext *)arg2 hopOffsetDistance:(float)arg3 ;
-(void)_dedupOffRouteRoads;
-(void)_generateCurrentRoadSignWithContext:(struct NavContext *)arg0 ;
-(void)_initalizeCurrentRoadInfo;
-(void)_refreshGuidanceRoadNames;
-(void)_reloadRouteJunctions;
-(void)_tryAddLabel:(id)arg0 navContext:(struct NavContext *)arg1 labelCollisionEnabled:(BOOL)arg2 ;
-(void)_tryAddRoadSignForJunction:(id)arg0 navContext:(struct NavContext *)arg1 labelCollisionEnabled:(BOOL)arg2 ;
-(void)_tryAddRoadSignForRoad:(id)arg0 isShield:(BOOL)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(BOOL)arg3 ;
-(void)_updateCurrentRoadInfo;
-(void)_updatePreferredLabelPlacements;
-(void)_updateRoadStarts;
-(void)_updateRoadsInGuidance;
-(void)_updateUniqueOffRouteRoads;
-(void)clearSceneIsMemoryWarning:(BOOL)arg0 ;
-(void)dealloc;
-(void)debugDraw:(id)arg0 overlayConsole:(*void)arg1 navContext:(struct NavContext *)arg2 ;
-(void)drawNavOverlayDebugView:(*void)arg0 navContext:(struct NavContext *)arg1 ;
-(void)drawRoadSignOrientationDebugView:(*void)arg0 navContext:(struct NavContext *)arg1 ;
-(void)grabTilesFromScene:(*void)arg0 ;
-(void)layoutWithNavContext:(struct NavContext *)arg0 avoidanceRects:(*void)arg1 ;
-(void)setMaxVisibleRoadsigns:(unsigned int)arg0 ;
-(void)styleManagerDidChange:(BOOL)arg0 ;
-(void)styleManagerDidFinishAnimating;
-(void)styleManagerDidStartAnimating;


@end


#endif