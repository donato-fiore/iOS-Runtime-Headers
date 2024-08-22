// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKBUILDINGGROUP_H
#define VKBUILDINGGROUP_H



#import "VKPolygonalItemGroup.h"

@interface VKBuildingGroup : VKPolygonalItemGroup {
    optional<md::MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo>> _strokeMeshInfo;
    optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> _fillMeshInfoForPointyRoofs;
    vector<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>, std::allocator<std::shared_ptr<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh>>> _strokeMeshes;
    vector<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>, std::allocator<std::shared_ptr<ggl::PolygonBase::CompressedMeshMesh>>> _fillMeshesForPointyRoofs;
    unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> _extrusionFillMeshVendor;
    unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _extrusionStrokeMeshVendor;
    unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> _pointyRoofFillMeshVendor;
    unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _pointyRoofStrokeMeshVendor;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _extrusionFillCullingGroups;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _extrusionStrokeCullingGroups;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _fillCullingGroupsForPointyRoofs;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _pointyRoofFillCullingGroups;
    array<std::vector<std::vector<FeatureRange>>, 16UL> _pointyRoofStrokeCullingGroups;
    vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _styleQueries;
    vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _flatRoofStyleQueries;
    vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _selectedStyleQueries;
    vector<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>, std::allocator<std::shared_ptr<gss::StylesheetQuery<gss::PropertyID>>>> _selectedFlatRoofStyleQueries;
}




-(*void)commitRangesToExtrusionFillRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 featureIdPredicate:(struct function<bool (unsigned long long)> )arg3 ;
-(*void)commitRangesToExtrusionStrokeRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 featureIdPredicate:(struct function<bool (unsigned long long)> )arg3 ;
-(*void)commitRangesToPointyRoofFillRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 featureIdPredicate:(struct function<bool (unsigned long long)> )arg3 ;
-(*void)commitRangesToPointyRoofStrokeRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 featureIdPredicate:(struct function<bool (unsigned long long)> )arg3 ;
-(*void)commitRangesToPointyRoofTopRenderItemBatcher:(*void)arg0 forMeshAtIndex:(NSUInteger)arg1 cullingMask:(unsigned int)arg2 featureIdPredicate:(struct function<bool (unsigned long long)> )arg3 ;
-(*void)extrusionFillMeshVendor;
-(*void)extrusionStrokeMeshVendor;
-(*void)fillMeshesForPointyRoofs;
-(*void)pointyRoofFillMeshVendor;
-(*void)pointyRoofStrokeMeshVendor;
-(*void)strokeMeshes;
-(*void)styleQueriesForPointyRoofs:(BOOL)arg0 selected:(BOOL)arg1 ;
-(BOOL)addPointyRoofForBuilding:(*void)arg0 buildingModel:(unsigned char)arg1 scaleThreshold:(float)arg2 styleIndex:(float)arg3 ;
-(BOOL)canConstructPointyRoofForPolygon:(*void)arg0 building:(*void)arg1 buildingModel:(unsigned char)arg2 scaleThreshold:(float)arg3 ;
-(id)initWithStyleQuery:(*void)arg0 tileZoom:(float)arg1 fixedAroundCentroid:(*void)arg2 contentScale:(float)arg3 ;
-(unsigned char)maxAttributeSetsPerGroup;
-(void)addBuilding:(*void)arg0 index:(NSUInteger)arg1 ofTotal:(NSUInteger)arg2 accessor:(struct ResourceAccessor *)arg3 triangulator:(*void)arg4 prepareExtrusion:(BOOL)arg5 forRoofStyle:(unsigned char)arg6 scaleThreshold:(float)arg7 ;
-(void)addExtrusionForBuilding:(*void)arg0 index:(NSUInteger)arg1 ofTotal:(NSUInteger)arg2 ;
-(void)didFinishAddingData;
-(void)prepareForBuilding:(*void)arg0 forRoofStyle:(unsigned char)arg1 scaleThreshold:(float)arg2 ;
-(void)updateWithStyleManager:(*void)arg0 ;
-(void)willAddDataWithAccessor:(struct ResourceAccessor *)arg0 ;


@end


#endif