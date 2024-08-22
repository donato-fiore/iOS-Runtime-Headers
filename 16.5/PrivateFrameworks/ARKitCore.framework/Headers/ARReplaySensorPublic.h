// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARREPLAYSENSORPUBLIC_H
#define ARREPLAYSENSORPUBLIC_H

@class NSMutableDictionary, MOVReaderInterface, NSSet, CVADepthIR, NSString, NSMutableArray, NSURL;
@protocol ARReplaySensorProtocolInternal, ARReplaySensorProtocol, OS_dispatch_queue, OS_dispatch_source, ARReplaySensorDelegate, ARSensorDelegate;

#import <Foundation/Foundation.h>

#import "ARImageCroppingTechnique.h"
#import "ARSessionReplayStats.h"
#import "ARParentImageSensorSettings.h"
#import "ARSession.h"

@interface ARReplaySensorPublic : NSObject <ARReplaySensorProtocolInternal, ARReplaySensorProtocol>

 {
    BOOL _manualCommandLineMode;
    NSMutableDictionary *_nextWrappedImageDataForStreamIdentifierMap;
    NSMutableDictionary *_metadataCache;
    CGFloat _recordTimestampToMovieTimestampDifference;
    NSObject<OS_dispatch_queue> *_replayQueue;
    NSObject<OS_dispatch_source> *_timer;
    CGFloat _startTime;
    NSInteger _tick;
    BOOL _running;
    BOOL _replayStarted;
    uint8_t _finishedReplaying;
    MOVReaderInterface *_reader;
    BOOL _displaySynchronizationMarker;
    NSInteger _displaySynchronizationMarkerFrames;
    *__CVBuffer _synchronizationMarker;
    *__CVPixelBufferPool _synchronizationMarkerPool;
    *OpaqueVTPixelTransferSession _synchronizationTransferSession;
    ARImageCroppingTechnique *_croppingTechnique;
    NSSet *_availableVideoStreams;
    NSSet *_availableMetadataStreams;
    NSSet *_videoStreamsToReplay;
    id<ARReplaySensorDelegate> *_traceReplaySensorDelegate;
    ? _extrinsicsFromUltrawideToWide;
    NSUInteger _depthVideoTrackType;
    NSInteger _recordingFormatVersion;
    ? _extrinsicsFromWideToJasper;
    ? _extrinsicsFromUltrawideToJasper;
    ARSessionReplayStats *_determinedReplayStats;
    CVADepthIR *_depthContainer;
    *__CVBuffer _depthFloat32PixelBuffer;
    NSMutableDictionary *_calibrationBuffer;
    NSMutableDictionary *_featureBuffers;
    BOOL _shouldReplayPearlDepthData;
    BOOL _usingST2Recording;
}


