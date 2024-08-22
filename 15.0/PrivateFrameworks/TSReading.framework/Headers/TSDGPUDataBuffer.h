// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGPUDATABUFFER_H
#define TSDGPUDATABUFFER_H

@class NSMutableArray, NSMutableDictionary, NSString, NSArray;
@protocol TSDMTLDataBuffer, MTLBuffer, MTLDevice;

#import <Foundation/Foundation.h>


@interface TSDGPUDataBuffer : NSObject <TSDMTLDataBuffer>

 {
    NSUInteger _currentBufferIndex;
    NSMutableArray *_arrayBuffers;
    NSMutableDictionary *_attributeToArrayBuffersDictionary;
    NSUInteger _elementArrayCount;
    *unsigned short _gLElementData;
    BOOL _gLElementDataBufferWasSetup;
    unsigned int _gLElementDataBuffer;
    id<MTLBuffer> *_metalElementData;
    CGSize _gLElementMeshSize;
    NSUInteger _gLElementQuadParticleCount;
    BOOL _conformsToMetalProtocol;
    id<MTLDevice> *_device;
    unsigned int _gLVertexArrayObjects;
    BOOL _isUpdatingRawDataBuffer;
    BOOL _didTeardown;
    BOOL _isEnabled;
}


@property (readonly) NSUInteger centerAttributeIndex; // ivar: _centerAttributeIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int drawMode; // ivar: _drawMode
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isDynamicallyBuffered; // ivar: _isDynamicallyBuffered
@property (nonatomic) NSUInteger metalDrawMode; // ivar: _metalDrawMode
@property (readonly) NSUInteger positionAttributeIndex; // ivar: _positionAttributeIndex
@property (readonly) Class superclass;
@property (readonly) NSUInteger texCoordAttributeIndex; // ivar: _texCoordAttributeIndex
@property (readonly) NSArray *vertexAttributes; // ivar: _vertexAttributes
@property (readonly) NSUInteger vertexCount; // ivar: _vertexCount


+(id)newDataBufferWithVertexAttributes:(id)arg0 meshSize:(struct CGSize )arg1 ;
+(id)newDataBufferWithVertexAttributes:(id)arg0 meshSize:(struct CGSize )arg1 device:(id)arg2 ;
+(id)newDataBufferWithVertexAttributes:(id)arg0 quadParticleCount:(NSUInteger)arg1 ;
+(id)newDataBufferWithVertexAttributes:(id)arg0 quadParticleCount:(NSUInteger)arg1 device:(id)arg2 ;
+(id)newDataBufferWithVertexAttributes:(id)arg0 vertexCount:(NSUInteger)arg1 indexElementCount:(NSUInteger)arg2 ;
+(id)newDataBufferWithVertexAttributes:(id)arg0 vertexCount:(NSUInteger)arg1 indexElementCount:(NSUInteger)arg2 device:(id)arg3 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 device:(id)arg2 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 meshSize:(struct CGSize )arg2 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 meshSize:(struct CGSize )arg2 device:(id)arg3 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 meshSize:(struct CGSize )arg2 textureFlipped:(BOOL)arg3 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 meshSize:(struct CGSize )arg2 textureFlipped:(BOOL)arg3 device:(id)arg4 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 meshSize:(struct CGSize )arg2 textureFlipped:(BOOL)arg3 includeCenterAttribute:(BOOL)arg4 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 meshSize:(struct CGSize )arg2 textureFlipped:(BOOL)arg3 includeCenterAttribute:(BOOL)arg4 addTransparentBorder:(BOOL)arg5 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 meshSize:(struct CGSize )arg2 textureFlipped:(BOOL)arg3 includeCenterAttribute:(BOOL)arg4 addTransparentBorder:(BOOL)arg5 device:(id)arg6 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 meshSize:(struct CGSize )arg2 textureFlipped:(BOOL)arg3 includeCenterAttribute:(BOOL)arg4 device:(id)arg5 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 textureFlipped:(BOOL)arg2 ;
+(id)newDataBufferWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 textureFlipped:(BOOL)arg2 device:(id)arg3 ;
+(void)p_addTransparentBorderInsetToTextureRect:(struct CGRect *)arg0 vertexRect:(struct CGRect *)arg1 ;
-(BOOL)p_setAttributeUpdateData:(struct ? *)arg0 fromAttribute:(id)arg1 ;
-(float)metalFloatForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)initWithVertexAttributes:(id)arg0 meshSize:(struct CGSize )arg1 bufferCount:(NSUInteger)arg2 ;
-(id)initWithVertexAttributes:(id)arg0 vertexCount:(NSUInteger)arg1 indexElementCount:(NSUInteger)arg2 bufferCount:(NSUInteger)arg3 ;
-(id)initWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 meshSize:(struct CGSize )arg2 textureFlipped:(BOOL)arg3 includeCenterAttribute:(BOOL)arg4 ;
-(id)initWithVertexRect:(struct CGRect )arg0 textureRect:(struct CGRect )arg1 meshSize:(struct CGSize )arg2 textureFlipped:(BOOL)arg3 includeCenterAttribute:(BOOL)arg4 addTransparentBorder:(BOOL)arg5 ;
-(id)vertexAttributeNamed:(id)arg0 ;
-(struct ? )GLPoint3DForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(struct ? )GLPoint4DForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(struct ? )metalPoint2DForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(struct ? )metalPoint3DForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(struct ? )metalPoint4DForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)disableWithDevice:(id)arg0 ;
-(void)drawWithEncoder:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)drawWithEncoder:(id)arg0 atIndex:(NSUInteger)arg1 advanceDynamicBuffer:(BOOL)arg2 ;
-(void)drawWithEncoder:(id)arg0 atIndex:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(void)drawWithEncoder:(id)arg0 atIndex:(NSUInteger)arg1 range:(struct _NSRange )arg2 advanceDynamicBuffer:(BOOL)arg3 ;
-(void)enableDataBuffer;
-(void)encodeWithEncoder:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)p_setupElementArrayBufferIfNecessary;
-(void)setCGFloat:(CGFloat)arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setDataForAttribute:(id)arg0 atIndex:(NSUInteger)arg1 fromAttribute:(id)arg2 dataBuffer:(id)arg3 index:(NSUInteger)arg4 ;
-(void)setGLPoint2D:(struct ? )arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setGLPoint3D:(struct ? )arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setGLPoint4D:(struct ? )arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setGLushort:(unsigned short)arg0 forIndexElement:(NSUInteger)arg1 ;
-(void)setMetalFloat:(float)arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setMetalPoint2D:(struct ? )arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setMetalPoint3D:(struct ? )arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setMetalPoint4D:(struct ? )arg0 forAttribute:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)teardown;
-(void)updateDataBufferAttributes:(id)arg0 withBlock:(id)arg1 ;
-(void)updateDataBufferAttributesWithBlock:(id)arg0 ;
-(void)updateMetalDataBufferAttributes:(id)arg0 withBlock:(id)arg1 ;


@end


#endif