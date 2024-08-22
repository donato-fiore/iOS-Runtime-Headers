// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGMETALOFFSCREENTEXTURESSTORE_H
#define PXGMETALOFFSCREENTEXTURESSTORE_H

@class NSMutableSet, NSHashTable;
@protocol OS_dispatch_queue, MTLDevice;

#import <Foundation/Foundation.h>


@interface PXGMetalOffscreenTexturesStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_queue_loadedTextures;
    NSMutableSet *_queue_usedTextures;
    NSHashTable *_queue_aliveTextures;
    id<MTLDevice> *_queue_device;
    CGSize _queue_renderSize;
    NSInteger _queue_sampleCount;
    NSUInteger _queue_pixelFormat;
}




-(id)_queue_checkoutOffscreenTexture;
-(id)_queue_loadTexture;
-(id)checkoutOffscreenTexture;
-(id)init;
-(void)_queue_preloadTexturesCount:(NSInteger)arg0 ;
-(void)_queue_removeAllTextures;
-(void)_queue_willRenderFrameWithDevice:(id)arg0 size:(struct CGSize )arg1 sampleCount:(NSInteger)arg2 pixelFormat:(NSUInteger)arg3 preloadTexturesCount:(NSInteger)arg4 ;
-(void)removeAllTextures;
-(void)willRenderFrameWithDevice:(id)arg0 size:(struct CGSize )arg1 sampleCount:(NSInteger)arg2 pixelFormat:(NSUInteger)arg3 preloadTexturesCount:(NSInteger)arg4 ;


@end


#endif