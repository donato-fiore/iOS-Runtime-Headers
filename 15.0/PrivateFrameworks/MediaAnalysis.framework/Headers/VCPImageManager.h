// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPIMAGEMANAGER_H
#define VCPIMAGEMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPImageManager : NSObject {
    *CMPhotoDecompressionSession _decodeSession;
    *OpaqueVTPixelTransferSession _transferSession;
    NSObject<OS_dispatch_queue> *_decodeQueue;
}




+(BOOL)allowFastPathDecodeWithUniformType:(id)arg0 pixelWidth:(NSUInteger)arg1 andPixelHeight:(NSUInteger)arg2 ;
+(BOOL)canDecodeAcceleratedUniformTypeIdentifier:(id)arg0 ;
+(BOOL)loggingEnabled;
+(id)sharedImageManager;
-(?)acceleratedDecodeImageData:(?)arg0 pixelFormat:(?)arg1 maxDimension:(?)arg2 pixelBuffer:(?)arg3 orientationflushCache;
-(?)convertPixelBuffertoPixelFormat;
-(?)createPixelBufferWithWidth:(?)arg0 height:(?)arg1 pixelFormatpixelBuffer;
-(?)decodeImageSource:(?)arg0 withUniformTypeIdentifier:(?)arg1 pixelFormat:(?)arg2 maxDimension:(?)arg3 orientationpixelBuffer;
-(?)drawImage:(?)arg0 pixelFormat:(?)arg1 withOrientation:(?)arg2 maxDimensionpixelBuffer;
-(id)dataForResource:(id)arg0 ;
-(id)init;
-(struct __CVBuffer *)imageForResource:(id)arg0 pixelFormat:(int)arg1 ;
-(struct __CVBuffer *)imageForResource:(id)arg0 pixelFormat:(int)arg1 maxDimension:(NSUInteger)arg2 ;
-(struct __CVBuffer *)pixelBufferWithFormat:(int)arg0 andMaxDimension:(NSUInteger)arg1 fromData:(id)arg2 withUniformTypeIdentifier:(id)arg3 flushCache:(BOOL)arg4 orientation:(*unsigned int)arg5 ;
-(struct __CVBuffer *)pixelBufferWithFormat:(int)arg0 andMaxDimension:(NSUInteger)arg1 fromImageURL:(id)arg2 ;
-(struct __CVBuffer *)pixelBufferWithFormat:(int)arg0 andMaxDimension:(NSUInteger)arg1 fromImageURL:(id)arg2 orientation:(*unsigned int)arg3 ;
-(struct __CVBuffer *)pixelBufferWithFormat:(int)arg0 fromImageURL:(id)arg1 flushCache:(BOOL)arg2 ;
-(struct __CVBuffer *)pixelBufferWithFormat:(int)arg0 fromImageURL:(id)arg1 flushCache:(BOOL)arg2 orientation:(*unsigned int)arg3 ;
-(void)dealloc;
-(void)flushCache;


@end


#endif