// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIPAUDIOBOOK_H
#define MIPAUDIOBOOK_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "MIPAlbum.h"
#import "MIPArtist.h"
#import "MIPGenre.h"
#import "MIPPlaybackInfo.h"

@interface MIPAudiobook : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) MIPAlbum *album; // ivar: _album
@property (retain, nonatomic) MIPArtist *artist; // ivar: _artist
@property (nonatomic) int audioFormat; // ivar: _audioFormat
@property (retain, nonatomic) MIPArtist *composer; // ivar: _composer
@property (nonatomic) int discNumber; // ivar: _discNumber
@property (nonatomic) BOOL excludeFromShuffle; // ivar: _excludeFromShuffle
@property (retain, nonatomic) MIPGenre *genre; // ivar: _genre
@property (readonly, nonatomic) BOOL hasAlbum;
@property (readonly, nonatomic) BOOL hasArtist;
@property (nonatomic) BOOL hasAudioFormat;
@property (readonly, nonatomic) BOOL hasComposer;
@property (nonatomic) BOOL hasDiscNumber;
@property (nonatomic) BOOL hasExcludeFromShuffle;
@property (readonly, nonatomic) BOOL hasGenre;
@property (nonatomic) BOOL hasHasVideo;
@property (readonly, nonatomic) BOOL hasHlsPlaylistURL;
@property (readonly, nonatomic) BOOL hasPlaybackInfo;
@property (nonatomic) BOOL hasTrackNumber;
@property (nonatomic) BOOL hasUserRating;
@property (nonatomic) BOOL hasVideo; // ivar: _hasVideo
@property (retain, nonatomic) NSString *hlsPlaylistURL; // ivar: _hlsPlaylistURL
@property (retain, nonatomic) MIPPlaybackInfo *playbackInfo; // ivar: _playbackInfo
@property (nonatomic) int trackNumber; // ivar: _trackNumber
@property (nonatomic) int userRating; // ivar: _userRating


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