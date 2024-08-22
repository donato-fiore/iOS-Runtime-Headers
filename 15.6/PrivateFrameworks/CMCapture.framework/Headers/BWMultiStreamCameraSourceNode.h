// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWMULTISTREAMCAMERASOURCENODE_H
#define BWMULTISTREAMCAMERASOURCENODE_H

@class NSArray, NSString, NSMutableDictionary, NSDictionary;
@protocol BWFigVideoCaptureDeviceZoomFactorChangedDelegate, OS_dispatch_group, OS_dispatch_queue, BWDetectedFacesFilterDelegate;


#import "BWSourceNode.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWFigCaptureStream.h"
#import "BWDeferredMetadataCache.h"
#import "BWMotionDataPreserver.h"
#import "BWFigCaptureISPProcessingSession.h"
#import "BWDetectedFacesRingBuffer.h"
#import "BWDetectedObjectsInfoRingBuffer.h"
#import "BWStats.h"
#import "BWFigVideoCaptureStream.h"
#import "BWMultiStreamCameraSourceNodeConfiguration.h"
#import "BWNodeOutput.h"

@interface BWMultiStreamCameraSourceNode : BWSourceNode <BWFigVideoCaptureDeviceZoomFactorChangedDelegate>

 {
    BWFigVideoCaptureDevice *_captureDevice;
    BWFigCaptureStream *_stream;
    NSArray *_supportedFormats;
    BOOL _supportsDecouplingPrimaryScalerOnly;
    float _pixelsPerMicron;
    float _telePixelsPerMicron;
    BOOL _deferMetadataCreation;
    BWDeferredMetadataCache *_deferredMetadataCache;
    NSObject<OS_dispatch_group> *_streamEventNotificationGroup;
    NSObject<OS_dispatch_queue> *_streamEventDispatchQueue;
    NSObject<OS_dispatch_queue> *_preAllocationQueue;
    BOOL _isInfraredSourceNode;
    int _deviceType;
    int _devicePosition;
    int _resolvedFormatIndex;
    *opaqueCMFormatDescription _depthOutputFormatDescription;
    NSString *_depthEnginePrimaryOutputID;
    BOOL _hardwareDepthFilteringSupported;
    BOOL _strictDepthModeSupported;
    NSArray *_supportedDepthPixelFormats;
    *opaqueCMFormatDescription _focusPixelDataFormatDescription;
    BOOL _shareStreamingBufferPools;
    BWStreamOutputStorage _outputsStorage;
    ? _cameraData;
    BOOL _usePinholeCameraFocalLengthInIntrinsicMatrixCalculation;
    BWMotionDataPreserver *_motionDataPreserver;
    NSMutableDictionary *_dutyCycleMetadataCache;
    float _overscanReservedInISPZoom;
    NSString *_previewStreamOutputID;
    CGSize _previewOutputOverscan;
    NSString *_videoCaptureStreamOutputID;
    NSString *_stillImageStreamOutputID;
    int _firmwareStillImageOutputRetainedBufferCountOverride;
    int _currentFirmwareStillImageOutputRetainedBufferCount;
    CGSize _onDemandStillOverscan;
    BOOL _stillImageOutputSushiRawAttachmentOptionEnabled;
    BWFigCaptureISPProcessingSession *_bayerProcessingSession;
    *OpaqueFigSampleBufferProcessor _qrmSampleBufferProcessor;
    *opaqueCMFormatDescription _quadraStillOutputFormatDescription;
    *opaqueCMSimpleQueue _quadraYUVBufferQueue;
    BOOL _deferBayerProcessingSessionMetadataCreation;
    BWDetectedFacesRingBuffer *_detectedFacesRingBuffer;
    BWDetectedObjectsInfoRingBuffer *_detectedObjectsInfoRingBuffer;
    *OpaqueVTPixelTransferSession _stillReflectionTransferSession;
    *opaqueCMFormatDescription _stillReflectionFormatDescription;
    *OpaqueVTPixelTransferSession _stillReflectionSecondaryTransferSession;
    *opaqueCMFormatDescription _stillReflectionSecondaryFormatDescription;
    int _previousInfraredCaptureID;
    CGPoint _previewShift;
    float _previewScaleFactor;
    os_unfair_lock_s _previewShiftLock;
    BOOL _applyPreviewShiftToStillImage;
    BWStats *_ioSurfaceCompressionRatioStatsForRaw;
    NSUInteger _totalCompressedDataSizeForRaw;
    NSUInteger _totalUncompressedDataSizeForRaw;
    unsigned int _bufferHeightForRaw;
    BOOL _rawCompressionEnabled;
    *opaqueCMFormatDescription _visionDataFormatDescription;
    BOOL _discardOutputSampleBuffers;
    BOOL _streamingOutputsEnabled;
    BOOL _adjustOpticalCenterMetadataForSuperWideFullFOV;
    CGPoint _opticalCenterAdjustmentForSuperWideFullFOV;
    ? _savedFrameMetadata;
}


