// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMEDIAREMOTEDEVICEIMPL_H
#define _TVRCMEDIAREMOTEDEVICEIMPL_H

@class NSString, NSSet, NSMutableArray;
@protocol _TVRXVoiceRecorderDelegate, _TVRCMROriginDelegate, _TVRCDeviceImpl;

#import <Foundation/Foundation.h>

#import "_TVRXDevice.h"
#import "_TVRCMediaRemoteEventTranslator.h"
#import "_TVRXKeyboardController.h"
#import "_TVRCMediaRemoteKeyboardImplManager.h"
#import "_TVRCMROriginWrapper.h"
#import "_TVRCMRTelevisionWrapper.h"
#import "_TVRXVoiceRecorder.h"

@interface _TVRCMediaRemoteDeviceImpl : NSObject <_TVRXVoiceRecorderDelegate, _TVRCMROriginDelegate, _TVRCDeviceImpl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) _TVRXDevice *device; // ivar: _device
@property (retain, nonatomic) _TVRCMediaRemoteEventTranslator *eventTranslator; // ivar: _eventTranslator
@property (nonatomic) NSUInteger gameControllerID; // ivar: _gameControllerID
@property (nonatomic) NSInteger gameControllerState; // ivar: _gameControllerState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _TVRXKeyboardController *keyboardController; // ivar: _keyboardController
@property (retain, nonatomic) _TVRCMediaRemoteKeyboardImplManager *keyboardImplManager; // ivar: _keyboardImplManager
@property (copy, nonatomic) NSSet *mediaButtons; // ivar: _mediaButtons
@property (retain, nonatomic) _TVRCMROriginWrapper *origin; // ivar: _origin
@property (retain, nonatomic) NSMutableArray *queuedAudioBuffers; // ivar: _queuedAudioBuffers
@property (readonly) Class superclass;
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television; // ivar: _television
@property (nonatomic) NSUInteger touchDeviceID; // ivar: _touchDeviceID
@property (nonatomic) unsigned int voiceDeviceID; // ivar: _voiceDeviceID
@property (retain, nonatomic) _TVRXVoiceRecorder *voiceRecorder; // ivar: _voiceRecorder
@property (copy, nonatomic) NSSet *volumeButtons; // ivar: _volumeButtons


+(id)implWithTelevision:(id)arg0 ;
-(BOOL)_isSystemVersionSupported;
-(BOOL)supportsTouchEvents;
-(NSInteger)connectionType;
-(NSUInteger)pairingCapability;
-(id)alternateIdentifiers;
-(id)createBufferWithSettings:(id)arg0 packetCapacity:(NSUInteger)arg1 maxPacketSize:(NSUInteger)arg2 ;
-(id)identifier;
-(id)initWithTelevision:(id)arg0 ;
-(id)model;
-(id)name;
-(id)supportedButtons;
-(void)_addConnectionStateHandler;
-(void)_becameConnected;
-(void)_becameDisconnected:(id)arg0 ;
-(void)_beginObservingNowPlaying;
-(void)_connectionRequestedPairing:(struct ? )arg0 continuation:(id)arg1 ;
-(void)_connectionStateChanged:(unsigned int)arg0 error:(id)arg1 ;
-(void)_drainAndClearAudioBufferQueue;
-(void)_enableVolumeButtons:(BOOL)arg0 ;
-(void)_gameControllerInputModeChanged:(unsigned int)arg0 ;
-(void)_nameChanged:(id)arg0 ;
-(void)_registerGameControllerID;
-(void)_registerGameControllerInputModeHandler;
-(void)_registerTouchDevice;
-(void)_registerVoiceDeviceWithCompletion:(id)arg0 ;
-(void)_reloadVolumeControlAvailability;
-(void)_removeConnectionStateHandler;
-(void)_removePairingRecords;
-(void)_resetAllState;
-(void)_sendEquivalentGameButton:(id)arg0 ;
-(void)_setupKeyboardController;
-(void)_setupOriginIfNeeded;
-(void)_setupVoiceRecorder;
-(void)_setupVolumeControls;
-(void)_teardownVolumeControls;
-(void)_unregisterGameControllerID;
-(void)_unregisterGameControllerInputModeHandler;
-(void)_voiceRecorderStateChanged:(unsigned int)arg0 ;
-(void)_volumeControlsDidUpdate:(id)arg0 ;
-(void)connect;
-(void)dealloc;
-(void)disconnect;
-(void)origin:(id)arg0 updatedSupportedCommands:(id)arg1 ;
-(void)sendButtonEvent:(id)arg0 ;
-(void)sendGameControllerEvent:(id)arg0 ;
-(void)sendTouchEvent:(id)arg0 ;
-(void)setAuthenticationSupported:(BOOL)arg0 ;
-(void)voiceRecorder:(id)arg0 bufferAvailable:(id)arg1 ;
-(void)voiceRecorder:(id)arg0 isAboutToBeginRecording:(id)arg1 ;
-(void)voidRecorderDidStop:(id)arg0 ;


@end


#endif