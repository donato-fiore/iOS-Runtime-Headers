// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPLAYBACKQUEUEFACTORY_H
#define MTPLAYBACKQUEUEFACTORY_H


#import <Foundation/Foundation.h>


@interface MTPlaybackQueueFactory : NSObject



+(BOOL)_isContinuousPlaybackEnabledForLimit:(NSInteger)arg0 ;
+(id)_episodeToPlayForPodcastUuid:(id)arg0 playbackOrder:(NSInteger)arg1 excludeExplicit:(NSInteger)arg2 ctx:(id)arg3 ;
+(id)_latestEpisodeForPodcastUuid:(id)arg0 restrictToUserEpisodes:(BOOL)arg1 excludeExplicit:(NSInteger)arg2 ctx:(id)arg3 ;
+(id)_latestOrOldestEpisodeForPodcastUuid:(id)arg0 restrictToUserEpisodes:(BOOL)arg1 excludeExplicit:(NSInteger)arg2 latest:(BOOL)arg3 ctx:(id)arg4 ;
+(id)_oldestEpisodeForPodcastUuid:(id)arg0 restrictToUserEpisodes:(BOOL)arg1 excludeExplicit:(NSInteger)arg2 ctx:(id)arg3 ;
+(id)_uuidForEpisode:(id)arg0 ;


@end


#endif