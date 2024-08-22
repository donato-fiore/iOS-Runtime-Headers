// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGPRIVATEMETALRENDERCONTEXT_H
#define PXGPRIVATEMETALRENDERCONTEXT_H



#import "PXGMetalRenderContext.h"

@interface PXGPrivateMetalRenderContext : PXGMetalRenderContext



-(BOOL)wantsIOSurfaceTextures;
-(id)initWithDevice:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(void)copyBytes:(*void)arg0 toTexture:(id)arg1 inRegion:(struct ? )arg2 length:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;
-(void)fastCopyBytes:(*void)arg0 toTexture:(id)arg1 inRegion:(struct ? )arg2 length:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;


@end


#endif