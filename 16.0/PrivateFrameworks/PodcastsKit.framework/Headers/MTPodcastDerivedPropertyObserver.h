// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTPODCASTDERIVEDPROPERTYOBSERVER_H
#define MTPODCASTDERIVEDPROPERTYOBSERVER_H

@class NSMutableDictionary, NSSet, NSString, NSPersistentHistoryToken;
@protocol MTDerivedPropertyChangeNotifying, MTLibraryChangeNotifier, OS_dispatch_queue, OS_dispatch_source, MTEpisodeLevelCalculatorProtocol;

#import <Foundation/Foundation.h>


@interface MTPodcastDerivedPropertyObserver : NSObject <MTDerivedPropertyChangeNotifying, MTLibraryChangeNotifier>

 {
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_source> *_persistentHistorySource;
    BOOL _processingIsPaused;
}


@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (retain, nonatomic) NSSet *channelPropertiesToFetch; // ivar: _channelPropertiesToFetch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didFinishProcessingContextSaveHandlerForTests; // ivar: _didFinishProcessingContextSaveHandlerForTests
@property (readonly, nonatomic) NSObject<MTEpisodeLevelCalculatorProtocol> *episodeLevelCalculator; // ivar: _episodeLevelCalculator
@property (retain, nonatomic) NSSet *episodePropertiesToFetch; // ivar: _episodePropertiesToFetch
@property (retain, nonatomic) NSMutableDictionary *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isObserving; // ivar: _isObserving
@property (retain, nonatomic) NSPersistentHistoryToken *latestPersistentHistoryToken; // ivar: _latestPersistentHistoryToken
@property (retain, nonatomic) NSMutableDictionary *podcastCache; // ivar: _podcastCache
@property (retain, nonatomic) NSSet *podcastPropertiesToFetch; // ivar: _podcastPropertiesToFetch
@property (retain, nonatomic) NSSet *podcastStatsProperties; // ivar: _podcastStatsProperties
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_changeContainsRelevantChannelChanges:(id)arg0 ;
-(BOOL)_changeContainsRelevantEpisodeChanges:(id)arg0 ;
-(BOOL)_changeContainsRelevantPodcastChanges:(id)arg0 ;
-(BOOL)_shouldSkipSettingPropertiesForWatchPPT;
-(BOOL)_shouldUpdatePodcastsStatsForChange:(id)arg0 ;
-(BOOL)setDerivedPropertyValue:(id)arg0 forKey:(id)arg1 forPodcast:(id)arg2 ;
-(NSUInteger)countOfUnplayedEpisodesForPodcast:(id)arg0 ;
-(id)_historyTransactionsSinceLatestPersistentHistoryToken;
-(id)_predicateForEpisodesToUpdateWithPodcastUuid:(id)arg0 predicateForUnplayedInUnplayedTab:(id)arg1 predicateForUserEpisodes:(id)arg2 predicateForTopLevelEpisodes:(id)arg3 ;
-(id)addDerivedPropertyChangeHandler:(id)arg0 ;
-(id)dependentPropertyForKey:(id)arg0 forPodcastUuid:(id)arg1 ;
-(id)derivedPropertiesForPodcast:(id)arg0 ;
-(id)derivedPropertyValueForKey:(id)arg0 forPodcast:(id)arg1 ;
-(id)init;
-(void)_fetchLatestProcessedPersistentHistoryToken;
-(void)_processLatestPersistentHistoryTransactions;
-(void)_setLastProcessedPersistentHistoryToken:(id)arg0 ;
-(void)_updateDerivedPropertiesForPodcastUUIDs:(id)arg0 ;
-(void)_updateEpisodeCountsForPodcastUuid:(id)arg0 ;
-(void)episodeResultsChangedForPodcastUuid:(id)arg0 ;
-(void)libraryDidChange:(id)arg0 ;
-(void)notifyObserversForPodcast:(id)arg0 ;
-(void)pauseProcessing;
-(void)processLatestPersistentHistoryTransactions;
-(void)removeDerivedPropertyChangeHandler:(id)arg0 ;
-(void)reportStatsForPodcasts;
-(void)resumeProcessing;
-(void)setDependentPropertyValue:(id)arg0 forKey:(id)arg1 forPodcastUuid:(id)arg2 ;
-(void)startObserving;
-(void)stopObserving;
-(void)updateFlagsForPodcastUuid:(id)arg0 predicateForUnplayedTab:(id)arg1 predicateForUserEpisodes:(id)arg2 ;


@end


#endif