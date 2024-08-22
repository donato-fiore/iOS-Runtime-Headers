// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGMETALRENDERSTATE_H
#define PXGMETALRENDERSTATE_H

@class NSArray;
@protocol MTLDevice, MTLBuffer;

#import <Foundation/Foundation.h>

#import "PXGMetalRenderPassState.h"

@interface PXGMetalRenderState : NSObject {
    ? _uniforms;
}


@property (retain, nonatomic) NSArray *captureSpriteTextures; // ivar: _captureSpriteTextures
@property (readonly, nonatomic) PXGMetalRenderPassState *currentRenderPassState; // ivar: _currentRenderPassState
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (nonatomic) *? originalSpriteGeometries; // ivar: _originalSpriteGeometries
@property (readonly, nonatomic) NSObject<MTLBuffer> *resizableCapInsetsBuffer; // ivar: _resizableCapInsetsBuffer
@property (readonly, nonatomic) *? spriteEntities;
@property (readonly, nonatomic) NSObject<MTLBuffer> *spriteEntitiesBuffer; // ivar: _spriteEntitiesBuffer
@property (readonly, nonatomic) *? spriteGeometries;
@property (readonly, nonatomic) NSObject<MTLBuffer> *spriteGeometriesBuffer; // ivar: _spriteGeometriesBuffer
@property (nonatomic) *? spriteInfos; // ivar: _spriteInfos
@property (readonly, nonatomic) *? spriteStyles;
@property (readonly, nonatomic) NSObject<MTLBuffer> *spriteStylesBuffer; // ivar: _spriteStylesBuffer
@property (retain, nonatomic) NSArray *textures; // ivar: _textures
@property (readonly, nonatomic) *? uniforms;


-(id)_resizedBufferIfNeeded:(id)arg0 neededLength:(NSInteger)arg1 ;
-(id)description;
-(id)initWithDevice:(id)arg0 ;
-(id)renderPassStateForSpriteCount:(NSInteger)arg0 ;
-(struct ? *)resizableCapInsetsBufferWithCount:(NSInteger)arg0 ;
-(struct ? *)spriteEntitiesBufferWithCount:(NSInteger)arg0 ;
-(struct ? *)spriteGeometriesBufferWithCount:(NSInteger)arg0 ;
-(struct ? *)spriteStylesBufferWithCount:(NSInteger)arg0 ;
-(void)prepareForCommit;
-(void)prepareForReuse;


@end


#endif