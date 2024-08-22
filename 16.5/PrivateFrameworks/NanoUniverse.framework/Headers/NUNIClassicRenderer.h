// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUNICLASSICRENDERER_H
#define NUNICLASSICRENDERER_H

@protocol MTLDevice;


#import "NUNIRenderer.h"
#import "NUNIClassicResourceManager.h"
#import "NUNIClassicTextureGroup.h"

@interface NUNIClassicRenderer : NUNIRenderer {
    NUNIClassicRendererResources _resources;
    NUNIClassicGeometryRange _octahedronGeomRange;
    NUNIClassicGeometryRange _quadGeomRange;
    NUNIClassicRendererState _state;
    NUNIClassicResourceManager *_resourceManager;
}


@property (readonly, nonatomic) NSObject<MTLDevice> *mtlDevice; // ivar: _mtlDevice
@property (readonly, nonatomic) *NUNIClassicRendererResources resources;
@property (readonly, nonatomic) NUNIClassicTextureGroup *textureGroup; // ivar: _textureGroup


-(id)initWithPixelFormat:(NSUInteger)arg0 textureSuffix:(id)arg1 rendererStyle:(NSUInteger)arg2 ;
-(void)_createPipelineForProgramType:(NSUInteger)arg0 fromLibrary:(id)arg1 librarySPI:(id)arg2 ;
-(void)_initHemi;
-(void)_initPrograms;
-(void)_updateStateWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 ;
-(void)bindAssetArt:(NSUInteger)arg0 renderEncoder:(id)arg1 toSlot:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)discard;
-(void)draw3DWithEncoder:(id)arg0 state:(struct NUNIClassicRendererState *)arg1 spheroid:(id)arg2 ;
-(void)drawOffscreen3DWithCommandBuffer:(id)arg0 state:(struct NUNIClassicRendererState *)arg1 spheroid:(id)arg2 ;
-(void)drawSpriteWithEncoder:(id)arg0 state:(struct NUNIClassicRendererState *)arg1 spheroid:(id)arg2 ;
-(void)renderOffscreenWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 commandBuffer:(id)arg2 ;
-(void)renderWithScene:(id)arg0 viewport:(struct NUNIViewport )arg1 commandBuffer:(id)arg2 passDescriptor:(id)arg3 ;


@end


#endif