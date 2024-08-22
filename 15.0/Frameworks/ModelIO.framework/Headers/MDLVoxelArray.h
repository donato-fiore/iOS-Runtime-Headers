// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLVOXELARRAY_H
#define MDLVOXELARRAY_H



#import "MDLObject.h"

@interface MDLVoxelArray : MDLObject {
    unordered_map<unsigned long long, int, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, int>>> _voxels;
    MDLAABB _bounds;
    float _voxelExtent;
    MortonCode mortonCoder;
    unique_ptr<ModelIO::Octree, std::default_delete<ModelIO::Octree>> _octreeData;
    BOOL _levelSet;
    ? _originatingOffset;
}


@property (readonly, nonatomic) ? boundingBox;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) BOOL isValidSignedShellField;
@property (nonatomic) float shellFieldExteriorThickness; // ivar: _exteriorThickness
@property (nonatomic) float shellFieldInteriorThickness; // ivar: _interiorThickness
@property (readonly, nonatomic) ? voxelIndexExtent; // ivar: _extent


-(BOOL)voxelExistsAtIndex:(BOOL)arg0 allowAnyX:(BOOL)arg1 allowAnyY:(BOOL)arg2 allowAnyZ:(BOOL)arg3 allowAnyShell;
-(id)coarseMesh;
-(id)coarseMeshUsingAllocator:(id)arg0 ;
-(id)coarseVoxelMeshWithStyle:(NSUInteger)arg0 ;
-(id)indexOfSpatialLocation;
-(id)init;
-(id)initWithAsset:(id)arg0 divisions:(int)arg1 interiorNBWidth:(float)arg2 exteriorNBWidth:(float)arg3 patchRadius:(float)arg4 ;
-(id)initWithAsset:(id)arg0 divisions:(int)arg1 interiorShells:(int)arg2 exteriorShells:(int)arg3 patchRadius:(float)arg4 ;
-(id)initWithAsset:(id)arg0 divisions:(int)arg1 patchRadius:(float)arg2 ;
-(id)initWithData:(id)arg0 boundingBox:(struct ? )arg1 voxelExtent:(float)arg2 ;
-(id)meshUsingAllocator:(id)arg0 ;
-(id)spatialLocationOfIndex;
-(id)voxelIndices;
-(id)voxelsWithinExtent:(struct ? )arg0 ;
-(struct ? )voxelBoundingBoxAtIndex;
-(struct vector<int, std::allocator<int>> )boxesPerLayer;
-(void)convertToSignedShellField;
-(void)differenceWithVoxels:(id)arg0 ;
-(void)dilateNarrowBandInteriorWidthTo:(float)arg0 AndExteriorWidthTo:(float)arg1 ;
-(void)erodeNarrowBandInteriorWidthTo:(float)arg0 AndExteriorWidthTo:(float)arg1 selector:(SEL)arg2 ;
-(void)intersectWithVoxels:(id)arg0 ;
-(void)recalculateExtents;
-(void)setVoxelAtIndex;
-(void)setVoxelsForMesh:(id)arg0 divisions:(int)arg1 interiorNBWidth:(float)arg2 exteriorNBWidth:(float)arg3 patchRadius:(float)arg4 ;
-(void)setVoxelsForMesh:(id)arg0 divisions:(int)arg1 interiorShells:(int)arg2 exteriorShells:(int)arg3 patchRadius:(float)arg4 ;
-(void)setVoxelsForMesh:(id)arg0 divisions:(int)arg1 patchRadius:(float)arg2 ;
-(void)unionWithVoxels:(id)arg0 ;


@end


#endif