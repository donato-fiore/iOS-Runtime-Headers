// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCHARDWARESETTINGSMAC_H
#define VCHARDWARESETTINGSMAC_H

@class NSString, NSData, NSArray;
@protocol VCHardwareSettingsMacProtocol;


#import "VCHardwareSettings.h"

@interface VCHardwareSettingsMac : VCHardwareSettings <VCHardwareSettingsMacProtocol>

 {
    BOOL _hiDefEncoding;
    BOOL _isGVAEncoderAvailableInitialized;
    BOOL _isGVAEncoderAvailable;
    int _machineType;
    int _cpuFamily;
    int _numProcessors;
    int _mhrtz;
    int _isG5;
    int _hardwareScore;
    NSString *_cpuType;
    NSString *_machineName;
    unsigned int _screenWidth;
    unsigned int _screenHeight;
    NSUInteger _maxScreenEncodingSizeSupported;
    NSString *_modelName;
    unsigned int _modelVersion;
    unsigned int _modelRevision;
    NSData *_boardId;
}


@property (readonly, nonatomic) BOOL canDoHEVC;
@property (readonly, nonatomic) BOOL canDoHiDefDecoding;
@property (readonly, nonatomic) BOOL canDoHiDefEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int hardwareScore;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int hwEncoderEnterBitrate;
@property (readonly, nonatomic) unsigned int hwEncoderExitBitrate;
@property (readonly, nonatomic) BOOL isDeviceLargeScreen;
@property (readonly, nonatomic) BOOL isIMac;
@property (readonly, nonatomic) BOOL isMacBookWVGA;
@property (readonly, nonatomic) BOOL isMacPro;
@property (readonly, nonatomic) BOOL isPixelFormatAvailable;
@property (readonly, nonatomic) BOOL isSpatialAudioSupported;
@property (readonly, nonatomic) NSString *machineName;
@property (readonly, nonatomic) unsigned int maxActiveScreenEncoders;
@property (readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property (readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property (readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property (readonly, nonatomic) unsigned int maxFrameRateSupportedScreenShare;
@property (readonly, nonatomic) NSUInteger maxScreenEncodingSizeSupported;
@property (readonly, nonatomic) unsigned int screenHeight;
@property (readonly, nonatomic) NSInteger screenShareCapabilities;
@property (readonly, nonatomic) unsigned int screenWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportHEVC;
@property (readonly, nonatomic) NSArray *supportedVideoPayloads;
@property (readonly, nonatomic) BOOL supports1080pDecoding;
@property (readonly, nonatomic) BOOL supports1080pEncoding;
@property (readonly, nonatomic) BOOL supportsAVFCapture;
@property (readonly, nonatomic) BOOL supportsHEIFEncoding;
@property (readonly, nonatomic) BOOL supportsMultiway720pStream;
@property (readonly, nonatomic) BOOL useSoftFramerateSwitching;
@property (readonly, nonatomic) BOOL vcpSupportsHEVCEncoder;


+(NSInteger)deviceClass;
+(id)sharedInstance;
-(BOOL)_isMachineNewerThanSandybridge:(int)arg0 ;
-(BOOL)_isModel:(id)arg0 ;
-(BOOL)disableMLScalarDuringSharing;
-(BOOL)isGVAEncoderAvailable;
-(BOOL)limitCameraDownlinkBitrateDuringSharing;
-(BOOL)supportsDedicatedSystemAudioStream;
-(BOOL)supportsPortraitCameraCapture;
-(float)previewPreferredAspectRatio;
-(id)_getCPUTypeStringForMachineType:(int)arg0 ;
-(id)init;
-(id)queryBoardId;
-(int)_getCPUFamilyType;
-(unsigned int)maxFpsCameraCaptureDuringSharing;
-(unsigned int)maxMultiwayFramerateSupported;
-(unsigned int)maxOneToOneFramerateSupported;
-(unsigned int)maxRemoteParticipants30fps;
-(void)_initializeScreenDimension;
-(void)addPixelFormat;
-(void)dealloc;
-(void)setupMachineName;


@end


#endif