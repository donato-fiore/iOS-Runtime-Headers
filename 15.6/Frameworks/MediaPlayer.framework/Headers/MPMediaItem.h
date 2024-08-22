// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIAITEM_H
#define MPMEDIAITEM_H

@class NSString, NSURL, NSArray, NSDate;


#import "MPMediaEntity.h"
#import "MPMediaItemArtwork.h"

@interface MPMediaItem : MPMediaEntity

@property (readonly, nonatomic) NSString *albumArtist;
@property (readonly, nonatomic) NSUInteger albumArtistPersistentID;
@property (readonly, nonatomic) NSUInteger albumPersistentID;
@property (readonly, nonatomic) NSString *albumTitle;
@property (readonly, nonatomic) NSUInteger albumTrackCount;
@property (readonly, nonatomic) NSUInteger albumTrackNumber;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) NSUInteger artistPersistentID;
@property (readonly, nonatomic) MPMediaItemArtwork *artwork;
@property (readonly, nonatomic) NSURL *assetURL;
@property (readonly, nonatomic) NSUInteger beatsPerMinute;
@property (readonly, nonatomic) CGFloat bookmarkTime;
@property (readonly, nonatomic) NSArray *chapters;
@property (readonly, nonatomic, getter=isCloudItem) BOOL cloudItem;
@property (readonly, nonatomic) NSString *comments;
@property (readonly, nonatomic, getter=isCompilation) BOOL compilation;
@property (readonly, nonatomic) NSString *composer;
@property (readonly, nonatomic) NSUInteger composerPersistentID;
@property (copy, nonatomic) NSDate *dateAccessed;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (readonly, nonatomic) NSDate *dateDownloaded;
@property (readonly, nonatomic) NSUInteger discCount;
@property (readonly, nonatomic) NSUInteger discNumber;
@property (readonly, nonatomic) NSString *effectiveAlbumArtist;
@property (readonly, nonatomic) CGFloat effectiveStopTime;
@property (readonly, nonatomic, getter=isExplicitItem) BOOL explicitItem;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSUInteger genrePersistentID;
@property (nonatomic) BOOL hasBeenPlayed;
@property (readonly, nonatomic) BOOL isITunesU;
@property (readonly, nonatomic) BOOL isRental;
@property (readonly, nonatomic) BOOL isUsableAsRepresentativeItem;
@property (copy, nonatomic) NSDate *lastPlayedDate;
@property (copy, nonatomic) NSDate *lastSkippedDate;
@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) NSUInteger mediaType;
@property (readonly, nonatomic) NSUInteger persistentID;
@property (readonly, nonatomic) NSUInteger playCount;
@property (nonatomic) NSUInteger playCountSinceSync;
@property (readonly, nonatomic) CGFloat playbackDuration;
@property (readonly, nonatomic) NSString *playbackStoreID;
@property (readonly, nonatomic) NSUInteger podcastPersistentID;
@property (readonly, nonatomic) NSString *podcastTitle;
@property (readonly, nonatomic, getter=isPreorder) BOOL preorder;
@property (readonly, nonatomic, getter=hasProtectedAsset) BOOL protectedAsset;
@property (readonly, nonatomic) NSUInteger rating;
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) BOOL rememberBookmarkTime;
@property (readonly, nonatomic) NSUInteger skipCount;
@property (nonatomic) NSUInteger skipCountSinceSync;
@property (readonly, nonatomic) CGFloat startTime;
@property (readonly, nonatomic) CGFloat stopTime;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *userGrouping;
@property (readonly, nonatomic) NSUInteger year;


+(BOOL)_isValidItemProperty:(id)arg0 ;
+(BOOL)canFilterByProperty:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)MPSD_mediaItemPropertiesForDownloadability;
+(id)ULIDPropertyForGroupingType:(NSInteger)arg0 ;
+(id)dynamicProperties;
+(id)fallbackTitlePropertyForGroupingType:(NSInteger)arg0 ;
+(id)itemFromModelObject:(id)arg0 ;
+(id)itemFromSong:(id)arg0 ;
+(id)persistentIDPropertyForGroupingType:(NSInteger)arg0 ;
+(id)screenshotArtworkCatalogCacheProperties;
+(id)titlePropertyForGroupingType:(NSInteger)arg0 ;
+(void)_createFilterableDictionary;
-(BOOL)MPSD_isDownloadInProgress;
-(BOOL)MPSD_isDownloadable;
-(BOOL)didSkipWithPlayedToTime:(CGFloat)arg0 ;
-(BOOL)existsInLibrary;
-(BOOL)incrementPlayCountForStopTime:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)nominalHasBeenPlayedThreshold;
-(NSUInteger)countOfChaptersOfType:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)_artworkCatalogWithArtworkType:(NSInteger)arg0 ;
-(id)_bestStoreURL;
-(id)_directStoreURL;
-(id)_libraryLinkArtist;
-(id)_libraryLinkKind;
-(id)_libraryLinkPlaylistName;
-(id)_libraryLinkURL;
-(id)chapterOfType:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(id)chapterOfType:(NSInteger)arg0 atTime:(CGFloat)arg1 ;
-(id)chaptersOfType:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMultiverseIdentifier:(id)arg0 library:(id)arg1 ;
-(id)initWithPersistentID:(NSUInteger)arg0 ;
-(id)multiverseIdentifier;
-(id)predicateForProperty:(id)arg0 ;
-(id)representativeItem;
-(id)screenshotArtworkCatalog;
-(id)valueForProperty:(id)arg0 ;
-(id)valuesForProperties:(id)arg0 ;
-(void)clearLocationProperties;
-(void)didReceiveMemoryWarning;
-(void)encodeWithCoder:(id)arg0 ;
-(void)gaplessHeuristicInfo:(*unsigned int)arg0 durationInSamples:(*NSUInteger)arg1 lastPacketsResync:(*NSUInteger)arg2 encodingDelay:(*unsigned int)arg3 encodingDrain:(*unsigned int)arg4 ;
-(void)incrementPlayCount;
-(void)incrementPlayCountForPlayingToEnd;
-(void)incrementSkipCount;
-(void)markNominalAmountHasBeenPlayed;
-(void)noteWasPlayedToTime:(CGFloat)arg0 skipped:(BOOL)arg1 ;
-(void)populateLocationPropertiesWithPath:(id)arg0 ;
-(void)populateLocationPropertiesWithPath:(id)arg0 assetProtectionType:(NSInteger)arg1 ;
-(void)populateLocationPropertiesWithPath:(id)arg0 assetProtectionType:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id)arg0 ;


@end


#endif