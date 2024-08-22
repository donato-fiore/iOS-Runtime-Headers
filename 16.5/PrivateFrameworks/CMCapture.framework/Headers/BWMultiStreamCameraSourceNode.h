// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMULTISTREAMCAMERASOURCENODE_H
#define BWMULTISTREAMCAMERASOURCENODE_H

@class NSArray, NSString, NSMutableDictionary, NSDictionary;
@protocol BWFigVideoCaptureDeviceZoomFactorChangedDelegate, OS_dispatch_queue, BWDetectedFacesFilterDelegate;


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
    NSObject<OS_dispatch_queue> *_preAllocationQueue;
    BOOL _isInfraredSourceNode;
    int _deviceType;
    int _devicePosition;
    int _resolvedFormatIndex;
    *opaqueCMFormatDescription _depthOutputFormatDescription;
    NSString *_depthEnginePrimaryOutputID;
    BOOL _hardwareDepthFilteringSupported;
    BOOL _strictDepthModeSupported;
    BOOL _RGBIRStereoFusionMinDepthThresholdSupported;
    BOOL _RGBIRStereoFusionMaxDepthThresholdSupported;
    BOOL _RGBIRStereoFusionFixedDepthThresholdSupported;
    NSArray *_supportedDepthPixelFormats;
    *opaqueCMFormatDescription _focusPixelDataFormatDescription;
    BOOL _shareStreamingBufferPools;
    BOOL _provideStillImageSensorRawOutputBuffers;
    BWStreamOutputStorage _outputsStorage;
    ? _cameraData;
    BOOL _usePinholeCameraFocalLengthInIntrinsicMatrixCalculation;
    BWMotionDataPreserver *_motionDataPreserver;
    NSMutableDictionary *_dutyCycleMetadataCache;
    float _overscanReservedInISPZoom;
    NSString *_previewStreamOutputID;
    CGSize _previewOutputOverscan;
    NSDictionary *_previewOutputColorInfo;
    NSString *_videoCaptureStreamOutputID;
    NSDictionary *_videoCaptureOutputColorInfo;
    NSString *_stillImageStreamOutputID;
    int _firmwareStillImageOutputRetainedBufferCountOverride;
    int _currentFirmwareStillImageOutputRetainedBufferCount;
    CGSize _onDemandStillOverscan;
    BOOL _stillImageOutputSushiRawAttachmentOptionEnabled;
    NSDictionary *_stillImageOutputColorInfo;
    NSString *_stillImageSensorRawStreamOutputID;
    CGSize _onDemandStillSensorRawOverscan;
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
    BOOL _systemPressured;
    BOOL _enforceFinalCropRectBasedOnGDC;
    unsigned int _previewFrameRate;
    *OpaqueVTHDRMetadataGenerationSession _hdrMetadataSession;
    ? _lastFramePTS;
}


@property (readonly) BWFigVideoCaptureStream *captureStream; // ivar: _captureStream
@property (readonly, nonatomic) int colorSpaceProperties; // ivar: _colorSpaceProperties
@property (readonly) BWMultiStreamCameraSourceNodeConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BWNodeOutput *depthOutput; // ivar: _depthOutput
@property (readonly, copy) NSString *description;
@property (nonatomic) NSObject<BWDetectedFacesFilterDelegate> *detectedFacesFilterDelegate; // ivar: _detectedFacesFilterDelegate
@property (readonly) BWNodeOutput *detectedObjectsOutput; // ivar: _detectedObjectsOutput
@property (readonly, nonatomic) ? firmwareStillImageDimensionsAfterOverscanCropping; // ivar: _firmwareStillImageDimensionsAfterOverscanCropping
@property (readonly, nonatomic) float geometricDistortionCorrectionStrengthOnStreamingOutputs; // ivar: _geometricDistortionCorrectionStrengthOnStreamingOutputs
@property (readonly, nonatomic) BOOL hardwareDepthFilteringEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger infraredProjectorUptimeInUsForHighPowerSparse; // ivar: _infraredProjectorUptimeInUsForHighPowerSparse
@property (readonly, nonatomic) NSUInteger infraredProjectorUptimeInUsForLowPowerSparse; // ivar: _infraredProjectorUptimeInUsForLowPowerSparse
@property (nonatomic) BOOL keepISPStreamingWhenStopping; // ivar: _keepISPStreamingWhenStopping
@property (readonly) BWNodeOutput *pointCloudOutput; // ivar: _pointCloudOutput
@property (readonly) NSString *portType; // ivar: _portType
@property (readonly) BWNodeOutput *previewOutput; // ivar: _previewOutput
@property (readonly) BWNodeOutput *stillImageOutput; // ivar: _stillImageOutput
@property (readonly) BWNodeOutput *stillImageSensorRawOutput; // ivar: _stillImageSensorRawOutput
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? ultraHighResSensorRawStillImageOutputDimensions; // ivar: _ultraHighResSensorRawStillImageOutputDimensions
@property (readonly) BWNodeOutput *videoCaptureOutput; // ivar: _videoCaptureOutput


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
-(void)updateZoomFactorsToNondisruptiveSwitchingFormatIndexMapping;


@end


#endif