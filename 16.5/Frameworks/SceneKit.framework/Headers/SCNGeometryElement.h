// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNGEOMETRYELEMENT_H
#define SCNGEOMETRYELEMENT_H

@class NSData;
@protocol NSSecureCoding, MTLBuffer;

#import <Foundation/Foundation.h>


@interface SCNGeometryElement : NSObject <NSSecureCoding>

 {
    ? _meshElement;
    NSData *_elementData;
    NSInteger _primitiveType;
    NSInteger _primitiveCount;
    _NSRange _primitiveRange;
    NSInteger _indicesChannelCount;
    BOOL _interleavedIndicesChannels;
    NSInteger _bytesPerIndex;
    float _pointSize;
    float _minimumPointScreenSpaceRadius;
    float _maximumPointScreenSpaceRadius;
    id<MTLBuffer> *_mtlBuffer;
}


@property (readonly, nonatomic) NSInteger bytesPerIndex;
@property (readonly, nonatomic) NSData *data;
@property (nonatomic) CGFloat maximumPointScreenSpaceRadius;
@property (nonatomic) CGFloat minimumPointScreenSpaceRadius;
@property (nonatomic) CGFloat pointSize;
@property (readonly, nonatomic) NSInteger primitiveCount;
@property (nonatomic) _NSRange primitiveRange;
@property (readonly, nonatomic) NSInteger primitiveType;


+(BOOL)supportsSecureCoding;
+(id)_optimizedGeometryElementWithData:(id)arg0 primitiveType:(NSInteger)arg1 primitiveCount:(NSInteger)arg2 bytesPerIndex:(NSInteger)arg3 ;
+(id)geometryElementWithBuffer:(id)arg0 primitiveType:(NSInteger)arg1 primitiveCount:(NSInteger)arg2 bytesPerIndex:(NSInteger)arg3 ;
+(id)geometryElementWithBuffer:(id)arg0 primitiveType:(NSInteger)arg1 primitiveCount:(NSInteger)arg2 indicesChannelCount:(NSInteger)arg3 interleavedIndicesChannels:(BOOL)arg4 bytesPerIndex:(NSInteger)arg5 ;
+(id)geometryElementWithData:(id)arg0 primitiveType:(NSInteger)arg1 primitiveCount:(NSInteger)arg2 bytesPerIndex:(NSInteger)arg3 ;
+(id)geometryElementWithData:(id)arg0 primitiveType:(NSInteger)arg1 primitiveCount:(NSInteger)arg2 indicesChannelCount:(NSInteger)arg3 interleavedIndicesChannels:(BOOL)arg4 bytesPerIndex:(NSInteger)arg5 ;
+(id)geometryElementWithMDLSubmesh:(id)arg0 ;
+(id)geometryElementWithMeshElementRef:(struct __C3DMeshElement *)arg0 ;
-(*void)__CFObject;
-(?)meshElement;
-(BOOL)hasInterleavedIndicesChannels;
-(CGFloat)_computeACMR;
-(NSInteger)indicesChannelCount;
-(NSUInteger)indexCount;
-(id)description;
-(id)init;
-(id)initWithBuffer:(id)arg0 primitiveType:(NSInteger)arg1 primitiveCount:(NSInteger)arg2 indicesChannelCount:(NSInteger)arg3 interleavedIndicesChannels:(BOOL)arg4 bytesPerIndex:(NSInteger)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 primitiveType:(NSInteger)arg1 primitiveCount:(NSInteger)arg2 indicesChannelCount:(NSInteger)arg3 interleavedIndicesChannels:(BOOL)arg4 bytesPerIndex:(NSInteger)arg5 ;
-(id)initWithMeshElement:(struct __C3DMeshElement *)arg0 ;
-(id)scene;
-(struct __C3DScene *)sceneRef;
-(void)_optimizeTriangleIndices;
-(void)_printData;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif