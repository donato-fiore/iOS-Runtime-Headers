// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLDOWNLOADMETADATA_H
#define BLDOWNLOADMETADATA_H

@class NSMutableDictionary, NSLock, NSArray, NSString, NSURL, NSDictionary, NSNumber, NSData, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BLDownloadMetadata : NSObject <NSCopying>

 {
    NSMutableDictionary *_dictionary;
    NSInteger _keyStyle;
    NSLock *_lock;
}


@property (readonly, getter=hasHDR) BOOL HDR;
@property (readonly) NSArray *MD5HashStrings;
@property (retain) NSString *appleID;
@property NSUInteger artistIdentifier;
@property (copy) NSString *artistName;
@property (getter=isAutomaticDownload) BOOL automaticDownload;
@property (retain) NSURL *cancelDownloadURL;
@property (retain) NSString *copyright;
@property (getter=isDeviceBasedVPP) BOOL deviceBasedVPP;
@property (retain) NSDictionary *dictionary;
@property (retain) NSString *downloadKey;
@property (readonly) NSNumber *downloaderAccountIdentifier;
@property (retain) NSData *epubRightsData;
@property (retain) NSString *fileExtension;
@property (retain) NSURL *fullSizeImageURL;
@property (retain) NSString *genre;
@property NSUInteger genreIdentifier;
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
@property (retain) NSString *sortArtistName;
@property (retain) NSString *sortCollectionName;
@property (retain) NSString *sortTitle;
@property (retain) NSString *subtitle;
@property (retain) NSURL *thumbnailImageURL;
@property (retain) NSString *title;
@property (retain) NSString *transactionIdentifier;


-(BOOL)isCompilation;
-(BOOL)isExplicitContent;
-(BOOL)isHighDefinition;
-(BOOL)isMusicShow;
-(BOOL)isRental;
-(BOOL)isSample;
-(BOOL)isSharedResource;
-(NSUInteger)collectionIdentifier;
-(NSUInteger)composerIdentifier;
-(id)_dateValueForValue:(id)arg0 ;
-(id)_newDateFormatter;
-(id)_newImageCollectionWithURLString:(id)arg0 ;
-(id)_stringValueForValue:(id)arg0 ;
-(id)_thumbnailArtworkImage;
-(id)_urlValueForValue:(id)arg0 ;
-(id)_valueForFirstAvailableTopLevelKey:(id)arg0 ;
-(id)betaExternalVersionIdentifier;
-(id)bundleIdentifier;
-(id)cloudIdentifier;
-(id)collectionArtistName;
-(id)collectionIndexInCollectionGroup;
-(id)collectionName;
-(id)composerName;
-(id)contentRating;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)downloadPermalink;
-(id)durationInMilliseconds;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)indexInCollection;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)longSeasonDescription;
-(id)movementCount;
-(id)movementName;
-(id)movementNumber;
-(id)networkName;
-(id)numberOfCollectionsInCollectionGroup;
-(id)numberOfItemsInCollection;
-(id)podcastEpisodeGUID;
-(id)podcastFeedURL;
-(id)podcastType;
-(id)publicationVersion;
-(id)purchaseDate;
-(id)racGUID;
-(id)seasonNumber;
-(id)seriesName;
-(id)showComposer;
-(id)thumbnailImageCollection;
-(id)valueForFirstAvailableKey:(id)arg0 ;
-(id)valueForMetadataKey:(id)arg0 ;
-(id)variantIdentifier;
-(id)videoDetailsDictionary;
-(id)viewStoreItemURL;
-(id)workName;
-(void)_setValue:(id)arg0 forTopLevelKey:(id)arg1 ;
-(void)_setValueCopy:(id)arg0 forMetadataKey:(id)arg1 ;
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
-(void)setDownloadPermalink:(id)arg0 ;
-(void)setDurationInMilliseconds:(id)arg0 ;
-(void)setEpisodeIdentifier:(id)arg0 ;
-(void)setEpisodeSortIdentifier:(id)arg0 ;
-(void)setExplicitContent:(BOOL)arg0 ;
-(void)setHighDefinition:(BOOL)arg0 ;
-(void)setIndexInCollection:(id)arg0 ;
-(void)setLongSeasonDescription:(id)arg0 ;
-(void)setMusicShow:(BOOL)arg0 ;
-(void)setNetworkName:(id)arg0 ;
-(void)setNumberOfCollectionsInCollectionGroup:(id)arg0 ;
-(void)setNumberOfItemsInCollection:(id)arg0 ;
-(void)setPodcastEpisodeGUID:(id)arg0 ;
-(void)setPodcastFeedURL:(id)arg0 ;
-(void)setPodcastType:(id)arg0 ;
-(void)setPublicationVersion:(id)arg0 ;
-(void)setPurchaseDate:(id)arg0 ;
-(void)setRacGUID:(id)arg0 ;
-(void)setRental:(BOOL)arg0 ;
-(void)setSample:(BOOL)arg0 ;
-(void)setSeasonNumber:(id)arg0 ;
-(void)setSeriesName:(id)arg0 ;
-(void)setSharedResource:(BOOL)arg0 ;
-(void)setThumbnailNewsstandBindingEdge:(id)arg0 ;
-(void)setThumbnailNewsstandBindingType:(id)arg0 ;
-(void)setValue:(id)arg0 forMetadataKey:(id)arg1 ;
-(void)setVariantIdentifier:(id)arg0 ;
-(void)setVideoDetailsDictionary:(id)arg0 ;
-(void)setViewStoreItemURL:(id)arg0 ;


@end


#endif