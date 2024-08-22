// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARREPLAYSENSOR_H
#define ARREPLAYSENSOR_H

@class AVURLAsset, NSMutableArray, NSDictionary, AVAssetReader, AVAssetReaderTrackOutput, AVAssetReaderOutputMetadataAdaptor, NSString, NSSet, NSURL;
@protocol ARInternalSessionObserver, ARReplaySensorProtocolInternal, ARReplaySensorProtocol, OS_dispatch_queue, ARReplaySensorDelegate, OS_dispatch_source, ARSensorDelegate;

#import <Foundation/Foundation.h>

#import "ARImageCroppingTechnique.h"
#import "ARSessionReplayStats.h"

@interface ARReplaySensor : NSObject <ARInternalSessionObserver, ARReplaySensorProtocolInternal, ARReplaySensorProtocol>

 {
    BOOL _manualCommandLineMode;
    AVURLAsset *_asset;
    NSMutableArray *_arImageData;
    NSMutableArray *_arAccelerometerData;
    NSMutableArray *_arGyroData;
    NSMutableArray *_arDeviceOrientationData;
    NSMutableArray *_arLocationData;
    id *_customDataGetter;
    NSDictionary *_recordedResultGetters;
    CGFloat _originalToReplayTimestampDifference;
    NSObject<OS_dispatch_queue> *_replayQueue;
    id<ARReplaySensorDelegate> *_traceReplaySensorDelegate;
    NSObject<OS_dispatch_source> *_timer;
    CGFloat _startTime;
    NSInteger _tick;
    int _imageIndexForPreloading;
    int _accelDataIndex;
    int _gyroDataIndex;
    int _deviceOrientationDataIndex;
    int _locationDataIndex;
    BOOL _running;
    BOOL _metadataLoadedFromAsset;
    BOOL _replayStarted;
    uint8_t _finishedReplaying;
    *opaqueCMSampleBuffer _nextSampleBuffer;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_imageOutput;
    AVAssetReaderTrackOutput *_depthOutput;
    *opaqueCMSampleBuffer _nextDepthSampleBuffer;
    AVAssetReaderOutputMetadataAdaptor *_oldMotionOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_accelOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_gyroOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_imageOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_accelOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_gyroOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_deviceMotionOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_locationMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_imageOutputMetadataAdaptor_CV3D;
    AVAssetReaderOutputMetadataAdaptor *_deviceOrientationOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_customDataOutputMetadataAdaptor;
    NSDictionary *_recordedResultAdaptors;
    BOOL _displaySynchronizationMarker;
    NSInteger _displaySynchronizationMarkerFrames;
    *__CVBuffer _synchronizationMarker;
    *__CVPixelBufferPool _synchronizationMarkerPool;
    *OpaqueVTPixelTransferSession _synchronizationTransferSession;
    NSUInteger _sensorDataTypes;
    ARImageCroppingTechnique *_croppingTechnique;
    ARSessionReplayStats *_determinedReplayStats;
}


@property float advanceFramesPerSecondMultiplier; // ivar: _advanceFramesPerSecondMultiplier
@property (readonly, nonatomic) NSString *arkitVersion; // ivar: _arkitVersion
@property (copy, nonatomic) NSSet *customDataClasses; // ivar: _customDataClasses
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly, nonatomic) BOOL finishedReplaying;
@property (readonly) NSUInteger hash;
@property (nonatomic) int imageIndex; // ivar: _imageIndex
@property (readonly, nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property (readonly, nonatomic) BOOL interrupted; // ivar: _interrupted
@property (readonly, nonatomic) BOOL isReplayingManually; // ivar: _isReplayingManually
@property NSInteger nextFrameIndex; // ivar: _nextFrameIndex
@property (readonly, nonatomic) CGFloat nominalFrameRate; // ivar: _nominalFrameRate
@property (readonly, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (nonatomic) NSUInteger powerUsage;
@property (readonly, nonatomic) NSUInteger recordedSensorTypes; // ivar: _recordedSensorTypes
@property (readonly, nonatomic) NSInteger replayMode; // ivar: _replayMode
@property (weak) NSObject<ARReplaySensorDelegate> *replaySensorDelegate; // ivar: _replaySensorDelegate
@property (readonly, nonatomic) NSURL *sequenceURL; // ivar: _sequenceURL
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSynchronousMode) BOOL synchronousMode; // ivar: synchronousMode
@property NSInteger targetFrameIndex; // ivar: _targetFrameIndex
@property (weak) NSObject<ARReplaySensorDelegate> *traceReplaySensorDelegate;


-(BOOL)hasAccelerometerDataForTime:(CGFloat)arg0 ;
-(BOOL)hasDeviceOrientationDataForTime:(CGFloat)arg0 ;
-(BOOL)hasGyroDataForTime:(CGFloat)arg0 ;
-(BOOL)hasImageDataForTimestamp:(CGFloat)arg0 ;
-(BOOL)hasLocationDataForTime:(CGFloat)arg0 ;
-(BOOL)hasMoreData;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)track:(id)arg0 hasMetadataIdentifier:(id)arg1 ;
-(CGFloat)currentTime;
-(NSUInteger)providedDataTypes;
-(id)createAndAddMetadataAdaptorForTrack:(id)arg0 ;
-(id)createResultForTimestampGetterBlockFromTimestampedResults:(SEL)arg0 ;
-(id)customDataForTimestamp:(CGFloat)arg0 ;
-(id)getNextAccelerometerData;
-(id)getNextDeviceOrientationData;
-(id)getNextGyroData;
-(id)getNextImageData;
-(id)getNextLocationData;
-(id)getResultDataForClasses:(id)arg0 atTimestamp:(CGFloat)arg1 ;
-(id)initWithDataFromFile:(id)arg0 ;
-(id)initWithSequenceURL:(id)arg0 manualReplay:(BOOL)arg1 ;
-(id)initWithSequenceURL:(id)arg0 manualReplay:(BOOL)arg1 synchronousMode:(BOOL)arg2 ;
-(id)initWithSequenceURL:(id)arg0 replayMode:(NSInteger)arg1 ;
-(id)unpackItemsOfClass:(Class)arg0 withIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 ;
-(id)unpackTimestampedCV3DDictionaryItemsOfClass:(Class)arg0 withIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 ;
-(id)unpackTimestampedItemsOfClasses:(id)arg0 withIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 ;
-(struct __CVBuffer *)requestNextDepthPixelBufferForTimestamp:(CGFloat)arg0 ;
-(struct __CVBuffer *)requestNextPixelBufferForTimestamp:(CGFloat)arg0 ;
-(void)_didOutputSensorData:(id)arg0 ;
-(void)advance;
-(void)advanceFrame;
-(void)advanceToFrameIndex:(NSInteger)arg0 ;
-(void)dealloc;
-(void)endInterruption;
-(void)endReplay;
-(void)enumerateDataWithIdentifier:(id)arg0 inOutputAdaptor:(id)arg1 usingBlock:(id)arg2 ;
-(void)failWithError:(id)arg0 ;
-(void)fastForwardIndexesToTime:(CGFloat)arg0 ;
-(void)initializeAssetReaderWithAsset:(id)arg0 buffersOnly:(BOOL)arg1 ;
-(void)interrupt;
-(void)loadAllMetadata;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)preloadNextPixelBuffers:(int)arg0 ;
-(void)prepareForReplay;
-(void)readFileMetadataFromAsset:(id)arg0 ;
-(void)start;
-(void)startReplayIfNeeded;
-(void)stop;
-(void)tick;


@end


#endif