// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMDEBUGMOVIECONTROLLER_H
#define ICDOCCAMDEBUGMOVIECONTROLLER_H

@class AVAssetWriter, AVAssetWriterInputMetadataAdaptor, AVAssetWriterInput, NSURL, AVAssetWriterInputPixelBufferAdaptor, AVCaptureConnection;
@protocol ICDocCamDebugMovieControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICDocCamDebugMovieController : NSObject

@property (retain, nonatomic) AVAssetWriter *assetWriter; // ivar: _assetWriter
@property (retain, nonatomic) AVAssetWriterInputMetadataAdaptor *assetWriterMetadataAdaptor; // ivar: _assetWriterMetadataAdaptor
@property (retain, nonatomic) AVAssetWriterInput *assetWriterMetadataIn; // ivar: _assetWriterMetadataIn
@property (retain, nonatomic) AVAssetWriterInput *assetWriterVideoIn; // ivar: _assetWriterVideoIn
@property (nonatomic) NSUInteger backgroundRecordingID; // ivar: _backgroundRecordingID
@property (nonatomic) BOOL canRecordFrames; // ivar: _canRecordFrames
@property (weak, nonatomic) NSObject<ICDocCamDebugMovieControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSURL *movieURL; // ivar: _movieURL
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *movieWritingQueue; // ivar: _movieWritingQueue
@property (retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *pixelBufferAdaptor; // ivar: _pixelBufferAdaptor
@property (nonatomic) BOOL readyToRecordMetadata; // ivar: _readyToRecordMetadata
@property (nonatomic) BOOL readyToRecordVideo; // ivar: _readyToRecordVideo
@property (getter=isRecording) BOOL recording; // ivar: _recording
@property (nonatomic) BOOL recordingWillBeStarted; // ivar: _recordingWillBeStarted
@property (nonatomic) BOOL recordingWillBeStopped; // ivar: _recordingWillBeStopped
@property (nonatomic) NSInteger referenceOrientation; // ivar: _referenceOrientation
@property (weak, nonatomic) AVCaptureConnection *videoConnection; // ivar: _videoConnection
@property NSInteger videoOrientation; // ivar: _videoOrientation


-(BOOL)inputsReadyToRecord;
-(BOOL)setupAssetWriterMetadataInputAndMetadataAdaptor;
-(BOOL)setupAssetWriterVideoInput:(struct opaqueCMFormatDescription *)arg0 ;
-(BOOL)writeMetaDataAtFrame:(NSInteger)arg0 intrinsicMatrix:(struct ? )arg1 ;
-(CGFloat)angleOffsetFromPortraitOrientationToOrientation:(NSInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 videoConnection:(id)arg1 referenceOrientation:(NSInteger)arg2 ;
-(struct CGAffineTransform )transformFromCurrentVideoOrientationToOrientation:(NSInteger)arg0 ;
-(void)pauseCaptureSessionForMovieRecording;
-(void)recordFrame:(struct opaqueCMSampleBuffer *)arg0 fromConnection:(id)arg1 ;
-(void)recordingDidStart;
-(void)recordingDidStop;
-(void)recordingWillStart;
-(void)recordingWillStop;
-(void)removeFile:(id)arg0 ;
-(void)resumeCaptureSessionForMovieRecording;
-(void)saveMovieToCameraRoll;
-(void)startRecording;
-(void)stopRecording;
-(void)video:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(*void)arg2 ;
-(void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ofType:(id)arg1 atFrame:(NSInteger)arg2 ;


@end


#endif