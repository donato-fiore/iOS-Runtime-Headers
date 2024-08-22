// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCSESSION_H
#define AVCSESSION_H

@class NSData, NSString, NSDictionary, NSMutableDictionary, NSArray;
@protocol AVCSessionParticipantDelegate, AVCSessionParticipantControlProtocol, OS_dispatch_queue, AVCSessionDelegate;

#import <Foundation/Foundation.h>

#import "VCSessionPresentationInfo.h"
#import "AVCSessionConfiguration.h"
#import "AVCSessionParticipant.h"
#import "VCXPCClientShared.h"

@interface AVCSession : NSObject <AVCSessionParticipantDelegate, AVCSessionParticipantControlProtocol>

 {
    NSData *_cachedNegotiationData;
    NSString *_transportToken;
    id *_delegate;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSString *_uuid;
    int _activeConfigurationCount;
    VCSessionPresentationInfo *_presentationInfo;
    BOOL _oneToOneModeEnabled;
}


@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isAudioMuted) BOOL audioMuted;
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused;
@property (retain, nonatomic) NSDictionary *capabilities; // ivar: _capabilities
@property (retain, nonatomic) AVCSessionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<AVCSessionDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateNotificationQueue; // ivar: _delegateNotificationQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *frequencyLevels; // ivar: _frequencyLevels
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVCSessionParticipant *localParticipant; // ivar: _localParticipant
@property (readonly, nonatomic) NSData *negotiationData;
@property (nonatomic, getter=isOneToOneEnabled) BOOL oneToOneEnabled;
@property (readonly, nonatomic) NSMutableDictionary *participantsToAdd; // ivar: _participantsToAdd
@property (nonatomic) tagAVCSessionPresentationInfo presentationInfo;
@property (readonly, nonatomic) NSArray *remoteParticipants;
@property (readonly, nonatomic) NSMutableDictionary *remoteParticipantsMap; // ivar: _remoteParticipants
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (readonly, nonatomic) NSInteger sessionToken; // ivar: _sessionToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isVideoPaused) BOOL videoPaused;
@property (nonatomic) float volume;
@property (readonly, nonatomic) VCXPCClientShared *xpcConnection; // ivar: _connection


+(id)configurationWithSessionMode:(NSInteger)arg0 ;
+(int)mediaNegotiatorVersionWithNegotiationProtocolVersion:(unsigned int)arg0 ;
-(BOOL)validateParticipantToAdd:(id)arg0 ;
-(BOOL)validateParticipantToRemove:(id)arg0 ;
-(id)initPrivateWithTransportToken:(id)arg0 configuration:(id)arg1 negotiationData:(id)arg2 delegate:(id)arg3 queue:(id)arg4 ;
-(id)initWithTransportToken:(id)arg0 configuration:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(id)initWithTransportToken:(id)arg0 configuration:(id)arg1 negotiationData:(id)arg2 delegate:(id)arg3 queue:(id)arg4 ;
-(id)negotiationDataForProtocolVersion:(unsigned int)arg0 ;
-(id)newNSErrorWithErrorDictionary:(id)arg0 ;
-(unsigned int)mediaStateForMediaType:(unsigned int)arg0 ;
-(void)addParticipant:(id)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)appendConfigurationToXPCArguments:(id)arg0 ;
-(void)beginParticipantConfiguration;
-(void)dealloc;
-(void)deregisterFromNotifications;
-(void)didAddParticipantHandlerWithResult:(id)arg0 ;
-(void)endParticipantConfiguration;
-(void)participant:(id)arg0 audioEnabled:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)participant:(id)arg0 audioPaused:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)participant:(id)arg0 frequencyLevelsDidChange:(id)arg1 ;
-(void)participant:(id)arg0 mediaPrioritiesDidChange:(id)arg1 ;
-(void)participant:(id)arg0 mediaStateDidChange:(unsigned int)arg1 forMediaType:(unsigned int)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)participant:(id)arg0 screenEnabled:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)participant:(id)arg0 videoEnabled:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)participant:(id)arg0 videoPaused:(BOOL)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)registerBlocksForNotifications;
-(void)removeParticipant:(id)arg0 ;
-(void)removeParticipants:(id)arg0 ;
-(void)setMediaState:(unsigned int)arg0 forMediaType:(unsigned int)arg1 ;
-(void)setupNotificationQueue:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)stopWithError:(id)arg0 ;
-(void)updateConfiguration:(id)arg0 ;
-(void)updateOneToOneModeEnabled:(BOOL)arg0 ;
-(void)validateParticipantConfiguration;


@end


#endif