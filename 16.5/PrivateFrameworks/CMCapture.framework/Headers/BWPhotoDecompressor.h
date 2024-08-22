// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWPHOTODECOMPRESSOR_H
#define BWPHOTODECOMPRESSOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "BWPixelBufferPool.h"

@interface BWPhotoDecompressor : NSObject {
    int _poolSize;
    unsigned int _outputPixelFormat;
    BWPixelBufferPool *_outputPixelBufferPool;
    int _outputLargestDimension;
    BOOL _decompressionSetupIsComplete;
    *__CVBuffer _decompressionPixelBufferPool;
    *CMPhotoSurfacePool _decompressionSurfacePool;
    *CMPhotoDecompressionSession _decompressionSession;
    NSMutableDictionary *_decompressionOptions;
    *opaqueCMFormatDescription _uncompressedFormatDescription;
    BOOL _forceAllocationsFromFigSurfacePool;
}


@property (readonly) BWPixelBufferPool *outputPixelBufferPool;


-(id)initWithOutputPixelBufferPool:(id)arg0 ;
-(id)initWithPoolSize:(int)arg0 outputPixelFormat:(unsigned int)arg1 outputLargestDimension:(int)arg2 ;
-(struct __CVBuffer *)newUncompressedPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(struct opaqueCMSampleBuffer *)newUncompressedSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)flush;


@end


#endif