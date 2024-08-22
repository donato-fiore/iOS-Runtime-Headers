// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPODCASTANDEPISODEPROCESSOR_H
#define MTPODCASTANDEPISODEPROCESSOR_H

@class NSMutableDictionary;


#import "MTBaseProcessor.h"

@interface MTPodcastAndEpisodeProcessor : MTBaseProcessor

@property (retain, nonatomic) NSMutableDictionary *episodeObservers; // ivar: _episodeObservers


-(id)createEpisodeObserverForPodcastUuid:(id)arg0 predicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)entityName;
-(id)episodeObserverForPodcastUuid:(id)arg0 ;
-(id)episodePredicateForPodcast:(id)arg0 ;
-(id)episodeSortDescriptorsForPodcast:(id)arg0 ;
-(id)episodeUuids;
-(id)init;
-(id)podcastPredicate;
-(id)podcastUuids;
-(id)predicate;
-(void)addEpisodeObserverForPodcast:(id)arg0 ;
-(void)episodeUuidObserver:(id)arg0 resultsChangedForPodcast:(id)arg1 withDeletedIds:(id)arg2 andInsertIds:(id)arg3 ;
-(void)removeEpisodeObserverForPodcast:(id)arg0 ;
-(void)removeEpisodeObserverForPodcasts:(id)arg0 ;
-(void)resultsChangedWithDeletedIds:(id)arg0 insertIds:(id)arg1 updatedIds:(id)arg2 ;
-(void)stop;
-(void)updateEpisodeObserverForPodcast:(id)arg0 ;
-(void)updateEpisodePredicatesWithDeletedIds:(id)arg0 andInsertIds:(id)arg1 andUpdatedIds:(id)arg2 ;


@end


#endif