// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXVIDEOWRITER_H
#define JFXVIDEOWRITER_H

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAssetWriterInputMetadataAdaptor, NSLock, NSMutableArray, NSData, NSDictionary, NSURL;
@protocol JFXVideoWriterDelegate;

#import <Foundation/Foundation.h>

#import "WriterReorderQ.h"
#import "JFXDepthCompressor.h"

@interface JFXVideoWriter : NSObject {
    AVAssetWriter *_videoAssetWriter;
    AVAssetWriterInput *_videoAssetWriterInput;
    AVAssetWriterInput *_audioAssetWriterInput;
    *opaqueCMFormatDescription _audioFormatHint;
    AVAssetWriter *_metadataAssetWriter;
    AVAssetWriterInput *_depthAssetWriterInput;
    AVAssetWriterInput *_compressedDepthAssetWriterInput;
    AVAssetWriterInput *_exposureMetadataAssetWriterInput;
    AVAssetWriterInput *_faceMetadataAssetWriterInput;
    AVAssetWriterInput *_JFXARMetadataAssetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_depthAdaptor;
    AVAssetWriterInputMetadataAdaptor *_exposureMetadataAdaptor;
    AVAssetWriterInputMetadataAdaptor *_faceMetadataAdaptor;
    AVAssetWriterInputMetadataAdaptor *_JFXARMetadataMetadataAdaptor;
    BOOL _wroteFirstAudioSample;
    ? _sessionStartTime;
    ? _sessionVideoEndTime;
    ? _sessionMetadataEndTime;
    uint8_t _preparingWriter;
    uint8_t _finishingWritingMovie;
    NSLock *_finishingLock;
    WriterReorderQ *_reorderQ;
    NSMutableArray *_audioBufferQ;
}


@property (retain, nonatomic) NSData *animojiMetadata; // ivar: _animojiMetadata
@property (copy, nonatomic) NSDictionary *audioOutputSettings; // ivar: _audioOutputSettings
@property (weak, nonatomic) NSObject<JFXVideoWriterDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDictionary *depthBGRAPixelBufferAttributes; // ivar: _depthBGRAPixelBufferAttributes
@property (nonatomic) int depthCodecType; // ivar: _depthCodecType
@property (retain, nonatomic) JFXDepthCompressor *depthCompressor; // ivar: _depthCompressor
@property (nonatomic) ? depthDimensions; // ivar: _depthDimensions
@property (retain, nonatomic) NSURL *folderURL; // ivar: _folderURL
@property (readonly, nonatomic) NSURL *metadataURL;
@property (nonatomic) NSUInteger signPostID; // ivar: _signPostID
@property (nonatomic) BOOL storeDepthDataAsVideoTrack; // ivar: _storeDepthDataAsVideoTrack
@property (nonatomic) BOOL storeFaceMetadata; // ivar: _storeFaceMetadata
@property (nonatomic) BOOL trackOutOfOrderVideoBuffers; // ivar: _trackOutOfOrderVideoBuffers
@property (copy, nonatomic) NSDictionary *videoOutputSettings; // ivar: _videoOutputSettings
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) BOOL wroteSessionStartTime; // ivar: _wroteSessionStartTime


+(id)JFX_faceAnchorMetadataIdentifier;
+(id)JFX_funcamCameraPositionMetadataIdentifier;
+(id)JFX_funcamCaptureInterfaceOrientationMetadataIdentifier;
+(id)META_ARMetadataTrackForAsset:(id)arg0 ;
+(id)META_JFXARMetadataIdentifier;
+(id)META_metadataAssetTrackFromAsset:(id)arg0 metadataIdentifier:(id)arg1 ;
+(void)META_metadataForVideo:(id)arg0 completion:(id)arg1 ;
-(BOOL)JFX_setupAudioOutput:(*id)arg0 ;
-(BOOL)JFX_setupAutoExposureMetadataOutput:(*id)arg0 ;
-(BOOL)JFX_setupCompressedDepthOutputWithTransform:(struct CGAffineTransform )arg0 error:(*id)arg1 ;
-(BOOL)JFX_setupDepthOutputWithTransform:(struct CGAffineTransform )arg0 error:(*id)arg1 ;
-(BOOL)JFX_setupFaceMetadataOutput:(*id)arg0 ;
-(BOOL)JFX_setupJFXARMetadataTrack:(*id)arg0 ;
-(BOOL)JFX_setupMetadataWriterWithTransform:(struct CGAffineTransform )arg0 error:(*id)arg1 ;
-(BOOL)JFX_setupVideoOutput:(struct CGAffineTransform )arg0 error:(*id)arg1 ;
-(BOOL)JFX_setupVideoWriterWithTransform:(struct CGAffineTransform )arg0 error:(*id)arg1 ;
-(BOOL)JFX_writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 assetWriterInput:(id)arg1 sampleType:(int)arg2 depthAdaptor:(id)arg3 ;
-(BOOL)JFX_writerCanBegin:(*id)arg0 ;
-(BOOL)startWriterWithVideoTransform:(struct CGAffineTransform )arg0 error:(*id)arg1 ;
-(id)JFX_fileLevelMetadata;
-(id)initWithFolderURL:(id)arg0 videoOutputSettings:(id)arg1 audioOutputSettings:(id)arg2 audioFormatHint:(struct opaqueCMFormatDescription *)arg3 ;
-(struct __CVBuffer *)JFX_copyDepthBufferAsBGRA:(struct __CVBuffer *)arg0 ;
-(void)JFX_drainQueuedAudioBufferBeforeSessionStart_noLock;
-(void)JFX_queueAudioBufferBeforeSessionStart:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)JFX_removeFileAtURL:(id)arg0 ;
-(void)JFX_startSessionAtSourceTime_noLock:(struct ? )arg0 ;
-(void)JFX_writeAutoExposureMetadata:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)JFX_writeBuffer:(struct opaqueCMSampleBuffer *)arg0 sampleType:(int)arg1 ;
-(void)JFX_writeBuffer:(struct opaqueCMSampleBuffer *)arg0 sampleType:(int)arg1 arMetadata:(id)arg2 ;
-(void)JFX_writeDepthBufferForAVDepthData:(id)arg0 withTimingInfo:(struct ? )arg1 ;
-(void)JFX_writeDepthData:(id)arg0 timingInfo:(struct ? )arg1 ;
-(void)JFX_writeFaceDetectMetadata:(id)arg0 pts:(struct ? )arg1 ;
-(void)JFX_writeFaceMetadata:(id)arg0 withTimingInfo:(struct ? )arg1 ;
-(void)JFX_writeJFXARMetadata:(id)arg0 time:(struct ? )arg1 ;
-(void)finishWritingWithCompletionHandler:(id)arg0 ;
-(void)startSessionAtSourceTime:(struct ? )arg0 ;
-(void)writeAudioBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)writeCameraFrameSet:(id)arg0 ;


@end


#endif