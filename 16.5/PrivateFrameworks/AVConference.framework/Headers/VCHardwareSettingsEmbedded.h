// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCHARDWARESETTINGSEMBEDDED_H
#define VCHARDWARESETTINGSEMBEDDED_H

@class NSString, NSArray;
@protocol VCHardwareSettingsEmbeddedProtocol;


#import "VCHardwareSettings.h"

@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol>

 {
    NSString *_deviceName;
    NSInteger _chipId;
    int _deviceClass;
    int _screenWidth;
    int _screenHeight;
    NSUInteger _maxScreenEncodingSizeSupported;
    NSInteger _videoEncoderType;
    BOOL _hasAppleNeuralEngine;
    BOOL _isInitialized;
    BOOL _hasBasebandInitialized;
    BOOL _hasBaseband;
    NSString *_marketingName;
    int _productType;
}


@property (readonly, nonatomic) unsigned int audioPacketLossConcealmentAlgorithmAACELD;
@property (readonly, nonatomic) BOOL canDo1080p;
@property (readonly, nonatomic) NSInteger chipId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger deviceClass;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasAppleNeuralEngine;
@property (readonly, nonatomic) BOOL hasBaseband;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCaptionsSupported;
@property (readonly, nonatomic) BOOL isCaptureSIFRPreferred;
@property (readonly, nonatomic) BOOL isCellularTappingSupported;
@property (readonly, nonatomic) BOOL isDeviceLargeScreen;
@property (readonly, nonatomic) BOOL isDisplayPortrait;
@property (readonly, nonatomic) BOOL isHEVC444DecodeSupported;
@property (readonly, nonatomic) BOOL isPixelFormatAvailable;
@property (readonly, nonatomic) BOOL isRemoteCameraSenderSupported;
@property (readonly, nonatomic) BOOL isSecondDisplaySupportEnabled;
@property (readonly, nonatomic) BOOL isSiriVoicePlayoutSupported;
@property (readonly, nonatomic) BOOL isSiriVoiceTapSupported;
@property (readonly, nonatomic) BOOL isSpatialAudioSupported;
@property (readonly, nonatomic) BOOL isViewPointCorrectionSupported;
@property (readonly, nonatomic) unsigned int maxActiveScreenEncoders;
@property (readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property (readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property (readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property (readonly, nonatomic) unsigned int maxFrameRateSupportedScreenShare;
@property (readonly, nonatomic) NSUInteger maxScreenEncodingSizeSupported;
@property (readonly, nonatomic) unsigned int screenHeight;
@property (readonly, nonatomic) NSInteger screenShareCapabilities;
@property (readonly, nonatomic) unsigned int screenWidth;
@property (readonly, nonatomic) BOOL shouldEnforceScreenFrameRateLimit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) NSArray *supportedVideoPayloads;
@property (readonly, nonatomic) BOOL supportsHEIFEncoding;
@property (readonly, nonatomic) BOOL supportsMultiway720pStream;
@property (readonly, nonatomic) BOOL useSoftFramerateSwitching;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;
@property (readonly, nonatomic) NSInteger videoEncoderType;


+(id)sharedInstance;
-(BOOL)disableMLScalarDuringSharing;
-(BOOL)limitCameraDownlinkBitrateDuringSharing;
-(BOOL)supportsDedicatedSystemAudioStream;
-(CGFloat)previewPreferredAspectRatio;
-(id)init;
-(id)marketingName;
-(unsigned int)maxFpsCameraCaptureDuringSharing;
-(unsigned int)maxFrameRateSupportedBackgroundBlur;
-(unsigned int)maxMultiwayFramerateSupported;
-(unsigned int)maxOneToOneFramerateSupported;
-(unsigned int)maxRemoteParticipants30fps;
-(unsigned int)screenHeightForDisplayID:(unsigned int)arg0 ;
-(unsigned int)screenWidthForDisplayID:(unsigned int)arg0 ;
-(void)_initializeScreenDimension;
-(void)addPixelFormat;
-(void)dealloc;
-(void)setupSiriSupport;


@end


#endif