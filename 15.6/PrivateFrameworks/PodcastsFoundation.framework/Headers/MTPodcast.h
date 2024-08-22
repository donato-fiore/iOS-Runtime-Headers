// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTPODCAST_H
#define MTPODCAST_H

@class NSManagedObject, NSString, NSUUID, NSSet, NSData;
@protocol IMMetricsDataSource;


#import "MTChannel.h"
#import "MTSyncInfo.h"

@interface MTPodcast : NSManagedObject <IMMetricsDataSource>



@property (nonatomic) CGFloat addedDate;
@property (retain, nonatomic) NSString *artworkPrimaryColor;
@property (retain, nonatomic) NSString *author;
@property (readonly, nonatomic) BOOL autoDownload;
@property (nonatomic) BOOL autoDownloadEnabled;
@property (nonatomic) int autoDownloadType;
@property (retain, nonatomic) NSUUID *bootstrapGeneration;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) MTChannel *channel;
@property (nonatomic) NSInteger channelStoreId;
@property (nonatomic) NSInteger consecutiveFeedFetchErrors;
@property (nonatomic, readonly) BOOL currentEpisodeLimitAllowsAutomaticDownloads;
@property (nonatomic) NSInteger darkCount;
@property (nonatomic) NSInteger darkCountLocal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger deletePlayedEpisodes;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayType;
@property (nonatomic) CGFloat downloadedDate;
@property (nonatomic) NSInteger downloadedEpisodesCount;
@property (nonatomic) NSInteger downloadedUnplayedEpisodesCount;
@property (nonatomic) NSInteger episodeLimit;
@property (retain, nonatomic) NSSet *episodes;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic) CGFloat feedChangedDate;
@property (retain, nonatomic) NSString *feedURL;
@property (copy, nonatomic) NSString *feedUniquenessHash;
@property (readonly, nonatomic) BOOL feedUpdateNeedsRetry;
@property (nonatomic) NSInteger flags;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidden;
@property (nonatomic) int hidesPlayedEpisodes;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSData *implicitFollowsUnknownSyncProperties;
@property (readonly, nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL isHiddenOrImplicitlyFollowed;
@property (nonatomic) BOOL isImplicitlyFollowed;
@property (retain, nonatomic) NSString *itemDescription;
@property (nonatomic) NSInteger keepEpisodes;
@property (nonatomic) CGFloat lastDatePlayed;
@property (nonatomic) CGFloat lastDismissedEpisodeUpsellBannerDate;
@property (nonatomic) CGFloat lastFetchedDate;
@property (nonatomic) CGFloat lastImplicitlyFollowedDate;
@property (nonatomic) CGFloat lastStoreEpisodesInfoCheckDate;
@property (nonatomic) CGFloat lastStorePodcastInfoCheckDate;
@property (nonatomic) CGFloat lastTouchDate;
@property (nonatomic) NSInteger libraryEpisodesCount;
@property (nonatomic) CGFloat modifiedDate;
@property (nonatomic) NSInteger newEpisodesCount;
@property (nonatomic) NSInteger newTrailersCount;
@property (retain, nonatomic) NSString *nextEpisodeUuid;
@property (copy, nonatomic) NSString *nextSyncToken;
@property (nonatomic) BOOL notifications;
@property (nonatomic) NSInteger offerTypes;
@property (nonatomic) BOOL orphanedFromCloud;
@property (readonly, nonatomic) BOOL playbackNewestToOldest;
@property (retain, nonatomic) NSSet *playlistSettings;
@property (retain, nonatomic) NSSet *playlists;
@property (nonatomic) NSInteger podcastPID;
@property (retain, nonatomic) NSString *provider;
@property (nonatomic) NSInteger savedEpisodesCount;
@property (nonatomic) NSInteger savedUnplayedEpisodesCount;
@property (nonatomic, readonly) BOOL shouldBeDeleted;
@property (nonatomic) BOOL showPlacardForOrphanedFromCloud;
@property (nonatomic) BOOL showPlacardForRemovePlayedEpisodes;
@property (nonatomic) BOOL showPlacardForSavedEpisodes;
@property (retain, nonatomic) NSString *showSpecificUpsellCopy;
@property (retain, nonatomic) NSString *showTypeInFeed;
@property (nonatomic) NSInteger showTypeSetting;
@property (readonly, nonatomic) BOOL sortAscending;
@property (nonatomic) NSInteger sortOrder;
@property (retain, nonatomic) NSString *storeCleanURL;
@property (nonatomic) NSInteger storeCollectionId;
@property (retain, nonatomic) NSString *storeShortURL;
@property (nonatomic) BOOL subscribed;
@property (readonly) Class superclass;
@property (retain, nonatomic) MTSyncInfo *syncInfo;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *uberBackgroundImageURL;
@property (retain, nonatomic) NSString *uberBackgroundJoeColor;
@property (nonatomic) CGFloat updateAvg;
@property (nonatomic) NSInteger updateInterval;
@property (nonatomic) CGFloat updateStdDev;
@property (nonatomic) CGFloat updatedDate;
@property (retain, nonatomic) NSString *updatedFeedURL;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *webpageURL;


+(BOOL)isRedirectURL:(id)arg0 ;
+(BOOL)sortOrderAscForShowType:(NSInteger)arg0 ;
+(CGFloat)defaultUpdateInterval;
+(NSInteger)defaultShowType;
+(NSInteger)showTypeFromString:(id)arg0 ;
+(NSInteger)storeCollectionIdForRedirectURL:(id)arg0 ;
+(NSUInteger)totalUnplayedCount;
+(id)_predicateForShowsWithPlayableFreeEpisodes;
+(id)predicateForAreMediaAPI:(BOOL)arg0 ;
+(id)predicateForAutoDownloadEnabled;
+(id)predicateForAutoDownloadEnabled:(BOOL)arg0 ;
+(id)predicateForHasBeenSynced:(BOOL)arg0 ;
+(id)predicateForHiddenOrImplicitlyFollowedPodcasts;
+(id)predicateForHiddenPodcasts;
+(id)predicateForIdentifer:(id)arg0 ;
+(id)predicateForNotHiddenNotImplicitlyFollowedPodcasts;
+(id)predicateForNotHiddenPodcasts;
+(id)predicateForNotImplicitlyFollowedPodcasts;
+(id)predicateForNotImplicitlyFollowedPodcastsWithChannelStoreId:(NSInteger)arg0 ;
+(id)predicateForNotSubscribedAndNotHiddenAndNotImplicitlyFollowed;
+(id)predicateForPaidSubscriptionActive:(BOOL)arg0 ;
+(id)predicateForPeriodicallyUpdatablePodcasts;
+(id)predicateForPodcastStoreId:(NSInteger)arg0 ;
+(id)predicateForPodcastUUID:(id)arg0 ;
+(id)predicateForPodcastUuids:(id)arg0 ;
+(id)predicateForPodcastWithFeedUrl:(id)arg0 ;
+(id)predicateForPodcastWithPodcastPID:(NSInteger)arg0 ;
+(id)predicateForPodcastWithTitle:(id)arg0 ;
+(id)predicateForPodcastsFetchedBefore:(id)arg0 ;
+(id)predicateForPodcastsFollowedSince:(id)arg0 ;
+(id)predicateForPodcastsNeedingRetry:(BOOL)arg0 ;
+(id)predicateForPodcastsUpdatedBefore:(id)arg0 ;
+(id)predicateForPodcastsWithBookmarkedEpisodes;
+(id)predicateForPodcastsWithDownloadedEpisodes;
+(id)predicateForPodcastsWithLibraryEpisodes;
+(id)predicateForPodcastsWithUnplayedBookmarkedEpisodes;
+(id)predicateForPodcastsWithUnplayedDownloadedEpisodes;
+(id)predicateForSubscribedAndNotHidden;
+(id)predicateForSubscribedAndNotHiddenAndNotImplicitlyFollowed;
+(id)predicateForSubscribedPodcasts;
+(id)productURLForStoreCollectionId:(NSInteger)arg0 storeTrackId:(NSInteger)arg1 ;
+(id)redirectURLForStoreCollectionId:(NSInteger)arg0 ;
+(id)userDefaultPropertiesAffectingPredicates;
-(BOOL)isPastAutodownloadOrEpisodeLimitDark;
-(BOOL)isSerialShowTypeInFeed;
-(BOOL)isShareable;
-(BOOL)requestsAreNonAppInitiated;
-(CGFloat)calculatedUpdateInterval;
-(NSInteger)mt_syncID;
-(NSInteger)showTypeUserSetting;
-(id)bestAvailableStoreCleanURL;
-(id)bestFeedURLExcludingRedirectURL:(BOOL)arg0 ;
-(id)currentFeedURL;
-(id)displayURL;
-(id)earliestDateForFeedFetch:(id)arg0 ;
-(id)metricsAdditionalData;
-(id)metricsContentIdentifier;
-(id)redirectURL;
-(id)shareURL;
-(id)twitterShareURL;
-(id)updatedAtString;
-(void)updateIsHiddenOrImplicitlyFollowed;
-(void)updateLastImplicitlyFollowedDate;
-(void)updateLastTouchDate;


@end


#endif