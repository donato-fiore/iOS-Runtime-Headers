// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTOREITEMMETADATA_H
#define MPSTOREITEMMETADATA_H

@class NSDictionary, NSDate, NSNumber, NSArray, NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPStoreArtworkRequestToken.h"
#import "MPStoreItemMetadata.h"

@interface MPStoreItemMetadata : NSObject <NSCopying, NSSecureCoding>

 {
    NSDictionary *_downloadAssetDictionary;
    NSDictionary *_downloadMetadataDictionary;
    NSDictionary *_storeMusicAPIDictionary;
    NSDate *_expirationDate;
    BOOL _hasOverrideChildStorePlatformDictionaries;
    NSNumber *_hasSubscriptionOffer;
    NSArray *_overrideChildStorePlatformDictionaries;
    NSDictionary *_storePlatformDictionary;
}


@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) id *artistStoreID;
@property (readonly, copy, nonatomic) NSString *artistUploadedContentType;
@property (readonly, nonatomic) MPStoreArtworkRequestToken *artworkRequestToken;
@property (readonly, copy, nonatomic) NSArray *artworkTrackIDs;
@property (readonly, nonatomic) NSArray *audioTraits;
@property (readonly, nonatomic, getter=isBeats1) BOOL beats1;
@property (readonly, copy, nonatomic) NSString *cacheableItemIdentifier;
@property (readonly, copy, nonatomic) NSArray *childStoreItemMetadatas;
@property (readonly, copy, nonatomic) NSArray *childrenStoreIDs;
@property (readonly, copy, nonatomic) NSURL *classicalURL;
@property (readonly, copy, nonatomic) NSString *cloudAlbumID;
@property (readonly, nonatomic) NSUInteger cloudID;
@property (readonly, copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (readonly, copy, nonatomic) NSString *collectionName;
@property (readonly, copy, nonatomic) id *collectionStoreID;
@property (readonly, nonatomic, getter=isCompilation) BOOL compilation;
@property (readonly, copy, nonatomic) NSString *composerName;
@property (readonly, copy, nonatomic) NSString *copyrightText;
@property (readonly, copy, nonatomic) NSString *curatorHandle;
@property (readonly, copy, nonatomic) id *curatorID;
@property (readonly, copy, nonatomic) NSString *curatorName;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSInteger discCount;
@property (readonly, nonatomic) NSInteger discNumber;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, copy, nonatomic) NSString *editorNotes;
@property (readonly, copy, nonatomic) NSDictionary *effectiveStorePlatformDictionary;
@property (readonly, copy, nonatomic) NSDate *endingAirDate;
@property (readonly, nonatomic) NSInteger episodeCount;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic) NSInteger explicitRating;
@property (readonly, copy, nonatomic) NSArray *formerStoreAdamIDs;
@property (readonly, copy, nonatomic) NSArray *genreNames;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) BOOL hasArtistBiography;
@property (readonly, nonatomic) BOOL hasLyrics;
@property (readonly, nonatomic) BOOL hasSocialPosts;
@property (readonly, nonatomic) BOOL hasSubscriptionOffer;
@property (readonly, nonatomic) BOOL hasTimeSyncedLyrics;
@property (readonly, copy, nonatomic) NSString *iTunesBrandType;
@property (readonly, copy, nonatomic) NSDictionary *importableStorePlatformDictionary;
@property (readonly, nonatomic) BOOL isChart;
@property (readonly, nonatomic) BOOL isPreorder;
@property (readonly, copy, nonatomic) NSString *itemKind;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) MPStoreArtworkRequestToken *latestAlbumArtworkRequestToken;
@property (readonly, nonatomic, getter=isLive) BOOL live;
@property (readonly, nonatomic, getter=isMasteredForiTunes) BOOL masteredForiTunes;
@property (readonly, nonatomic) NSInteger movementCount;
@property (readonly, copy, nonatomic) NSString *movementName;
@property (readonly, nonatomic) NSInteger movementNumber;
@property (readonly, copy, nonatomic) NSArray *movieClips;
@property (readonly, nonatomic) NSInteger movieClipsCount;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *nameRaw;
@property (readonly, copy, nonatomic) NSArray *offers;
@property (readonly, copy, nonatomic) MPStoreItemMetadata *parentStoreItemMetadata; // ivar: _parentStoreItemMetadata
@property (readonly, copy, nonatomic) NSString *personalMixSortKey;
@property (readonly, copy, nonatomic) NSArray *playlistIdentifiers;
@property (readonly, nonatomic) NSArray *playlistTraits;
@property (readonly, copy, nonatomic) NSString *playlistType;
@property (readonly, copy, nonatomic) NSNumber *popularity;
@property (readonly, nonatomic, getter=isPrivatePerson) BOOL privatePerson;
@property (readonly, nonatomic) NSInteger purchasedAdamID;
@property (readonly, copy, nonatomic) NSArray *radioStationEvents;
@property (readonly, nonatomic) BOOL radioStationIsSubscriptionOnly;
@property (readonly, copy, nonatomic) NSString *radioStationProviderName;
@property (readonly, copy, nonatomic) NSString *radioStationSubtype;
@property (readonly, nonatomic) NSInteger radioStationTypeID;
@property (readonly, copy, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) NSInteger seasonNumber;
@property (readonly, copy, nonatomic) NSString *shortDescriptionText;
@property (readonly, copy, nonatomic) NSString *shortEditorNotes;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSURL *shortURL;
@property (readonly, copy, nonatomic) NSNumber *shouldBookmarkPlayPosition;
@property (readonly, nonatomic) BOOL shouldReportPlayEvents;
@property (readonly, nonatomic) BOOL showComposer;
@property (readonly, copy, nonatomic) id *socialProfileID;
@property (readonly, copy, nonatomic) NSDate *startingAirDate;
@property (readonly, nonatomic) MPStoreArtworkRequestToken *stationGlyphRequestToken;
@property (readonly, copy, nonatomic) id *storeID;
@property (readonly, nonatomic, getter=isStoreRedownloadable) BOOL storeRedownloadable;
@property (readonly, nonatomic) NSInteger subscriptionAdamID;
@property (readonly, nonatomic) BOOL supportsVocalAttenuation;
@property (readonly, nonatomic) NSInteger trackCount;
@property (readonly, nonatomic) NSInteger trackNumber;
@property (readonly, nonatomic, getter=isVerifiedPerson) BOOL verifiedPerson;
@property (readonly, copy, nonatomic) NSString *versionHash;
@property (readonly, copy, nonatomic) NSString *videoSubtype;
@property (readonly, copy, nonatomic) NSString *workName;


