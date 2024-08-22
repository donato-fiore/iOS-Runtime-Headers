// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSPEECHINTERNALSETTINGS_H
#define VSSPEECHINTERNALSETTINGS_H

@class NSUserDefaults, NSString;

#import <Foundation/Foundation.h>


@interface VSSpeechInternalSettings : NSObject

@property (nonatomic) BOOL allowAnyAssetSubscriber;
@property (nonatomic) float defaultPitch;
@property (nonatomic) float defaultRate;
@property (nonatomic) BOOL defaultToNonDiscretionaryDownloads;
@property (nonatomic) float defaultVolume;
@property (nonatomic) float deviceTTSWaitTime;
@property (nonatomic) BOOL disableAssetCleaning;
@property (nonatomic) BOOL disableAssetUpdate;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) BOOL disableDeviceNeuralTTS;
@property (nonatomic) BOOL disableDeviceRacing;
@property (nonatomic) BOOL disableInlineStreamTTS;
@property (readonly, nonatomic) BOOL disableMobileAssetURLReset;
@property (nonatomic) BOOL disableOspreyStreaming;
@property (nonatomic) BOOL disableServerTTS;
@property (nonatomic) BOOL enableAudioDump;
@property (nonatomic) BOOL enableLocalVoices;
@property (nonatomic) BOOL forceServerTTS;
@property (nonatomic) BOOL ignorePowerAndThermalState;
@property (retain, nonatomic) NSUserDefaults *internalDefaults; // ivar: _internalDefaults
@property (nonatomic) BOOL logSensitiveText;
@property (copy, nonatomic) NSString *ospreyEndpointURL;
@property (nonatomic) float serverTTSTimeout;
@property (nonatomic) BOOL simulateNetworkStall;
@property (nonatomic) float streamBufferDuration;
@property (nonatomic) BOOL useBetaVoice;
@property (readonly, nonatomic) BOOL useSSMLInput;
@property (nonatomic) BOOL whisper;


+(id)standardInstance;
-(id)init;


@end


#endif