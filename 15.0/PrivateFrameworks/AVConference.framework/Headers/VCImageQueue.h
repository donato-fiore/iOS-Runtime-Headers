// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCIMAGEQUEUE_H
#define VCIMAGEQUEUE_H

@class NSMutableArray;
@protocol VCStreamSychronizationDelegate;

#import <Foundation/Foundation.h>

#import "VCPixelBufferOverlay.h"
#import "VCStreamOutput.h"

@interface VCImageQueue : NSObject {
    *_CAImageQueue _caQueue;
    *OpaqueFigImageQueue _figQueue;
    *__CFDictionary _storedAttributes;
    _opaque_pthread_mutex_t _enqueueLock;
    unsigned int _slot;
    BOOL _imageQueueProtected;
    unsigned int _enqueuedFrameCount;
    uint8_t _frameCount;
    NSMutableArray *_frameCountHistory;
    VCPixelBufferOverlay *_pixelBufferOverlay;
    VCStreamOutput *_streamOutput;
    *__CFAllocator _streamOutputAllocator;
    id *_synchronizationDelegate;
}


@property unsigned int frameRate; // ivar: _frameRate
@property BOOL imageQueueProtected;
@property BOOL isLocalVideo; // ivar: _isLocalVideo
@property (nonatomic, getter=isLowLatencyEnabled) BOOL lowLatencyEnabled; // ivar: _isLowLatencyEnabled
@property (retain) VCStreamOutput *streamOutput;
@property NSInteger streamToken; // ivar: _streamToken
@property (nonatomic) NSObject<VCStreamSychronizationDelegate> *synchronizationDelegate;
@property (readonly) BOOL usingRemoteQueue; // ivar: _usingRemoteQueue


+(id)drawingContext;
-(?)createAndCopyLatencyStatsDictionary;
-(?)createAndCopyPerformanceDictionary;
-(BOOL)createAllocators;
-(BOOL)enqueueFrame:(struct __CVBuffer *)arg0 atTime:(struct ? )arg1 ;
-(BOOL)enqueuePixelBuffer:(struct __CVBuffer *)arg0 atTime:(struct ? )arg1 ;
-(BOOL)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(float)averageFrameRate;
-(id)description;
-(id)initWithFrameRate:(unsigned char)arg0 ;
-(id)initWithFrameRate:(unsigned char)arg0 imageQueueProtected:(BOOL)arg1 ;
-(int)frameCount;
-(unsigned int)setVideoDestination:(id)arg0 ;
-(void)cleanupStreamOutput;
-(void)dealloc;
-(void)drawOverlayMessageForPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)emitFrameEnqueuedSignposts:(NSUInteger)arg0 withTime:(struct ? )arg1 forFrame:(struct __CVBuffer *)arg2 ;
-(void)enqueueAttributes:(struct __CFDictionary *)arg0 ;
-(void)enqueueStreamOutputAttributes:(struct __CFDictionary *)arg0 ;
-(void)enqueueStreamOutputFrame:(struct __CVBuffer *)arg0 atTime:(struct ? )arg1 ;
-(void)getQueueRepresentation:(*void)arg0 ;
-(void)pause;
-(void)releaseAllocators;
-(void)removeExpiredFrameCounts:(CGFloat)arg0 ;
-(void)resetFrameCount;
-(void)start;
-(void)stop;
-(void)updateFrameCountHistory;


@end


#endif