+(BOOL)supportsSecureCoding;
+(id)artworkRequestTokenForStorePlatformArtworkValue:(id)arg0 ;
+(id)storeServerCalendar;
-(BOOL)hasMetadataForRequestReason:(NSUInteger)arg0 ;
-(id)_fetchValueFromStoreMusicAPIDictionary:(id)arg0 ;
-(id)_musicAPIDateFormatter;
-(id)_storePlatformLastModifiedDateFormatter;
-(id)_storePlatformReleaseDateFormatter;
-(id)artworkRequestTokenForEditorialArtworkKind:(id)arg0 ;
-(id)artworkRequestTokenForStorePlatformDictionary:(id)arg0 ;
-(id)artworkRequestTokenForUberArtworkKind:(id)arg0 ;
-(id)avatarArtworkRequestToken;
-(id)brickEditorialArtworkRequestToken;
-(id)childStorePlatformDictionaryForArtworkTrackID:(id)arg0 ;
-(id)childStorePlatformDictionaryForStoreID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionTextWithStyle:(id)arg0 ;
-(id)editorNotesWithStyle:(id)arg0 ;
-(id)flowcaseEditorialArtworkRequestToken;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDownloadAssetDictionary:(id)arg0 ;
-(id)initWithStoreMusicAPIDictionary:(id)arg0 ;
-(id)initWithStoreMusicAPIDictionary:(id)arg0 parentStoreItemMetadata:(id)arg1 ;
-(id)initWithStorePlatformDictionary:(id)arg0 ;
-(id)initWithStorePlatformDictionary:(id)arg0 expirationDate:(id)arg1 ;
-(id)initWithStorePlatformDictionary:(id)arg0 parentStoreItemMetadata:(id)arg1 ;
-(id)initWithStorePlatformDictionary:(id)arg0 parentStoreItemMetadata:(id)arg1 expirationDate:(id)arg2 ;
-(id)metadataByAppendingMetadata:(id)arg0 ;
-(id)metadataWithChildStorePlatformDictionaries:(id)arg0 ;
-(id)metadataWithParentMetadata:(id)arg0 ;
-(id)movieArtworkRequestToken;
-(id)stationGlyphRequestTokenForStorePlatformDictionary:(id)arg0 ;
-(id)tvEpisodeArtworkRequestToken;
-(id)tvShowArtworkRequestToken;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif