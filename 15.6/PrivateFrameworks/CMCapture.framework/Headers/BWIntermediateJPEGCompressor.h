// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWINTERMEDIATEJPEGCOMPRESSOR_H
#define BWINTERMEDIATEJPEGCOMPRESSOR_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "BWStats.h"
#import "BWMovingWindowStats.h"

@interface BWIntermediateJPEGCompressor : NSObject {
    NSString *_name;
    NSObject<OS_dispatch_semaphore> *_backPressureSemaphore;
    NSUInteger _compressedBufferSize;
    NSUInteger _compressedBufferPoolAllocationTimeoutMS;
    float _compressionQuality;
    float _compressionRate;
    int _numberOfTimesWaitedOnBackPressureSemaphore;
    int _jpegSurfacePoolLowWaterBufferCount;
    int _jpegSurfacePoolHighWaterBufferCount;
    BOOL _setupIsComplete;
    *CMPhotoSurfacePool _surfacePool;
    *CMPhotoCompressionSession _compressionSession;
    *__CFDictionary _containerOptions;
    NSMutableDictionary *_qualityControllerParameters;
    *__CFDictionary _compressionOptions;
    *opaqueCMFormatDescription _jpegFormatDescription;
    BWStats *_overallWaitStats;
    BWMovingWindowStats *_recentWaitStats;
}




+(void)initialize;
-(id)initWithCompressionQuality:(float)arg0 compressionRate:(float)arg1 jpegSurfacePoolLowWaterBufferCount:(int)arg2 jpegSurfacePoolHighWaterBufferCount:(int)arg3 compressedBufferPoolAllocationTimeoutMS:(NSUInteger)arg4 name:(id)arg5 ;
-(int)_setupJPEGCompressionOptions;
-(int)_setupJPEGCompressionSession;
-(int)_setupJPEGContainerOptions;
-(int)_setupJPEGEncodeResourcesForSourcePixelBuffer:(struct __CVBuffer *)arg0 ;
-(int)_setupJPEGFormatDescriptionFromSourceBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)_setupJPEGSurfacePool;
-(struct opaqueCMSampleBuffer *)newJPEGSampleBufferFromUncompressedSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_releaseResources;
-(void)dealloc;


@end


#endif