@property (readonly) BWFigVideoCaptureStream *captureStream; // ivar: _captureStream
@property (readonly, nonatomic) int colorSpaceProperties; // ivar: _colorSpaceProperties
@property (readonly) BWMultiStreamCameraSourceNodeConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BWNodeOutput *depthOutput; // ivar: _depthOutput
@property (readonly, nonatomic) BOOL depthOutputEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<BWDetectedFacesFilterDelegate> *detectedFacesFilterDelegate; // ivar: _detectedFacesFilterDelegate
@property (readonly) BWNodeOutput *detectedObjectsOutput; // ivar: _detectedObjectsOutput
@property (readonly, nonatomic) BOOL detectedObjectsOutputEnabled;
@property (readonly, nonatomic) ? firmwareStillImageDimensionsAfterOverscanCropping; // ivar: _firmwareStillImageDimensionsAfterOverscanCropping
@property (readonly, nonatomic) float geometricDistortionCorrectionStrengthOnStreamingOutputs; // ivar: _geometricDistortionCorrectionStrengthOnStreamingOutputs
@property (readonly, nonatomic) BOOL hardwareDepthFilteringEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger infraredProjectorUptimeInUsForHighPowerSparse; // ivar: _infraredProjectorUptimeInUsForHighPowerSparse
@property (readonly, nonatomic) NSUInteger infraredProjectorUptimeInUsForLowPowerSparse; // ivar: _infraredProjectorUptimeInUsForLowPowerSparse
@property (nonatomic) BOOL keepISPStreamingWhenStopping; // ivar: _keepISPStreamingWhenStopping
@property (readonly) BWNodeOutput *pointCloudOutput; // ivar: _pointCloudOutput
@property (readonly, nonatomic) BOOL pointCloudOutputEnabled;
@property (readonly, nonatomic) ? preferredPreviewDimensions;
@property (readonly) BWNodeOutput *previewOutput; // ivar: _previewOutput
@property (readonly, nonatomic) BOOL previewOutputEnabled;
@property (readonly) BWNodeOutput *stillImageOutput; // ivar: _stillImageOutput
@property (readonly, nonatomic) BOOL stillImageOutputEnabled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesFirmwareStillImageOutput;
@property (readonly, nonatomic) ? videoCaptureDimensionsWithoutOverscan;
@property (readonly) BWNodeOutput *videoCaptureOutput; // ivar: _videoCaptureOutput
@property (copy, nonatomic) NSDictionary *videoCaptureOutputColorInfoOverride; // ivar: _videoCaptureOutputColorInfoOverride
@property (readonly, nonatomic) BOOL videoCaptureOutputEnabled;
@property (nonatomic) BOOL videoCaptureOutputPixelBufferAttachmentModificationAllowed; // ivar: _videoCaptureOutputPixelBufferAttachmentModificationAllowed


+(void)initialize;
-(BOOL)start:(*id)arg0 ;
-(BOOL)stop:(*id)arg0 ;
-(id)colorInfoForOutput:(id)arg0 ;
-(id)initWithCaptureDevice:(id)arg0 captureStream:(id)arg1 ;
-(id)nodeSubType;
-(int)allocateOrReuseBufferPoolsFromSourceNode:(id)arg0 ;
-(int)configure:(id)arg0 ;
-(int)prepareForStillImageCaptureWithFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg0 clientBracketCount:(int)arg1 enableSushiRawAttachmentOption:(BOOL)arg2 ;
-(struct OpaqueCMClock *)clock;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forOutput:(id)arg1 ;
-(void)makeOutputsLiveIfNeeded;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)requestedZoomFactorChanged:(float)arg0 ;
-(void)setPreviewShift:(struct CGPoint )arg0 previewScaleFactor:(float)arg1 ;
-(void)updateFormatRequirementsFromSourceNode:(id)arg0 ;


@end


#endif