// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWREALTIMECINEMATOGRAPHYNODE_H
#define BWREALTIMECINEMATOGRAPHYNODE_H

@class PTCinematographyStream, NSDictionary, NSMutableArray, PTGlobalCinematographyMetadataVersion1, PTGlobalRenderingMetadataVersion1, PTGlobalStabilizationMetadataVersion1, PTGlobalVideoHeaderMetadataVersion1, PTGlobalVideoMetadata, NSString, NSData;
@protocol PTCinematographyStreamDelegate;


#import "BWNode.h"
#import "BWNodeOutput.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWNodeInput.h"

@interface BWRealtimeCinematographyNode : BWNode <PTCinematographyStreamDelegate>

 {
    PTCinematographyStream *_cinematographyStream;
    NSDictionary *_latestDetections;
    BWNodeOutput *_detectedObjectsOutput;
    BWFigVideoCaptureDevice *_captureDevice;
    BOOL _pastFramesWereBrightEnough;
    int _pastFramesWereBrightEnoughPointer;
    BOOL _currentStateIsBrightEnough;
    float _alphaLowLight;
    int _luxLevelThreshold;
    int _alphaRampFrameCount;
    float _networkBias;
    BOOL _hasAutoFocus;
    int _framesSinceAutoFocusUpdate;
    int _autoFocusUpdateFrameDelay;
    CGRect _lastFixedFocusRect;
    int focusMode;
    BOOL _hasSeenDepth;
    BOOL _captureInputEnabled;
    float _simulatedAperture;
    *opaqueCMSampleBuffer _previousSampleBuffer;
    *opaqueCMFormatDescription _depthFormatDescription;
    os_unfair_lock_s _bufferServicingLock;
    NSMutableArray *_videoCaptureSampleBufferQueue;
    NSMutableArray *_previewSampleBufferQueue;
    int _numEODMessagesReceived;
    BWNodeInput *_captureInput;
    PTGlobalCinematographyMetadataVersion1 *_globalCinematographyMetadata;
    PTGlobalRenderingMetadataVersion1 *_globalRenderingMetadata;
    PTGlobalStabilizationMetadataVersion1 *_globalStabilizationMetadata;
    PTGlobalVideoHeaderMetadataVersion1 *_globalVideoHeaderMetadata;
    PTGlobalVideoMetadata *_globalMetadata;
    BOOL _globalsWereSet;
    NSInteger _latestFocusDectionTrackID;
}


@property (readonly, nonatomic) NSString *cinematographyModelVersionString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BWNodeOutput *detectedObjectsOutput;
@property (readonly, nonatomic) NSData *globalMetadata;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BWNodeOutput *movieFileOutput; // ivar: _movieFileOutput
@property (readonly, nonatomic) BWNodeOutput *previewOutput; // ivar: _previewOutput
@property (nonatomic) float simulatedAperture;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithObjectMetadataIdentifiers:(id)arg0 cachedSimulatedAperture:(float)arg1 captureDevice:(id)arg2 tuningParameters:(id)arg3 videoDepthConfiguration:(id)arg4 captureInputEnabled:(BOOL)arg5 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif