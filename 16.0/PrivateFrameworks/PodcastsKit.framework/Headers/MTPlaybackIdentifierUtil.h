// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTPLAYBACKIDENTIFIERUTIL_H
#define MTPLAYBACKIDENTIFIERUTIL_H

@class MTSingleton;
@protocol MTPlaybackIdentifierComposing;



@interface MTPlaybackIdentifierUtil : MTSingleton <MTPlaybackIdentifierComposing>





+(id)__queryStringToQueryDictionary:(id)arg0 ;
+(id)__stringByRemovingPercentEscapes:(id)arg0 ;
+(id)__stringWithPercentEscape:(id)arg0 ;
-(BOOL)isLocalSetPlaybackQueueURLString:(id)arg0 ;
-(BOOL)isSubscribeCommandURLString:(id)arg0 ;
-(BOOL)isUniversalPlaybackIdentifierURLString:(id)arg0 ;
-(NSInteger)_episodeContextFromString:(id)arg0 ;
-(NSInteger)_episodeContextSortFromString:(id)arg0 ;
-(NSInteger)_episodeOrderFromString:(id)arg0 ;
-(NSUInteger)_playQueueTypeForRequestURL:(id)arg0 ;
-(NSUInteger)_playReasonFromString:(id)arg0 ;
-(id)_playbackRequestIdentifierWithHost:(id)arg0 queryComponents:(id)arg1 ;
-(id)_playbackRequestIdentifierWithHost:(id)arg0 queryKey:(id)arg1 value:(id)arg2 ;
-(id)_universalPlaybackQueueIdentifierForPodcastUuid:(id)arg0 podcastFeedUrl:(id)arg1 podcastStoreId:(NSInteger)arg2 episodeUuid:(id)arg3 episodeGuid:(id)arg4 episodeStoreId:(NSInteger)arg5 context:(NSInteger)arg6 contextSortType:(NSInteger)arg7 sampPlaybackOrder:(id)arg8 ;
-(id)episodeUuidForSetPlaybackQueueRequestIdentifier:(id)arg0 ;
-(id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg0 episodeUuid:(id)arg1 sampPlaybackOrder:(id)arg2 ;
-(id)localPlaybackQueueIdentifierForPodcastUuid:(id)arg0 sampPlaybackOrder:(id)arg1 ;
-(id)localPlaybackQueueIdentifierForStationUuid:(id)arg0 ;
-(id)localPlaybackQueueIdentifierForStationUuid:(id)arg0 episodeUuid:(id)arg1 ;
-(id)playbackQueueIdentifierForEpisodeAdamId:(id)arg0 ;
-(id)playbackQueueIdentifierForPlayMyPodcastsWithPlaybackOrder:(id)arg0 ;
-(id)playbackQueueIdentifierForPodcastAdamId:(id)arg0 sampPlaybackOrder:(id)arg1 ;
-(id)playbackQueueIdentifierForSubscribeToPodcast:(id)arg0 ;
-(id)playbackQueueIdentifierForSubscribeToPodcastFeedUrl:(id)arg0 ;
-(id)playbackRequestURLWithDSID:(id)arg0 baseRequestURLString:(id)arg1 ;
-(id)playbackRequestURLWithPlayReason:(NSUInteger)arg0 baseRequestURLString:(id)arg1 ;
-(id)podcastUuidForSetPlaybackQueueRequestIdentifier:(id)arg0 ;
-(id)universalPlaybackQueueIdentifierForPodcastFeedUrl:(id)arg0 podcastStoreId:(NSInteger)arg1 episodeGuid:(id)arg2 episodeStoreId:(NSInteger)arg3 sampPlaybackOrder:(id)arg4 ;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg0 podcastFeedUrl:(id)arg1 podcastStoreId:(NSInteger)arg2 ;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg0 podcastFeedUrl:(id)arg1 podcastStoreId:(NSInteger)arg2 episodeUuid:(id)arg3 episodeGuid:(id)arg4 episodeStoreId:(NSInteger)arg5 context:(NSInteger)arg6 contextSortType:(NSInteger)arg7 ;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg0 podcastFeedUrl:(id)arg1 podcastStoreId:(NSInteger)arg2 episodeUuid:(id)arg3 episodeGuid:(id)arg4 episodeStoreId:(NSInteger)arg5 sampPlaybackOrder:(id)arg6 ;
-(id)universalPlaybackQueueIdentifierForPodcastUuid:(id)arg0 podcastFeedUrl:(id)arg1 podcastStoreId:(NSInteger)arg2 sampPlaybackOrder:(id)arg3 ;
-(id)universalPlaybackQueueIdentifierForStationUuid:(id)arg0 episodeGuid:(id)arg1 episodeStoreId:(NSInteger)arg2 podcastFeedUrl:(id)arg3 ;
-(id)universalPlaybackQueueIdentifierForStationUuid:(id)arg0 episodeUuid:(id)arg1 episodeGuid:(id)arg2 episodeStoreId:(NSInteger)arg3 podcastFeedUrl:(id)arg4 ;
-(id)universalPlaybackQueueIdentifiersForStationUuid:(id)arg0 limit:(NSInteger)arg1 queueStatus:(*NSUInteger)arg2 ;
-(id)universalPlaybackQueueRequestIdentifierForEpisode:(id)arg0 ;
-(struct _MRSystemAppPlaybackQueue *)playbackQueueWithAccountInfoForIdentifiers:(id)arg0 ;
-(struct _MRSystemAppPlaybackQueue *)playbackQueueWithDsid:(id)arg0 forIdentifiers:(id)arg1 ;


@end


#endif