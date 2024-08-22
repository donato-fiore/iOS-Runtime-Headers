// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMTIMELAPSEMOVIEWRITER_H
#define CAMTIMELAPSEMOVIEWRITER_H

@class NSMutableDictionary, NSArray, NSOperationQueue, NSMutableSet, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInput, AVAssetWriter, NSString;
@protocol CAMTimelapseMovieWriterProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CAMTimelapseMovieWriter : NSObject <CAMTimelapseMovieWriterProtocol>



@property (readonly, nonatomic) NSMutableDictionary *_availableImageData; // ivar: __availableImageData
@property (readonly, nonatomic) NSMutableDictionary *_availablePixelBuffers; // ivar: __availablePixelBuffers
@property (readonly, copy, nonatomic) id *_completion; // ivar: __completion
@property (readonly, nonatomic) NSInteger _currentOutputFrameIndex; // ivar: __currentOutputFrameIndex
@property (readonly, nonatomic) NSArray *_frameFilePaths; // ivar: __frameFilePaths
@property (readonly, nonatomic) NSInteger _framesPerSecond; // ivar: __framesPerSecond
@property (readonly, nonatomic) NSOperationQueue *_imageDecodeQueue; // ivar: __imageDecodeQueue
@property (readonly, nonatomic) NSOperationQueue *_imageReadQueue; // ivar: __imageReadQueue
@property (readonly, nonatomic) NSMutableSet *_inFlightReadFrameIndexes; // ivar: __inFlightReadFrameIndexes
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_movieWritingQueue; // ivar: __movieWritingQueue
@property (readonly, nonatomic) NSInteger _nextReadFileIndex; // ivar: __nextReadFileIndex
@property (readonly, nonatomic) NSInteger _nextWriteFileIndex; // ivar: __nextWriteFileIndex
@property (readonly, nonatomic) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor; // ivar: __pixelBufferAdaptor
@property (readonly, nonatomic) NSInteger _residentImageDataCount; // ivar: __residentImageDataCount
@property (readonly, nonatomic) NSInteger _residentPixelBufferCount; // ivar: __residentPixelBufferCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_synchronizationQueue; // ivar: __synchronizationQueue
@property (readonly, nonatomic) AVAssetWriterInput *_videoInput; // ivar: __videoInput
@property (readonly, nonatomic) AVAssetWriter *_writer; // ivar: __writer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


-(BOOL)_appendPixelBuffer:(struct __CVBuffer *)arg0 ;
-(BOOL)_startWritingWithOutputPath:(id)arg0 width:(NSInteger)arg1 height:(NSInteger)arg2 videoFormatDescription:(struct opaqueCMFormatDescription *)arg3 transform:(struct CGAffineTransform )arg4 framesPerSecond:(NSInteger)arg5 frameCount:(NSInteger)arg6 preferHEVC:(BOOL)arg7 videoMetadata:(id)arg8 ;
-(id)init;
-(struct CGSize )_desiredOutputSizeForFrameSize:(struct CGSize )arg0 ;
-(void)_enqueueNextDecode;
-(void)_enqueueNextRead;
-(void)_enqueueNextWrite;
-(void)_finishMovieWithCompletionHandler:(id)arg0 ;
-(void)_reset;
-(void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)writeMovieFromImageFiles:(id)arg0 visMetadataFiles:(id)arg1 startDate:(id)arg2 location:(id)arg3 outputPath:(id)arg4 transform:(struct CGAffineTransform )arg5 framesPerSecond:(NSInteger)arg6 preferHEVC:(BOOL)arg7 completionHandler:(id)arg8 ;


@end


#endif