// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPODCASTUTIL_H
#define MTPODCASTUTIL_H


#import <Foundation/Foundation.h>


@interface MTPodcastUtil : NSObject



+(NSUInteger)countOfUnplayedEpisodesForPodcastUuid:(id)arg0 ;
+(NSUInteger)episodeCountForPredicate:(id)arg0 ;
+(id)episodeTitlesForPredicate:(id)arg0 ;
+(id)stringForATVFeedLastChangedForDate:(id)arg0 ;
+(id)stringForATVFeedLastChangedForPodcast:(id)arg0 ;
+(id)stringForEpisodeCount:(NSInteger)arg0 ;
+(id)stringForEpisodesInFeedCount:(NSInteger)arg0 ;
+(id)stringForMostRecentEpisodeCount:(NSInteger)arg0 ;
+(id)stringForNewEpisodeCount:(NSInteger)arg0 ;
+(id)stringForNewEpisodeCount:(NSInteger)arg0 titleCase:(BOOL)arg1 ;
+(id)stringForSavedEpisodeCount:(NSInteger)arg0 ;
+(id)stringForUnplayedEpisodeCount:(NSInteger)arg0 ;
+(id)stringForUnplayedEpisodeCount:(NSInteger)arg0 titleCase:(BOOL)arg1 ;
+(id)stringForUnplayedEpisodeCount:(NSUInteger)arg0 withSavedEpisodeCount:(NSUInteger)arg1 ;


@end


#endif