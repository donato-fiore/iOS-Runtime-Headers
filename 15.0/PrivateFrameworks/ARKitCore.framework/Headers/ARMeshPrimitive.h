// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARMESHPRIMITIVE_H
#define ARMESHPRIMITIVE_H

@protocol MTLBuffer, MTLTexture;

#import <Foundation/Foundation.h>


@interface ARMeshPrimitive : NSObject

@property (readonly) NSObject<MTLBuffer> *indexBuffer; // ivar: _indexBuffer
@property (readonly) NSUInteger nIndices; // ivar: _nIndices
@property (readonly) NSUInteger nVertices; // ivar: _nVertices
@property (readonly) NSObject<MTLTexture> *texture; // ivar: _texture
@property (readonly) ? transform_world_from_primitive; // ivar: _transform_world_from_primitive
@property (readonly) NSObject<MTLBuffer> *uvBuffer; // ivar: _uvBuffer
@property (readonly) NSObject<MTLBuffer> *vertexBuffer; // ivar: _vertexBuffer


+(id)planeWithTransform:(struct ? )arg0 min:(id)arg1 maxtexture;
-(id)initAsPlaneWithTransform:(struct ? )arg0 min:(id)arg1 maxtexture;


@end


#endif