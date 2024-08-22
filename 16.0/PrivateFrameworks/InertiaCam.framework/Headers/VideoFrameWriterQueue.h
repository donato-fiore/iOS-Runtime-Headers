// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOFRAMEWRITERQUEUE_H
#define VIDEOFRAMEWRITERQUEUE_H

@class NSConditionLock, NSMutableArray, NSLock, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriter, NSError, AVAssetWriterInput;
@protocol OS_dispatch_queue, VideoFrameWriterProgressRecipient;

#import <Foundation/Foundation.h>


@interface VideoFrameWriterQueue : NSObject

@property BOOL canceled; // ivar: canceled
@property BOOL doneQueueing; // ivar: _doneQueueing
@property (retain) NSConditionLock *drainConditionLock; // ivar: _drainConditionLock
@property unsigned int drainMaximum; // ivar: _drainMaximum
@property unsigned int drainMinimum; // ivar: _drainMinimum
@property NSUInteger drainTarget; // ivar: _drainTarget
@property ? endTime; // ivar: endTime
@property (retain) NSMutableArray *frameArray; // ivar: frameArray
@property (retain, nonatomic) NSLock *frameArrayLock; // ivar: frameArrayLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *frameWriteQueue; // ivar: frameWriteQueue
@property (weak) NSObject<VideoFrameWriterProgressRecipient> *frameWriterUpdateCallback; // ivar: frameWriterUpdateCallback
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *inputAdaptor; // ivar: inputAdaptor
@property NSUInteger nextFrameIndex; // ivar: nextFrameIndex
@property ? startTime; // ivar: startTime
@property (retain, nonatomic) AVAssetWriter *videoWriter; // ivar: videoWriter
@property (retain) NSError *writeError; // ivar: writeError
@property BOOL writeSuccess; // ivar: writeSuccess
@property (retain, nonatomic) AVAssetWriterInput *writerInput; // ivar: writerInput
@property (retain) NSConditionLock *writingDoneLock; // ivar: _writingDoneLock


-(BOOL)WaitForFinish;
-(NSUInteger)FramesInQueue;
-(id)FindFrameWithIndex:(NSInteger)arg0 ;
-(id)initWithOutputURL:(id)arg0 forMovieDimensions:(struct CGSize )arg1 outputTransform:(struct CGAffineTransform )arg2 startTime:(struct ? )arg3 endTime:(struct ? )arg4 ;
-(void)AddAFrame:(id)arg0 ;
-(void)DrainIfAbove:(unsigned int)arg0 downTo:(unsigned int)arg1 ;
-(void)FrameRequestCallback;
-(void)StartWatchingForFrames;
-(void)dealloc;


@end


#endif