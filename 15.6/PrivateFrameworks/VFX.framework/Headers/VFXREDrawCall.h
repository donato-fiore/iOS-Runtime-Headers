// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VFXREDRAWCALL_H
#define VFXREDRAWCALL_H


#import <Foundation/Foundation.h>


@interface VFXREDrawCall : NSObject {
    ? drawCall;
    ? material;
    ? aabb;
    ? reProvidedBuffers;
    ? reProvidedTextures;
}




-(BOOL)hasLightingEnabled;
-(NSInteger)indexBufferOffset;
-(NSInteger)indexBufferSize;
-(NSInteger)indexCount;
-(NSInteger)instanceCount;
-(NSInteger)vertexCount;
-(NSUInteger)materialIdentifier;
-(NSUInteger)primitiveType;
-(NSUInteger)winding;
-(id)boundingBoxMax;
-(id)boundingBoxMin;
-(id)indexBuffer;
-(id)init;
-(id)meshIdentifier;
-(unsigned char)indexType;
-(void)enumerateBuffers:(id)arg0 ;
-(void)enumerateTextures:(id)arg0 ;
-(void)withDefaultIBLConstantBuffer:(*void)arg0 ;
-(void)withDefaultLightConstantBuffer:(*void)arg0 ;


@end


#endif