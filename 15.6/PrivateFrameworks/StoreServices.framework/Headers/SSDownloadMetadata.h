// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSDOWNLOADMETADATA_H
#define SSDOWNLOADMETADATA_H

@class NSMutableDictionary, NSLock, NSArray, NSData, NSString, NSURL, NSDictionary, NSNumber, NSDate;
@protocol SSXPCCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SSItemImageCollection.h"

@interface SSDownloadMetadata : NSObject <SSXPCCoding, NSSecureCoding, NSCopying>

 {
    NSMutableDictionary *_dictionary;
    NSInteger _keyStyle;
    NSLock *_lock;
}


@property (readonly, getter=hasHDR) BOOL HDR;
@property (readonly, getter=isHLS) BOOL HLS;
@property (readonly) NSArray *MD5HashStrings;
@property (readonly, retain) NSData *appReceiptData;
@property NSUInteger artistIdentifier;
@property (copy) NSString *artistName;
@property (getter=isAutomaticDownload) BOOL automaticDownload;
@property (retain) NSURL *cancelDownloadURL;
@property (readonly, getter=isContentRestricted) BOOL contentRestricted;
@property (retain) NSString *copyright;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceBasedVPP) BOOL deviceBasedVPP;
@property (retain) NSDictionary *dictionary;
@property (retain) NSString *downloadKey;
@property (readonly) NSNumber *downloaderAccountIdentifier;
@property (retain) NSData *epubRightsData;
@property (retain) NSString *fileExtension;
@property (retain) NSURL *fullSizeImageURL;
@property (retain) NSString *genre;
@property NSUInteger genreIdentifier;
@property (readonly) NSUInteger hash;
@property (copy) NSURL *hlsPlaylistURL;
@property NSUInteger itemIdentifier;
@property NSInteger keyStyle;
@property (retain) NSString *kind;
@property (retain) NSURL *launchExtrasUrl;
@property (copy) NSString *longDescription;
@property (readonly) NSNumber *numberOfBytesToHash;
@property (copy) NSString *pageProgressionDirection;
@property NSUInteger preOrderIdentifier;
@property (copy) NSString *preferredAssetFlavor;
@property (readonly, getter=isPremium) BOOL premium;
@property (readonly) NSDictionary *primaryAssetDictionary;
@property (retain) NSURL *primaryAssetURL;
@property (copy) NSString *redownloadActionParameters;
@property (getter=isRedownloadDownload) BOOL redownloadDownload;
@property (retain) NSDate *releaseDate;
@property (retain) NSString *releaseDateString;
@property (retain) NSNumber *releaseYear;
@property (copy) NSNumber *rentalID;
@property (copy) NSNumber *requestPersistentID;
@property (copy) id *requiredDeviceCapabilities;
@property (copy) NSString *shortDescription;
@property BOOL shouldDownloadAutomatically;
@property (retain) NSArray *sinfs;
@property (readonly, getter=isSoftwareKind) BOOL softwareKind;
@property (retain) NSString *sortArtistName;
@property (retain) NSString *sortCollectionName;
@property (retain) NSString *sortTitle;
@property (retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) SSItemImageCollection *thumbnailImageCollection;
@property (retain) NSURL *thumbnailImageURL;
@property (retain) NSString *thumbnailNewsstandBindingEdge;
@property (retain) NSString *thumbnailNewsstandBindingType;
@property (retain) NSString *title;
@property (retain) NSString *transactionIdentifier;
@property (copy) NSURL *transitMapDataURL;
@property (getter=isTvTemplate) BOOL tvTemplate;
@property (readonly, getter=isVideosKind) BOOL videosKind;


