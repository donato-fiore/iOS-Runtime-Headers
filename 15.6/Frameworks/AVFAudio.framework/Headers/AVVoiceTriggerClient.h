// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVOICETRIGGERCLIENT_H
#define AVVOICETRIGGERCLIENT_H

@class NSXPCConnection;
@protocol VoiceTriggerNotificationInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVVoiceTriggerClient : NSObject <VoiceTriggerNotificationInterface>



@property (nonatomic) int audioSeverUpNotificationToken; // ivar: _audioSeverUpNotificationToken
@property (copy, nonatomic) id *serverCrashedBlock; // ivar: _serverCrashedBlock
@property (copy, nonatomic) id *serverResetBlock; // ivar: _serverResetBlock
@property (copy, nonatomic) id *siriClientRecordStateChangedBlock; // ivar: _siriClientRecordStateChangedBlock
@property (copy, nonatomic) id *speakerMuteStateChangedBlock; // ivar: _speakerMuteStateChangedBlock
@property (copy, nonatomic) id *speakerStateChangedBlock; // ivar: _speakerStateChangedBlock
@property (copy, nonatomic) id *voiceTriggerBlock; // ivar: _voiceTriggerBlock
@property (readonly, nonatomic) NSUInteger voiceTriggerPastDataFramesAvailable;
@property (retain, nonatomic) NSXPCConnection *voiceTriggerServerConnection; // ivar: _voiceTriggerServerConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)isAPIAvailable;
-(BOOL)hasBargeInSupport;
-(BOOL)speakerStateActive;
-(BOOL)speakerStateMuted;
-(id)init;
-(void)callServerCrashedBlock;
-(void)callServerResetBlock;
-(void)closeServerConnection;
-(void)dealloc;
-(void)enableBargeInMode:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)enableSpeakerStateListening:(BOOL)arg0 ;
-(void)enableSpeakerStateListening:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)enableVoiceTriggerListening:(BOOL)arg0 ;
-(void)enableVoiceTriggerListening:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)getInputChannelInfoCompletion:(id)arg0 ;
-(void)handleMediaServerDeath:(id)arg0 ;
-(void)handleMediaServerReset:(id)arg0 ;
-(void)hasBargeInSupportCompletionBlock:(id)arg0 ;
-(void)listeningEnabledCompletionBlock:(id)arg0 ;
-(void)removeAudioServerUpNotificationHandler;
-(void)setAggressiveECMode:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)setAudioServerUpNotificationHandler;
-(void)setListeningProperty:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)siriClientRecordStateChangedNotification:(BOOL)arg0 recordingCount:(NSUInteger)arg1 ;
-(void)siriClientsRecordingCompletionBlock:(id)arg0 ;
-(void)speakerMuteStateChangedNotification:(BOOL)arg0 ;
-(void)speakerStateActiveCompletionBlock:(id)arg0 ;
-(void)speakerStateChangedNotification:(id)arg0 ;
-(void)speakerStateMutedCompletionBlock:(id)arg0 ;
-(void)updateVoiceTriggerConfiguration:(id)arg0 ;
-(void)updateVoiceTriggerConfiguration:(id)arg0 completionBlock:(id)arg1 ;
-(void)voiceTriggerNotification:(id)arg0 ;
-(void)voiceTriggerPastDataFramesAvailableCompletion:(id)arg0 ;


@end


#endif