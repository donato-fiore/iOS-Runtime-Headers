// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOVSTREAMWRITER_H
#define MOVSTREAMWRITER_H

@class NSURL, AVAssetWriter, NSError, NSString, NSArray;
@protocol VideoEncoderInterfaceDelegate, MOVStreamWriterStateContext, MOVStreamWriterDeprecated, MOVStreamWriterDeprecationNominates, OS_dispatch_queue, OS_dispatch_semaphore, MOVStreamCustomEncoderConfigDelegate, MOVStreamWriterDelegate, MOVStreamWriterState;

#import <Foundation/Foundation.h>


@interface MOVStreamWriter : NSObject <VideoEncoderInterfaceDelegate, MOVStreamWriterStateContext, MOVStreamWriterDeprecated, MOVStreamWriterDeprecationNominates>

 {
    NSObject<OS_dispatch_queue> *m_delegateCallbackQueue;
    NSObject<OS_dispatch_queue> *m_writingQueue;
    NSObject<OS_dispatch_queue> *m_processingQueue;
    NSObject<OS_dispatch_semaphore> *m_finisDrainFifohWaitSemaphore;
    NSURL *m_writeURL;
    AVAssetWriter *m_assetWriter;
    CGFloat m_expectedFrameRate;
    BOOL m_realtime;
    BOOL m_haveStartedSession;
    CGAffineTransform m_videoTransform;
    map<std::string, (anonymous namespace)::StreamRecordingData, std::less<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::StreamRecordingData>>> m_streamDataMap;
    vector<std::string, std::allocator<std::string>> m_orderedStreamNames;
    map<std::string, (anonymous namespace)::MetadataRecordingData, std::less<std::string>, std::allocator<std::pair<const std::string, (anonymous namespace)::MetadataRecordingData>>> m_metadataDataMap;
    vector<std::string, std::allocator<std::string>> m_orderedMetadataStreamNames;
    map<std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>, std::less<std::string>, std::allocator<std::pair<const std::string, std::map<std::string, (anonymous namespace)::MetadataRecordingData>>>> m_associatedMetadataDataMap;
    map<std::string, CMTime, std::less<std::string>, std::allocator<std::pair<const std::string, CMTime>>> m_lastPtsForStream;
    BOOL m_observingIsReady;
    NSUInteger _defaultWritingBufferCapacity;
    NSUInteger _defaultAudioWritingBufferCapacity;
    NSUInteger _defaultMetadataWritingBufferCapacity;
}


@property int baseMediaTimeScale; // ivar: _baseMediaTimeScale
@property (retain) NSError *criticalError; // ivar: criticalError
@property (weak) NSObject<MOVStreamCustomEncoderConfigDelegate> *customEncoderConfigDelegate; // ivar: _customEncoderConfigDelegate
@property (readonly, copy) NSString *debugDescription;
@property NSUInteger defaultAudioWritingBufferCapacity;
@property NSUInteger defaultMetadataWritingBufferCapacity;
@property NSUInteger defaultWritingBufferCapacity;
@property (weak) NSObject<MOVStreamWriterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property NSUInteger fifoBufferCapacity;
@property CGFloat finishingTimeout; // ivar: _finishingTimeout
@property (readonly) NSUInteger hash;
@property BOOL legacyKeysMode; // ivar: legacyKeysMode
@property (retain) NSArray *movMetadataItems; // ivar: movMetadataItems
@property (retain) NSObject<MOVStreamWriterState> *state; // ivar: _state
@property (readonly) NSInteger status;
@property (readonly) Class superclass;


