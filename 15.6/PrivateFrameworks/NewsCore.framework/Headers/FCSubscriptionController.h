// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSUBSCRIPTIONCONTROLLER_H
#define FCSUBSCRIPTIONCONTROLLER_H

@class NSHashTable, NSString;
@protocol FCSubscriptionListObserving, FCAppActivityObserving, FCPurchaseProviderType, FCCoreConfigurationManager;

#import <Foundation/Foundation.h>

#import "FCSubscriptionList.h"
#import "FCTagController.h"
#import "FCThreadSafeMutableDictionary.h"
#import "FCThreadSafeMutableSet.h"
#import "FCNotificationController.h"

@interface FCSubscriptionController : NSObject <FCSubscriptionListObserving, FCAppActivityObserving>

 {
    FCSubscriptionList *_subscriptionList;
    FCTagController *_tagController;
    FCThreadSafeMutableDictionary *_subscribedTagsByTagID;
    FCThreadSafeMutableSet *_newlyAddedSubscriptions;
    NSHashTable *_observers;
    FCNotificationController *_notificationController;
    id<FCPurchaseProviderType> *_purchaseProvider;
    id<FCCoreConfigurationManager> *_configurationManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addIgnoredSubscriptionForTagID:(id)arg0 eventInitiationLevel:(NSInteger)arg1 ;
-(BOOL)addIgnoredSubscriptionForTagID:(id)arg0 groupID:(id)arg1 eventInitiationLevel:(NSInteger)arg2 ;
-(BOOL)addMutedSubscriptionForTagID:(id)arg0 eventInitiationLevel:(NSInteger)arg1 ;
-(BOOL)addMutedSubscriptionForTagID:(id)arg0 groupID:(id)arg1 eventInitiationLevel:(NSInteger)arg2 ;
-(BOOL)addSubscriptionToTag:(id)arg0 error:(*id)arg1 eventInitiationLevel:(NSInteger)arg2 ;
-(BOOL)addSubscriptionToTag:(id)arg0 eventInitiationLevel:(NSInteger)arg1 options:(NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)addSubscriptionToTag:(id)arg0 notificationsEnabled:(BOOL)arg1 error:(*id)arg2 eventInitiationLevel:(NSInteger)arg3 ;
-(BOOL)canAddSubscription;
-(BOOL)canAddSubscriptionWithError:(*id)arg0 ;
-(BOOL)hasAutoFavoriteSubscriptionForTagID:(id)arg0 ;
-(BOOL)hasIgnoredSubscriptionForTagID:(id)arg0 ;
-(BOOL)hasMutedSubscriptionForTagID:(id)arg0 ;
-(BOOL)hasNotificationsEnabledForTag:(id)arg0 ;
-(BOOL)hasSubscriptionToTag:(id)arg0 ;
-(BOOL)hasSubscriptionToTagID:(id)arg0 ;
-(BOOL)isAppleNewsNotificationForTagID:(id)arg0 ;
-(BOOL)isChannelPermanentForTagID:(id)arg0 ;
-(BOOL)moveSubscriptionForTagID:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)setNotificationsEnabled:(BOOL)arg0 forTag:(id)arg1 error:(*id)arg2 ;
-(BOOL)setNotificationsEnabled:(BOOL)arg0 forTagID:(id)arg1 error:(*id)arg2 ;
-(id)allSubscribedTagIDs;
-(id)appleNewsNotificationChannelIDs;
-(id)autoFavoriteTagIDs;
-(id)cachedSubscribedTags;
-(id)groupableTagIDs;
-(id)ignoredTagIDs;
-(id)init;
-(id)initWithSubscriptionList:(id)arg0 tagController:(id)arg1 notificationController:(id)arg2 purchaseProvider:(id)arg3 configurationManager:(id)arg4 appActivityMonitor:(id)arg5 ;
-(id)mutedTagIDs;
-(id)newlySubscribedTagIDsInDateRange:(id)arg0 ;
-(id)orderedCachedSubscribedTags;
-(id)permanentChannelIDs;
-(id)portraitExcludedAutoFavoriteTagIDs;
-(id)subscribedTagForTagID:(id)arg0 ;
-(id)subscribedTagIDs;
-(id)subscribedTagIDsWithNotificationsEnabled;
-(id)subscriptionForTag:(id)arg0 ;
-(id)subscriptionForTagID:(id)arg0 ;
-(id)subscriptionSurfacingHeadline:(id)arg0 ;
-(id)subscriptions;
-(id)subscriptionsWithType:(NSUInteger)arg0 ;
-(id)tagIDsWithType:(NSUInteger)arg0 ;
-(void)_purchaseListDidAddTagIDs:(id)arg0 ;
-(void)_purchaseListDidRemoveTagIDs:(id)arg0 ;
-(void)activityObservingApplicationDidEnterBackground;
// -(void)addAutoFavoriteSubscriptionForTagIDs:(id)arg0 groupableSubscriptionForTagIDs:(id)arg1 originProvider:(id)arg2 eventInitiationLevelProvider:(unk)arg3 completion:(id)arg4  ;
-(void)addObserver:(id)arg0 ;
-(void)fetchAllTagsWithCallbackQueue:(id)arg0 maximumCachedAge:(CGFloat)arg1 qualityOfService:(NSInteger)arg2 completion:(id)arg3 ;
-(void)fetchSubscribedTagsWithCallbackQueue:(id)arg0 preferCache:(BOOL)arg1 completion:(id)arg2 ;
-(void)prewarmFromCacheWithCallbackQueue:(id)arg0 completion:(id)arg1 ;
-(void)refreshSubscriptionTags;
-(void)removeAllAutoFavoriteSubscriptions:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeSubscriptionForTagID:(id)arg0 type:(NSUInteger)arg1 eventInitiationLevel:(NSInteger)arg2 ;
-(void)removeSubscriptionToTag:(id)arg0 eventInitiationLevel:(NSInteger)arg1 ;
-(void)subscriptionList:(id)arg0 didAddSubscriptions:(id)arg1 changeSubscriptions:(id)arg2 moveSubscriptions:(id)arg3 removeSubscriptions:(id)arg4 eventInitiationLevel:(NSInteger)arg5 ;
-(void)subscriptionListDidResetToEmpty:(id)arg0 ;
-(void)subscriptionsWithCompletion:(id)arg0 ;


@end


#endif