// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWREMOTEQUEUESINKNODE_H
#define BWREMOTEQUEUESINKNODE_H

@class NSString;
@protocol BWRemoteQueueSinkNodeDelegate;


#import "BWSinkNode.h"
#import "BWSceneStabilityMonitor.h"
#import "BWVideoDataOutputAnalyticsPayload.h"

@interface BWRemoteQueueSinkNode : BWSinkNode {
    BOOL _mediaTypeIsVideo;
    BOOL _mediaTypeIsPointCloud;
    *remoteQueueSenderOpaque _remoteQueueSender;
    *OpaqueFigSimpleMutex _peerTerminationMutex;
    *shmemPoolOpaque _sharedMemoryPool;
    *__CFAllocator _sharedMemoryPoolCFAllocator;
    *localQueueOpaque _localQueue;
    unsigned int _numberOfMediaBuffersLocallyEnqueued;
    unsigned int _numberOfMediaBuffersLocallyDequeued;
    int _clientVideoRetainedBufferCount;
    BOOL _discardsLateSampleBuffers;
    BOOL _attachPanoramaMetadata;
    BOOL _sentDiagnosticMetadataForPanorama;
    BOOL _disableFlatDictionaryVDOMetadata;
    *OpaqueFigFlatDictionaryKeySpec _makerNoteKeySpec;
    BOOL _cameraSupportsFlash;
    BOOL _attachDetectedObjectsInfo;
    BOOL _removeCameraIntrinsicMatrixAttachment;
    *opaqueCMFormatDescription _cachedFormatDescription;
    ? _lastPTS;
    int _receiverPID;
    BOOL _clientIsRunningInMediaserverd;
    BOOL _panoramaRequiresLTMLocking;
    BWSceneStabilityMonitor *_stabilityMonitor;
    NSString *_clientApplicationID;
    NSInteger _totalNumberOfFrames;
    NSInteger _totalNumberOfFramesDropped;
    NSInteger _totalNumberOfISPFramesDropped;
    BWVideoDataOutputAnalyticsPayload *_analyticsPayload;
    ? _firstPTS;
    BOOL _proresVideo;
}


@property (nonatomic) NSObject<BWRemoteQueueSinkNodeDelegate> *delegate; // ivar: _delegate


+(void)initialize;
-(BOOL)attachPanoramaMetadata;
-(BOOL)cameraSupportsFlash;
-(BOOL)discardsLateSampleBuffers;
-(BOOL)panoramaRequiresLTMLocking;
-(BOOL)removeCameraIntrinsicMatrixAttachment;
-(BOOL)sceneStabilityMetadataEnabled;
-(id)initWithMediaType:(unsigned int)arg0 clientAuditToken:(struct ? )arg1 sinkID:(id)arg2 ;
-(id)nodeSubType;
-(int)clientVideoRetainedBufferCount;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)registerSurfacesFromSourcePool:(id)arg0 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAttachPanoramaMetadata:(BOOL)arg0 ;
-(void)setCameraSupportsFlash:(BOOL)arg0 ;
-(void)setClientVideoRetainedBufferCount:(int)arg0 ;
-(void)setDiscardsLateSampleBuffers:(BOOL)arg0 ;
-(void)setPanoramaRequiresLTMLocking:(BOOL)arg0 ;
-(void)setRemoveCameraIntrinsicMatrixAttachment:(BOOL)arg0 ;
-(void)setSceneStabilityMetadataEnabled:(BOOL)arg0 ;


@end


#endif