// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIPMOVIE_H
#define MIPMOVIE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;


#import "MIPArtist.h"

@interface MIPMovie : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) MIPArtist *artist; // ivar: _artist
@property (nonatomic) int audioLanguage; // ivar: _audioLanguage
@property (nonatomic) int audioTrackId; // ivar: _audioTrackId
@property (nonatomic) int audioTrackIndex; // ivar: _audioTrackIndex
@property (retain, nonatomic) NSString *extendedContentName; // ivar: _extendedContentName
@property (retain, nonatomic) NSData *flattenedChapterData; // ivar: _flattenedChapterData
@property (nonatomic) BOOL hasAlternateAudio; // ivar: _hasAlternateAudio
@property (readonly, nonatomic) BOOL hasArtist;
@property (nonatomic) BOOL hasAudioLanguage;
@property (nonatomic) BOOL hasAudioTrackId;
@property (nonatomic) BOOL hasAudioTrackIndex;
@property (nonatomic) BOOL hasChapterData; // ivar: _hasChapterData
@property (readonly, nonatomic) BOOL hasExtendedContentName;
@property (readonly, nonatomic) BOOL hasFlattenedChapterData;
@property (nonatomic) BOOL hasHasAlternateAudio;
@property (nonatomic) BOOL hasHasChapterData;
@property (nonatomic) BOOL hasHasSubtitles;
@property (readonly, nonatomic) BOOL hasMovieInfo;
@property (nonatomic) BOOL hasRental;
@property (nonatomic) BOOL hasRentalDuration;
@property (nonatomic) BOOL hasRentalPlaybackDuration;
@property (nonatomic) BOOL hasRentalPlaybackStartedDateTime;
@property (nonatomic) BOOL hasRentalStartedDateTime;
@property (nonatomic) BOOL hasSubtitleLanguage;
@property (nonatomic) BOOL hasSubtitleTrackIndex;
@property (nonatomic) BOOL hasSubtitles; // ivar: _hasSubtitles
@property (nonatomic) BOOL hasVideoQuality;
@property (retain, nonatomic) NSString *movieInfo; // ivar: _movieInfo
@property (nonatomic) BOOL rental; // ivar: _rental
@property (nonatomic) NSInteger rentalDuration; // ivar: _rentalDuration
@property (nonatomic) NSInteger rentalPlaybackDuration; // ivar: _rentalPlaybackDuration
@property (nonatomic) NSInteger rentalPlaybackStartedDateTime; // ivar: _rentalPlaybackStartedDateTime
@property (nonatomic) NSInteger rentalStartedDateTime; // ivar: _rentalStartedDateTime
@property (nonatomic) int subtitleLanguage; // ivar: _subtitleLanguage
@property (nonatomic) int subtitleTrackIndex; // ivar: _subtitleTrackIndex
@property (nonatomic) int videoQuality; // ivar: _videoQuality


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