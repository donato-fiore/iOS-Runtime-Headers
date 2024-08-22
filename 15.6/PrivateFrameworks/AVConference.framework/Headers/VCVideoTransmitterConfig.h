// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEOTRANSMITTERCONFIG_H
#define VCVIDEOTRANSMITTERCONFIG_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "VCRateControlMediaController.h"
#import "AVCStatisticsCollector.h"

@interface VCVideoTransmitterConfig : NSObject

@property (nonatomic) int captureSource; // ivar: _captureSource
@property (nonatomic) NSInteger codecType; // ivar: _codecType
@property (nonatomic) NSDictionary *colorInfo; // ivar: _colorInfo
@property (readonly, nonatomic) NSDictionary *customFeatureListStrings; // ivar: _customFeatureListStrings
@property (nonatomic) NSUInteger customHeight; // ivar: _customHeight
@property (nonatomic) NSUInteger customWidth; // ivar: _customWidth
@property (nonatomic) NSUInteger cvoExtensionID; // ivar: _cvoExtensionID
@property (nonatomic) BOOL enableCVO; // ivar: _enableCVO
@property (nonatomic) int encodingMode; // ivar: _encodingMode
@property (nonatomic) BOOL fecHeaderV1Enabled; // ivar: _fecHeaderV1Enabled
@property (nonatomic) NSUInteger framerate; // ivar: _framerate
@property (nonatomic) BOOL isFecGeneratorEnabled; // ivar: _isFecGeneratorEnabled
@property (nonatomic) BOOL isIPv6; // ivar: _isIPv6
@property (nonatomic) NSUInteger keyFrameInterval; // ivar: _keyFrameInterval
@property (nonatomic) NSUInteger maxPerStreamScreenPixels; // ivar: _maxPerStreamScreenPixels
@property (nonatomic) unsigned int maxSupportedTemporalLayers; // ivar: _maxSupportedTemporalLayers
@property (nonatomic) *void mediaControlInfoGenerator; // ivar: _mediaControlInfoGenerator
@property (retain, nonatomic) VCRateControlMediaController *mediaController; // ivar: _mediaController
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) unsigned int parameterSets; // ivar: _parameterSets
@property (nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat
@property (retain, nonatomic) NSString *profileLevel; // ivar: _profileLevel
@property (nonatomic) unsigned int qualityIndex; // ivar: _qualityIndex
@property (nonatomic) NSUInteger recommendedMTU; // ivar: _recommendedMTU
@property (nonatomic) BOOL reinitEncoderOnFrameSizeChangeEnabled; // ivar: _reinitEncoderOnFrameSizeChangeEnabled
@property (nonatomic) NSUInteger remoteIDSParticipantID; // ivar: _remoteIDSParticipantID
@property (nonatomic) *opaqueRTCReporting reportingAgent; // ivar: _reportingAgent
@property (nonatomic) int reportingParentID; // ivar: _reportingParentID
@property (nonatomic) unsigned int rtpTimestampRate; // ivar: _rtpTimestampRate
@property (nonatomic) *tagVCCryptor sframeCryptor; // ivar: _sframeCryptor
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (readonly, nonatomic) *tagVCVideoTransmitterStreamConfig streamConfigs; // ivar: _streamConfigs
@property (nonatomic) int streamCount; // ivar: _streamCount
@property (nonatomic) BOOL temporalScalingEnabled; // ivar: _temporalScalingEnabled
@property (nonatomic) int tilesPerFrame; // ivar: _tilesPerFrame
@property (nonatomic) NSUInteger txMaxBitrate; // ivar: _txMaxBitrate
@property (nonatomic) NSUInteger txMinBitrate; // ivar: _txMinBitrate
@property (nonatomic) BOOL useInBandFec; // ivar: _useInBandFec
@property (nonatomic) BOOL useRateControl; // ivar: _useRateControl
@property (nonatomic) int videoPayload; // ivar: _videoPayload
@property (nonatomic) *uint8_t videoPriorityPointer; // ivar: _videoPriorityPointer
@property (nonatomic) NSInteger videoResolution; // ivar: _videoResolution
@property (nonatomic) int videoSource; // ivar: _videoSource


-(id)description;
-(id)init;
-(void)addCustomFeatureListString:(id)arg0 payload:(int)arg1 ;
-(void)dealloc;


@end


#endif