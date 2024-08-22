// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHLEGACYACHIEVEMENTSTORE_H
#define ACHLEGACYACHIEVEMENTSTORE_H

@class NSMutableDictionary, NSString, NSHashTable;
@protocol ACHTemplateStoreObserving, ACHEarnedInstanceStoreObserving, ACHAchievementProgressEngineObserving, ACHTemplateAssetRegistryDelegate, ACHAchievementStoring, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ACHEarnedInstanceStore.h"
#import "ACHAchievementProgressEngine.h"
#import "ACHTemplateAssetRegistry.h"
#import "ACHTemplateStore.h"

@interface ACHLegacyAchievementStore : NSObject <ACHTemplateStoreObserving, ACHEarnedInstanceStoreObserving, ACHAchievementProgressEngineObserving, ACHTemplateAssetRegistryDelegate, ACHAchievementStoring>



@property (retain, nonatomic) NSMutableDictionary *achievementsByTemplateUniqueName; // ivar: _achievementsByTemplateUniqueName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // ivar: _earnedInstanceStore
@property (nonatomic) BOOL earnedInstanceStoreDidFinishInitialFetch; // ivar: _earnedInstanceStoreDidFinishInitialFetch
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) ACHAchievementProgressEngine *progressProvider; // ivar: _progressProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // ivar: _synchronizationQueue
@property (retain, nonatomic) ACHTemplateAssetRegistry *templateAssetRegistry; // ivar: _templateAssetRegistry
@property (retain, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore
@property (nonatomic) BOOL templateStoreDidFinishInitialFetch; // ivar: _templateStoreDidFinishInitialFetch


-(BOOL)_queue_addProgressAndGoalToAchievement:(id)arg0 ;
-(id)_queue_ephemeralMonthlyChallengeAchievementForTemplateUniqueName:(id)arg0 earnedInstance:(id)arg1 ;
-(id)achievementWithTemplateUniqueName:(id)arg0 ;
-(id)achievementsForEarnedDateComponents:(id)arg0 ;
-(id)allAchievements;
-(id)ephemeralAchievementWithTemplateUniqueName:(id)arg0 ;
-(id)initWithTemplateStore:(id)arg0 earnedInstanceStore:(id)arg1 templateAssetRegistry:(id)arg2 progressProvider:(id)arg3 ;
-(void)_notifyObserversOfInitialFetchCompletion;
-(void)_notifyObserversOfNewAchievements:(id)arg0 ;
-(void)_notifyObserversOfRemovedAchievements:(id)arg0 ;
-(void)_notifyObserversOfUpdatedAchievements:(id)arg0 ;
-(void)_queue_addEarnedInstancesToLocalStore:(id)arg0 ;
-(void)_queue_addTemplatesToLocalStore:(id)arg0 ;
-(void)_queue_populateResourcesForAchievementsWithTemplateSourceName:(id)arg0 ;
-(void)_queue_removeEarnedInstancesFromLocalStore:(id)arg0 ;
-(void)_queue_removeTemplatesFromLocalStore:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
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