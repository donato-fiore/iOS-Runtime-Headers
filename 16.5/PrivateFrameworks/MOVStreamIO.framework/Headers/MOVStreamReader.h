// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOVSTREAMREADER_H
#define MOVSTREAMREADER_H

@class AVURLAsset, AVAssetReader, NSMutableDictionary, NSMutableArray, NSString;
@protocol MOVStreamReaderDeprecationNominates, MOVStreamReaderDeprecated, MOVStreamReaderEnhancedAccess, MOVStreamReaderDelegate;

#import <Foundation/Foundation.h>

#import "Version.h"

@interface MOVStreamReader : NSObject <MOVStreamReaderDeprecationNominates, MOVStreamReaderDeprecated, MOVStreamReaderEnhancedAccess>

 {
    AVURLAsset *m_asset;
    AVAssetReader *m_assetReader;
    NSMutableDictionary *_sampleStreams;
    NSMutableArray *_orderedVideoStreamIds;
    NSMutableArray *_orderedAudioStreamIds;
    NSMutableArray *_orderedSceneStreamIds;
    NSMutableDictionary *_metadataStreams;
    NSMutableArray *_orderedMetadataStreamIds;
    BOOL _l010OutputFormatRAW14L016;
    BOOL _rawBayerMSBReplication;
    Version *_movVersion;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<MOVStreamReaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL l010OutputFormatRAW14L016;
@property BOOL rawBayerMSBReplication;
@property (readonly) Class superclass;


-(BOOL)containsAudioStream:(id)arg0 ;
-(BOOL)containsMetadataStream:(id)arg0 ;
-(BOOL)containsStream:(id)arg0 ;
-(BOOL)endOfStream;
-(BOOL)hasFinishedReading;
-(BOOL)hasReachedEndOfMetadataStream:(id)arg0 ;
-(BOOL)hasReachedEndOfStream:(id)arg0 ;
-(BOOL)isTrack:(id)arg0 byIdInTracks:(id)arg1 ;
-(BOOL)registerOutput:(id)arg0 ;
-(BOOL)resetReader:(*id)arg0 ;
-(BOOL)resetReaderTo:(struct ? )arg0 error:(*id)arg1 ;
-(BOOL)saveStream:(id)arg0 toFile:(id)arg1 error:(*id)arg2 ;
-(CGFloat)duration;
-(CGFloat)getFrameRateForStream:(id)arg0 ;
-(NSUInteger)trackTypeInfoForStream:(id)arg0 ;
-(id)findAllAssociatedMetadataTrackInAsset:(id)arg0 forTrack:(id)arg1 ;
-(id)getAllAudioStreams;
-(id)getAllMetadataStreams;
-(id)getAllSceneStreams;
-(id)getAllStreams;
-(id)getMetadataStreamsAssociatedTo:(id)arg0 ;
-(id)getMetadataStreamsAssociatedTo:(id)arg0 error:(*id)arg1 ;
-(id)getRelatedStreamForStreamId:(id)arg0 ;
-(id)getRelationSpecifierForStreamId:(id)arg0 ;
-(id)getStreamsRelatedToStream:(id)arg0 ;
-(id)getUnknownMetadataStreamsAssociatedTo:(id)arg0 ;
-(id)grabNextMetadataItemsOfTrackAssociatedWith:(id)arg0 withIdentifier:(id)arg1 timeRange:(struct ? *)arg2 error:(*id)arg3 ;
-(id)grabNextMetadataOfStream:(id)arg0 timeRange:(struct ? *)arg1 ;
-(id)grabNextMetadataOfStream:(id)arg0 timeRange:(struct ? *)arg1 error:(*id)arg2 ;
-(id)grabNextTimedMetadataGroupOfStream:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfFile:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 delegate:(id)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)metadataForMovie;
-(id)metadataTrackForStream:(id)arg0 ;
-(id)movstreamIOMetadataForMovie;
-(id)nextAttachmentForStream:(id)arg0 error:(*id)arg1 ;
-(id)outputForAudioStream:(id)arg0 error:(*id)arg1 ;
-(id)outputForMetadataStream:(id)arg0 error:(*id)arg1 ;
-(id)outputForSceneStream:(id)arg0 error:(*id)arg1 ;
-(id)outputForVideoStream:(id)arg0 error:(*id)arg1 ;
-(id)streamIdFromTrackStreamTypeIdentifier:(id)arg0 ;
-(id)timestampsForMetadataStream:(id)arg0 ;
-(id)timestampsForStream:(id)arg0 ;
-(id)trackForStream:(id)arg0 ;
-(id)trackMetadataForAudioStream:(id)arg0 ;
-(id)trackMetadataForMetadataStream:(id)arg0 ;
-(id)trackMetadataForStream:(id)arg0 ;
-(struct ? )getMinFrameDurationForStream:(id)arg0 ;
-(struct CGAffineTransform )transformForStream:(id)arg0 ;
-(struct CGSize )getOutputSizeForStream:(id)arg0 ;
-(struct CGSize )getSizeForStream:(id)arg0 ;
-(struct __CVBuffer *)copyNextFrameForStream:(id)arg0 timestamp:(struct ? *)arg1 error:(*id)arg2 ;
-(struct __CVBuffer *)nextPixelBufferForStream:(id)arg0 attachementsData:(*id)arg1 timestamp:(struct ? *)arg2 error:(*id)arg3 ;
-(struct opaqueCMSampleBuffer *)grabNextAudioSampleForStream:(id)arg0 timestamp:(struct ? *)arg1 error:(*id)arg2 ;
-(struct opaqueCMSampleBuffer *)grabNextSampleBufferForStream:(id)arg0 timestamp:(struct ? *)arg1 error:(*id)arg2 ;
-(struct opaqueCMSampleBuffer *)nextSampleBufferForStream:(id)arg0 attachementsData:(*id)arg1 timestamp:(struct ? *)arg2 error:(*id)arg3 ;
-(unsigned int)getOutputPixelFormatForStream:(id)arg0 ;
-(unsigned int)pixelFormatForStream:(id)arg0 ;
-(void)clearOutputs;
-(void)dealloc;
-(void)movVersionCheck;
-(void)removePixelBufferPadding:(BOOL)arg0 forStream:(id)arg1 ;


@end


#endif