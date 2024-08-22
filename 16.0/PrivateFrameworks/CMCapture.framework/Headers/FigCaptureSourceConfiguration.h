// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESOURCECONFIGURATION_H
#define FIGCAPTURESOURCECONFIGURATION_H

@class NSDictionary, NSString;
@protocol FigXPCCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "FigCaptureSourceDepthDataFormat.h"
#import "FigCaptureSourceVideoFormat.h"

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying>

 {
    *OpaqueFigCaptureSource _source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
}


@property (nonatomic) BOOL applyMaxExposureDurationFrameworkOverrideWhenAvailable; // ivar: _applyMaxExposureDurationFrameworkOverrideWhenAvailable
@property (nonatomic) BOOL backgroundBlurEnabled; // ivar: _backgroundBlurEnabled
@property (nonatomic, getter=isBackgroundBlurSupported) BOOL backgroundBlurSupported; // ivar: _backgroundBlurSupported
@property (readonly) BOOL bravoShiftMitigationEnabled;
@property (nonatomic) int cinematicFramingControlMode; // ivar: _cinematicFramingControlMode
@property (nonatomic) BOOL cinematicFramingEnabled; // ivar: _cinematicFramingEnabled
@property (nonatomic, getter=isCinematicFramingSupported) BOOL cinematicFramingSupported; // ivar: _cinematicFramingSupported
@property (retain, nonatomic) NSString *clientAudioClockDeviceUID; // ivar: _clientAudioClockDeviceUID
@property (nonatomic) BOOL clientOSVersionSupportsDecoupledIO; // ivar: _clientOSVersionSupportsDecoupledIO
@property (nonatomic) int colorSpace; // ivar: _colorSpace
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL depthDataDeliveryEnabled; // ivar: _depthDataDeliveryEnabled
@property (retain, nonatomic) FigCaptureSourceDepthDataFormat *depthDataFormat; // ivar: _depthDataFormat
@property (nonatomic) float depthDataMaxFrameRate; // ivar: _depthDataMaxFrameRate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deskCamEnabled; // ivar: _deskCamEnabled
@property (nonatomic) ? deskCamOutputDimensions; // ivar: _deskCamOutputDimensions
@property (copy, nonatomic) NSDictionary *faceDetectionConfiguration; // ivar: _faceDetectionConfiguration
@property (nonatomic) BOOL faceDrivenAEAFEnabledByDefault; // ivar: _faceDrivenAEAFEnabledByDefault
@property (nonatomic) int faceDrivenAEAFMode; // ivar: _faceDrivenAEAFMode
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled; // ivar: _geometricDistortionCorrectionEnabled
@property (nonatomic) BOOL hasSetVideoZoomFactorOnCaptureSource; // ivar: _hasSetVideoZoomFactorOnCaptureSource
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightRecoveryEnabled; // ivar: _highlightRecoveryEnabled
@property (nonatomic) int imageControlMode; // ivar: _imageControlMode
@property (nonatomic) BOOL lowLightVideoCaptureEnabled; // ivar: _lowLightVideoCaptureEnabled
@property (nonatomic) ? maxExposureDurationClientOverride; // ivar: _maxExposureDurationClientOverride
@property (nonatomic) float maxFrameRateClientOverride; // ivar: _maxFrameRateClientOverride
@property (nonatomic) float maxGainClientOverride; // ivar: _maxGainClientOverride
@property (nonatomic) BOOL nonDestructiveCropEnabled; // ivar: _nonDestructiveCropEnabled
@property (retain, nonatomic) FigCaptureSourceVideoFormat *requiredFormat; // ivar: _requiredFormat
@property (nonatomic) float requiredMaxFrameRate; // ivar: _requiredMaxFrameRate
@property (nonatomic) float requiredMinFrameRate; // ivar: _requiredMinFrameRate
@property (nonatomic) BOOL sensorHDREnabled; // ivar: _sensorHDREnabled
@property (readonly) BOOL smartCameraEnabled;
@property (readonly, nonatomic) *OpaqueFigCaptureSource source;
@property (readonly, nonatomic) int sourceDeviceType;
@property (copy, nonatomic) NSString *sourceID; // ivar: _sourceID
@property (readonly, nonatomic) int sourcePosition;
@property (readonly, nonatomic) int sourceType;
@property (nonatomic) BOOL spatialOverCaptureEnabled; // ivar: _spatialOverCaptureEnabled
@property (nonatomic) BOOL studioLightingEnabled; // ivar: _studioLightingEnabled
@property (nonatomic, getter=isStudioLightingSupported) BOOL studioLightingSupported; // ivar: _studioLightingSupported
@property (readonly) Class superclass;
@property (nonatomic) BOOL variableFrameRateVideoCaptureEnabled; // ivar: _variableFrameRateVideoCaptureEnabled
@property (nonatomic) int videoStabilizationStrength; // ivar: _videoStabilizationStrength
@property (nonatomic) float videoZoomFactor; // ivar: _videoZoomFactor
@property (nonatomic) float videoZoomRampAcceleration; // ivar: _videoZoomRampAcceleration


+(id)stringForSourceDeviceType:(int)arg0 ;
+(id)stringForSourcePosition:(int)arg0 ;
+(id)stringForSourceType:(int)arg0 ;
+(int)sourceTypeForString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithSource:(struct OpaqueFigCaptureSource *)arg0 ;
-(id)initWithSourceType:(int)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif