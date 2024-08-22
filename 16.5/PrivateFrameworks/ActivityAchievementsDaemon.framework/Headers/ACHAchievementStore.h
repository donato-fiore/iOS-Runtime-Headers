// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHACHIEVEMENTSTORE_H
#define ACHACHIEVEMENTSTORE_H

@class NSMutableArray, NSMutableDictionary, ACHAwardsClient, NSString, NSHashTable;
@protocol ACHTemplateStoreObserving, ACHEarnedInstanceStoreObserving, ACHAchievementProgressEngineObserving, ACHTemplateAssetRegistryDelegate, ACHAchievementStoring, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHEarnedInstanceStore.h"
#import "ACHAchievementProgressEngine.h"
#import "ACHTemplateAssetRegistry.h"
#import "ACHTemplateStore.h"

@interface ACHAchievementStore : NSObject <ACHTemplateStoreObserving, ACHEarnedInstanceStoreObserving, ACHAchievementProgressEngineObserving, ACHTemplateAssetRegistryDelegate, ACHAchievementStoring>

 {
    os_unfair_lock_s _syncLock;
    NSMutableArray *_initialFetchObserversToCall;
}


@property (retain, nonatomic) NSMutableDictionary *achievementsByTemplateUniqueName; // ivar: _achievementsByTemplateUniqueName
@property (retain, nonatomic) ACHAwardsClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // ivar: _earnedInstanceStore
@property (nonatomic) BOOL earnedInstancsStoreFinishedInitialFetch; // ivar: _earnedInstancsStoreFinishedInitialFetch
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (nonatomic) BOOL needsUpdateWhenProtectedDataAvailable; // ivar: _needsUpdateWhenProtectedDataAvailable
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) ACHAchievementProgressEngine *progressProvider; // ivar: _progressProvider
@property (nonatomic) int protectedDataToken; // ivar: _protectedDataToken
@property (readonly) Class superclass;
@property (retain, nonatomic) ACHTemplateAssetRegistry *templateAssetRegistry; // ivar: _templateAssetRegistry
@property (retain, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore
@property (nonatomic) BOOL templateStoreFinishedInitialFetch; // ivar: _templateStoreFinishedInitialFetch


-(BOOL)_initialFetchComplete;
-(BOOL)_lock_addProgressAndGoalToAchievement:(id)arg0 ;
-(id)_lock_ephemeralMonthlyChallengeAchievementForTemplateUniqueName:(id)arg0 earnedInstance:(id)arg1 ;
-(id)_lock_populateMostRecentEarnedInstanceAndCountForAllAchievements;
-(id)_lock_populateMostRecentEarnedInstancesAndCountsForAchievements:(id)arg0 ;
-(id)achievementWithTemplateUniqueName:(id)arg0 ;
-(id)achievementsForEarnedDateComponents:(id)arg0 ;
-(id)allAchievements;
-(id)ephemeralAchievementWithTemplateUniqueName:(id)arg0 ;
-(id)initWithClient:(id)arg0 templateStore:(id)arg1 earnedInstanceStore:(id)arg2 templateAssetRegistry:(id)arg3 progressProvider:(id)arg4 ;
-(void)_handleProtectedDataAvailabilityChangeNotification;
-(void)_lock_addTemplatesToLocalStore:(id)arg0 ;
-(void)_lock_notifyObserversOfInitialFetchCompletion;
-(void)_lock_populateResourcesForAchievementsWithTemplateSourceName:(id)arg0 ;
-(void)_lock_removeTemplatesFromLocalStore:(id)arg0 ;
-(void)_notifyObserversOfNewAchievements:(id)arg0 ;
-(void)_notifyObserversOfRemovedAchievements:(id)arg0 ;
-(void)_notifyObserversOfUpdatedAchievements:(id)arg0 ;
-(void)_performWithLock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)earnedInstanceStore:(id)arg0 didAddNewEarnedInstances:(id)arg1 ;
-(void)earnedInstanceStore:(id)arg0 didRemoveEarnedInstances:(id)arg1 ;
-(void)earnedInstanceStoreDidFinishInitialFetch:(id)arg0 ;
-(void)earnedInstanceStoreDidReceiveSyncNotification:(id)arg0 ;
-(void)loadAllAchievementsFromDatabaseIfNecessaryWithCompletionHandler:(id)arg0 ;
-(void)progressProviderDidUpdateProgressValues:(id)arg0 ;
-(void)recalculateProgressForAllAchievements;
-(void)removeObserver:(id)arg0 ;
-(void)templateAssetRegistry:(id)arg0 didUpdateResourcesForTemplatesWithSourceName:(id)arg1 ;
-(void)templateStore:(id)arg0 didAddNewTemplates:(id)arg1 ;
-(void)templateStore:(id)arg0 didRemoveTemplates:(id)arg1 ;
-(void)templateStoreDidFinishInitialFetch:(id)arg0 ;


@end


#endif