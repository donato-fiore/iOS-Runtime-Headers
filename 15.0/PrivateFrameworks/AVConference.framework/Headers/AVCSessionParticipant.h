// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCSESSIONPARTICIPANT_H
#define AVCSESSIONPARTICIPANT_H

@class NSDictionary, NSMutableDictionary, NSString, NSData;
@protocol AVCSessionParticipantControlProtocol, OS_dispatch_queue, AVCSessionParticipantDelegate;

#import <Foundation/Foundation.h>

#import "VCXPCClientShared.h"
#import "VCPositionalInfo.h"

@interface AVCSessionParticipant : NSObject <AVCSessionParticipantControlProtocol>

 {
    id *_delegate;
    NSObject<OS_dispatch_queue> *_stateQueue;
    VCXPCClientShared *_connection;
    NSDictionary *_streamGroupIDToStreamTokenMap;
    NSMutableDictionary *_participantConfig;
    VCPositionalInfo *_videoPositionalInfo;
}


@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // ivar: _audioEnabled
@property (nonatomic, getter=isAudioMuted) BOOL audioMuted; // ivar: _audioMuted
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused; // ivar: _audioPaused
@property (readonly, nonatomic) NSDictionary *config;
@property (nonatomic) BOOL configurationInProgress; // ivar: _configurationInProgress
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<AVCSessionParticipantDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateNotificationQueue; // ivar: _delegateNotificationQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *frequencyLevels; // ivar: _frequencyLevels
@property (nonatomic) BOOL hasPendingChanges; // ivar: _hasPendingChanges
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *negotiationData; // ivar: _participantData
@property (nonatomic, getter=isOneToOneEnabled) BOOL oneToOneEnabled; // ivar: _oneToOneEnabled
@property (readonly, nonatomic) NSUInteger participantID; // ivar: _idsParticipantID
@property (nonatomic) unsigned int prominenceIndex; // ivar: _prominenceIndex
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled; // ivar: _screenEnabled
@property (nonatomic) NSInteger screenToken; // ivar: _screenToken
@property (retain, nonatomic) VCXPCClientShared *sharedXPCConnection;
@property (readonly, nonatomic) NSUInteger spatialAudioSourceID;
@property (nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid; // ivar: _participantID
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // ivar: _videoEnabled
@property (nonatomic, getter=isVideoPaused) BOOL videoPaused; // ivar: _videoPaused
@property (nonatomic) tagAVCPositionalInfo videoPositionalInfo;
@property (nonatomic) unsigned char videoQuality; // ivar: _videoQuality
@property (nonatomic) NSInteger videoToken; // ivar: _videoToken
@property (nonatomic) unsigned int visibilityIndex; // ivar: _visibilityIndex
@property (nonatomic) float volume; // ivar: _volume


-(BOOL)isConnectedToSession;
-(NSInteger)streamTokenForStreamGroupID:(unsigned int)arg0 ;
-(id)initWithParticipantID:(NSUInteger)arg0 data:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(id)newNSErrorWithErrorDictionary:(id)arg0 ;
-(void)appendConfigurationToXPCConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)deregisterFromNotifications;
-(void)registerBlocksForNotifications;
-(void)setStateAudioEnabled:(BOOL)arg0 ;
-(void)setStateAudioPaused:(BOOL)arg0 ;
-(void)setStateScreenEnabled:(BOOL)arg0 ;
-(void)setStateVideoEnabled:(BOOL)arg0 ;
-(void)setStateVideoPaused:(BOOL)arg0 ;
-(void)setStreamTokens:(id)arg0 ;
-(void)setupConfig;
-(void)setupNotificationQueue:(id)arg0 ;


@end


#endif