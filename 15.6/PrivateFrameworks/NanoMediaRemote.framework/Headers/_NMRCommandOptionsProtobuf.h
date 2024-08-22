// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NMRCOMMANDOPTIONSPROTOBUF_H
#define _NMRCOMMANDOPTIONSPROTOBUF_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface _NMRCommandOptionsProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *contentItemID; // ivar: _contentItemID
@property (retain, nonatomic) NSString *contextID; // ivar: _contextID
@property (retain, nonatomic) NSString *destinationAppDisplayID; // ivar: _destinationAppDisplayID
@property (nonatomic) BOOL externalPlayerCommand; // ivar: _externalPlayerCommand
@property (readonly, nonatomic) BOOL hasContentItemID;
@property (readonly, nonatomic) BOOL hasContextID;
@property (readonly, nonatomic) BOOL hasDestinationAppDisplayID;
@property (nonatomic) BOOL hasExternalPlayerCommand;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasNegative;
@property (nonatomic) BOOL hasPlaybackPosition;
@property (nonatomic) BOOL hasPlaybackQueueInsertionPosition;
@property (nonatomic) BOOL hasPlaybackRate;
@property (nonatomic) BOOL hasQueueEndAction;
@property (readonly, nonatomic) BOOL hasRadioStationHash;
@property (nonatomic) BOOL hasRadioStationID;
@property (nonatomic) BOOL hasRating;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) BOOL hasRequestDefermentToPlaybackQueuePosition;
@property (nonatomic) BOOL hasSendOptions;
@property (nonatomic) BOOL hasShouldBeginRadioPlayback;
@property (nonatomic) BOOL hasShouldOverrideManuallyCuratedQueue;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) BOOL hasSkipInterval;
@property (readonly, nonatomic) BOOL hasSourceID;
@property (readonly, nonatomic) BOOL hasStationURL;
@property (readonly, nonatomic) BOOL hasSystemAppPlaybackQueueData;
@property (nonatomic) BOOL hasTrackID;
@property (retain, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (nonatomic) BOOL negative; // ivar: _negative
@property (nonatomic) CGFloat playbackPosition; // ivar: _playbackPosition
@property (nonatomic) int playbackQueueInsertionPosition; // ivar: _playbackQueueInsertionPosition
@property (nonatomic) float playbackRate; // ivar: _playbackRate
@property (nonatomic) int queueEndAction; // ivar: _queueEndAction
@property (retain, nonatomic) NSString *radioStationHash; // ivar: _radioStationHash
@property (nonatomic) NSInteger radioStationID; // ivar: _radioStationID
@property (nonatomic) float rating; // ivar: _rating
@property (nonatomic) int repeatMode; // ivar: _repeatMode
@property (nonatomic) BOOL requestDefermentToPlaybackQueuePosition; // ivar: _requestDefermentToPlaybackQueuePosition
@property (nonatomic) unsigned int sendOptions; // ivar: _sendOptions
@property (nonatomic) BOOL shouldBeginRadioPlayback; // ivar: _shouldBeginRadioPlayback
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue; // ivar: _shouldOverrideManuallyCuratedQueue
@property (nonatomic) int shuffleMode; // ivar: _shuffleMode
@property (nonatomic) float skipInterval; // ivar: _skipInterval
@property (retain, nonatomic) NSString *sourceID; // ivar: _sourceID
@property (retain, nonatomic) NSString *stationURL; // ivar: _stationURL
@property (retain, nonatomic) NSData *systemAppPlaybackQueueData; // ivar: _systemAppPlaybackQueueData
@property (nonatomic) NSUInteger trackID; // ivar: _trackID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)queueEndActionAsString:(int)arg0 ;
-(id)repeatModeAsString:(int)arg0 ;
-(id)shuffleModeAsString:(int)arg0 ;
-(int)StringAsQueueEndAction:(id)arg0 ;
-(int)StringAsRepeatMode:(id)arg0 ;
-(int)StringAsShuffleMode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif