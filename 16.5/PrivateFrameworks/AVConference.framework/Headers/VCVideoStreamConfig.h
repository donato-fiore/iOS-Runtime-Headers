// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCVIDEOSTREAMCONFIG_H
#define VCVIDEOSTREAMCONFIG_H

@class NSString, NSDictionary;
@protocol VCMediaStreamSyncSource;


#import "VCMediaStreamConfig.h"

@interface VCVideoStreamConfig : VCMediaStreamConfig

@property (nonatomic) unsigned int audioIOSampleRate; // ivar: _audioIOSampleRate
@property (nonatomic) NSUInteger customHeight; // ivar: _customHeight
@property (nonatomic) NSUInteger customWidth; // ivar: _customWidth
@property (nonatomic) NSUInteger cvoExtensionID; // ivar: _cvoExtensionID
@property (nonatomic) BOOL enableCVO; // ivar: _enableCVO
@property (nonatomic) int encoderUsage; // ivar: _encoderUsage
@property (nonatomic) int encodingMode; // ivar: _encodingMode
@property (nonatomic) BOOL forceZeroRegionOfInterestOrigin; // ivar: _forceZeroRegionOfInterestOrigin
@property (nonatomic) NSUInteger framerate; // ivar: _framerate
@property (nonatomic) int hdrMode; // ivar: _hdrMode
@property (nonatomic) BOOL isVariableSliceModeEnabled; // ivar: _isVariableSliceModeEnabled
@property (nonatomic) BOOL isVideoProtected; // ivar: _isVideoProtected
@property (nonatomic) NSUInteger keyFrameInterval; // ivar: _keyFrameInterval
@property (nonatomic) BOOL ltrpEnabled; // ivar: _ltrpEnabled
@property (nonatomic) NSUInteger maxEncoderPixels; // ivar: _maxEncoderPixels
@property (nonatomic) unsigned int parameterSets; // ivar: _parameterSets
@property (nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat
@property (retain, nonatomic) NSString *profileLevel; // ivar: _profileLevel
@property (retain, nonatomic) NSString *remoteDeviceName; // ivar: _remoteDeviceName
@property (nonatomic) int remoteVideoInitialOrientation; // ivar: _remoteVideoInitialOrientation
@property (nonatomic) BOOL resetSendRTPTimestampOnStop; // ivar: _resetSendRTPTimestampOnStop
@property (nonatomic) BOOL rtcpPSFB_FIREnabled; // ivar: _rtcpPSFB_FIREnabled
@property (readonly, nonatomic) NSDictionary *rxCodecFeatureListStrings; // ivar: _rxCodecFeatureListStrings
@property (nonatomic) NSUInteger rxMaxBitrate; // ivar: _rxMaxBitrate
@property (nonatomic) NSUInteger rxMinBitrate; // ivar: _rxMinBitrate
@property (nonatomic) unsigned int screenDisplayID; // ivar: _screenDisplayID
@property (nonatomic) NSUInteger sourceFramerate; // ivar: _sourceFramerate
@property (nonatomic) NSObject<VCMediaStreamSyncSource> *syncSource; // ivar: _syncSource
@property (nonatomic) BOOL temporalScalingEnabled; // ivar: _temporalScalingEnabled
@property (nonatomic) NSUInteger tilesPerFrame; // ivar: _tilesPerFrame
@property (nonatomic) int transportProtocolType; // ivar: _transportProtocolType
@property (readonly, nonatomic) NSDictionary *txCodecFeatureListStrings; // ivar: _txCodecFeatureListStrings
@property (nonatomic) NSUInteger txInitialBitrate; // ivar: _txInitialBitrate
@property (nonatomic) NSUInteger txMaxBitrate; // ivar: _txMaxBitrate
@property (nonatomic) NSUInteger txMinBitrate; // ivar: _txMinBitrate
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) BOOL useInBandFEC; // ivar: _useInBandFEC
@property (nonatomic) BOOL useVideoJitterForVideoPlayout; // ivar: _useVideoJitterForVideoPlayout
@property (nonatomic) *uint8_t videoPriorityPointer; // ivar: _videoPriorityPointer
@property (nonatomic) NSInteger videoResolution; // ivar: _videoResolution


+(BOOL)validateClientDictionary:(id)arg0 ;
+(id)profileLevelStringForId:(unsigned int)arg0 ;
+(unsigned int)profileLevelIdForString:(id)arg0 ;
-(BOOL)applyVideoStreamClientDictionary:(id)arg0 ;
-(BOOL)updateWithClientDictionary:(id)arg0 ;
-(id)init;
-(id)initWithClientDictionary:(id)arg0 ;
-(void)addRxCodecFeatureListString:(id)arg0 codecType:(NSInteger)arg1 ;
-(void)addTxCodecFeatureListString:(id)arg0 codecType:(NSInteger)arg1 ;
-(void)dealloc;
-(void)initializeParameterSets;


@end


#endif