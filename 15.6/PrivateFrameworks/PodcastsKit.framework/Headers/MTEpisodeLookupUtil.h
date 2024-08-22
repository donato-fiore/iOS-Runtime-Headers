// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTEPISODELOOKUPUTIL_H
#define MTEPISODELOOKUPUTIL_H


#import <Foundation/Foundation.h>


@interface MTEpisodeLookupUtil : NSObject



+(id)_entityForFetchRequest:(id)arg0 ;
+(id)_entityForFetchRequest:(id)arg0 context:(id)arg1 ;
+(id)_episodeMatchFromPredicate:(id)arg0 ;
+(id)_episodeMatchFromPredicate:(id)arg0 context:(id)arg1 ;
+(id)_podcastMatchFromPredicate:(id)arg0 ;
+(id)_podcastMatchFromPredicate:(id)arg0 context:(id)arg1 ;
+(id)findEpisodeFromModelObject:(id)arg0 ;
+(id)findEpisodeWithRequest:(id)arg0 ;
+(id)findEpisodeWithRequest:(id)arg0 context:(id)arg1 ;
+(id)findPodcastWithFeedUrl:(id)arg0 ;


@end


#endif