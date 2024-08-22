// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AIRPLAYRECEIVERPLATFORM_H
#define AIRPLAYRECEIVERPLATFORM_H

@class DEExtension, NSString;

#import <Foundation/Foundation.h>

#import "AirPlayControllerServer.h"
#import "AirPlayReceiverMediaRemoteHelper.h"

@interface AirPlayReceiverPlatform : NSObject {
    *AirPlayReceiverServerPrivate _server;
    *__CFSet _mediaAudioSessions;
    *__CFSet _mediaVideoSessions;
    *__CFSet _screenSessions;
    *__CFSet _auxAudioSessions;
    int _uiErrorNotifyToken;
    int _lockDownActivationStateToken;
    int _hijackIDChangedNotifyToken;
    unsigned char _playbackPrevented;
    int _playbackAllowNotifyToken;
    int _playbackPreventNotifyToken;
    int _prefChangedNotifyToken;
    int _managedDefaultsChangedNotificationToken;
    int _systemBufferSamples;
    int _systemSampleRate;
    unsigned char _voiceForSiri;
    unsigned char _voiceForTelephony;
    AirPlayControllerServer *_controllerServer;
    float _volumeSliderValue;
    unsigned char _useMediaRemotePerPlayerAPI;
    AirPlayReceiverMediaRemoteHelper *_mediaRemoteHelper;
    unsigned char _isAirPlayReceiverMRNowPlayingApp;
    unsigned char _isHandlingMRCommands;
    unsigned char _isMuted;
    float _volumeSliderValueBeforeMute;
    DEExtension *_wifiDiagnosticExtension;
    NSString *_wifiDECaptureUUID;
    NSUInteger _stalledSessionCount;
    NSUInteger _receiverSessionCount;
}


@property (nonatomic) unsigned char isAmbientAudioActive; // ivar: _isAmbientAudioActive
@property (nonatomic) unsigned char isMediaAudioActive; // ivar: _isMediaAudioActive
@property (nonatomic) unsigned char isScreenActive; // ivar: _isScreenActive
@property (nonatomic) unsigned char isVideoActive; // ivar: _isVideoActive


-(void)_avSystemControllerConnectionDied:(id)arg0 ;
-(void)_avSystemControllerVolumeChanged:(id)arg0 ;
-(void)_avSystemControllerVolumeConfigChanged:(id)arg0 ;
-(void)_handleAVAudioSessionInterruption:(id)arg0 ;
-(void)_handleAVAudioSessionServicesLost:(id)arg0 ;
-(void)_handleAVAudioSessionServicesReset:(id)arg0 ;
-(void)_handleNowPlayingAppStartedPlaying:(id)arg0 ;
-(void)_handleVolumeControlTypeChange;
-(void)_registerAVSystemControllerNotifications;
-(void)_registerAVSystemControllerNotificationsAndFetchInitialStates;
-(void)_unregisterAVSystemControllerNotifications;
-(void)_updateMediaSessionActivationStateBasedOnMediaAudioActiveState:(unsigned char)arg0 andVideoActiveState:(unsigned char)arg1 ;
-(void)handleMRCommand:(unsigned int)arg0 translatedAPCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary *)arg2 ;
-(void)setReceiverSessionCountAndUpdateStateIfNeeded:(NSUInteger)arg0 ;
-(void)updateActiveSessionRegistration:(struct AirPlayReceiverSessionPrivate *)arg0 regType:(int)arg1 regOp:(int)arg2 ;
-(void)updateMRNowPlayingAppState;


@end


#endif