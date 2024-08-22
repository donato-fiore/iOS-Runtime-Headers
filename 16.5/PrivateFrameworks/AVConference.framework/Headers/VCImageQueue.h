// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCIMAGEQUEUE_H
#define VCIMAGEQUEUE_H

@class NSMutableArray, CAContext, CALayer, NSString;
@protocol VCStreamOutputSource, VCStreamSychronizationDelegate;

#import <Foundation/Foundation.h>

#import "VCPixelBufferOverlay.h"
#import "VCStreamOutput.h"

@interface VCImageQueue : NSObject <VCStreamOutputSource>

 {
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
    *__CFAllocator _streamOutputAllocator;
    id *_synchronizationDelegate;
    unsigned int _contextId;
    unsigned int _layerHostSlot;
    CAContext *_caContext;
    CALayer *_caLayer;
    CGRect _contentsRect;
    CATransform3D _transform;
    BOOL _waitForLayoutChange;
    _opaque_pthread_cond_t _waitForLayoutChangeCondition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned int frameRate; // ivar: _frameRate
@property (readonly) NSUInteger hash;
@property BOOL imageQueueProtected;
@property BOOL isLocalVideo; // ivar: _isLocalVideo
@property (nonatomic, getter=isLowLatencyEnabled) BOOL lowLatencyEnabled; // ivar: _isLowLatencyEnabled
@property (retain) VCStreamOutput *streamOutput; // ivar: _streamOutput
@property NSInteger streamToken; // ivar: _streamToken
@property (readonly) Class superclass;
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
-(id)initWithFrameRate:(unsigned char)arg0 ;
-(id)initWithFrameRate:(unsigned char)arg0 imageQueueProtected:(BOOL)arg1 ;
-(int)frameCount;
-(unsigned int)createCAContextWithSize:(struct CGRect )arg0 ;
-(unsigned int)setVideoDestination:(id)arg0 ;
-(void)cleanupCAContextAndCALayer;
-(void)cleanupStreamOutput;
-(void)configureCALayerWithRect:(struct CGRect )arg0 name:(id)arg1 ;
-(void)dealloc;
-(void)drawOverlayMessageForPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)emitFrameEnqueuedSignposts:(NSUInteger)arg0 withTime:(struct ? )arg1 forFrame:(struct __CVBuffer *)arg2 ;
-(void)enqueueAttributes:(struct __CFDictionary *)arg0 ;
-(void)enqueueStreamOutputAttributes:(struct __CFDictionary *)arg0 ;
-(void)enqueueStreamOutputFrame:(struct __CVBuffer *)arg0 atTime:(struct ? )arg1 ;
-(void)getQueueRepresentation:(*void)arg0 ;
-(void)pause;
-(void)releaseAllocators;
-(void)releaseCAContext;
-(void)removeExpiredFrameCounts:(CGFloat)arg0 ;
-(void)resetFrameCount;
-(void)resetSlotForCALayerHostModeSwitch;
-(void)start;
-(void)stop;
-(void)updateFrameCountHistory;


@end


#endif