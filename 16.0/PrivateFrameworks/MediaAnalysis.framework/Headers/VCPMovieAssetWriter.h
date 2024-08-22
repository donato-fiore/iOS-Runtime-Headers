// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPMOVIEASSETWRITER_H
#define VCPMOVIEASSETWRITER_H

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, AVAssetWriter, AVAssetWriterInput, NSMutableArray, NSMapTable;
@protocol OS_dispatch_group, OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPMovieAssetWriter : NSObject {
    AVAsset *_asset;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_audioOutput;
    AVAssetReaderTrackOutput *_videoOrientationOutput;
    AVAssetReaderTrackOutput *_stillImageOutput;
    AVAssetTrack *_track;
    AVAssetTrack *_audioTrack;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_input;
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInput *_livePhotoInfoInput;
    AVAssetWriterInput *_stillImageInput;
    AVAssetWriterInput *_videoOrientationInput;
    NSMutableArray *_sampleQueue;
    NSMutableArray *_livePhotoInfoQueue;
    NSObject<OS_dispatch_group> *_encodingGroup;
    NSObject<OS_dispatch_semaphore> *_enqueueSemaphore;
    NSObject<OS_dispatch_semaphore> *_dequeueSemaphore;
    NSObject<OS_dispatch_semaphore> *_livePhotoInfoEnqueueSemaphore;
    NSObject<OS_dispatch_semaphore> *_livePhotoInfoDequeueSemaphore;
    NSObject<OS_dispatch_queue> *_statusOperationQueue;
    NSObject<OS_dispatch_queue> *_videoQueue;
    NSObject<OS_dispatch_queue> *_audioQueue;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    CF<__CVPixelBufferPool *> _pixelBufferPool;
    CF<OpaqueVTPixelTransferSession *> _transferSession;
    ? _stillPTS;
    NSMapTable *_inputToOutputMap;
}


@property (readonly) NSInteger status; // ivar: _status


+(id)assetWriterWithURL:(id)arg0 andTrack:(id)arg1 andBitrate:(NSInteger)arg2 ;
-(?)copyPixelBuffertoPixelBuffer;
-(id)initWithURL:(id)arg0 andTrack:(id)arg1 andBitrate:(NSInteger)arg2 ;
-(int)addLivePhotoInfoBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)addPixelBuffer:(struct __CVBuffer *)arg0 withTime:(struct ? )arg1 withAttachment:(id)arg2 ;
-(int)appendMetadataTrack;
-(int)dispatchEncoding;
-(int)finish;
-(int)passthroughMetadataTrackFrom:(id)arg0 to:(id)arg1 ;
-(int)processLivePhotoInfoMetadataTrack;
-(int)processStillImageMetadataTrack;
-(int)setupAudioTrack;
-(int)setupMetadataTrack;
-(int)setupVideoTrack:(NSInteger)arg0 ;
-(struct opaqueCMSampleBuffer *)popLivePhotoInfoSample;
-(struct opaqueCMSampleBuffer *)popSample;
-(void)cancel;
-(void)dealloc;
-(void)pushLivePhotoInfoSample:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)pushSample:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)updateStillPTS:(struct ? )arg0 ;


@end


#endif