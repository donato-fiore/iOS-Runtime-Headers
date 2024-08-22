// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNIGLOBETROTTERRENDERER_H
#define NUNIGLOBETROTTERRENDERER_H

@class CLKUIMetalResourcePool;
@protocol MTLTexture;


#import "NUNIClassicRenderer.h"

@interface NUNIGlobetrotterRenderer : NUNIClassicRenderer {
    ? _globeLinesMatrix;
    CLKUIMetalResourcePool *_globeLineTextureResourcePool;
    id<MTLTexture> *_globeLinesCurrentTexture;
}




-(id)_renderGlobeLinesWithCommandBuffer:(id)arg0 state:(struct NUNIClassicRendererState *)arg1 spheroid:(id)arg2 ;
-(void)_createPipelineForProgramType:(NSUInteger)arg0 fromLibrary:(id)arg1 librarySPI:(id)arg2 ;
-(void)_initPrograms;
-(void)draw3DWithEncoder:(id)arg0 state:(struct NUNIClassicRendererState *)arg1 spheroid:(id)arg2 ;
-(void)drawOffscreen3DWithCommandBuffer:(id)arg0 state:(struct NUNIClassicRendererState *)arg1 spheroid:(id)arg2 ;


@end


#endif