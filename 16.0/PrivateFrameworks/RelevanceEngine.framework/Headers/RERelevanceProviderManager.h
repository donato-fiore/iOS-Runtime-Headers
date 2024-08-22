// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RERELEVANCEPROVIDERMANAGER_H
#define RERELEVANCEPROVIDERMANAGER_H

@class NSHashTable, NSArray, NSDictionary, NSString;
@protocol RERelevanceProviderManagerProperties, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RERelevanceProviderEnvironment.h"
#import "REPriorityQueue.h"
#import "REUpNextTimer.h"
#import "REFeatureSet.h"

@interface RERelevanceProviderManager : NSObject <RERelevanceProviderManagerProperties>

 {
    RERelevanceProviderEnvironment *_environment;
    NSHashTable *_providers;
    REPriorityQueue *_scheduledUpdates;
    REUpNextTimer *_updateTimer;
    NSArray *_effectiveFeatures;
    NSDictionary *_inflectionValues;
    BOOL _dataStoresOpened;
    BOOL _hasSeperateRelevanceQueue;
    BOOL _implementsPrepareForUpdate;
    NSObject<OS_dispatch_queue> *_relevanceQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_loggingHeader;
}


@property (readonly, nonatomic) NSArray *allProviders;
@property (readonly, nonatomic) NSArray *allRelevanceProviders;
@property (readonly, nonatomic) BOOL dataSourcesOpened;
@property (readonly, nonatomic) NSArray *effectiveFeatures;
@property (weak, nonatomic) RERelevanceProviderEnvironment *environment;
@property (readonly, nonatomic) NSUInteger scheduledUpdatesCount;
@property (retain, nonatomic) REFeatureSet *supportedFeatures; // ivar: _supportedFeatures


+(BOOL)_requiresLocationServices;
+(BOOL)_supportsHistoricProviders;
+(BOOL)_wantsDelayedUpdate;
+(BOOL)_wantsSeperateRelevanceQueue;
+(BOOL)supportsHistoricProviders;
+(Class)_relevanceProviderClass;
+(id)_dependencyClasses;
+(id)_features;
+(id)providerManagerClasses;
+(void)setProviderManagerClassesLoadingBlock:(id)arg0 ;
-(BOOL)_isHistoricProvider:(id)arg0 ;
-(BOOL)_isValidProvider:(id)arg0 ;
-(BOOL)containsProvider:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)_relevanceForHistoricProvider:(id)arg0 ;
-(float)_relevanceForProvider:(id)arg0 ;
-(id)_manager_queue;
-(id)_valueForHistoricProvider:(id)arg0 feature:(id)arg1 ;
-(id)_valueForProvider:(id)arg0 context:(id)arg1 feature:(id)arg2 ;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;
-(id)_valuesForProvider:(id)arg0 context:(id)arg1 features:(id)arg2 ;
-(id)description;
-(id)initWithQueue:(id)arg0 ;
-(id)relevanceForProvider:(id)arg0 context:(id)arg1 ;
-(void)_accessQueue_appendCompletionHandlerForScheduledUpdate:(id)arg0 ;
-(void)_accessQueue_performImmediateUpdate:(id)arg0 ;
-(void)_accessQueue_performPendingUpdatesAndScheduleTimerIfNeeded;
-(void)_accessQueue_performUpdate:(id)arg0 ;
-(void)_accessQueue_resetTimer;
-(void)_accessQueue_scheduleUpdate:(id)arg0 ;
-(void)_addedProvider:(id)arg0 ;
-(void)_closeDataStoresAndObserveChanges;
-(void)_enumerateProviders:(id)arg0 ;
-(void)_handleSignificantTimeChange;
-(void)_loadLoggingHeader;
-(void)_openDataStoresAndObserveChanges;
-(void)_prepareForUpdate;
-(void)_prepareForUpdateWithCompletion:(id)arg0 ;
-(void)_relevanceQueue_openDataStores;
-(void)_removeAllPendingUpdates;
-(void)_removeProvider:(id)arg0 ;
-(void)_scheduleUpdate:(id)arg0 ;
-(void)addProvider:(id)arg0 completion:(id)arg1 ;
-(void)beginActivity:(id)arg0 ;
-(void)beginFetchingData;
-(void)dealloc;
-(void)endActivity:(id)arg0 ;
-(void)enumerateInflectionFeatureValues:(id)arg0 ;
-(void)finishFetchingData;
-(void)isProviderHistoric:(id)arg0 completion:(id)arg1 ;
-(void)pause;
-(void)pauseWithCompletion:(id)arg0 ;
-(void)relevanceForHistoricProvider:(id)arg0 completion:(id)arg1 ;
-(void)relevanceForProvider:(id)arg0 completion:(id)arg1 ;
-(void)removeProvider:(id)arg0 completion:(id)arg1 ;
-(void)resume;
-(void)resumeWithCompletion:(id)arg0 ;


@end


#endif