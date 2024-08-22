// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMTIMELAPSESTABILIZATIONMOVIEWRITER_H
#define CAMTIMELAPSESTABILIZATIONMOVIEWRITER_H

@class NSMutableSet, NSArray, NSDate, CLLocation, NSString, AVAssetWriterInputPixelBufferAdaptor, AVOfflineVideoStabilizer, AVAssetWriterInput, AVAssetWriter;
@protocol AVOfflineVideoStabilizerDataProvider, CAMTimelapseMovieWriterProtocol, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CAMTimelapseStabilizationMovieWriter : NSObject <AVOfflineVideoStabilizerDataProvider, CAMTimelapseMovieWriterProtocol>



@property (readonly, nonatomic) NSMutableSet *_badFrameSet; // ivar: __badFrameSet
@property (readonly, nonatomic) NSInteger _badMetadataErrorThreshold; // ivar: __badMetadataErrorThreshold
@property (readonly, nonatomic) NSMutableSet *_badMetadataSet; // ivar: __badMetadataSet
@property (readonly, copy, nonatomic) id *_completion; // ivar: __completion
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_decodeQueue; // ivar: __decodeQueue
@property (readonly, nonatomic) NSInteger _firstFrameIndex; // ivar: __firstFrameIndex
@property (readonly, nonatomic) NSInteger _frameCountWrittenToMovie; // ivar: __frameCountWrittenToMovie
@property (readonly, nonatomic) NSArray *_frameFilePaths; // ivar: __frameFilePaths
@property (readonly, nonatomic) *__CFArray _frameList; // ivar: __frameList
@property (readonly, nonatomic) NSUInteger _frameLoadMode; // ivar: __frameLoadMode
@property (readonly, nonatomic) NSDate *_movieCreationDate; // ivar: __movieCreationDate
@property (readonly, nonatomic) CLLocation *_movieCreationLocation; // ivar: __movieCreationLocation
@property (readonly, nonatomic) NSInteger _movieFramesPerSecond; // ivar: __movieFramesPerSecond
@property (readonly, nonatomic) NSString *_movieOutputPath; // ivar: __movieOutputPath
@property (readonly, nonatomic) CGAffineTransform _movieTransform; // ivar: __movieTransform
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_movieWritingQueue; // ivar: __movieWritingQueue
@property (readonly, nonatomic) NSInteger _nextMetadataFrameIndex; // ivar: __nextMetadataFrameIndex
@property (readonly, nonatomic) NSInteger _nextSourceFrameIndex; // ivar: __nextSourceFrameIndex
@property (readonly, nonatomic) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor; // ivar: __pixelBufferAdaptor
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_pixelTransferQueue; // ivar: __pixelTransferQueue
@property (readonly, nonatomic) *OpaqueVTPixelTransferSession _pixelTransferSession; // ivar: __pixelTransferSession
@property (readonly, nonatomic) *void _powerAssertion; // ivar: __powerAssertion
@property (readonly, nonatomic) BOOL _preferHEVC; // ivar: __preferHEVC
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_readingQueue; // ivar: __readingQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *_semFileReader; // ivar: __semFileReader
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *_semFrameGetter; // ivar: __semFrameGetter
@property (readonly, nonatomic) AVOfflineVideoStabilizer *_stabilizer; // ivar: __stabilizer
@property (readonly, nonatomic) *__CVBuffer _stashedSourceFrame; // ivar: __stashedSourceFrame
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_syncQueue; // ivar: __syncQueue
@property (readonly, nonatomic) AVAssetWriterInput *_videoInput; // ivar: __videoInput
@property (readonly, nonatomic) NSArray *_visMetadataFilePaths; // ivar: __visMetadataFilePaths
@property (readonly, nonatomic) AVAssetWriter *_writer; // ivar: __writer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


+(struct CGSize )_desiredOutputSizeForSourcePixelBuffer:(struct __CVBuffer *)arg0 ;
-(?)_copyNextSampleBufferFromStabilizer;
-(?)_copySourcePixelBufferForNextFrameskipBadFrames;
-(BOOL)_appendPixelBufferToMovie:(struct __CVBuffer *)arg0 ;
-(id)copySourceStabilizationMetadataForFrameNumber:(NSInteger)arg0 outputSampleTime:(struct ? *)arg1 stabilizer:(id)arg2 ;
-(id)init;
-(int)_startWritingWithOutputPath:(id)arg0 width:(NSInteger)arg1 height:(NSInteger)arg2 videoFormatDescription:(struct opaqueCMFormatDescription *)arg3 transform:(struct CGAffineTransform )arg4 framesPerSecond:(NSInteger)arg5 frameCount:(NSInteger)arg6 preferHEVC:(BOOL)arg7 visMetadataCount:(NSInteger)arg8 videoMetadata:(id)arg9 ;
-(struct __CVBuffer *)_cropPixelBufferIfNeeded:(struct __CVBuffer *)arg0 ;
-(struct __CVBuffer *)_decodeFirstFrameAgain;
-(struct __CVBuffer *)copySourcePixelBufferForFrameNumber:(NSInteger)arg0 outputSampleTime:(struct ? *)arg1 stabilizer:(id)arg2 ;
-(void)_cleanup;
-(void)_finishMovieWithCompletionHandler:(id)arg0 ;
-(void)_finishMovieWithFailure;
-(void)_finishMovieWithRestartUnstabilized;
-(void)_requestNextFrameReadDecode;
-(void)_reset;
-(void)_restartUnstabilized;
-(void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg0 ;
-(void)_startAsyncDecoding;
-(void)_writeMovieAsynchronously;
-(void)dealloc;
-(void)writeMovieFromImageFiles:(id)arg0 visMetadataFiles:(id)arg1 startDate:(id)arg2 location:(id)arg3 outputPath:(id)arg4 transform:(struct CGAffineTransform )arg5 framesPerSecond:(NSInteger)arg6 preferHEVC:(BOOL)arg7 completionHandler:(id)arg8 ;


@end


#endif