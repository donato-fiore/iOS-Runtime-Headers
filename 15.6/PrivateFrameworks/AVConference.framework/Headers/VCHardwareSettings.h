// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCHARDWARESETTINGS_H
#define VCHARDWARESETTINGS_H

@class NSMutableDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface VCHardwareSettings : NSObject {
    int _supportHEVC;
    BOOL _supportVCPEncoderInitialized;
    BOOL _supportVCPEncoder;
    NSMutableDictionary *_hardwareUsageModeSettings;
}


@property (readonly, nonatomic) BOOL isVideoRenderingSupported;
@property (readonly, nonatomic) NSSet *pixelFormatCollections; // ivar: _pixelFormatCollections
@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;


+(BOOL)disableMLScalarDuringSharing;
+(BOOL)disableViewPointCorrectionForSharing;
+(BOOL)isCaptureSIFRPreferred;
+(BOOL)isDisplayPortrait;
+(BOOL)isSpatialAudioSupported;
+(BOOL)limitCameraDownlinkBitrateDuringSharing;
+(BOOL)preferPresentationTimestamp;
+(BOOL)shouldEnforceScreenFrameRateLimit;
+(BOOL)shouldOverrideGPUMuxing;
+(BOOL)supportsDedicatedSystemAudioStream;
+(BOOL)supportsHEIFEncoding;
+(BOOL)supportsHEVCDecoding;
+(BOOL)supportsHEVCEncoding;
+(BOOL)supportsPortraitCameraCapture;
+(NSInteger)deviceClass;
+(NSInteger)screenShareCapabilities;
+(NSUInteger)maxScreenEncodingSizeSupported;
+(float)previewPreferredAspectRatio;
+(id)supportedVideoPayloads;
+(unsigned int)builtinMicCount;
+(unsigned int)maxActiveScreenEncoders;
+(unsigned int)maxActiveVideoDecoders;
+(unsigned int)maxActiveVideoEncoders;
+(unsigned int)maxFpsCameraCaptureDuringSharing;
+(unsigned int)maxFrameRateSupportedBackgroundBlur;
+(unsigned int)maxFrameRateSupportedScreenShare;
+(unsigned int)maxMultiwayFramerateSupported;
+(unsigned int)maxOneToOneFramerateSupported;
+(unsigned int)maxRemoteParticipants30fps;
+(unsigned int)maxVCPSupportedTemporalLayers;
+(unsigned int)screenHeight;
+(unsigned int)screenHeightForDisplayID:(unsigned int)arg0 ;
+(unsigned int)screenWidth;
+(unsigned int)screenWidthForDisplayID:(unsigned int)arg0 ;
-(BOOL)isHEVCDecodeSupported:(int)arg0 ;
-(BOOL)isHEVCEncodeSupported:(int)arg0 ;
-(BOOL)storeHardwareSettingsForAllOperatingModes;
-(id)featureListStringForH264:(int)arg0 ;
-(id)featureListStringForHEVC:(int)arg0 ;
-(id)init;
-(unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)arg0 isLowLatencyAudio:(BOOL)arg1 ;
-(unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)arg0 ;
-(unsigned int)tilesPerVideoFrame:(int)arg0 ;
-(unsigned int)tilesPerVideoFrame:(int)arg0 hdrMode:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif