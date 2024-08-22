// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMOMENTSHISTORY_H
#define VCMOMENTSHISTORY_H

@class NSMutableDictionary, NSString, NSMutableArray;
@protocol VCMomentsHistoryBufferDelegate, VCMovieWriterProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCMomentsHistoryBuffer.h"
#import "VideoAttributes.h"

@interface VCMomentsHistory : NSObject <VCMomentsHistoryBufferDelegate>

 {
    NSMutableDictionary *_writers;
    NSObject<VCMovieWriterProtocol> *_writer;
    NSString *_masterTransactionID;
    NSMutableArray *_pendingRequests;
    NSObject<OS_dispatch_queue> *_momentsQueue;
    VCMomentsHistoryBuffer *_frameBuffer;
    VCMomentsHistoryBuffer *_localAudioBuffer;
    VCMomentsHistoryBuffer *_remoteAudioBuffer;
    NSMutableDictionary *_completionHandlers;
    NSMutableDictionary *_stillImageURLs;
    VideoAttributes *_remoteScreenAttributes;
    *__CVPixelBufferPool _bufferPool;
    CGSize _bufferPoolResolution;
    *__CVPixelBufferPool _copyPool;
    *OpaqueVTPixelTransferSession _transferSession;
    *OpaqueVTPixelTransferSession _copyTransferSession;
    int _captureHeight;
    int _captureWidth;
    BOOL _resize;
    BOOL _isFirstFrame;
    int videoPayload;
    *__CFAllocator _audioSampleBufferAllocator;
    BOOL _enableLocalVideoRecording;
    tagVCMomentsHistoryAudioFormat _localFormat;
    tagVCMomentsHistoryAudioFormat _remoteFormat;
    *__CFAllocator _frameAllocator;
    BOOL _retainPixelBufferEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int imageType; // ivar: _imageType
@property (readonly) Class superclass;
@property (nonatomic) int videoCodec; // ivar: _videoCodec


-(BOOL)writeToFileWithTimestamp:(unsigned int)arg0 transactionID:(id)arg1 URL:(*id)arg2 imageType:(int)arg3 ;
-(BOOL)writeToLivePhotoToFileWithFrame:(struct __CVBuffer *)arg0 transactionID:(id)arg1 URL:(*id)arg2 imageType:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(id)_getActiveWriters;
-(id)getFilePathWithTransactionID:(id)arg0 type:(unsigned char)arg1 ;
-(id)init;
-(int)rewriteMovieMetadataWithURL:(id)arg0 transactionID:(id)arg1 ;
-(struct ? )setupStillImageWithTimestamp:(unsigned int)arg0 transactionID:(id)arg1 visibleRect:(struct CGRect *)arg2 cameraStatusBit:(char *)arg3 imageType:(int)arg4 ;
-(struct CGSize )calculateVisibleAreaWithVisibleRect:(struct CGRect )arg0 cameraStatusBit:(unsigned char)arg1 ;
-(unsigned char)_mediaTypeForBuffer:(id)arg0 ;
-(void)addLocalAudioSample:(struct opaqueVCAudioBufferList *)arg0 timestamp:(unsigned int)arg1 ;
-(void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 cameraStatusBits:(unsigned char)arg1 timestamp:(unsigned int)arg2 ;
-(void)addRemoteAudioSample:(struct opaqueVCAudioBufferList *)arg0 timestamp:(unsigned int)arg1 ;
-(void)appendSampleWithWriter:(id)arg0 buffer:(id)arg1 sample:(struct opaqueCMSampleBuffer *)arg2 ;
-(void)cancelRequestWithTransactionID:(id)arg0 ;
-(void)cleanupActiveRequests;
-(void)cleanupTransferSession;
-(void)dealloc;
-(void)endRecording:(id)arg0 timestamp:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)flushHistoryBuffers;
-(void)getLivePhotoWithTransactionID:(id)arg0 timestamp:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)getPhotoWithTransactionID:(id)arg0 timestamp:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)handlePendingRequestSuccessWithSourceURL:(id)arg0 ;
-(void)handlePendingRequestWithError:(id)arg0 ;
-(void)handlePendingRequestsWithSourceURL:(id)arg0 error:(id)arg1 ;
-(void)handleSinglePendingRequestWithTransactionID:(id)arg0 sourceURL:(id)arg1 ;
-(void)historyBuffer:(id)arg0 didDequeueSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2 ;
-(void)registerDirectoryWithFilePath:(id)arg0 ;
// -(void)setCompeletionHandler:(id)arg0 forTransactionID:(unk)arg1  ;
-(void)setFrameRate:(float)arg0 ;
-(void)setupResizingSessionsWithVisibleRect:(struct CGRect )arg0 cameraStatusBit:(unsigned char)arg1 ;
-(void)setupWriterWithTransactionID:(id)arg0 filePath:(id)arg1 stillImageTime:(struct ? )arg2 visibleRect:(struct CGRect )arg3 cameraStatusBit:(unsigned char)arg4 ;
-(void)startRecording:(unsigned char)arg0 transactionID:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(id)arg3 ;
-(void)updateAudioBuffer:(id)arg0 WithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2 ;
-(void)updateRemoteScreenAttributes:(id)arg0 ;
-(void)updateVideoBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ? )arg1 sampleBufferCopy:(struct opaqueCMSampleBuffer *)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4 ;


@end


#endif