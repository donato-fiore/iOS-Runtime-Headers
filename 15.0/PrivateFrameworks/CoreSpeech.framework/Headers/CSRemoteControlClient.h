// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSREMOTECONTROLCLIENT_H
#define CSREMOTECONTROLCLIENT_H

@class OS_xpc_remote_connection, CSDispatchGroup, NSHashTable, OS_remote_device, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSRemoteDeviceProtocolInfo.h"

@interface CSRemoteControlClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    OS_xpc_remote_connection *_connection;
    CSDispatchGroup *_deviceWaitingGroup;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) OS_remote_device *device; // ivar: _device
@property (readonly, copy, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (readonly, nonatomic) CSRemoteDeviceProtocolInfo *deviceProtocolInfo; // ivar: _deviceProtocolInfo
@property (readonly, nonatomic) unsigned int deviceType; // ivar: _deviceType


-(BOOL)createRemoteVoiceProfileWithAudioFiles:(id)arg0 aesKey:(id)arg1 encryptedAudioSampleBypeDepth:(NSUInteger)arg2 languageCode:(id)arg3 completion:(id)arg4 ;
-(BOOL)isConnected;
-(BOOL)isConnectedDeviceGibraltar;
-(BOOL)transferInterstitialAudioFiles:(id)arg0 interstitialLevel:(NSInteger)arg1 completion:(id)arg2 ;
-(BOOL)transferVoiceTriggerSpeakerModel:(id)arg0 forAsset:(id)arg1 ;
-(BOOL)waitingForConnection:(CGFloat)arg0 error:(*id)arg1 ;
-(id)_dictionaryWithContentsOfXPCObject:(id)arg0 ;
-(id)_getMyriadInfoFromServerMessage:(id)arg0 ;
-(id)description;
-(id)initWithRemoteDevice:(id)arg0 ;
-(void)_fetchDataFromAudioFileUrl:(id)arg0 aesKey:(id)arg1 encryptedAudioSampleBypeDepth:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_handleServerError:(id)arg0 ;
-(void)_handleServerEvent:(id)arg0 ;
-(void)_handleServerMessage:(id)arg0 ;
-(void)_transferAudioData:(id)arg0 numSamples:(NSUInteger)arg1 remoteWavFilePath:(id)arg2 completion:(id)arg3 ;
-(void)_transferFile:(id)arg0 at:(id)arg1 completion:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)clearTriggerCount:(id)arg0 ;
-(void)dealloc;
-(void)didDeviceConnect:(id)arg0 ;
-(void)didDeviceDisconnect:(id)arg0 ;
-(void)exchangeRemoteDeviceProtocolInfo:(id)arg0 ;
-(void)getFirstPassRunningMode:(id)arg0 ;
-(void)getTriggerCount:(id)arg0 ;
-(void)invalidateInterstitialWithLevel:(NSInteger)arg0 ;
-(void)notifyVoiceTriggerAssetChangeWithSiriLanguageCode:(id)arg0 ;
-(void)readAndClearVoiceTriggeredTokenWithCompletion:(id)arg0 ;
-(void)readVoiceTriggeredTokenWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setVoiceTriggerEnable:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)transferVoiceTriggerAsset:(id)arg0 forLanguageCode:(id)arg1 completion:(id)arg2 ;
-(void)voiceTriggerEnabledWithCompletion:(id)arg0 ;


@end


#endif