+(?)getPixelFormatFromStreamData;
+(id)getMOVStreamIOMetadataItem;
-(BOOL)activateNewState:(id)arg0 byEvent:(id)arg1 ;
-(BOOL)checkIfFifoAreEmpty;
-(BOOL)encoder:(id)arg0 configureSessionOverride:(struct OpaqueVTCompressionSession *)arg1 streamId:(id)arg2 ;
-(BOOL)fifoDropsEnabled:(struct StreamRecordingData *)arg0 ;
-(BOOL)isAudioStream:(struct StreamRecordingData *)arg0 ;
-(BOOL)isReadyForMoreDataForStreamId:(id)arg0 fromMap:(*void)arg1 ;
-(BOOL)marksOutputTracksAsEnabledForStream:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 ;
-(BOOL)marksOutputTracksAsEnabledForStream:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 fromMap:(*void)arg1 ;
-(BOOL)relateStream:(id)arg0 toStream:(id)arg1 relationSpecifier:(id)arg2 ;
-(BOOL)relateStream:(id)arg0 toStream:(id)arg1 relationSpecifier:(id)arg2 error:(*id)arg3 ;
-(BOOL)setExpectedFrameRate:(CGFloat)arg0 ;
-(BOOL)setRealTimeCapture:(BOOL)arg0 ;
-(BOOL)setTrackMetadata:(id)arg0 forMetadataStream:(id)arg1 ;
-(BOOL)setTrackMetadata:(id)arg0 forMetadataStream:(id)arg1 error:(*id)arg2 ;
-(BOOL)setTrackMetadata:(id)arg0 forStream:(id)arg1 ;
-(BOOL)setTrackMetadata:(id)arg0 forStream:(id)arg1 error:(*id)arg2 ;
-(BOOL)setVideoTransform:(struct CGAffineTransform )arg0 ;
-(BOOL)setVideoTransformFromOrientation:(int)arg0 ;
-(BOOL)writeVideoFrameStreamAttachmentsData:(id)arg0 toMetadataAdaptor:(id)arg1 ofStream:(id)arg2 ;
-(CGFloat)getExpectedFrameRateForStream:(id)arg0 ;
-(NSUInteger)fifoBufferSizeForStream:(id)arg0 ;
-(NSUInteger)writingBufferCapacityForAudioStream:(id)arg0 ;
-(NSUInteger)writingBufferCapacityForMetadataStream:(id)arg0 ;
-(NSUInteger)writingBufferCapacityForStream:(id)arg0 ;
-(NSUInteger)writingBufferUsageForAudioStream:(id)arg0 ;
-(NSUInteger)writingBufferUsageForMetadataStream:(id)arg0 ;
-(NSUInteger)writingBufferUsageForStream:(id)arg0 ;
-(id)createRelatedToStreamMetadata:(id)arg0 ;
-(id)createRelationSpecifierMetadata:(id)arg0 ;
-(id)customMetadataTrackMetadataForStream:(id)arg0 fromMap:(*void)arg1 ;
-(id)customTrackMetadataForStream:(id)arg0 fromMap:(*void)arg1 ;
-(id)encoder:(id)arg0 overrideVideoEncoderSpecificationForstreamId:(id)arg1 ;
-(id)getAudioMetadataForBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)getLegacyTrackEncodedPixelFormatMetadataForStream:(id)arg0 fromMap:(*void)arg1 ;
-(id)getLegacyTrackInputPixelFormatMetadataForStream:(id)arg0 fromMap:(*void)arg1 ;
-(id)getLegacyTrackMetadataForAttachmentsSerializationMode:(id)arg0 fromMap:(*void)arg1 ;
-(id)getLegacyTrackMetadataForStream:(id)arg0 ;
-(id)getMetadataGroupForBuffer:(struct __CVBuffer *)arg0 stream:(id)arg1 presentationTime:(struct ? )arg2 serializationMode:(int)arg3 ;
-(id)getTrackEncodedPixelFormatMetadataForStream:(id)arg0 fromMap:(*void)arg1 ;
-(id)getTrackInputPixelFormatMetadataForStream:(id)arg0 fromMap:(*void)arg1 ;
-(id)getTrackMetadataForAttachmentsSerializationMode:(id)arg0 fromMap:(*void)arg1 ;
-(id)getTrackMetadataForExactBytesPerRow:(id)arg0 fromMap:(*void)arg1 ;
-(id)getTrackMetadataForRawBayerRearrangeType:(id)arg0 fromMap:(*void)arg1 ;
-(id)getTrackMetadataForStream:(id)arg0 ;
-(id)getTrackMetadataForTrackTypeInfo:(id)arg0 fromMap:(*void)arg1 ;
-(id)initWithURL:(id)arg0 andExpectedFrameRate:(CGFloat)arg1 ;
-(int)attachmentSerializationModeForStream:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 withDefaultMode:(int)arg1 ;
-(int)attachmentSerializationModeForStream:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 withDefaultMode:(int)arg1 fromMap:(*void)arg2 ;
-(int)encoderTypeForStream:(id)arg0 ;
-(struct CGAffineTransform )getVideoTransformForStream:(id)arg0 ;
-(struct opaqueCMFormatDescription *)createMetadataFormatDescription:(id)arg0 ;
-(unsigned int)encoder:(id)arg0 codecTypeOverrideForstreamId:(id)arg1 ;
-(unsigned int)getPixelFormatForStream:(id)arg0 fromMap:(*void)arg1 ;
-(void)addAudioTrackForStreamWithIdentifier:(id)arg0 audioFormat:(id)arg1 additionalSettings:(id)arg2 ;
-(void)addIsReadyObservers;
-(void)addMetadataTrack:(id)arg0 ;
-(void)addMetadataTrack:(id)arg0 formatDescription:(struct opaqueCMFormatDescription *)arg1 ;
-(void)addMetadataTrackAssociatedWith:(id)arg0 withIdentifier:(id)arg1 withFormatDescription:(struct opaqueCMFormatDescription *)arg2 ;
-(void)addTrackForStreamWithIdentifier:(id)arg0 formatDescription:(struct opaqueCMFormatDescription *)arg1 encoderConfig:(id)arg2 ;
-(void)addTrackForStreamWithIdentifier:(id)arg0 formatDescription:(struct opaqueCMFormatDescription *)arg1 recordingConfiguration:(id)arg2 ;
-(void)appendAudioBuffer:(struct opaqueCMSampleBuffer *)arg0 forStream:(id)arg1 ;
-(void)appendMetadata:(id)arg0 associatedWith:(id)arg1 toStream:(id)arg2 ;
-(void)appendMetadata:(id)arg0 withTimeStamp:(struct ? )arg1 toStream:(id)arg2 ;
-(void)appendPixelBuffer:(struct __CVBuffer *)arg0 presentationTime:(struct ? )arg1 toStreamId:(id)arg2 ;
-(void)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 attachments:(id)arg1 streamId:(id)arg2 ;
-(void)appendTimeMetadataGroup:(id)arg0 toStream:(id)arg1 ;
-(void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 attachmentMetadata:(id)arg1 streamId:(id)arg2 ;
-(void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 attachments:(id)arg1 streamId:(id)arg2 ;
-(void)asyncWriteAssociatedMetadata:(id)arg0 metadataKey:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg1 associatedStreamKey:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg2 ;
-(void)cancelRecording;
-(void)checkForFinishing;
-(void)clearAllFifoQueues;
-(void)consumeMetadatOfMetadataStream:(id)arg0 ;
-(void)consumeSamplesOfVideoAudioStream:(id)arg0 ;
-(void)dealloc;
-(void)deleteFileOnCancel;
-(void)deleteMOVFile;
-(void)encoder:(id)arg0 encodedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(id)arg2 presentationTime:(struct ? )arg3 streamId:(id)arg4 ;
-(void)encoder:(id)arg0 encodingFailedForStream:(id)arg1 ;
-(void)executePrepareToRecordWithMovieMetadata:(id)arg0 ;
-(void)finishAVWriter;
-(void)finishAndDrainFifoFirst;
-(void)finishRecording;
-(void)forceFinishRecording;
-(void)informDelegateAboutError:(id)arg0 ;
-(void)informDelegateAboutFinishingTimeout;
-(void)informDelegateAboutIsReady:(BOOL)arg0 forStream:(id)arg1 ;
-(void)informDelegateAboutMediaWrittenForStream:(id)arg0 mediaType:(NSInteger)arg1 ;
-(void)newSampleReady:(struct opaqueCMSampleBuffer *)arg0 metadata:(id)arg1 presentationTime:(struct ? )arg2 streamKey:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg3 streamId:(id)arg4 isAudioSample:(BOOL)arg5 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareToRecord;
-(void)prepareToRecordWithMovieMetadata:(id)arg0 ;
-(void)processCancelRecording;
-(void)processFinishRecording;
-(void)processForceFinishRecording;
-(void)queueMetadataGroup:(id)arg0 stream:(id)arg1 ;
-(void)removeIsReadyObservers;
-(void)setWritingBufferCapacity:(NSUInteger)arg0 forAudioStream:(id)arg1 ;
-(void)setWritingBufferCapacity:(NSUInteger)arg0 forMetadataStream:(id)arg1 ;
-(void)setWritingBufferCapacity:(NSUInteger)arg0 forStream:(id)arg1 ;
-(void)setupAssetWriterStreamInputsWithError:(*id)arg0 ;
-(void)setupAssociatedMetadataInputsWithError:(*id)arg0 ;
-(void)setupMetadataInputsWithError:(*id)arg0 ;
-(void)writeMetadata:(id)arg0 forStreamId:(id)arg1 ;
-(void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 andMetadata:(id)arg1 forStreamId:(id)arg2 ;
-(void)writerStatusChanged:(NSInteger)arg0 writerDelegate:(id)arg1 delegateCallbackQueue:(id)arg2 ;
-(void)writingSessionDidStartAtTime:(struct ? )arg0 streamId:(id)arg1 mediaType:(NSInteger)arg2 writerDelegate:(id)arg3 delegateCallbackQueue:(id)arg4 ;


@end


#endif