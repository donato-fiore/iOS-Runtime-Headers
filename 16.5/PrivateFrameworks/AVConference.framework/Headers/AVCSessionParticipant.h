// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    NSMutableDictionary *_mediaStates;
    NSDictionary *_mediaTypeToSpatialSourceIDMap;
    _opaque_pthread_mutex_t _mediaStateMutex;
}


@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isAudioMuted) BOOL audioMuted; // ivar: _audioMuted
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused;
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
@property (nonatomic) BOOL remoteScreenEnabled; // ivar: _remoteScreenEnabled
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic) NSInteger screenToken; // ivar: _screenToken
@property (retain, nonatomic) VCXPCClientShared *sharedXPCConnection;
@property (readonly, nonatomic) NSUInteger spatialAudioSourceID;
@property (nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid; // ivar: _participantID
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isVideoPaused) BOOL videoPaused;
@property (nonatomic) tagAVCPositionalInfo videoPositionalInfo;
@property (nonatomic) unsigned char videoQuality; // ivar: _videoQuality
@property (nonatomic) NSInteger videoToken; // ivar: _videoToken
@property (nonatomic) unsigned int visibilityIndex; // ivar: _visibilityIndex
@property (nonatomic) float volume; // ivar: _volume


+(BOOL)isMediaStateAPISupportedForMediaType:(unsigned int)arg0 ;
+(id)archiveMediaStates:(id)arg0 ;
+(id)loopbackNegotiationDataWithData:(id)arg0 ;
+(id)unarchiveMediaStatesWithData:(id)arg0 ;
+(unsigned int)defaultStateForMediaType:(unsigned int)arg0 isLocal:(BOOL)arg1 ;
-(BOOL)generateMediaStateEntryForMediaType:(unsigned int)arg0 ;
-(BOOL)isConnectedToSession;
-(BOOL)isEnabledMediaType:(unsigned int)arg0 ;
-(BOOL)isPausedMediaType:(unsigned int)arg0 ;
-(BOOL)setupMediaStates;
-(NSInteger)streamTokenForStreamGroupID:(unsigned int)arg0 ;
-(NSUInteger)spatialAudioSourceIDForMediaType:(unsigned int)arg0 ;
-(id)initWithParticipantID:(NSUInteger)arg0 data:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(id)newNSErrorWithErrorDictionary:(id)arg0 ;
-(unsigned int)dispatchedMediaStateForMediaType:(unsigned int)arg0 ;
-(unsigned int)mediaStateForMediaType:(unsigned int)arg0 ;
-(void)appendConfigurationToXPCConfiguration:(id)arg0 ;
-(void)completeAudioEnabled:(BOOL)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)completeAudioPaused:(BOOL)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)completeScreenEnabled:(BOOL)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)completeSetMediaState:(unsigned int)arg0 forMediaType:(unsigned int)arg1 didSucceed:(BOOL)arg2 error:(id)arg3 ;
-(void)completeVideoEnabled:(BOOL)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)completeVideoPaused:(BOOL)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)deregisterFromNotifications;
-(void)dispatchedCompleteAudioEnabled:(BOOL)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)dispatchedCompleteAudioPaused:(BOOL)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)dispatchedCompleteScreenEnabled:(BOOL)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)dispatchedCompleteVideoEnabled:(BOOL)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)dispatchedCompleteVideoPaused:(BOOL)arg0 didSucceed:(BOOL)arg1 error:(id)arg2 ;
-(void)dispatchedLegacySetMediaState:(unsigned int)arg0 forMediaType:(unsigned int)arg1 ;
-(void)dispatchedSetMediaState:(unsigned int)arg0 forMediaType:(unsigned int)arg1 ;
-(void)handleLegacyTransitionsForMediaType:(unsigned int)arg0 mediaState:(unsigned int)arg1 previousState:(unsigned int)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)printMediaStates;
-(void)registerBlocksForNotifications;
-(void)setMediaState:(unsigned int)arg0 forMediaType:(unsigned int)arg1 ;
-(void)setMediaType:(unsigned int)arg0 enabled:(BOOL)arg1 mediaString:(char *)arg2 xpcMessageKey:(char *)arg3 xpcOperationKey:(id)arg4 completionBlock:(id)arg5 ;
-(void)setMediaType:(unsigned int)arg0 paused:(BOOL)arg1 mediaString:(char *)arg2 xpcMessageKey:(char *)arg3 xpcOperationKey:(id)arg4 completionBlock:(id)arg5 ;
-(void)setMediaTypeToSpatialSourceIDMap:(id)arg0 ;
-(void)setStreamTokens:(id)arg0 ;
-(void)setupConfig;
-(void)setupNotificationQueue:(id)arg0 ;
-(void)stateTransitionForMediaType:(unsigned int)arg0 mediaState:(unsigned int)arg1 previousState:(unsigned int)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)storeMediaState:(unsigned int)arg0 forMediaType:(unsigned int)arg1 ;
-(void)updateLegacyStates;


@end


#endif