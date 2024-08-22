// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLMESH_H
#define MDLMESH_H

@class NSMutableArray, NSArray;
@protocol MDLMeshBufferAllocator;


#import "MDLObject.h"
#import "MDLVertexDescriptor.h"

@interface MDLMesh : MDLObject {
    NSMutableArray *_submeshes;
    NSMutableArray *_vertexBuffers;
    MDLVertexDescriptor *_vertexDescriptor;
    MDLAABB _bounds;
    NSArray *_controlNodes;
}


@property (readonly, retain, nonatomic) NSObject<MDLMeshBufferAllocator> *allocator; // ivar: _allocator
@property (readonly, nonatomic) ? boundingBox;
@property (nonatomic) NSUInteger subdivisionScheme; // ivar: _subdivisionScheme
@property (copy, nonatomic) NSMutableArray *submeshes;
@property (retain, nonatomic) NSArray *vertexBuffers;
@property (nonatomic) NSUInteger vertexCount; // ivar: _vertexCount
@property (copy, nonatomic) MDLVertexDescriptor *vertexDescriptor;


+(id)newBoxWithDimensions:(NSInteger)arg0 segments:(BOOL)arg1 geometryType:(id)arg2 inwardNormalsallocator;
+(id)newCapsuleWithHeight:(float)arg0 radii:(NSUInteger)arg1 radialSegments:(NSUInteger)arg2 verticalSegments:(NSUInteger)arg3 hemisphereSegments:(NSInteger)arg4 geometryType:(BOOL)arg5 inwardNormals:(id)arg6 allocator;
+(id)newCylinderWithHeight:(float)arg0 radii:(NSUInteger)arg1 radialSegments:(NSUInteger)arg2 verticalSegments:(NSInteger)arg3 geometryType:(BOOL)arg4 inwardNormals:(id)arg5 allocator;
+(id)newEllipsoidWithRadii:(NSUInteger)arg0 radialSegments:(NSUInteger)arg1 verticalSegments:(NSInteger)arg2 geometryType:(BOOL)arg3 inwardNormals:(BOOL)arg4 hemisphere:(id)arg5 allocator;
+(id)newEllipticalConeWithHeight:(float)arg0 radii:(NSUInteger)arg1 radialSegments:(NSUInteger)arg2 verticalSegments:(NSInteger)arg3 geometryType:(BOOL)arg4 inwardNormals:(id)arg5 allocator;
+(id)newIcosahedronWithRadius:(float)arg0 inwardNormals:(BOOL)arg1 allocator:(id)arg2 ;
+(id)newIcosahedronWithRadius:(float)arg0 inwardNormals:(BOOL)arg1 geometryType:(NSInteger)arg2 allocator:(id)arg3 ;
+(id)newPlaneWithDimensions:(NSInteger)arg0 segments:(id)arg1 geometryTypeallocator;
+(id)newSubdividedMesh:(id)arg0 submeshIndex:(NSUInteger)arg1 subdivisionLevels:(NSUInteger)arg2 ;
-(BOOL)generateAmbientOcclusionTextureWithQuality:(float)arg0 attenuationFactor:(float)arg1 objectsToConsider:(id)arg2 vertexAttributeNamed:(id)arg3 materialPropertyNamed:(id)arg4 ;
-(BOOL)generateAmbientOcclusionTextureWithSize:(NSInteger)arg0 raysPerSample:(float)arg1 attenuationFactor:(id)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed;
-(BOOL)generateAmbientOcclusionVertexColorsWithQuality:(float)arg0 attenuationFactor:(float)arg1 objectsToConsider:(id)arg2 vertexAttributeNamed:(id)arg3 ;
-(BOOL)generateAmbientOcclusionVertexColorsWithRaysPerSample:(NSInteger)arg0 attenuationFactor:(float)arg1 objectsToConsider:(id)arg2 vertexAttributeNamed:(id)arg3 ;
-(BOOL)generateLightMapTextureWithQuality:(float)arg0 lightsToConsider:(id)arg1 objectsToConsider:(id)arg2 vertexAttributeNamed:(id)arg3 materialPropertyNamed:(id)arg4 ;
-(BOOL)generateLightMapTextureWithTextureSize:(id)arg0 lightsToConsider:(id)arg1 objectsToConsider:(id)arg2 vertexAttributeNamed:(id)arg3 materialPropertyNamed;
-(BOOL)generateLightMapVertexColorsWithLightsToConsider:(id)arg0 objectsToConsider:(id)arg1 vertexAttributeNamed:(id)arg2 ;
-(BOOL)makeVerticesUniqueAndReturnError:(*id)arg0 ;
-(BOOL)triangulate;
-(NSInteger)addVertexBuffer:(id)arg0 ;
-(id)controlNodeForINdex:(NSUInteger)arg0 ;
-(id)description;
-(id)initBoxWithExtent:(BOOL)arg0 segments:(NSInteger)arg1 inwardNormals:(id)arg2 geometryTypeallocator;
-(id)initCapsuleWithExtent:(NSUInteger)arg0 cylinderSegments:(BOOL)arg1 hemisphereSegments:(NSInteger)arg2 inwardNormals:(id)arg3 geometryTypeallocator;
-(id)initConeWithExtent:(BOOL)arg0 segments:(BOOL)arg1 inwardNormals:(NSInteger)arg2 cap:(id)arg3 geometryTypeallocator;
-(id)initCylinderWithExtent:(BOOL)arg0 segments:(BOOL)arg1 inwardNormals:(BOOL)arg2 topCap:(NSInteger)arg3 bottomCap:(id)arg4 geometryTypeallocator;
-(id)initHemisphereWithExtent:(BOOL)arg0 segments:(BOOL)arg1 inwardNormals:(NSInteger)arg2 cap:(id)arg3 geometryTypeallocator;
-(id)initIcosahedronWithExtent:(BOOL)arg0 inwardNormals:(NSInteger)arg1 geometryType:(id)arg2 allocator;
-(id)initMeshBySubdividingMesh:(id)arg0 submeshIndex:(int)arg1 subdivisionLevels:(unsigned int)arg2 allocator:(id)arg3 ;
-(id)initPlaneWithExtent:(NSInteger)arg0 segments:(id)arg1 geometryTypeallocator;
-(id)initSphereWithExtent:(BOOL)arg0 segments:(NSInteger)arg1 inwardNormals:(id)arg2 geometryTypeallocator;
-(id)initWithBufferAllocator:(id)arg0 ;
-(id)initWithVertexBuffer:(id)arg0 vertexCount:(NSUInteger)arg1 descriptor:(id)arg2 submeshes:(id)arg3 ;
-(id)initWithVertexBuffers:(id)arg0 vertexCount:(NSUInteger)arg1 descriptor:(id)arg2 submeshes:(id)arg3 ;
-(id)vertexAttributeDataForAttributeNamed:(id)arg0 ;
-(id)vertexAttributeDataForAttributeNamed:(id)arg0 asFormat:(NSUInteger)arg1 ;
-(int)submeshCount;
-(struct ? )inverseBasePoseForIndex:(NSUInteger)arg0 ;
-(void)_calculateFaceNormalsFromPositions:(*float)arg0 positionStride:(NSInteger)arg1 normals:(*float)arg2 normalStride:(NSInteger)arg3 creaseThreshold:(float)arg4 ;
-(void)_calculateTangentBasisFromPositions:(*float)arg0 positionStride:(NSInteger)arg1 positionsBufferSize:(NSUInteger)arg2 normals:(*float)arg3 normalStride:(NSInteger)arg4 normalsBufferSize:(NSUInteger)arg5 uvs:(*float)arg6 uvStride:(NSInteger)arg7 uvsBufferSize:(NSUInteger)arg8 tangents:(*float)arg9 tangentsStride:(NSInteger)arg10 tangentsBufferSize:(NSUInteger)arg11 bitagents:(*float)arg12 bitangentStride:(NSInteger)arg13 bitangentsBufferSize:(NSUInteger)arg14 tangentFormat:(NSUInteger)arg15 selector:(SEL)arg16 ;
-(void)_createWithVertexBuffer:(id)arg0 vertexCount:(NSUInteger)arg1 descriptor:(id)arg2 submeshes:(id)arg3 ;
// -(void)_enumerateSubmeshesUsingBlock:(id)arg0 stopPointer:(unk)arg1  ;
-(void)addAttributeWithName:(id)arg0 format:(NSUInteger)arg1 ;
-(void)addAttributeWithName:(id)arg0 format:(NSUInteger)arg1 type:(id)arg2 data:(id)arg3 stride:(NSInteger)arg4 ;
-(void)addAttributeWithName:(id)arg0 format:(NSUInteger)arg1 type:(id)arg2 data:(id)arg3 stride:(NSInteger)arg4 time:(CGFloat)arg5 ;
-(void)addNormalsWithAttributeNamed:(id)arg0 creaseThreshold:(float)arg1 ;
-(void)addOrthTanBasisForTextureCoordinateAttributeNamed:(id)arg0 normalAttributeNamed:(id)arg1 tangentAttributeNamed:(id)arg2 ;
-(void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg0 normalAttributeNamed:(id)arg1 tangentAttributeNamed:(id)arg2 ;
-(void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg0 tangentAttributeNamed:(id)arg1 bitangentAttributeNamed:(id)arg2 ;
-(void)addUnwrappedTextureCoordinatesForAttributeNamed:(id)arg0 ;
-(void)copyDataVector:(*void)arg0 toAttr:(id)arg1 ;
-(void)createSourceDataVector:(*void)arg0 attr:(id)arg1 srcElementCount:(int)arg2 dstElementCount:(int)arg3 ;
-(void)debugPrintToFile:(struct __sFILE *)arg0 ;
-(void)enumerateSubmeshesUsingBlock:(id)arg0 ;
-(void)flipTextureCoordinatesInAttributeNamed:(id)arg0 ;
-(void)makeVerticesUnique;
-(void)removeAttributeNamed:(id)arg0 ;
-(void)replaceAttributeNamed:(id)arg0 withData:(id)arg1 ;
-(void)updateAttributeNamed:(id)arg0 withData:(id)arg1 ;


@end


#endif