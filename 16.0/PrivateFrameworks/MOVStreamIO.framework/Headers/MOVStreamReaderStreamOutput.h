// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOVSTREAMREADERSTREAMOUTPUT_H
#define MOVSTREAMREADERSTREAMOUTPUT_H

@class AVAssetReader, AVAssetTrack, AVAssetReaderOutputMetadataAdaptor, NSString, NSData, NSDictionary, AVAssetReaderTrackOutput;
@protocol MOVStreamReaderStreamOutputPrivate, MOVStreamReaderVideoStreamOutputPrivate, MOVStreamReaderVideoStreamOutput, MOVStreamReaderAudioStreamOutput, MOVStreamReaderMetadataStreamOutput, MOVStreamReaderDelegate, MOVStreamPostProcessor;

#import <Foundation/Foundation.h>

#import "MOVStreamReader.h"
#import "Version.h"

@interface MOVStreamReaderStreamOutput : NSObject <MOVStreamReaderStreamOutputPrivate, MOVStreamReaderVideoStreamOutputPrivate, MOVStreamReaderVideoStreamOutput, MOVStreamReaderAudioStreamOutput, MOVStreamReaderMetadataStreamOutput>

 {
    ? _frameDuration;
}


@property (weak) AVAssetReader *assetReader; // ivar: _assetReader
@property (weak) AVAssetTrack *assetTrack; // ivar: _assetTrack
@property int attachmentSerializationMode; // ivar: _attachmentSerializationMode
@property (retain) AVAssetReaderOutputMetadataAdaptor *attachmentsAdaptor; // ivar: _attachmentsAdaptor
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<MOVStreamReaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property unsigned int determinedPixelFormat; // ivar: _determinedPixelFormat
@property BOOL endOfStreamReached; // ivar: _endOfStreamReached
@property (readonly) ? frameDuration;
@property ? futureAttachementsDuration; // ivar: _futureAttachementsDuration
@property ? futureAttachementsPts; // ivar: _futureAttachementsPts
@property (retain) NSData *futureAttachmentsData; // ivar: _futureAttachmentsData
@property (readonly) NSUInteger hash;
@property BOOL isLegacyIMUTrack; // ivar: _isLegacyIMUTrack
@property NSInteger mediaType; // ivar: _mediaType
@property (retain) NSDictionary *metadataAdaptors; // ivar: _metadataAdaptors
@property unsigned int originalPixelFormat; // ivar: _originalPixelFormat
@property (retain) NSObject<MOVStreamPostProcessor> *postProcessor; // ivar: postProcessor
@property (weak) MOVStreamReader *reader; // ivar: _reader
@property (retain) NSString *relatedStreamId; // ivar: _relatedStreamId
@property (retain) NSString *relationSpecifier; // ivar: _relationSpecifier
@property (retain) NSString *streamId; // ivar: _streamId
@property (retain) AVAssetReaderTrackOutput *streamOutput; // ivar: _streamOutput
@property (readonly) Class superclass;
@property (weak) AVAssetTrack *track; // ivar: _track
@property NSUInteger trackTypeInfo; // ivar: _trackTypeInfo
@property CGAffineTransform transform; // ivar: _transform
@property (weak) Version *version; // ivar: _version


-(BOOL)alwaysCopiesSampleDataForStream;
-(id)attachmentsDataForStreamPts:(struct ? *)arg0 duration:(struct ? *)arg1 ;
-(id)customTrackMetadata;
-(id)decodeAttachmentsData:(id)arg0 error:(*id)arg1 ;
-(id)getAssociatedMetadataStreams;
-(id)getKeyFromMetadataTrack:(id)arg0 ;
-(id)grabNextMetadataItemsOfTrackAssociatedWithStreamWithIdentifier:(id)arg0 timeRange:(struct ? *)arg1 error:(*id)arg2 ;
-(id)grabNextMetadataOfStreamTimeRange:(struct ? *)arg0 error:(*id)arg1 ;
-(id)grabNextTimedMetadataGroupOfStreamError:(*id)arg0 ;
-(id)init;
-(id)nextAttachmentWithError:(*id)arg0 ;
-(id)streamIdFromTrackStreamTypeIdentifier:(id)arg0 ;
-(int)playbackPixelFormatForTrack:(id)arg0 ofStream:(id)arg1 delegate:(id)arg2 ;
-(int)playbackPixelFormatForTrack:(id)arg0 ofStream:(id)arg1 streamEncodingType:(id)arg2 inputPixelFormat:(unsigned int)arg3 delegate:(id)arg4 ;
-(struct __CVBuffer *)copyNextFrameForStreamTimestamp:(struct ? *)arg0 error:(*id)arg1 ;
-(struct __CVBuffer *)nextPixelBufferForStreamAttachementsData:(*id)arg0 timestamp:(struct ? *)arg1 error:(*id)arg2 ;
-(struct opaqueCMSampleBuffer *)grabNextAudioSampleForStreamTimestamp:(struct ? *)arg0 error:(*id)arg1 ;
-(struct opaqueCMSampleBuffer *)grabNextSampleBufferForStreamTimestamp:(struct ? *)arg0 error:(*id)arg1 ;
-(struct opaqueCMSampleBuffer *)nextSampleBufferForStreamAttachementsData:(*id)arg0 timestamp:(struct ? *)arg1 error:(*id)arg2 ;
-(unsigned int)getOutputPixelFormatForStream;
-(unsigned int)pixelFormatForStream;
-(void)removePixelBufferPadding:(BOOL)arg0 ;


@end


#endif