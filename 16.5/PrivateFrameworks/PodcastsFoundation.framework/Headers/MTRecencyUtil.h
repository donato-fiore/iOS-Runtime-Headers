// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRECENCYUTIL_H
#define MTRECENCYUTIL_H


#import <Foundation/Foundation.h>


@interface MTRecencyUtil : NSObject



+(CGFloat)_lastDatePlayedIfNotFutureDate:(CGFloat)arg0 podcast:(id)arg1 ;
+(CGFloat)scoreFromModifiedDate:(CGFloat)arg0 ;
+(id)_nextEpisodeForUnplayedPodcast:(id)arg0 serial:(BOOL)arg1 filter:(id)arg2 ctx:(id)arg3 ;
+(id)_upNextForPodcast:(id)arg0 serial:(BOOL)arg1 excludeExplicit:(NSInteger)arg2 ctx:(id)arg3 ;
+(id)_upNextResultForUnfollowedPodcast:(id)arg0 filter:(id)arg1 ctx:(id)arg2 ;
+(id)_upNextResultForUnplayedFollowedPodcast:(id)arg0 nextEpisodeForUnplayedShow:(id)arg1 newestEpisodeWithShowBump:(id)arg2 mostRecentlyPlayed:(id)arg3 filter:(id)arg4 serial:(BOOL)arg5 ctx:(id)arg6 ;
+(id)_upNextScoreWithLastModifiedDate:(CGFloat)arg0 lastDatePlayed:(CGFloat)arg1 filter:(id)arg2 podcast:(id)arg3 ctx:(id)arg4 ;
+(id)caughtUpNextEpisodeForPodcast:(id)arg0 nextEpisodeForUnplayedShow:(id)arg1 mostRecentlyPlayedLastDatePlayed:(CGFloat)arg2 serial:(BOOL)arg3 filter:(id)arg4 ;
+(id)episodesForListenNowWithContext:(id)arg0 limit:(NSInteger)arg1 ;
+(id)mostRecentlySavedUnplayedEpisodeForPodcast:(id)arg0 filter:(id)arg1 ctx:(id)arg2 ;
+(id)nextEpisodeForPodcast:(id)arg0 mostRecentlyPlayed:(id)arg1 caughtUpNextEpisode:(id)arg2 serial:(BOOL)arg3 filter:(id)arg4 ;
+(id)upNextForPodcastUuid:(id)arg0 ctx:(id)arg1 ;
+(id)upNextForPodcastUuid:(id)arg0 excludeExplicit:(NSInteger)arg1 ctx:(id)arg2 ;
+(void)setCombinedScoreOnScore:(id)arg0 total:(CGFloat)arg1 ;
+(void)setFollowedDateValuesOnScore:(id)arg0 followedDate:(CGFloat)arg1 followedDateWeight:(CGFloat)arg2 total:(CGFloat)arg3 ;
+(void)setLastPlayedValuesOnScore:(id)arg0 lastPlayedDate:(CGFloat)arg1 lastPlayedDateWeight:(CGFloat)arg2 total:(CGFloat)arg3 ;
+(void)setModifiedDateValuesOnScore:(id)arg0 modifiedDate:(CGFloat)arg1 modifiedDateWeight:(CGFloat)arg2 total:(CGFloat)arg3 ;
+(void)setMostRecentlyPublishedUnplayedValuesOnScore:(id)arg0 podcast:(id)arg1 filter:(id)arg2 mostRecentlyUnplayedPubDateWeight:(CGFloat)arg3 total:(CGFloat)arg4 ;
+(void)setMostRecentlyPublishedValuesOnScore:(id)arg0 podcast:(id)arg1 filter:(id)arg2 mostRecentPubDateWeight:(CGFloat)arg3 total:(CGFloat)arg4 ;
+(void)setPercentOfEpsFromShowPlayedValuesOnScore:(id)arg0 podcast:(id)arg1 ctx:(id)arg2 percentEpsFromShowPlayedWeight:(CGFloat)arg3 total:(CGFloat)arg4 ;
+(void)setPercentOfTotalListeningValuesOnScore:(id)arg0 podcast:(id)arg1 ctx:(id)arg2 percentEpsTotalPlayedWeight:(CGFloat)arg3 total:(CGFloat)arg4 ;
+(void)setRecentlyFollowedHardCodedValueOnScore:(id)arg0 podcast:(id)arg1 ;
+(void)unsafeUpdateRelatedFieldsIfUpNextChangedForPodcast:(id)arg0 upNextResult:(id)arg1 ctx:(id)arg2 ;


@end


#endif