// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGSHAREDMETALRENDERCONTEXT_H
#define PXGSHAREDMETALRENDERCONTEXT_H



#import "PXGMetalRenderContext.h"

@interface PXGSharedMetalRenderContext : PXGMetalRenderContext



-(id)newTextureWithDescriptor:(id)arg0 ;
-(void)_blitFromBuffer:(id)arg0 toTexture:(id)arg1 inRegion:(struct ? )arg2 bytesPerRow:(NSUInteger)arg3 offset:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;
-(void)copyBytes:(*void)arg0 toTexture:(id)arg1 inRegion:(struct ? )arg2 length:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;
-(void)fastCopyBytes:(*void)arg0 toTexture:(id)arg1 inRegion:(struct ? )arg2 length:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;


@end


#endif