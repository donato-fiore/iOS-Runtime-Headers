// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKPOLYGONALITEMGROUP_H
#define VKPOLYGONALITEMGROUP_H


#import <Foundation/Foundation.h>


@interface VKPolygonalItemGroup : NSObject {
    optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> _fillMeshInfo;
    vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> _fillMeshes;
    ? _meshStorage;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _fillCullingGroups;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _strokeCullingGroups;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _venueCullingGroups;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _venueEndCapCullingGroups;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _venueWallHorizontalStrokeCullingGroups;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _venueWallVerticalStrokeCullingGroups;
    unordered_map<std::pair<const void *, unsigned long>, std::vector<md::Edge>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, std::allocator<std::pair<const std::pair<const void *, unsigned long>, std::vector<md::Edge>>>> _polygonEdges;
    unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> _featureIds;
    Box<float, 3> _boundingBox;
    float _tileZoom;
    float _contentScale;
    BOOL _stylesUpToDate;
    BOOL _hasRouteAttributes;
    vector<ggl::Batcher, std::allocator<ggl::Batcher>> _fillRenderItemBatchers;
    vector<ggl::Batcher, std::allocator<ggl::Batcher>> _strokeRenderItemBatchers;
    Matrix<float, 2, 1> _centroid;
    FeatureStyleAttributesSet _attributeSets;
    unordered_map<StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>, (anonymous namespace)::StyleQueryOverrideHash, std::equal_to<StyleQueryOverride>, std::allocator<std::pair<const StyleQueryOverride, std::vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>>>> _styleQueries;
    ? _styleManager;
    PolygonRouteAttributes _routeAttributes;
}


@property ? centroid;
@property (readonly, nonatomic) unsigned int cullingMask; // ivar: _cullingMask
@property (readonly, nonatomic) *void featureIds;
@property (readonly, nonatomic) *void fillMeshes;
@property (readonly, nonatomic) BOOL isFixedSize; // ivar: _isFixedSize
@property (readonly, nonatomic) *void maxPoint;
@property (readonly, nonatomic) *void origin;
@property ? size;
@property (readonly, nonatomic) float tileZoom;


-(*void)commitRangesToFillRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 featureIdPredicate:(struct function<bool (unsigned long long)> )arg3 ;
-(*void)commitRangesToHorizontalVenueWallStrokeRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 ;
-(*void)commitRangesToStrokeRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 featureIdPredicate:(struct function<bool (unsigned long long)> )arg3 ;
-(*void)commitRangesToVenueWallEndCapRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 ;
-(*void)commitRangesToVenueWallRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 ;
-(*void)commitRangesToVerticalVenueWallStrokeRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 ;
-(*void)styleQueries:(struct StyleQueryOverride *)arg0 ;
-(BOOL)canAcceptPolygon:(*void)arg0 ;
-(BOOL)hasFeatureId:(NSUInteger)arg0 ;
-(id)initWithStyleQuery:(*void)arg0 tileZoom:(float)arg1 fixedAroundCentroid:(*void)arg2 contentScale:(float)arg3 ;
-(id)initWithStyleQuery:(*void)arg0 tileZoom:(float)arg1 fixedAroundCentroid:(*void)arg2 contentScale:(float)arg3 storage:(struct shared_ptr<md::MeshSetStorage> )arg4 ;
-(unsigned char)indexForGeoFeatureAttributes:(*void)arg0 ;
-(void)willAddDataWithAccessor:(struct ResourceAccessor *)arg0 ;


@end


#endif