// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTKTEXTUREUPLOADER_H
#define MTKTEXTUREUPLOADER_H

@class NSLock;
@protocol MTLDevice, MTLCommandBuffer, MTLBlitCommandEncoder, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTKTextureUploader : NSObject {
    id<MTLDevice> *_device;
    id<MTLCommandBuffer> *_commandBuffer;
    id<MTLBlitCommandEncoder> *_blit;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_notifyQueue;
}




-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 notifyQueue:(id)arg2 ;
-(id)newTextureWithData:(id)arg0 options:(id)arg1 ;
-(void)copyBytes:(*void)arg0 toTexture:(id)arg1 bitsPerPixel:(NSUInteger)arg2 pixelComponents:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 region:(struct ? )arg6 slice:(NSUInteger)arg7 level:(NSUInteger)arg8 flipVertically:(BOOL)arg9 ;
-(void)copyTexture:(id)arg0 toTexture:(id)arg1 ;
-(void)dealloc;
-(void)finishWithCompletionHandler:(id)arg0 ;
-(void)generateMipmapsForTexture:(id)arg0 ;


@end


#endif