// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBPLAYMEDIAINTENT_H
#define _INPBPLAYMEDIAINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBPlayMediaIntent, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBTimestamp.h"
#import "_INPBIntentMetadata.h"
#import "_INPBMediaItemValue.h"
#import "_INPBMediaSearch.h"
#import "_INPBPrivatePlayMediaIntentData.h"

@interface _INPBPlayMediaIntent : PBCodable <_INPBPlayMediaIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *alternativeResults; // ivar: _alternativeResults
@property (readonly, nonatomic) NSUInteger alternativeResultsCount;
@property (copy, nonatomic) NSArray *audioSearchResults; // ivar: _audioSearchResults
@property (readonly, nonatomic) NSUInteger audioSearchResultsCount;
@property (retain, nonatomic) _INPBString *audiobookAuthor; // ivar: _audiobookAuthor
@property (retain, nonatomic) _INPBString *audiobookTitle; // ivar: _audiobookTitle
@property (copy, nonatomic) NSArray *buckets; // ivar: _buckets
@property (readonly, nonatomic) NSUInteger bucketsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBTimestamp *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL hasAudiobookAuthor;
@property (readonly, nonatomic) BOOL hasAudiobookTitle;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasMediaContainer;
@property (readonly, nonatomic) BOOL hasMediaSearch;
@property (readonly, nonatomic) BOOL hasMediaUserContext;
@property (readonly, nonatomic) BOOL hasMusicArtistName;
@property (nonatomic) BOOL hasParsecCategory;
@property (nonatomic) BOOL hasPlayShuffled;
@property (nonatomic) BOOL hasPlaybackQueueLocation;
@property (nonatomic) BOOL hasPlaybackRepeatMode;
@property (nonatomic) BOOL hasPlaybackSpeed;
@property (readonly, nonatomic) BOOL hasPlaylistTitle;
@property (readonly, nonatomic) BOOL hasPrivatePlayMediaIntentData;
@property (readonly, nonatomic) BOOL hasProxiedBundleIdentifier;
@property (readonly, nonatomic) BOOL hasRecoID;
@property (nonatomic) BOOL hasResumePlayback;
@property (readonly, nonatomic) BOOL hasShowTitle;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *hashedRouteUIDs; // ivar: _hashedRouteUIDs
@property (readonly, nonatomic) NSUInteger hashedRouteUIDsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBMediaItemValue *mediaContainer; // ivar: _mediaContainer
@property (copy, nonatomic) NSArray *mediaItems; // ivar: _mediaItems
@property (readonly, nonatomic) NSUInteger mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch; // ivar: _mediaSearch
@property (retain, nonatomic) _INPBString *mediaUserContext; // ivar: _mediaUserContext
@property (retain, nonatomic) _INPBString *musicArtistName; // ivar: _musicArtistName
@property (nonatomic) int parsecCategory; // ivar: _parsecCategory
@property (nonatomic) BOOL playShuffled; // ivar: _playShuffled
@property (nonatomic) int playbackQueueLocation; // ivar: _playbackQueueLocation
@property (nonatomic) int playbackRepeatMode; // ivar: _playbackRepeatMode
@property (nonatomic) CGFloat playbackSpeed; // ivar: _playbackSpeed
@property (retain, nonatomic) _INPBString *playlistTitle; // ivar: _playlistTitle
@property (retain, nonatomic) _INPBPrivatePlayMediaIntentData *privatePlayMediaIntentData; // ivar: _privatePlayMediaIntentData
@property (copy, nonatomic) NSString *proxiedBundleIdentifier; // ivar: _proxiedBundleIdentifier
@property (copy, nonatomic) NSString *recoID; // ivar: _recoID
@property (nonatomic) BOOL resumePlayback; // ivar: _resumePlayback
@property (retain, nonatomic) _INPBString *showTitle; // ivar: _showTitle
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)bucketType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)alternativeResultsAtIndex:(NSUInteger)arg0 ;
-(id)audioSearchResultsAtIndex:(NSUInteger)arg0 ;
-(id)bucketAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)hashedRouteUIDsAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mediaItemsAtIndex:(NSUInteger)arg0 ;
-(id)parsecCategoryAsString:(int)arg0 ;
-(id)playbackQueueLocationAsString:(int)arg0 ;
-(id)playbackRepeatModeAsString:(int)arg0 ;
-(int)StringAsParsecCategory:(id)arg0 ;
-(int)StringAsPlaybackQueueLocation:(id)arg0 ;
-(int)StringAsPlaybackRepeatMode:(id)arg0 ;
-(void)addAlternativeResults:(id)arg0 ;
-(void)addAudioSearchResults:(id)arg0 ;
-(void)addBucket:(id)arg0 ;
-(void)addHashedRouteUIDs:(id)arg0 ;
-(void)addMediaItems:(id)arg0 ;
-(void)clearAlternativeResults;
-(void)clearAudioSearchResults;
-(void)clearBuckets;
-(void)clearHashedRouteUIDs;
-(void)clearMediaItems;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif