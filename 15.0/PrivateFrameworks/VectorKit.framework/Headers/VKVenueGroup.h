// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKVENUEGROUP_H
#define VKVENUEGROUP_H



#import "VKPolygonGroup.h"

@interface VKVenueGroup : VKPolygonGroup {
    optional<md::MeshSet<ggl::VenueWall::MeshMesh, ggl::VenueWall::DefaultVbo>> _venueWallMeshInfo;
    optional<md::MeshSet<ggl::VenueWall::EndCapMesh, ggl::VenueWall::EndCapVbo>> _venueWallEndCapMeshInfo;
    optional<md::MeshSet<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh, ggl::Venue3DStroke::HorizontalDefaultVbo>> _venueWallHorizontalStrokeMeshInfo;
    optional<md::MeshSet<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh, ggl::Venue3DStroke::VerticalDefaultVbo>> _venueWallVerticalStrokeMeshInfo;
    vector<std::shared_ptr<ggl::VenueWall::MeshMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::MeshMesh>>> _venueWallMeshes;
    vector<std::shared_ptr<ggl::VenueWall::EndCapMesh>, std::allocator<std::shared_ptr<ggl::VenueWall::EndCapMesh>>> _venueWallEndMeshes;
    vector<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::HorizontalVenue3DStrokeMesh>>> _venueWallHorizontalStrokeMeshes;
    vector<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>, std::allocator<std::shared_ptr<ggl::Venue3DStroke::VerticalVenue3DStrokeMesh>>> _venueWallVerticalStrokeMeshes;
    unordered_map<std::pair<const void *, unsigned long>, std::vector<md::Edge>, std::hash<md::SectionKey>, std::equal_to<std::pair<const void *, unsigned long>>, std::allocator<std::pair<const std::pair<const void *, unsigned long>, std::vector<md::Edge>>>> _venueWalls;
    NSUInteger _buildingId;
    float _maximumSectionLength;
    ? _wallTexture;
}


@property (readonly, nonatomic) NSUInteger buildingId;
@property (readonly, nonatomic) int layer; // ivar: _layer
@property (readonly, nonatomic) float maximumSectionLength;
@property (readonly, nonatomic) *void venueWallEndMeshes;
@property (readonly, nonatomic) *void venueWallHorizontalStrokeMeshes;
@property (readonly, nonatomic) *void venueWallMeshes;
@property (readonly, nonatomic) *void venueWallVerticalStrokeMeshes;
@property (readonly, nonatomic) *void wallTexture;


-(*void)generateEdgeListForPolygonSection:(*void)arg0 key:(*void)arg1 ;
-(NSUInteger)verticalStrokeCountForSection:(*void)arg0 styles:(*void)arg1 edges:(*void)arg2 ;
-(id)initWithStyleQuery:(*void)arg0 tileZoom:(float)arg1 layer:(int)arg2 buildingId:(NSUInteger)arg3 contentScale:(float)arg4 ;
-(struct StrokeBufferSizing )bufferSizingForStrokesOnSection:(*void)arg0 styles:(*void)arg1 edges:(*void)arg2 ;
-(void)addStrokeForSection:(*void)arg0 paddedCount:(unsigned int)arg1 key:(struct pair<const void *, unsigned long> )arg2 attributes:(*void)arg3 styles:(*void)arg4 cullingMask:(unsigned int)arg5 accessor:(struct ResourceAccessor *)arg6 ;
-(void)addWallStrokesForSection:(*void)arg0 edges:(*void)arg1 attributes:(*void)arg2 styles:(*void)arg3 cullingMask:(unsigned int)arg4 accessor:(struct ResourceAccessor *)arg5 ;
-(void)addWallsForSection:(*void)arg0 edges:(*void)arg1 attributes:(*void)arg2 styles:(*void)arg3 cullingMask:(unsigned int)arg4 accessor:(struct ResourceAccessor *)arg5 ;
-(void)didFinishAddingData;
-(void)prepareToGenerateWallStrokesForSection:(*void)arg0 styles:(*void)arg1 edges:(*void)arg2 ;
-(void)prepareToGenerateWallsForSection:(*void)arg0 styles:(*void)arg1 edges:(*void)arg2 ;
-(void)prepareToStrokeSection:(*void)arg0 key:(*void)arg1 styles:(*void)arg2 paddedCount:(unsigned int)arg3 ;
-(void)updateTextures:(unsigned char)arg0 textureManager:(*void)arg1 ;
-(void)willAddDataWithAccessor:(struct ResourceAccessor *)arg0 ;


@end


#endif