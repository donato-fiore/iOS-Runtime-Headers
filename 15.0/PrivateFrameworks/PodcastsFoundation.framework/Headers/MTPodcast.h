// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPODCAST_H
#define MTPODCAST_H

@class NSManagedObject, NSString, NSSet;
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
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) MTChannel *channel;
@property (nonatomic) NSInteger channelStoreId;
@property (nonatomic) NSInteger consecutiveFeedFetchErrors;
@property (nonatomic) NSInteger darkCount;
@property (nonatomic) NSInteger darkCountLocal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger deletePlayedEpisodes;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayType;
@property (nonatomic) CGFloat downloadedDate;
@property (nonatomic) NSInteger downloadedEpisodesCount;
@property (nonatomic) NSInteger episodeLimit;
@property (retain, nonatomic) NSSet *episodes;
@property (nonatomic) CGFloat feedChangedDate;
@property (retain, nonatomic) NSString *feedURL;
@property (readonly, nonatomic) BOOL feedUpdateNeedsRetry;
@property (nonatomic) NSInteger flags;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidden;
@property (nonatomic) int hidesPlayedEpisodes;
@property (retain, nonatomic) NSString *imageURL;
@property (readonly, nonatomic) BOOL isExplicit;
@property (retain, nonatomic) NSString *itemDescription;
@property (nonatomic) NSInteger keepEpisodes;
@property (nonatomic) CGFloat lastDatePlayed;
@property (nonatomic) CGFloat lastFetchedDate;
@property (nonatomic) CGFloat lastStoreEpisodesInfoCheckDate;
@property (nonatomic) CGFloat lastStorePodcastInfoCheckDate;
@property (nonatomic) CGFloat lastTouchDate;
@property (nonatomic) NSInteger libraryEpisodesCount;
@property (nonatomic) CGFloat modifiedDate;
@property (retain, nonatomic) NSString *nextEpisodeUuid;
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
+(CGFloat)defaultUpdateInterval;
+(NSInteger)defaultShowType;
+(NSInteger)showTypeFromString:(id)arg0 ;
+(NSInteger)storeCollectionIdForRedirectURL:(id)arg0 ;
+(NSUInteger)totalUnplayedCount;
+(id)_defaultsForLoadingDefaultValues;
+(id)_predicateForDisplayType:(NSInteger)arg0 excluding:(BOOL)arg1 ;
+(id)_predicateForShowsWithPlayableFreeEpisodes;
+(id)predicateForAllPodcasts;
+(id)predicateForAreMediaAPI:(BOOL)arg0 ;
+(id)predicateForAutoDownloadEnabled;
+(id)predicateForAutoDownloadEnabled:(BOOL)arg0 ;
+(id)predicateForDisplayType:(NSInteger)arg0 ;
+(id)predicateForHasBeenSynced:(BOOL)arg0 ;
+(id)predicateForIdentifer:(id)arg0 ;
+(id)predicateForNonNullDisplayType;
+(id)predicateForNotDisplayType:(NSInteger)arg0 ;
+(id)predicateForNullDisplayType;
+(id)predicateForPaidSubscriptionActive:(BOOL)arg0 ;
+(id)predicateForPodcastStoreId:(NSInteger)arg0 ;
+(id)predicateForPodcastUUID:(id)arg0 ;
+(id)predicateForPodcastUuids:(id)arg0 ;
+(id)predicateForPodcastWithFeedUrl:(id)arg0 ;
+(id)predicateForPodcastWithPodcastPID:(NSInteger)arg0 ;
+(id)predicateForPodcastWithTitle:(id)arg0 ;
+(id)predicateForPodcastsFetchedBefore:(id)arg0 ;
+(id)predicateForPodcastsNeedingRetry:(BOOL)arg0 ;
+(id)predicateForPodcastsUpdatedBefore:(id)arg0 ;
+(id)predicateForPodcastsWithBookmarkedEpisodes;
+(id)predicateForPodcastsWithChannelStoreId:(NSInteger)arg0 ;
+(id)predicateForPodcastsWithDownloadedEpisodes;
+(id)predicateForPodcastsWithLibraryEpisodes;
+(id)predicateForPodcastsWithUnplayedBookmarkedEpisodes;
+(id)predicateForSubscribed:(BOOL)arg0 ;
+(id)predicateForSubscribedAndNotHidden:(BOOL)arg0 ;
+(id)predicateForUpdatablePodcasts;
+(id)productURLForStoreCollectionId:(NSInteger)arg0 storeTrackId:(NSInteger)arg1 ;
+(id)redirectURLForStoreCollectionId:(NSInteger)arg0 ;
+(id)userDefaultPropertiesAffectingPredicates;
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
-(void)updateLastTouchDate;


@end


#endif