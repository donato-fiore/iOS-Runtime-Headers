// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOWRITER_H
#define VIDEOWRITER_H

@class AVAssetWriter, AVAssetWriterInputPixelBufferAdaptor, NSConditionLock, NSError, AVAssetWriterInput;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VideoWriter : NSObject

@property (retain) AVAssetWriter *assetWriter; // ivar: _assetWriter
@property (readonly) NSInteger currFrame; // ivar: currFrame
@property NSInteger currFrameTime; // ivar: _currFrameTime
@property (readonly) float fps; // ivar: fps
@property NSInteger frameIncr; // ivar: _frameIncr
@property (retain) NSObject<OS_dispatch_queue> *frameWriteQueue; // ivar: _frameWriteQueue
@property (readonly) unsigned int imgHeight; // ivar: imgHeight
@property (readonly) unsigned int imgWidth; // ivar: imgWidth
@property BOOL initFailed; // ivar: _initFailed
@property (retain) AVAssetWriterInputPixelBufferAdaptor *inputAdaptor; // ivar: _inputAdaptor
@property (retain) NSConditionLock *inputLock; // ivar: _inputLock
@property (readonly) NSError *lastError; // ivar: lastError
@property (readonly) unsigned int pixelFormat; // ivar: pixelFormat
@property (readonly) CGAffineTransform preferredTransform; // ivar: preferredTransform
@property (readonly) int timeScale; // ivar: timeScale
@property (retain) AVAssetWriterInput *writerInput; // ivar: _writerInput


-(id)addFrame:(struct CGImage *)arg0 ;
-(id)addFrameAsPixelBuf:(struct __CVBuffer *)arg0 ;
-(id)addFrameAsPixelBuf:(struct __CVBuffer *)arg0 atFrameTime:(struct ? )arg1 ;
-(id)finish;
-(id)initForPath:(char *)arg0 fileType:(id)arg1 codecType:(id)arg2 imgWidth:(unsigned int)arg3 imgHeight:(unsigned int)arg4 fps:(float)arg5 pixFormat:(unsigned int)arg6 metadata:(id)arg7 ;
-(id)initForURL:(id)arg0 fileType:(id)arg1 codecType:(id)arg2 imgWidth:(unsigned int)arg3 imgHeight:(unsigned int)arg4 fps:(float)arg5 pixFormat:(unsigned int)arg6 metadata:(id)arg7 ;
-(id)initForURL:(id)arg0 fileType:(id)arg1 codecType:(id)arg2 imgWidth:(unsigned int)arg3 imgHeight:(unsigned int)arg4 fps:(float)arg5 timeScale:(int)arg6 transform:(struct CGAffineTransform )arg7 pixFormat:(unsigned int)arg8 metadata:(id)arg9 ;
-(struct __CVBuffer *)createPixelBuffer;
-(void)endSessionAtTime:(struct ? )arg0 ;
-(void)endSessionInfer;
-(void)setInputReady;


@end


#endif