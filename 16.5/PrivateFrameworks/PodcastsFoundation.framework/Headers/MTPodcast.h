// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPODCAST_H
#define MTPODCAST_H

@class NSManagedObject, NSString, NSUUID, NSSet, NSData;
@protocol IMMetricsDataSource;


#import "MTChannel.h"
#import "MTSyncInfo.h"

@interface MTPodcast : NSManagedObject <IMMetricsDataSource>



@property (nonatomic) CGFloat addedDate;
@property (retain, nonatomic) NSString *artworkPrimaryColor;
@property (retain, nonatomic) NSString *artworkTextPrimaryColor;
@property (retain, nonatomic) NSString *artworkTextQuaternaryColor;
@property (retain, nonatomic) NSString *artworkTextSecondaryColor;
@property (retain, nonatomic) NSString *artworkTextTertiaryColor;
@property (nonatomic, getter=isAuthenticatedDark) BOOL authenticatedDark;
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
@property (nonatomic, readonly) BOOL currentEpisodeLimitIsNextNEpisodes;
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
@property (nonatomic) BOOL feedUpdateNeedsRetry;
@property (nonatomic) NSInteger flags;
@property (nonatomic) BOOL hasBeenSynced;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidden;
@property (nonatomic) int hidesPlayedEpisodes;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSData *implicitFollowsUnknownSyncProperties;
@property (nonatomic) BOOL importing;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL isHiddenOrImplicitlyFollowed;
@property (nonatomic) BOOL isImplicitlyFollowed;
@property (retain, nonatomic) NSString *itemDescription;
@property (nonatomic) NSInteger keepEpisodes;
@property (nonatomic) CGFloat lastDatePlayed;
@property (nonatomic) CGFloat lastDismissedEpisodeUpsellBannerDate;
@property (nonatomic) CGFloat lastFetchedDate;
@property (nonatomic) CGFloat lastImplicitlyFollowedDate;
@property (nonatomic) CGFloat lastRemovedFromUpNextDate;
@property (nonatomic) CGFloat lastStoreEpisodesInfoCheckDate;
@property (nonatomic) CGFloat lastStorePodcastInfoCheckDate;
@property (nonatomic) CGFloat lastTouchDate;
@property (nonatomic) CGFloat latestEpisodeAvailabilityTime;
@property (nonatomic) NSInteger libraryEpisodesCount;
@property (nonatomic) CGFloat modifiedDate;
@property (nonatomic) BOOL needsArtworkUpdate;
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
@property (nonatomic, readonly) BOOL shouldBeHiddenFromUpNext;
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
@property (nonatomic, readonly) NSInteger syncType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *uberArtworkTextPrimaryColor;
@property (retain, nonatomic) NSString *uberArtworkTextQuaternaryColor;
@property (retain, nonatomic) NSString *uberArtworkTextSecondaryColor;
@property (retain, nonatomic) NSString *uberArtworkTextTertiaryColor;
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
+(id)podcastUuidForEpisodeUuid:(id)arg0 ctx:(id)arg1 ;
+(id)predicateForAreMediaAPI:(BOOL)arg0 ;
+(id)predicateForAutoDownloadEnabled;
+(id)predicateForExcludingExplicitBasedOnSetting;
+(id)predicateForHasBeenSynced:(BOOL)arg0 ;
+(id)predicateForHiddenOrImplicitlyFollowedPodcasts;
+(id)predicateForHiddenPodcasts;
+(id)predicateForIdentifer:(id)arg0 ;
+(id)predicateForImplicitlyFollowedPodcasts;
+(id)predicateForImplicitlyFollowedPodcastsExcludingUUIDs:(id)arg0 ;
+(id)predicateForImporting:(BOOL)arg0 ;
+(id)predicateForLastDatePlayedAfterDate:(id)arg0 ;
+(id)predicateForLastDatePlayedNotInTheFuture;
+(id)predicateForNonFollowedShowsWithPlayState;
+(id)predicateForNotHiddenNotImplicitlyFollowedPodcasts;
+(id)predicateForNotHiddenPodcasts;
+(id)predicateForNotImplicitlyFollowedPodcasts;
+(id)predicateForNotImplicitlyFollowedPodcastsWithChannelStoreId:(NSInteger)arg0 ;
+(id)predicateForNotSubscribedAndNotHiddenAndNotImplicitlyFollowed;
+(id)predicateForNotSubscribedPodcasts;
+(id)predicateForPaidSubscriptionActive:(BOOL)arg0 ;
+(id)predicateForPeriodicallyUpdatablePodcasts;
+(id)predicateForPodcastStoreIDs:(id)arg0 ;
+(id)predicateForPodcastStoreId:(NSInteger)arg0 ;
+(id)predicateForPodcastToAutoRemove;
+(id)predicateForPodcastUUID:(id)arg0 ;
+(id)predicateForPodcastUuids:(id)arg0 ;
+(id)predicateForPodcastWithFeedUrl:(id)arg0 ;
+(id)predicateForPodcastWithPodcastPID:(NSInteger)arg0 ;
+(id)predicateForPodcastWithTitle:(id)arg0 ;
+(id)predicateForPodcastsFetchedBefore:(id)arg0 ;
+(id)predicateForPodcastsFollowedSince:(id)arg0 ;
+(id)predicateForPodcastsNeedingRetry:(BOOL)arg0 ;
+(id)predicateForPodcastsToAutodownload;
+(id)predicateForPodcastsUpdatedBefore:(id)arg0 ;
+(id)predicateForPodcastsWithBookmarkedEpisodes;
+(id)predicateForPodcastsWithDownloadedEpisodes;
+(id)predicateForPodcastsWithLibraryEpisodes;
+(id)predicateForPodcastsWithUnplayedBookmarkedEpisodes;
+(id)predicateForPodcastsWithUnplayedDownloadedEpisodes;
+(id)predicateForSubscribedAndNotHidden;
+(id)predicateForSubscribedPodcasts;
+(id)predicateForWatchLibraryShows;
+(id)productURLForStoreCollectionId:(NSInteger)arg0 storeTrackId:(NSInteger)arg1 ;
+(id)propertiesToObserveForDownloadableEpisodes;
+(id)redirectURLForStoreCollectionId:(NSInteger)arg0 ;
+(id)sortDescriptorsForNewestToOldest:(BOOL)arg0 ;
+(id)sortDescriptorsForNewestToOldestFirstTimeAvailable:(BOOL)arg0 ;
+(id)userDefaultPropertiesAffectingPredicates;
-(BOOL)isPastAutodownloadOrEpisodeLimitDark;
-(BOOL)isSerialShowTypeInFeed;
-(BOOL)isShareable;
-(BOOL)requestsAreNonAppInitiated;
-(CGFloat)calculatedUpdateInterval;
-(NSInteger)latestSeasonNumber;
-(NSInteger)mt_syncID;
-(NSInteger)showTypeUserSetting;
-(id)_episodeNextToEpisode:(id)arg0 after:(BOOL)arg1 usePlayOrder:(BOOL)arg2 restrictToUserEpisodes:(BOOL)arg3 excludePlayed:(BOOL)arg4 excludeExplicit:(NSInteger)arg5 episodeTypeFilter:(NSInteger)arg6 ;
-(id)_episodesNextTo:(CGFloat)arg0 after:(BOOL)arg1 usePlayOrder:(BOOL)arg2 sortAsc:(BOOL)arg3 restrictToUserEpisodes:(BOOL)arg4 excludePlayed:(BOOL)arg5 excludeExplicit:(NSInteger)arg6 episodeTypeFilter:(NSInteger)arg7 limit:(NSInteger)arg8 ;
-(id)_episodesNextTo:(CGFloat)arg0 after:(BOOL)arg1 usePlayOrder:(BOOL)arg2 sortAsc:(BOOL)arg3 sortByEpisodeNumber:(BOOL)arg4 filter:(id)arg5 limit:(NSInteger)arg6 ;
-(id)_episodesNextToEpisode:(id)arg0 after:(BOOL)arg1 usePlayOrder:(BOOL)arg2 restrictToUserEpisodes:(BOOL)arg3 excludePlayed:(BOOL)arg4 excludeExplicit:(NSInteger)arg5 episodeTypeFilter:(NSInteger)arg6 limit:(NSInteger)arg7 ;
-(id)_latestOrOldestEpisode:(BOOL)arg0 sortDate:(NSUInteger)arg1 filter:(id)arg2 ;
-(id)_latestOrOldestEpisode:(BOOL)arg0 sortDate:(NSUInteger)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(NSInteger)arg4 ;
-(id)_latestOrOldestEpisode:(BOOL)arg0 sortDate:(NSUInteger)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(NSInteger)arg4 episodeTypeFilter:(NSInteger)arg5 ;
-(id)_latestOrOldestEpisode:(BOOL)arg0 sortDate:(NSUInteger)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(NSInteger)arg4 excludingEpisodeUuid:(id)arg5 ;
-(id)_latestOrOldestEpisode:(BOOL)arg0 sortDate:(NSUInteger)arg1 restrictToUserEpisodes:(BOOL)arg2 excludePlayed:(BOOL)arg3 excludeExplicit:(NSInteger)arg4 excludingEpisodeUuid:(id)arg5 episodeTypeFilter:(NSInteger)arg6 ;
-(id)_latestOrOldestEpisode:(BOOL)arg0 sortDate:(NSUInteger)arg1 restrictToUserEpisodes:(BOOL)arg2 playStateFilter:(NSInteger)arg3 excludeExplicit:(NSInteger)arg4 excludingEpisodeUuid:(id)arg5 episodeTypeFilter:(NSInteger)arg6 ;
-(id)bestAvailableStoreCleanURL;
-(id)bestFeedURLExcludingRedirectURL:(BOOL)arg0 ;
-(id)currentFeedURL;
-(id)displayURL;
-(id)earliestDateForFeedFetch:(id)arg0 ;
-(id)episodePublishedAfter:(CGFloat)arg0 filter:(id)arg1 ;
-(id)episodePublishedBefore:(CGFloat)arg0 filter:(id)arg1 ;
-(id)episodesInLatestSeasonWithLimit:(NSInteger)arg0 ;
-(id)episodesInSeasonNumber:(NSInteger)arg0 ;
-(id)episodesInSeasonNumber:(NSInteger)arg0 lowestNumberedEpisodesFirst:(BOOL)arg1 filter:(id)arg2 limit:(NSInteger)arg3 ;
-(id)episodesInSeasonNumber:(NSInteger)arg0 oldestEpisodesFirst:(BOOL)arg1 ;
-(id)episodesInSeasonNumber:(NSInteger)arg0 oldestEpisodesFirst:(BOOL)arg1 excludePlayed:(BOOL)arg2 excludeExplicit:(NSInteger)arg3 episodeTypeFilter:(NSInteger)arg4 limit:(NSUInteger)arg5 ;
-(id)episodesInSeasonNumber:(NSInteger)arg0 oldestEpisodesFirst:(BOOL)arg1 excludePlayed:(BOOL)arg2 excludeExplicit:(NSInteger)arg3 limit:(NSUInteger)arg4 ;
-(id)episodesInSeasonNumber:(NSInteger)arg0 oldestEpisodesFirst:(BOOL)arg1 filter:(id)arg2 limit:(NSInteger)arg3 ;
-(id)episodesPublishedAfter:(CGFloat)arg0 filter:(id)arg1 limit:(NSInteger)arg2 sortAsc:(BOOL)arg3 ;
-(id)highestNumberedEpisodePublishedBefore:(CGFloat)arg0 filter:(id)arg1 ;
-(id)highestNumberedPlayedEpisodeWithFilter:(id)arg0 ;
-(id)lowestNumberedEpisodePublishedAfter:(CGFloat)arg0 filter:(id)arg1 ;
-(id)lowestNumberedEpisodeWithFilter:(id)arg0 ;
-(id)metricsAdditionalData;
-(id)metricsContentIdentifier;
-(id)mostRecentlyPlayedEpisodeWithFilter:(id)arg0 ;
-(id)newestEpisode;
-(id)newestEpisodeByAvailabiltyTime;
-(id)newestEpisodeExcludingUuid:(id)arg0 excludeExplicit:(NSInteger)arg1 ;
-(id)newestEpisodeWithFilter:(id)arg0 ;
-(id)newestFullEpisode;
-(id)newestUserEpisodeExcludingExplicit:(NSInteger)arg0 ;
-(id)nextEpisodeNotPlayedExcludingExplicit:(NSInteger)arg0 episodeTypeFilter:(NSInteger)arg1 ;
-(id)nextNumberedUnplayedEpisodeAfter:(id)arg0 filter:(id)arg1 ;
-(id)oldestEpisodeExcludingExplicit:(NSInteger)arg0 ;
-(id)oldestEpisodeExcludingExplicit:(NSInteger)arg0 episodeTypeFilter:(NSInteger)arg1 ;
-(id)oldestEpisodeInLatestSeasonOrShowWithFilter:(id)arg0 ;
-(id)oldestUserEpisodeExcludingExplicit:(NSInteger)arg0 ;
-(id)redirectURL;
-(id)shareURL;
-(id)twitterShareURL;
-(id)updatedAtString;
-(id)userEpisodesAfterEpisode:(id)arg0 ;
-(void)applyFollowedShowSettingsFor:(NSInteger)arg0 ;
-(void)applyUnfollowedShowSettings;
-(void)calculateEpisodicNewEpisodeCountIn:(id)arg0 ;
-(void)calculateNewEpisodeCountIn:(id)arg0 serialShowsUseExperimentalRules:(BOOL)arg1 ;
-(void)calculateSerialNewEpisodeCountIn:(id)arg0 ;
-(void)updateIsHiddenOrImplicitlyFollowed;
-(void)updateLastImplicitlyFollowedDate;
-(void)updateLastTouchDate;


@end


#endif