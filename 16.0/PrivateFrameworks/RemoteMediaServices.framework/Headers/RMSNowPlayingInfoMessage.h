// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSNOWPLAYINGINFOMESSAGE_H
#define RMSNOWPLAYINGINFOMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface RMSNowPlayingInfoMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *albumName; // ivar: _albumName
@property (retain, nonatomic) NSString *artistName; // ivar: _artistName
@property (nonatomic) BOOL canSkipNext; // ivar: _canSkipNext
@property (nonatomic) BOOL canSkipPrevious; // ivar: _canSkipPrevious
@property (nonatomic) BOOL canWishlist; // ivar: _canWishlist
@property (nonatomic) NSUInteger databaseID; // ivar: _databaseID
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (readonly, nonatomic) BOOL hasArtistName;
@property (nonatomic) BOOL hasCanSkipNext;
@property (nonatomic) BOOL hasCanSkipPrevious;
@property (nonatomic) BOOL hasCanWishlist;
@property (nonatomic) BOOL hasChapterData; // ivar: _hasChapterData
@property (nonatomic) BOOL hasDatabaseID;
@property (nonatomic) BOOL hasHasChapterData;
@property (nonatomic) BOOL hasItemID;
@property (nonatomic) BOOL hasLikeable;
@property (nonatomic) BOOL hasLikedState;
@property (nonatomic) BOOL hasMediaKind;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) BOOL hasRevisionNumber;
@property (nonatomic) BOOL hasScrubbableState;
@property (nonatomic) BOOL hasTimeRemaining;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalDuration;
@property (readonly, nonatomic) BOOL hasTrackName;
@property (nonatomic) NSUInteger itemID; // ivar: _itemID
@property (nonatomic) BOOL likeable; // ivar: _likeable
@property (nonatomic) int likedState; // ivar: _likedState
@property (nonatomic) int mediaKind; // ivar: _mediaKind
@property (nonatomic) int playbackState; // ivar: _playbackState
@property (nonatomic) unsigned int revisionNumber; // ivar: _revisionNumber
@property (nonatomic) int scrubbableState; // ivar: _scrubbableState
@property (nonatomic) CGFloat timeRemaining; // ivar: _timeRemaining
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat totalDuration; // ivar: _totalDuration
@property (retain, nonatomic) NSString *trackName; // ivar: _trackName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif