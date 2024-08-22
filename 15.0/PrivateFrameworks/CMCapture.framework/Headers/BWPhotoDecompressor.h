// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWPHOTODECOMPRESSOR_H
#define BWPHOTODECOMPRESSOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "BWPixelBufferPool.h"

@interface BWPhotoDecompressor : NSObject {
    int _poolSize;
    unsigned int _outputPixelFormat;
    BWPixelBufferPool *_outputPixelBufferPool;
    BOOL _decompressionSetupIsComplete;
    *__CVBuffer _decompressionPixelBufferPool;
    *CMPhotoSurfacePool _decompressionSurfacePool;
    *CMPhotoDecompressionSession _decompressionSession;
    NSMutableDictionary *_decompressionOptions;
    *opaqueCMFormatDescription _uncompressedFormatDescription;
    BOOL _forceAllocationsFromFigSurfacePool;
}


@property (readonly) BWPixelBufferPool *outputPixelBufferPool;


-(id)_initWithPoolSize:(int)arg0 outputPixelFormat:(unsigned int)arg1 outputPixelBufferPool:(id)arg2 ;
-(id)initWithOutputPixelBufferPool:(id)arg0 ;
-(id)initWithPoolSize:(int)arg0 outputPixelFormat:(unsigned int)arg1 ;
-(int)_setupDecompressionOptions;
-(int)_setupDecompressionSession;
-(int)_setupDecompressionSurfacePool;
-(int)_setupResources;
-(struct __CVBuffer *)_newUncompressedPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 pixelBufferTrackingTag:(id)arg1 ;
-(struct __CVBuffer *)newUncompressedPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(struct opaqueCMSampleBuffer *)_newUncompressedSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 pixelBufferTrackingTag:(id)arg1 ;
-(struct opaqueCMSampleBuffer *)newUncompressedSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_releaseResources;
-(void)_setCVColorProperties:(struct __CVBuffer *)arg0 fromSourceBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)dealloc;


@end


#endif