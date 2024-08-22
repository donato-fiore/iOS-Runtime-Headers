// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSUBSCRIPTIONLIST_H
#define FCSUBSCRIPTIONLIST_H

@class NSOrderedSet, NSSet, NSMutableDictionary, NSDictionary;
@protocol FCTagRanking;


#import "FCPrivateDataController.h"
#import "FCMTWriterLock.h"

@interface FCSubscriptionList : FCPrivateDataController {
    NSOrderedSet *_orderedSubscribedTagIDsInternal;
    NSSet *_subscribedTagIDsInternal;
    NSSet *_mutedTagIDsInternal;
    NSSet *_autoFavoriteTagIDsInternal;
    NSSet *_groupableTagIDsInternal;
    NSSet *_ignoredTagIDsInternal;
    NSMutableDictionary *_mutableSubscriptionsBySubscriptionID;
    FCMTWriterLock *_itemsLock;
}


@property (readonly, copy, nonatomic) NSSet *allSubscribedTagIDs;
@property (readonly, copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property (readonly, copy, nonatomic) NSSet *groupableTagIDs;
@property (readonly, copy, nonatomic) NSSet *ignoredTagIDs;
@property (readonly, copy, nonatomic) NSSet *mutedTagIDs;
@property (readonly, copy, nonatomic) NSOrderedSet *orderedSubscribedTagIDs;
@property (readonly, copy, nonatomic) NSSet *subscribedTagIDs;
@property (retain, nonatomic) NSObject<FCTagRanking> *subscribedTagRanker; // ivar: _subscribedTagRanker
@property (readonly, copy, nonatomic) NSDictionary *subscriptionsBySubscriptionID;


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
+(id)subscriptionIDForTagID:(id)arg0 type:(NSUInteger)arg1 ;
+(void)configureKeyValueStoreForJSONHandling:(id)arg0 ;
-(BOOL)addSubscriptionForTagID:(id)arg0 type:(NSUInteger)arg1 eventInitiationLevel:(NSInteger)arg2 ;
-(BOOL)addSubscriptionForTagID:(id)arg0 type:(NSUInteger)arg1 origin:(NSUInteger)arg2 eventInitiationLevel:(NSInteger)arg3 ;
-(BOOL)addSubscriptionForTagID:(id)arg0 type:(NSUInteger)arg1 origin:(NSUInteger)arg2 groupID:(id)arg3 eventInitiationLevel:(NSInteger)arg4 ;
-(BOOL)addSubscriptionForTagID:(id)arg0 type:(NSUInteger)arg1 origin:(NSUInteger)arg2 groupID:(id)arg3 notificationsEnabled:(BOOL)arg4 eventInitiationLevel:(NSInteger)arg5 ;
-(BOOL)canAddSubscription;
-(BOOL)canHelpRestoreZoneName:(id)arg0 ;
-(BOOL)hasAutoFavoriteSubscriptionForTagID:(id)arg0 ;
-(BOOL)hasIgnoredSubscriptionForTagID:(id)arg0 ;
-(BOOL)hasMutedSubscriptionForTagID:(id)arg0 ;
-(BOOL)hasNotificationsEnabledForTagID:(id)arg0 ;
-(BOOL)hasSubscriptionForTagID:(id)arg0 ;
-(BOOL)moveSubscriptionForTagID:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)setNotificationsEnabled:(BOOL)arg0 forTagID:(id)arg1 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg0 ;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 ;
-(id)recordsForRestoringZoneName:(id)arg0 ;
-(id)subscriptionForTagID:(id)arg0 ;
-(id)subscriptionForTagID:(id)arg0 type:(NSUInteger)arg1 ;
-(id)subscriptionForTagIDOfAnyType:(id)arg0 ;
-(id)subscriptionsForType:(NSUInteger)arg0 ;
-(id)t_reconcileSubscriptions:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
// -(void)addSubscriptionsForTagIDs:(id)arg0 typeProvider:(id)arg1 originProvider:(unk)arg2 eventInitiationLevelProvider:(id)arg3 completion:(unk)arg4  ;
-(void)assignOrderToTagSubscriptionsIfNeeded;
-(void)handleSyncCompletion;
-(void)handleSyncDidResetLocalDataForRecordZoneWithID:(id)arg0 ;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)removeObserver:(id)arg0 ;
-(void)removeSubscriptionForTagID:(id)arg0 type:(NSUInteger)arg1 eventInitiationLevel:(NSInteger)arg2 ;
// -(void)removeSubscriptionsForTagIDs:(id)arg0 typeProvider:(id)arg1 eventInitiationLevel:(unk)arg2 completion:(NSInteger)arg3  ;


@end


#endif