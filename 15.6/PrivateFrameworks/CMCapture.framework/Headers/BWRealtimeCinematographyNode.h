// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWREALTIMECINEMATOGRAPHYNODE_H
#define BWREALTIMECINEMATOGRAPHYNODE_H

@class PTCinematographyStream, NSDictionary, PTGlobalCinematographyMetadataVersion1, PTGlobalRenderingMetadataVersion1, PTGlobalStabilizationMetadataVersion1, PTGlobalVideoHeaderMetadataVersion1, PTGlobalVideoMetadata, NSString, NSData;
@protocol PTCinematographyStreamDelegate;


#import "BWNode.h"
#import "BWNodeOutput.h"
#import "BWFigVideoCaptureDevice.h"

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
    BOOL _hasAutoFocus;
    int _framesSinceAutoFocusUpdate;
    int _autoFocusUpdateFrameDelay;
    CGRect _lastFixedFocusRect;
    int focusMode;
    BOOL _hasSeenDepth;
    float _simulatedAperture;
    *opaqueCMSampleBuffer _previousSampleBuffer;
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
-(id)initWithObjectMetadataIdentifiers:(id)arg0 cachedSimulatedAperture:(float)arg1 captureDevice:(id)arg2 tuningParameters:(id)arg3 videoDepthConfiguration:(id)arg4 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)_emitMovieFileDropForPreviousSampleBuffer;
-(void)_emitSampleBufferOnMetadataOutput:(struct opaqueCMSampleBuffer *)arg0 cinematographyFrame:(id)arg1 ;
-(void)_updateAlphaLowLightWithMetadata:(id)arg0 imageSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_updateAutoFocus:(id)arg0 ;
-(void)_updateGlobalMetadata:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)cinematographyStream:(id)arg0 prioritizeTrackWithId:(NSUInteger)arg1 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif