// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NMRNOWPLAYINGINFOPROTOBUF_H
#define _NMRNOWPLAYINGINFOPROTOBUF_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface _NMRNowPlayingInfoProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *album; // ivar: _album
@property (retain, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) NSData *artworkDataDigest; // ivar: _artworkDataDigest
@property (retain, nonatomic) NSString *artworkURL; // ivar: _artworkURL
@property (retain, nonatomic) NSData *collectionInfoData; // ivar: _collectionInfoData
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) BOOL hasAlbum;
@property (readonly, nonatomic) BOOL hasArtist;
@property (readonly, nonatomic) BOOL hasArtworkDataDigest;
@property (readonly, nonatomic) BOOL hasArtworkURL;
@property (readonly, nonatomic) BOOL hasCollectionInfoData;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasElapsedTime;
@property (nonatomic) BOOL hasIsAdvertisement;
@property (nonatomic) BOOL hasIsAlwaysLive;
@property (nonatomic) BOOL hasIsExplicitTrack;
@property (nonatomic) BOOL hasIsMusicApp;
@property (readonly, nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasPlaybackRate;
@property (nonatomic) BOOL hasPreferredPlaybackRate;
@property (readonly, nonatomic) BOOL hasRadioStationHash;
@property (nonatomic) BOOL hasRadioStationIdentifier;
@property (readonly, nonatomic) BOOL hasRadioStationName;
@property (nonatomic) BOOL hasRepeatMode;
@property (nonatomic) BOOL hasShuffleMode;
@property (nonatomic) BOOL hasStoreAdamID;
@property (nonatomic) BOOL hasStoreSubscriptionAdamID;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasUserInfoData;
@property (nonatomic) BOOL isAdvertisement; // ivar: _isAdvertisement
@property (nonatomic) BOOL isAlwaysLive; // ivar: _isAlwaysLive
@property (nonatomic) BOOL isExplicitTrack; // ivar: _isExplicitTrack
@property (nonatomic) BOOL isMusicApp; // ivar: _isMusicApp
@property (retain, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (nonatomic) float playbackRate; // ivar: _playbackRate
@property (nonatomic) float preferredPlaybackRate; // ivar: _preferredPlaybackRate
@property (retain, nonatomic) NSString *radioStationHash; // ivar: _radioStationHash
@property (nonatomic) NSInteger radioStationIdentifier; // ivar: _radioStationIdentifier
@property (retain, nonatomic) NSString *radioStationName; // ivar: _radioStationName
@property (nonatomic) int repeatMode; // ivar: _repeatMode
@property (nonatomic) int shuffleMode; // ivar: _shuffleMode
@property (nonatomic) NSInteger storeAdamID; // ivar: _storeAdamID
@property (nonatomic) NSInteger storeSubscriptionAdamID; // ivar: _storeSubscriptionAdamID
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger uniqueIdentifier; // ivar: _uniqueIdentifier
@property (retain, nonatomic) NSData *userInfoData; // ivar: _userInfoData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)validateUniqueIdentifier:(*id)arg0 error:(*id)arg1 ;
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