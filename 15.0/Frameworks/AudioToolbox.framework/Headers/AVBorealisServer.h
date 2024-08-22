// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVBOREALISSERVER_H
#define AVBOREALISSERVER_H

@class NSMutableArray, NSString, NSXPCListener, VTStateManager;
@protocol NSXPCListenerDelegate, VoiceTriggerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVBorealisServer : NSObject <NSXPCListenerDelegate, VoiceTriggerInterface>

 {
    *BorealisServerImpl serverImpl;
}


@property (nonatomic) *unk afSiriActivationBuiltInMicVoiceFuncPtr; // ivar: _afSiriActivationBuiltInMicVoiceFuncPtr
@property (retain, nonatomic) NSMutableArray *clientConnections; // ivar: _clientConnections
@property (retain, nonatomic) Class clsVTStateManager; // ivar: _clsVTStateManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *void mobileAssistantDylib; // ivar: _mobileAssistantDylib
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (retain, nonatomic) NSXPCListener *serverListener; // ivar: _serverListener
@property (readonly) Class superclass;
@property (nonatomic) *void voiceTriggerDylib; // ivar: _voiceTriggerDylib
@property (retain, nonatomic) VTStateManager *vtStateManager; // ivar: _vtStateManager


-(BOOL)hardwareSupportsVoiceTrigger;
-(BOOL)heySiriEnabled;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)enableBargeInMode:(BOOL)arg0 reply:(id)arg1 ;
-(void)enableSpeakerStateListening:(BOOL)arg0 reply:(id)arg1 ;
-(void)enableVoiceTriggerListening:(BOOL)arg0 reply:(id)arg1 ;
-(void)getInputChannelInfoCompletion:(id)arg0 ;
-(void)hasBargeInSupportReply:(id)arg0 ;
-(void)initializeWithReply:(id)arg0 ;
-(void)listeningEnabledReply:(id)arg0 ;
-(void)sendSpeakerActiveStateChangedNotification:(BOOL)arg0 ;
-(void)sendSpeakerMuteStateChangedNotification:(BOOL)arg0 ;
-(void)sendVoiceTriggerOccuredNotification:(id)arg0 ;
-(void)setListeningProperty:(BOOL)arg0 reply:(id)arg1 ;
-(void)siriClientRecordStateChanged:(BOOL)arg0 ;
-(void)siriClientsRecordingReply:(id)arg0 ;
-(void)speakerStateActiveReply:(id)arg0 ;
-(void)speakerStateMutedReply:(id)arg0 ;
-(void)speechDetectionVADCreated;
-(void)updateVoiceTriggerConfiguration:(id)arg0 reply:(id)arg1 ;
-(void)voiceTriggerPastDataFramesAvailable:(id)arg0 ;


@end


#endif