@property float advanceFramesPerSecondMultiplier; // ivar: _advanceFramesPerSecondMultiplier
@property (readonly, nonatomic) NSString *arkitVersion; // ivar: _arkitVersion
@property (readonly, nonatomic) NSMutableArray *cmDataBuffer; // ivar: _cmDataBuffer
@property (copy, nonatomic) NSSet *customDataClasses; // ivar: _customDataClasses
@property (readonly, nonatomic) NSMutableArray *cvaDepthTOFBuffer; // ivar: _cvaDepthTOFBuffer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly, nonatomic) BOOL finishedReplaying;
@property (readonly) NSUInteger hash;
@property (nonatomic) int imageIndex; // ivar: _imageIndex
@property (readonly, nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property (readonly, nonatomic) BOOL interrupted; // ivar: _interrupted
@property (readonly, nonatomic) BOOL isReplayingManually;
@property (retain, nonatomic) NSString *mainVideoStreamIdentifier; // ivar: _mainVideoStreamIdentifier
@property NSInteger nextFrameIndex; // ivar: _nextFrameIndex
@property (readonly, nonatomic) CGFloat nominalFrameRate; // ivar: _nominalFrameRate
@property (readonly, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (retain, nonatomic) ARParentImageSensorSettings *parentImageSensorSettings; // ivar: _parentImageSensorSettings
@property (nonatomic) NSUInteger powerUsage;
@property (readonly, nonatomic) NSUInteger recordedSensorTypes; // ivar: _recordedSensorTypes
@property (nonatomic) CGFloat recordingTimeToReplayTimeOffset; // ivar: _recordingTimeToReplayTimeOffset
@property (nonatomic) BOOL recordingTimeToReplayTimeOffsetReset; // ivar: _recordingTimeToReplayTimeOffsetReset
@property (readonly, nonatomic) NSInteger replayMode; // ivar: _replayMode
@property (weak) NSObject<ARReplaySensorDelegate> *replaySensorDelegate; // ivar: _replaySensorDelegate
@property (readonly, nonatomic) NSURL *sequenceURL; // ivar: _sequenceURL
@property (weak, nonatomic) ARSession *session; // ivar: _session
@property (readonly, nonatomic) BOOL shouldReplayVisionData; // ivar: _shouldReplayVisionData
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSynchronousMode) BOOL synchronousMode;
@property NSInteger targetFrameIndex; // ivar: _targetFrameIndex
@property (weak) NSObject<ARReplaySensorDelegate> *traceReplaySensorDelegate;
@property (readonly, nonatomic) NSMutableArray *userEventBuffer; // ivar: _userEventBuffer


-(BOOL)_allStreamsAreAvailable:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readNextFrameFromStream:(id)arg0 forWrapper:(id)arg1 ;
-(CGFloat)_getMinFrameDurationForStream:(id)arg0 ;
-(CGFloat)currentTime;
-(CGFloat)sourceTimestampForMovieTimestamp:(CGFloat)arg0 ;
-(NSUInteger)providedDataTypes;
-(id)_cameraCalibrationDataForStream:(id)arg0 timestamp:(CGFloat)arg1 ;
-(id)_mainVideoStringID:(id)arg0 ;
-(id)_populateCalibrationStream:(id)arg0 timestamp:(CGFloat)arg1 ;
-(id)_streamIdentifierForCaptureDeviceType:(id)arg0 position:(NSInteger)arg1 ;
-(id)availableVideoFormatForDeviceType:(id)arg0 position:(NSInteger)arg1 ;
-(id)customDataForTimestamp:(CGFloat)arg0 ;
-(id)getItemsFromStream:(id)arg0 upToMovieTime:(CGFloat)arg1 converter:(id)arg2 ;
-(id)getItemsFromStream:(id)arg0 upToMovieTime:(CGFloat)arg1 metadataClass:(Class)arg2 ;
-(id)getNextWrappedImageDataForReplay;
-(id)getNextWrappedItemsFromStream:(id)arg0 converter:(id)arg1 ;
-(id)getWrappedItemsFromPixelBufferStream:(id)arg0 upToMovieTime:(CGFloat)arg1 converter:(id)arg2 ;
-(id)getWrappedItemsFromStream:(id)arg0 upToMovieTime:(CGFloat)arg1 converter:(id)arg2 ;
-(id)getWrappedItemsFromStream:(id)arg0 upToMovieTime:(CGFloat)arg1 withBlock:(id)arg2 ;
-(id)imageDataToReplayForTimestamp:(CGFloat)arg0 ;
-(id)initWithDataFromFile:(id)arg0 ;
-(id)initWithSequenceURL:(id)arg0 manualReplay:(BOOL)arg1 ;
-(id)initWithSequenceURL:(id)arg0 manualReplay:(BOOL)arg1 synchronousMode:(BOOL)arg2 ;
-(id)initWithSequenceURL:(id)arg0 replayMode:(NSInteger)arg1 ;
-(id)keyedArchiveConverter:(SEL)arg0 ;
-(id)keyedArchiveConverterForClasses:(SEL)arg0 ;
-(id)metadataWrapperConverter:(SEL)arg0 ;
-(id)peekNextWrappedImageDataForAllRequiredStreams;
-(id)peekNextWrappedImageDataForStreamIdentifier:(id)arg0 ;
-(id)wrappedImageDataOrderedByTime:(id)arg0 ;
-(struct ? )currentCMTime;
-(void)_appendCalibrationData:(id)arg0 streamIdentifier:(id)arg1 ;
-(void)_appendVisionDataToImageData:(id)arg0 streamIdentifier:(id)arg1 ;
-(void)_didOutputSensorData:(id)arg0 ;
-(void)_endReplay;
-(void)_populateDepthDataForImageData:(id)arg0 ;
-(void)_populateDeviceOrientationIfNeededOnImageData:(id)arg0 fromDeviceOrientationData:(id)arg1 accelerometerData:(id)arg2 streamIdentifier:(id)arg3 ;
-(void)_replaySensorFinishedReplayingData;
-(void)advance;
-(void)advanceFrame;
-(void)advanceToFrameIndex:(NSInteger)arg0 ;
-(void)dealloc;
-(void)endInterruption;
-(void)failWithError:(id)arg0 ;
-(void)interrupt;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareForReplay;
-(void)readAndVendCMDatasUntil:(CGFloat)arg0 ;
-(void)readAndVendCVADepthTOFsUntil:(CGFloat)arg0 ;
-(void)readAndVendCVAUserEventsUntil:(CGFloat)arg0 ;
-(void)readFileMetadata;
-(void)start;
-(void)startReplayIfNeeded;
-(void)stop;
-(void)tick;
-(void)waitForOutstandingCallbacks;


@end


#endif