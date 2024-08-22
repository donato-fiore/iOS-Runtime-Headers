// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNGEOMETRYSOURCE_H
#define SCNGEOMETRYSOURCE_H

@class NSData, NSString;
@protocol NSSecureCoding, MTLBuffer;

#import <Foundation/Foundation.h>


@interface SCNGeometrySource : NSObject <NSSecureCoding>

 {
    *__C3DMeshSource _meshSource;
    NSData *_data;
    NSString *_semantic;
    NSInteger _vectorCount;
    short _componentType;
    unsigned short _componentCount;
    *CGColorSpace _colorSpace;
    NSInteger _dataOffset;
    NSInteger _dataStride;
    unsigned char _mkSemantic;
    id<MTLBuffer> *_mtlBuffer;
    NSInteger _mtlVertexFormat;
    BOOL _encodeDataAsHalf;
}


@property (readonly, nonatomic) NSInteger bytesPerComponent;
@property (readonly, nonatomic) NSInteger componentsPerVector;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSInteger dataOffset;
@property (readonly, nonatomic) NSInteger dataStride;
@property (readonly, nonatomic) BOOL floatComponents;
@property (readonly, nonatomic) NSString *semantic;
@property (readonly, nonatomic) NSInteger vectorCount;


+(BOOL)supportsSecureCoding;
+(id)_geometrySourceWithData:(id)arg0 semantic:(id)arg1 vectorCount:(NSInteger)arg2 componentType:(short)arg3 componentCount:(NSUInteger)arg4 dataOffset:(NSInteger)arg5 dataStride:(NSInteger)arg6 ;
+(id)_geometrySourceWithSource:(id)arg0 vertexFormat:(NSUInteger)arg1 ;
+(id)dataByConvertingDoublesToFloats:(*CGFloat)arg0 count:(NSInteger)arg1 ;
+(id)dataWithPointArray:(struct CGPoint *)arg0 count:(NSInteger)arg1 bytesPerComponent:(*NSInteger)arg2 ;
+(id)dataWithVector3Array:(struct SCNVector3 *)arg0 count:(NSInteger)arg1 bytesPerComponent:(*NSInteger)arg2 ;
+(id)geometrySourceWithBuffer:(id)arg0 vertexFormat:(NSUInteger)arg1 semantic:(id)arg2 vertexCount:(NSInteger)arg3 dataOffset:(NSInteger)arg4 dataStride:(NSInteger)arg5 ;
+(id)geometrySourceWithColorComponents:(*float)arg0 count:(NSInteger)arg1 hasAlpha:(BOOL)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
+(id)geometrySourceWithColorData:(id)arg0 colorSpace:(struct CGColorSpace *)arg1 vectorCount:(NSInteger)arg2 floatComponents:(BOOL)arg3 componentsPerVector:(NSInteger)arg4 bytesPerComponent:(NSInteger)arg5 dataOffset:(NSInteger)arg6 dataStride:(NSInteger)arg7 ;
+(id)geometrySourceWithData:(id)arg0 semantic:(id)arg1 vectorCount:(NSInteger)arg2 floatComponents:(BOOL)arg3 componentsPerVector:(NSInteger)arg4 bytesPerComponent:(NSInteger)arg5 dataOffset:(NSInteger)arg6 dataStride:(NSInteger)arg7 ;
+(id)geometrySourceWithMDLVertexAttribute:(id)arg0 mesh:(id)arg1 ;
+(id)geometrySourceWithMeshSourceRef:(struct __C3DMeshSource *)arg0 ;
+(id)geometrySourceWithNormals:(struct SCNVector3 *)arg0 count:(NSInteger)arg1 ;
+(id)geometrySourceWithTextureCoordinates:(struct CGPoint *)arg0 count:(NSInteger)arg1 ;
+(id)geometrySourceWithVertices:(struct SCNVector3 *)arg0 count:(NSInteger)arg1 ;
-(*void)__CFObject;
-(?)dataByConvertingColorData:(?)arg0 colorSpace:(?)arg1 newColorSpace:(?)arg2 vectorCount:(?)arg3 componentsPerVector:(?)arg4 bytesPerComponent:(?)arg5 dataOffset:(?)arg6 dataStride:(?)arg7 newDataOffsetnewDataStride;
-(BOOL)_encodeDataAsHalf;
-(id)_uninterleaveData:(id)arg0 count:(NSUInteger)arg1 srcOffset:(NSUInteger)arg2 srcStride:(NSUInteger)arg3 dstStride:(NSUInteger)arg4 ;
-(id)description;
-(id)init;
-(id)initWithBuffer:(id)arg0 vertexFormat:(NSUInteger)arg1 semantic:(id)arg2 vertexCount:(NSInteger)arg3 dataOffset:(NSInteger)arg4 dataStride:(NSInteger)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 semantic:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 vectorCount:(NSInteger)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(NSInteger)arg5 bytesPerComponent:(NSInteger)arg6 dataOffset:(NSInteger)arg7 dataStride:(NSInteger)arg8 ;
-(id)initWithData:(id)arg0 semantic:(id)arg1 vectorCount:(NSInteger)arg2 componentType:(short)arg3 componentCount:(NSUInteger)arg4 dataOffset:(NSInteger)arg5 dataStride:(NSInteger)arg6 ;
-(id)initWithMeshSource:(struct __C3DMeshSource *)arg0 ;
-(id)mkSemantic;
-(id)scene;
-(short)_componentType;
-(struct __C3DMeshSource *)meshSource;
-(struct __C3DScene *)sceneRef;
-(void)_clearC3DCache;
-(void)_printData;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setMkSemantic:(id)arg0 ;
-(void)set_encodeDataAsHalf:(BOOL)arg0 ;


@end


#endif