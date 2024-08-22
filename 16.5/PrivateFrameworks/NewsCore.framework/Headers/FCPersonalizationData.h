// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPERSONALIZATIONDATA_H
#define FCPERSONALIZATIONDATA_H

@class NSMutableDictionary, CKRecord, NSString, NSData;
@protocol FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCDerivedPersonalizationData, FCPersonalizationDataSource, OS_dispatch_queue, FCOperationThrottler;


#import "FCPrivateDataController.h"
#import "FCPersonalizationTreatment.h"

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCDerivedPersonalizationData, FCPersonalizationDataSource>

 {
    BOOL _attemptingUpload;
    NSMutableDictionary *_aggregates;
    CKRecord *_remoteRecord;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCPersonalizationTreatment *_treatment;
    id<FCOperationThrottler> *_saveThrottler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *pbData; // ivar: _pbData
@property (readonly, nonatomic) FCPersonalizationTreatment *personalizationTreatment;
@property (readonly) Class superclass;


+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
+(NSInteger)commandQueueUrgency;
+(NSUInteger)localStoreVersion;
+(id)backingRecordIDs;
+(id)backingRecordZoneIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg0 privateDataDirectory:(id)arg1 ;
+(id)desiredKeys;
+(id)localStoreFilename;
+(void)configureKeyValueStoreForJSONHandling:(id)arg0 ;
-(BOOL)canHelpRestoreZoneName:(id)arg0 ;
-(id)aggregateForFeatureKey:(id)arg0 ;
-(id)aggregatesForFeatureKeys:(id)arg0 ;
-(id)aggregatesForFeatures:(id)arg0 ;
-(id)allAggregates;
-(id)baselineAggregateWithConfigurableValues:(id)arg0 ;
-(id)createAggregateWith:(id)arg0 clicks:(CGFloat)arg1 impressions:(CGFloat)arg2 ;
-(id)d_allGlobalAggregates;
-(id)init;
-(id)initWithAggregates:(id)arg0 ;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 ;
-(id)initWithPBData:(id)arg0 treatment:(id)arg1 ;
-(id)localStoreMigrator;
-(id)lookupAggregatesWith:(id)arg0 creationBlock:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg0 ;
-(void)activityObservingApplicationWillTerminate;
-(void)activityObservingApplicationWindowDidBecomeBackground;
-(void)activityObservingApplicationWindowDidBecomeForeground;
-(void)addObserver:(id)arg0 ;
-(void)clearPersonalizationData;
-(void)configurationManager:(id)arg0 configurationDidChange:(id)arg1 ;
// -(void)d_allResults:(id)arg0 completion:(unk)arg1  ;
-(void)enumerateAggregatesUsingBlock:(id)arg0 ;
-(void)generateDerivedDataWithMaxAggregateCount:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)modifyLocalAggregatesForFeatureKeys:(id)arg0 withAction:(NSUInteger)arg1 actionCount:(NSUInteger)arg2 defaultClicks:(CGFloat)arg3 defaultImpressions:(CGFloat)arg4 impressionBias:(CGFloat)arg5 groupBias:(CGFloat)arg6 ;
-(void)operationThrottler:(id)arg0 performAsyncOperationWithCompletion:(id)arg1 ;
-(void)prepareAggregatesForUseWithCompletionHandler:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)syncWithCompletion:(id)arg0 ;
// -(void)updateAggregatesWith:(id)arg0 creationBlock:(id)arg1 updateBlock:(unk)arg2  ;
-(void)updateFeatures:(id)arg0 withAction:(NSUInteger)arg1 displayRank:(NSInteger)arg2 groupRank:(NSInteger)arg3 groupType:(NSInteger)arg4 individually:(BOOL)arg5 configurableValues:(id)arg6 ;


@end


#endif