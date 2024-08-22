// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCMOVIEWRITER_H
#define VCMOVIEWRITER_H

@class NSString, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, NSURL;
@protocol VCMovieWriterProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCMovieWriter : NSObject <VCMovieWriterProtocol>

 {
    NSString *_transactionID;
    ? _lastVideoPresentationTime;
    ? _lastLocalAudioPresentationTime;
    ? _lastRemoteAudioPresentationTime;
    ? _startTime;
    ? _stillImageTime;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_localAudioInput;
    AVAssetWriterInput *_remoteAudioInput;
    AVAssetWriterInput *_metadataInput;
    AVAssetWriterInputMetadataAdaptor *_adapter;
    BOOL _isVideoStarted;
    BOOL _isEndRTPTimestampSet;
    BOOL _writingStarted;
    *opaqueCMBufferQueue _videoQueue;
    *opaqueCMBufferQueue _localAudioQueue;
    *opaqueCMBufferQueue _remoteAudioQueue;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    id *_completionHandler;
    CGRect _contectRect;
    CGFloat _visibleWidth;
    CGFloat _visibleHeight;
    *__CVPixelBufferPool _bufferPool;
    *OpaqueVTPixelTransferSession _transferSession;
    unsigned int _codec;
}


@property unsigned int endRTPTimeStamp; // ivar: _endRTPTimeStamp
@property (retain, nonatomic) NSURL *outputURL; // ivar: _outputURL
@property unsigned int startRTPTimeStamp; // ivar: _startRTPTimeStamp
@property (readonly) unsigned char writerMode; // ivar: _writerMode


-(BOOL)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 RTPtimeStamp:(unsigned int)arg1 mediaType:(unsigned char)arg2 ;
-(BOOL)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 RTPtimeStamp:(unsigned int)arg1 mediaType:(unsigned char)arg2 ;
-(id)initWithOutputURL:(id)arg0 transactionID:(id)arg1 videoCodec:(unsigned int)arg2 ;
-(id)setupAssetWriterWithWidth:(int)arg0 height:(int)arg1 transactionID:(id)arg2 ;
-(void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 mediaType:(unsigned char)arg1 ;
-(void)appendMetaData;
-(void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 cameraStatus:(unsigned char)arg1 mediaType:(unsigned char)arg2 ;
-(void)dealloc;
-(void)finishWritingWithHandler:(id)arg0 ;
-(void)processSampleQueue:(struct opaqueCMBufferQueue *)arg0 input:(id)arg1 lastPresentationTime:(struct ? *)arg2 ;
-(void)setEndRTPTimestampWithTimestamp:(unsigned int)arg0 ;
-(void)setStillImageTime:(struct ? )arg0 ;
-(void)setupContectRect:(struct CGRect )arg0 withCaptureHeight:(int)arg1 ;
-(void)setupInput:(id)arg0 queue:(struct opaqueCMBufferQueue *)arg1 dispatchGroup:(id)arg2 lastPresentationTime:(struct ? *)arg3 ;
-(void)setupInputs;
-(void)setupWriterWithMode:(unsigned char)arg0 ;
-(void)startWritingAtTime:(struct ? )arg0 ;


@end


#endif