// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUNIRENDERER_H
#define NUNIRENDERER_H

@class NSBundle, CLKUIMetalResourcePool;
@protocol MTLDevice, MTLTexture;

#import <Foundation/Foundation.h>


@interface NUNIRenderer : NSObject {
    id<MTLDevice> *_mtlDevice;
    NSBundle *_bundle;
    NUNIRendererResources _resources;
    NSUInteger _viewMtlPixelFormat;
    _NUNIGeometryRange _octahedronGeomRange;
    _NUNIGeometryRange _quadGeomRange;
    ? _globeLinesMatrix;
    CLKUIMetalResourcePool *_globeLineTextureResourcePool;
    id<MTLTexture> *_globeLinesCurrentTexture;
    NUNIRendererState _state;
}




+(id)sharedInstanceWithPixelFormat:(NSUInteger)arg0 ;
+(void)_deallocInstanceWithPixelFormat:(NSUInteger)arg0 ;
-(id)_renderGlobeLinesWithCommandBuffer:(id)arg0 state:(struct NUNIRendererState *)arg1 spheroid:(id)arg2 resources:(id)arg3 ;
-(id)initWithPixelFormat:(NSUInteger)arg0 ;
-(void)_asyncDeallocInstance;
-(void)_createPipelineForProgramType:(NSUInteger)arg0 fromLibrary:(id)arg1 librarySPI:(id)arg2 ;
-(void)_initDepthStencilState;
-(void)_initHemi;
-(void)_initPrograms;
-(void)_updateStateWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 resources:(id)arg2 ;
-(void)bindAssetArt:(NSUInteger)arg0 withEncoder:(id)arg1 resources:(id)arg2 toSlot:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)draw3DWithEncoder:(id)arg0 state:(struct NUNIRendererState *)arg1 spheroid:(id)arg2 resources:(id)arg3 ;
-(void)drawOffscreen3DWithCommandBuffer:(id)arg0 state:(struct NUNIRendererState *)arg1 spheroid:(id)arg2 resources:(id)arg3 ;
-(void)drawSpriteWithEncoder:(id)arg0 state:(struct NUNIRendererState *)arg1 spheroid:(id)arg2 resources:(id)arg3 ;
-(void)renderOffscreenWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 resources:(id)arg2 commandBuffer:(id)arg3 ;
-(void)renderWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 resources:(id)arg2 encoder:(id)arg3 ;


@end


#endif