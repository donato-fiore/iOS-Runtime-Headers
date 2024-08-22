// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOCLIENT_H
#define AVAUDIOCLIENT_H

@class NSCondition;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"
#import "AVAudioDevice.h"
#import "AVAudioDeviceList.h"

@interface AVAudioClient : NSObject {
    id *_mutedTalkerNotificationHandler;
    NSObject<OS_dispatch_queue> *_clientAudioSessionQueue;
    id *_secureMicrophoneEngagedHandler;
    BOOL _audioSessionIsActive;
    BOOL _audioSessionIsStarted;
    NSCondition *_audioSessionRefCondVar;
    AVConferenceXPCClient *_xpcConnection;
    BOOL _mixingVoiceWithMediaEnabled;
    BOOL _followSystemInputEnabled;
    BOOL _followSystemOutputEnabled;
    int _processId;
}


@property (nonatomic) id *changeListener;
@property (readonly, nonatomic) AVAudioDevice *currentInputDevice;
@property (readonly, nonatomic) AVAudioDevice *currentOutputDevice;
@property (retain, nonatomic) AVAudioDeviceList *deviceList; // ivar: deviceList
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (nonatomic, getter=isMixingVoiceWithMediaEnabled) BOOL mixingVoiceWithMediaEnabled;


+(BOOL)hasActiveAudioSession;
+(BOOL)setInputDevice:(id)arg0 ;
+(BOOL)setOutputDevice:(id)arg0 ;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(id)sharedInstance;
+(int)registerForMutedTalkerNotifications:(id)arg0 ;
+(int)unregisterFromMutedTalkerNotifications;
+(void)registerSecureMicrophoneEngagedHandler:(id)arg0 ;
+(void)resetAudioSessionOutputPortOverride;
+(void)setAudioSessionProperties:(id)arg0 ;
+(void)setFollowSystemInputEnabled:(BOOL)arg0 ;
+(void)setFollowSystemOutputEnabled:(BOOL)arg0 ;
+(void)startAudioSession;
+(void)startAudioSessionWithCompletionHandler:(id)arg0 ;
+(void)stopAudioSession;
-(BOOL)hasActiveAudioSession;
-(BOOL)setInputDevice:(id)arg0 ;
-(BOOL)setOutputDevice:(id)arg0 ;
-(BOOL)setupXPCConnection;
-(id)devices;
-(id)init;
-(id)initSharedInstance;
-(id)inputDevices;
-(id)outputDevices;
-(id)sendMessageSync:(char *)arg0 arguments:(id)arg1 ;
-(int)registerForMutedTalkerNotifications:(id)arg0 ;
-(int)unregisterFromMutedTalkerNotifications;
-(void)cleanupMutedTalkerNotificationHandler;
-(void)cleanupSecureMicrophoneEngagedHandler;
-(void)cleanupXPCConnection;
-(void)dealloc;
-(void)handleMutedTalkerNotificationWithXPCArguments:(id)arg0 ;
-(void)registerBlocksForDelegateNotifications;
-(void)registerSecureMicrophoneEngagedHandler:(id)arg0 ;
-(void)resetAudioSessionOutputPortOverride;
-(void)sendMessageAsync:(char *)arg0 arguments:(id)arg1 reply:(id)arg2 ;
-(void)setAudioSessionProperties:(id)arg0 ;
-(void)setFollowSystemInputEnabled:(BOOL)arg0 ;
-(void)setFollowSystemOutputEnabled:(BOOL)arg0 ;
-(void)startAudioSessionWithCompletionHandler:(id)arg0 ;
-(void)stopAudioSession;
-(void)unregisterBlocksForDelegateNotifications;


@end


#endif