// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRNOWPLAYINGINFOPROTOBUF_H
#define _MRNOWPLAYINGINFOPROTOBUF_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface _MRNowPlayingInfoProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *album; // ivar: _album
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) NSData *artworkDataDigest; // ivar: _artworkDataDigest
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) BOOL hasAlbum;
@property (readonly, nonatomic) BOOL hasArtist;
@property (readonly, nonatomic) BOOL hasArtworkDataDigest;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasElapsedTime;
@property (nonatomic) BOOL hasIsAdvertisement;
@property (nonatomic) BOOL hasIsAlwaysLive;
@property (nonatomic) BOOL hasIsExplicitTrack;
@property (nonatomic) BOOL hasIsMusicApp;
@property (nonatomic) BOOL hasPlaybackRate;
@property (readonly, nonatomic) BOOL hasRadioStationHash;
@property (nonatomic) BOOL hasRadioStationIdentifier;
@property (readonly, nonatomic) BOOL hasRadioStationName;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasUniqueIdentifier;
@property (nonatomic) BOOL isAdvertisement; // ivar: _isAdvertisement
@property (nonatomic) BOOL isAlwaysLive; // ivar: _isAlwaysLive
@property (nonatomic) BOOL isExplicitTrack; // ivar: _isExplicitTrack
@property (nonatomic) BOOL isMusicApp; // ivar: _isMusicApp
@property (nonatomic) float playbackRate; // ivar: _playbackRate
@property (retain, nonatomic) NSString *radioStationHash; // ivar: _radioStationHash
@property (nonatomic) NSInteger radioStationIdentifier; // ivar: _radioStationIdentifier
@property (retain, nonatomic) NSString *radioStationName; // ivar: _radioStationName
@property (nonatomic) int repeatMode; // ivar: _repeatMode
@property (nonatomic) int shuffleMode; // ivar: _shuffleMode
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)repeatModeAsString:(int)arg0 ;
-(id)shuffleModeAsString:(int)arg0 ;
-(int)StringAsRepeatMode:(id)arg0 ;
-(int)StringAsShuffleMode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif