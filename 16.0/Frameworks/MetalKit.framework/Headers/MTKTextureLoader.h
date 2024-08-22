// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTKTEXTURELOADER_H
#define MTKTEXTURELOADER_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore, MTLCommandQueue, TXRBufferAllocator, MTLDeviceSPI, MTLDevice;

#import <Foundation/Foundation.h>


@interface MTKTextureLoader : NSObject {
    NSObject<OS_dispatch_queue> *_loadQueue;
    NSObject<OS_dispatch_queue> *_uploadQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSObject<OS_dispatch_semaphore> *_loadSemaphore;
    id<MTLCommandQueue> *_blitQueue;
    id<TXRBufferAllocator> *_bufferAllocator;
    id<MTLDeviceSPI> *_device;
}


@property (readonly, nonatomic) NSObject<MTLDevice> *device;


-(BOOL)validateGenerateMipmapsForPixelFormat:(NSUInteger)arg0 options:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)_determineFileType:(id)arg0 ;
-(id)_newSyncTexturesFromTXRTextures:(id)arg0 labels:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWithDevice:(id)arg0 ;
-(id)newTextureFromTXRTexture:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)newTextureWithCGImage:(struct CGImage *)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)newTextureWithContentsOfURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)newTextureWithData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)newTextureWithMDLTexture:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)newTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 bundle:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)newTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 bundle:(id)arg3 options:(id)arg4 error:(*id)arg5 ;
-(id)newTexturesFromTXRTextures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)newTexturesWithContentsOfURLs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)newUploaderForOptions:(id)arg0 ;
-(void)_loadCGImage:(struct CGImage *)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)_loadData:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)_loadData:(id)arg0 options:(id)arg1 uploader:(id)arg2 label:(id)arg3 completionHandler:(id)arg4 ;
-(void)_loadMDLTexture:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)_newAsyncTextureWithNames:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(id)arg5 ;
-(void)dealloc;
-(void)newTextureWithCGImage:(struct CGImage *)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)newTextureWithContentsOfURL:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)newTextureWithData:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)newTextureWithMDLTexture:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)newTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 bundle:(id)arg2 options:(id)arg3 completionHandler:(id)arg4 ;
-(void)newTextureWithName:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(id)arg5 ;
-(void)newTexturesWithContentsOfURLs:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)newTexturesWithNames:(id)arg0 scaleFactor:(CGFloat)arg1 bundle:(id)arg2 options:(id)arg3 completionHandler:(id)arg4 ;
-(void)newTexturesWithNames:(id)arg0 scaleFactor:(CGFloat)arg1 displayGamut:(NSInteger)arg2 bundle:(id)arg3 options:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif