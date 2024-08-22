// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRCOMMANDOPTIONSPROTOBUF_H
#define _MRCOMMANDOPTIONSPROTOBUF_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface _MRCommandOptionsProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL alwaysIgnoreDuringCall; // ivar: _alwaysIgnoreDuringCall
@property (nonatomic) BOOL alwaysIgnoreDuringSharePlay; // ivar: _alwaysIgnoreDuringSharePlay
@property (nonatomic) CGFloat assistantCommandSendTimestamp; // ivar: _assistantCommandSendTimestamp
@property (nonatomic) CGFloat assistantTTSEndTimestamp; // ivar: _assistantTTSEndTimestamp
@property (nonatomic) BOOL beginSeek; // ivar: _beginSeek
@property (retain, nonatomic) NSString *commandID; // ivar: _commandID
@property (retain, nonatomic) NSString *commandSequenceUUID; // ivar: _commandSequenceUUID
@property (nonatomic) CGFloat commandTimeout; // ivar: _commandTimeout
@property (retain, nonatomic) NSString *contentItemID; // ivar: _contentItemID
@property (retain, nonatomic) NSString *contextID; // ivar: _contextID
@property (retain, nonatomic) NSString *desiredSessionID; // ivar: _desiredSessionID
@property (retain, nonatomic) NSString *destinationAppDisplayID; // ivar: _destinationAppDisplayID
@property (retain, nonatomic) NSData *destinationDeviceUIDs; // ivar: _destinationDeviceUIDs
@property (nonatomic) BOOL endSeek; // ivar: _endSeek
@property (retain, nonatomic) NSString *eventNoticeIdentifier; // ivar: _eventNoticeIdentifier
@property (retain, nonatomic) NSString *eventNoticeType; // ivar: _eventNoticeType
@property (nonatomic) BOOL externalPlayerCommand; // ivar: _externalPlayerCommand
@property (nonatomic) BOOL hasAlwaysIgnoreDuringCall;
@property (nonatomic) BOOL hasAlwaysIgnoreDuringSharePlay;
@property (nonatomic) BOOL hasAssistantCommandSendTimestamp;
@property (nonatomic) BOOL hasAssistantTTSEndTimestamp;
@property (nonatomic) BOOL hasBeginSeek;
@property (readonly, nonatomic) BOOL hasCommandID;
@property (readonly, nonatomic) BOOL hasCommandSequenceUUID;
@property (nonatomic) BOOL hasCommandTimeout;
@property (readonly, nonatomic) BOOL hasContentItemID;
@property (readonly, nonatomic) BOOL hasContextID;
@property (readonly, nonatomic) BOOL hasDesiredSessionID;
@property (readonly, nonatomic) BOOL hasDestinationAppDisplayID;
@property (readonly, nonatomic) BOOL hasDestinationDeviceUIDs;
@property (nonatomic) BOOL hasEndSeek;
@property (readonly, nonatomic) BOOL hasEventNoticeIdentifier;
@property (readonly, nonatomic) BOOL hasEventNoticeType;
@property (nonatomic) BOOL hasExternalPlayerCommand;
@property (readonly, nonatomic) BOOL hasHomeKitUserIdentifier;
@property (readonly, nonatomic) BOOL hasInsertAfterContentItemID;
@property (readonly, nonatomic) BOOL hasInsertBeforeContentItemID;
@property (readonly, nonatomic) BOOL hasLanguageOption;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasNegative;
@property (readonly, nonatomic) BOOL hasNowPlayingContentItemID;
@property (nonatomic) BOOL hasOriginatedFromRemoteDevice;
@property (readonly, nonatomic) BOOL hasOriginatingDeviceUID;
@property (readonly, nonatomic) BOOL hasPlaybackAuthorizationToken;
@property (nonatomic) BOOL hasPlaybackPosition;
@property (readonly, nonatomic) BOOL hasPlaybackQueueContext;
@property (nonatomic) BOOL hasPlaybackQueueDestinationOffset;
@property (nonatomic) BOOL hasPlaybackQueueInsertionPosition;
@property (nonatomic) BOOL hasPlaybackQueueOffset;
@property (nonatomic) BOOL hasPlaybackRate;
@property (readonly, nonatomic) BOOL hasPlaybackSession;
@property (readonly, nonatomic) BOOL hasPlaybackSessionFilePath;
@property (readonly, nonatomic) BOOL hasPlaybackSessionIdentifier;
@property (readonly, nonatomic) BOOL hasPlaybackSessionMetadata;
@property (nonatomic) BOOL hasPlaybackSessionPriority;
@property (readonly, nonatomic) BOOL hasPlaybackSessionRevision;
@property (readonly, nonatomic) BOOL hasPlaybackSessionType;
@property (nonatomic) BOOL hasPreservesQueueEndAction;
@property (nonatomic) BOOL hasPreservesRepeatMode;
@property (nonatomic) BOOL hasPreservesShuffleMode;
@property (nonatomic) BOOL hasQueueEndAction;
@property (readonly, nonatomic) BOOL hasRadioStationHash;
@property (nonatomic) BOOL hasRadioStationID;
@property (nonatomic) BOOL hasRating;
@property (readonly, nonatomic) BOOL hasRemoteControlInterface;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) BOOL hasReplaceIntent;
@property (nonatomic) BOOL hasRequestDefermentToPlaybackQueuePosition;
@property (nonatomic) BOOL hasSendOptions;
@property (readonly, nonatomic) BOOL hasSenderID;
@property (readonly, nonatomic) BOOL hasSharedPlaybackSessionIdentifier;
@property (nonatomic) BOOL hasShouldBeginRadioPlayback;
@property (nonatomic) BOOL hasShouldOverrideManuallyCuratedQueue;
@property (nonatomic) BOOL hasShuffleMode;
@property (readonly, nonatomic) BOOL hasSiriSearchDataSetIdentifier;
@property (readonly, nonatomic) BOOL hasSiriTurnIdentifier;
@property (nonatomic) BOOL hasSkipInterval;
@property (readonly, nonatomic) BOOL hasSourceID;
@property (readonly, nonatomic) BOOL hasStationURL;
@property (readonly, nonatomic) BOOL hasSystemAppPlaybackQueueData;
@property (nonatomic) BOOL hasTrackID;
@property (nonatomic) BOOL hasTrueCompletion;
@property (readonly, nonatomic) BOOL hasUserIdentityData;
@property (nonatomic) BOOL hasVerifySupportedCommands;
@property (retain, nonatomic) NSString *homeKitUserIdentifier; // ivar: _homeKitUserIdentifier
@property (retain, nonatomic) NSString *insertAfterContentItemID; // ivar: _insertAfterContentItemID
@property (retain, nonatomic) NSString *insertBeforeContentItemID; // ivar: _insertBeforeContentItemID
@property (retain, nonatomic) NSData *languageOption; // ivar: _languageOption
@property (retain, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (nonatomic) BOOL negative; // ivar: _negative
@property (retain, nonatomic) NSString *nowPlayingContentItemID; // ivar: _nowPlayingContentItemID
@property (nonatomic) BOOL originatedFromRemoteDevice; // ivar: _originatedFromRemoteDevice
@property (retain, nonatomic) NSString *originatingDeviceUID; // ivar: _originatingDeviceUID
@property (retain, nonatomic) NSString *playbackAuthorizationToken; // ivar: _playbackAuthorizationToken
@property (nonatomic) CGFloat playbackPosition; // ivar: _playbackPosition
@property (retain, nonatomic) NSData *playbackQueueContext; // ivar: _playbackQueueContext
@property (nonatomic) int playbackQueueDestinationOffset; // ivar: _playbackQueueDestinationOffset
@property (nonatomic) int playbackQueueInsertionPosition; // ivar: _playbackQueueInsertionPosition
@property (nonatomic) int playbackQueueOffset; // ivar: _playbackQueueOffset
@property (nonatomic) float playbackRate; // ivar: _playbackRate
@property (retain, nonatomic) NSData *playbackSession; // ivar: _playbackSession
@property (retain, nonatomic) NSString *playbackSessionFilePath; // ivar: _playbackSessionFilePath
@property (retain, nonatomic) NSString *playbackSessionIdentifier; // ivar: _playbackSessionIdentifier
@property (retain, nonatomic) NSData *playbackSessionMetadata; // ivar: _playbackSessionMetadata
@property (nonatomic) int playbackSessionPriority; // ivar: _playbackSessionPriority
@property (retain, nonatomic) NSString *playbackSessionRevision; // ivar: _playbackSessionRevision
@property (retain, nonatomic) NSString *playbackSessionType; // ivar: _playbackSessionType
@property (nonatomic) BOOL preservesQueueEndAction; // ivar: _preservesQueueEndAction
@property (nonatomic) BOOL preservesRepeatMode; // ivar: _preservesRepeatMode
@property (nonatomic) BOOL preservesShuffleMode; // ivar: _preservesShuffleMode
@property (nonatomic) int queueEndAction; // ivar: _queueEndAction
@property (retain, nonatomic) NSString *radioStationHash; // ivar: _radioStationHash
@property (nonatomic) NSInteger radioStationID; // ivar: _radioStationID
@property (nonatomic) float rating; // ivar: _rating
@property (retain, nonatomic) NSString *remoteControlInterface; // ivar: _remoteControlInterface
@property (nonatomic) int repeatMode; // ivar: _repeatMode
@property (nonatomic) int replaceIntent; // ivar: _replaceIntent
@property (nonatomic) BOOL requestDefermentToPlaybackQueuePosition; // ivar: _requestDefermentToPlaybackQueuePosition
@property (nonatomic) int sendOptions; // ivar: _sendOptions
@property (retain, nonatomic) NSString *senderID; // ivar: _senderID
@property (retain, nonatomic) NSString *sharedPlaybackSessionIdentifier; // ivar: _sharedPlaybackSessionIdentifier
@property (nonatomic) BOOL shouldBeginRadioPlayback; // ivar: _shouldBeginRadioPlayback
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue; // ivar: _shouldOverrideManuallyCuratedQueue
@property (nonatomic) int shuffleMode; // ivar: _shuffleMode
@property (retain, nonatomic) NSString *siriSearchDataSetIdentifier; // ivar: _siriSearchDataSetIdentifier
@property (retain, nonatomic) NSString *siriTurnIdentifier; // ivar: _siriTurnIdentifier
@property (nonatomic) float skipInterval; // ivar: _skipInterval
@property (retain, nonatomic) NSString *sourceID; // ivar: _sourceID
@property (retain, nonatomic) NSString *stationURL; // ivar: _stationURL
@property (retain, nonatomic) NSData *systemAppPlaybackQueueData; // ivar: _systemAppPlaybackQueueData
@property (nonatomic) NSUInteger trackID; // ivar: _trackID
@property (nonatomic) BOOL trueCompletion; // ivar: _trueCompletion
@property (retain, nonatomic) NSData *userIdentityData; // ivar: _userIdentityData
@property (nonatomic) BOOL verifySupportedCommands; // ivar: _verifySupportedCommands


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)playbackSessionPriorityAsString:(int)arg0 ;
-(id)queueEndActionAsString:(int)arg0 ;
-(id)repeatModeAsString:(int)arg0 ;
-(id)replaceIntentAsString:(int)arg0 ;
-(id)sendOptionsAsString:(int)arg0 ;
-(id)shuffleModeAsString:(int)arg0 ;
-(int)StringAsPlaybackSessionPriority:(id)arg0 ;
-(int)StringAsQueueEndAction:(id)arg0 ;
-(int)StringAsRepeatMode:(id)arg0 ;
-(int)StringAsReplaceIntent:(id)arg0 ;
-(int)StringAsSendOptions:(id)arg0 ;
-(int)StringAsShuffleMode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif