// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCFIGASSETWRITER_H
#define VCFIGASSETWRITER_H

@class NSString, NSURL;
@protocol VCMovieWriterProtocol;

#import <Foundation/Foundation.h>


@interface VCFigAssetWriter : NSObject <VCMovieWriterProtocol>

 {
    *OpaqueFigAssetWriter _assetWriter;
    ? _startTime;
    NSString *_transactionID;
    int _videoTrackID;
    int _localAudioTrackID;
    int _remoteAudioTrackID;
    int _metadataTrackID;
    ? _stillImageTime;
    BOOL _isVideoStarted;
    BOOL _isEndRTPTimestampSet;
    unsigned char _stillImageCameraStatusBit;
    BOOL _resize;
    *__CVPixelBufferPool _bufferPool;
    *OpaqueVTPixelTransferSession _transferSession;
    *OpaqueVTCompressionSession _compressionSession;
    unsigned int _codec;
}


@property unsigned int endRTPTimeStamp; // ivar: _endRTPTimeStamp
@property (retain, nonatomic) NSURL *outputURL; // ivar: _outputURL
@property unsigned int startRTPTimeStamp; // ivar: _startRTPTimeStamp
@property (readonly) unsigned char writerMode; // ivar: _writerMode


-(BOOL)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 RTPtimeStamp:(unsigned int)arg1 mediaType:(unsigned char)arg2 ;
-(BOOL)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 RTPtimeStamp:(unsigned int)arg1 mediaType:(unsigned char)arg2 ;
-(id)initWithOutputURL:(id)arg0 transactionID:(id)arg1 videoCodec:(unsigned int)arg2 ;
-(int)_setupWriter;
-(int)encodeAndAppendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)trackIDForMediaType:(unsigned char)arg0 ;
-(int)trackIDForWriterMode:(unsigned char)arg0 ;
-(struct OpaqueVTCompressionSession *)compressionSessionWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 ;
-(void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 mediaType:(unsigned char)arg1 ;
-(void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 cameraStatus:(unsigned char)arg1 mediaType:(unsigned char)arg2 ;
-(void)dealloc;
-(void)finishWritingWithHandler:(id)arg0 ;
-(void)setEndRTPTimestampWithTimestamp:(unsigned int)arg0 ;
-(void)setStillImageTime:(struct ? )arg0 ;
-(void)setStillImageTimeInternal;
-(void)setupLivePhotoStillImageCameraStatusBit:(unsigned char)arg0 resize:(BOOL)arg1 videoVisibleWidth:(int)arg2 height:(int)arg3 ;
-(void)setupWriterWithMode:(unsigned char)arg0 ;
-(void)writeIdentifierMetadata:(id)arg0 ;


@end


#endif