+(BOOL)supportsSecureCoding;
+(id)_addPlaybackTypeToHLSPlaylistURLString:(id)arg0 ;
-(BOOL)artworkIsPrerendered;
-(BOOL)hasMessagesExtension;
-(BOOL)is32BitOnly;
-(BOOL)isCompilation;
-(BOOL)isExplicitContent;
-(BOOL)isHighDefinition;
-(BOOL)isMusicShow;
-(BOOL)isRental;
-(BOOL)isSample;
-(BOOL)isSharedResource;
-(BOOL)launchProhibited;
-(NSUInteger)collectionIdentifier;
-(NSUInteger)composerIdentifier;
-(NSUInteger)sagaIdentifier;
-(id)_dateValueForValue:(id)arg0 ;
-(id)_newDateFormatter;
-(id)_newImageCollectionWithURLString:(id)arg0 ;
-(id)_stringValueForValue:(id)arg0 ;
-(id)_thumbnailArtworkImage;
-(id)_urlValueForValue:(id)arg0 ;
-(id)_valueForFirstAvailableTopLevelKey:(id)arg0 ;
-(id)applicationIdentifier;
-(id)betaExternalVersionIdentifier;
-(id)bundleIdentifier;
-(id)cloudIdentifier;
-(id)collectionArtistName;
-(id)collectionIndexInCollectionGroup;
-(id)collectionName;
-(id)composerName;
-(id)contentRating;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWritableMetadata;
-(id)copyXPCEncoding;
-(id)documentTargetIdentifier;
-(id)downloadPermalink;
-(id)downloadPolicy;
-(id)durationInMilliseconds;
-(id)enableExtensions;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)indexInCollection;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(id)initWithItem:(id)arg0 offer:(id)arg1 ;
-(id)initWithKind:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)longSeasonDescription;
-(id)messagesArtworkURL;
-(id)movementCount;
-(id)movementName;
-(id)movementNumber;
-(id)networkName;
-(id)newDownloadProperties;
-(id)numberOfCollectionsInCollectionGroup;
-(id)numberOfItemsInCollection;
-(id)podcastEpisodeGUID;
-(id)podcastFeedURL;
-(id)podcastType;
-(id)publicationVersion;
-(id)purchaseDate;
-(id)seasonNumber;
-(id)seriesName;
-(id)showComposer;
-(id)valueForFirstAvailableKey:(id)arg0 ;
-(id)valueForMetadataKey:(id)arg0 ;
-(id)variantIdentifier;
-(id)videoDetailsDictionary;
-(id)viewStoreItemURL;
-(id)workName;
-(void)_setValue:(id)arg0 forTopLevelKey:(id)arg1 ;
-(void)_setValueCopy:(id)arg0 forMetadataKey:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setArtworkIsPrerendered:(BOOL)arg0 ;
-(void)setBetaExternalVersionIdentifier:(id)arg0 ;
-(void)setBundleIdentifier:(id)arg0 ;
-(void)setCloudIdentifier:(id)arg0 ;
-(void)setCollectionArtistName:(id)arg0 ;
-(void)setCollectionIdentifier:(NSUInteger)arg0 ;
-(void)setCollectionIndexInCollectionGroup:(id)arg0 ;
-(void)setCollectionName:(id)arg0 ;
-(void)setCompilation:(BOOL)arg0 ;
-(void)setComposerIdentifier:(NSUInteger)arg0 ;
-(void)setComposerName:(id)arg0 ;
-(void)setContentRating:(id)arg0 ;
-(void)setDocumentTargetIdentifier:(id)arg0 ;
-(void)setDownloadPermalink:(id)arg0 ;
-(void)setDownloadPolicy:(id)arg0 ;
-(void)setDurationInMilliseconds:(id)arg0 ;
-(void)setEnableExtensions:(id)arg0 ;
-(void)setEpisodeIdentifier:(id)arg0 ;
-(void)setEpisodeSortIdentifier:(id)arg0 ;
-(void)setExplicitContent:(BOOL)arg0 ;
-(void)setHasMessagesExtension:(BOOL)arg0 ;
-(void)setHighDefinition:(BOOL)arg0 ;
-(void)setIndexInCollection:(id)arg0 ;
-(void)setLaunchProhibited:(BOOL)arg0 ;
-(void)setLongSeasonDescription:(id)arg0 ;
-(void)setMessagesArtworkURL:(id)arg0 ;
-(void)setMusicShow:(BOOL)arg0 ;
-(void)setNetworkName:(id)arg0 ;
-(void)setNumberOfCollectionsInCollectionGroup:(id)arg0 ;
-(void)setNumberOfItemsInCollection:(id)arg0 ;
-(void)setPodcastEpisodeGUID:(id)arg0 ;
-(void)setPodcastFeedURL:(id)arg0 ;
-(void)setPodcastType:(id)arg0 ;
-(void)setPublicationVersion:(id)arg0 ;
-(void)setPurchaseDate:(id)arg0 ;
-(void)setRental:(BOOL)arg0 ;
-(void)setSagaIdentifier:(NSUInteger)arg0 ;
-(void)setSample:(BOOL)arg0 ;
-(void)setSeasonNumber:(id)arg0 ;
-(void)setSeriesName:(id)arg0 ;
-(void)setSharedResource:(BOOL)arg0 ;
-(void)setValue:(id)arg0 forMetadataKey:(id)arg1 ;
-(void)setValuesFromDownload:(id)arg0 ;
-(void)setVariantIdentifier:(id)arg0 ;
-(void)setVideoDetailsDictionary:(id)arg0 ;
-(void)setViewStoreItemURL:(id)arg0 ;


@end


#endif