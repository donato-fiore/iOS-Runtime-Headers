// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKASTATUSSUBSCRIPTIONMANAGER_H
#define SKASTATUSSUBSCRIPTIONMANAGER_H

@class NSMapTable, NSString;
@protocol SKAStatusSubscriptionManaging, SKAChannelManaging, SKADatabaseManaging, OS_dispatch_queue, SKAPushManaging;

#import <Foundation/Foundation.h>


@interface SKAStatusSubscriptionManager : NSObject <SKAStatusSubscriptionManaging>



@property (retain, nonatomic) NSMapTable *activeTransientSubscriptionsByClient; // ivar: _activeTransientSubscriptionsByClient
@property (retain, nonatomic) NSObject<SKAChannelManaging> *channelManager; // ivar: _channelManager
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue; // ivar: _internalWorkQueue
@property (retain, nonatomic) NSObject<SKAPushManaging> *pushManager; // ivar: _pushManager
@property (readonly) Class superclass;


+(id)logger;
-(BOOL)_activeTransientAssertionsExist;
-(BOOL)_addTransientSubscriptionAssertionForClient:(id)arg0 subscriptionIdentifier:(id)arg1 ;
-(BOOL)_removeTransientSubscriptionAssertionForClient:(id)arg0 subscriptionIdentifier:(id)arg1 ;
-(CGFloat)_subscriptionTTL;
-(NSInteger)_hardMaxSubscriptionCount;
-(NSInteger)_maxSubscriptionCacheCount;
-(id)_activeTransientSubscriptionsForClient:(id)arg0 ;
-(id)_allPersonalChannelIdentifiersRequiringSelfSubscriptionWithDatabaseContext:(id)arg0 ;
-(id)_enforceSubscriptionsHardCapOnSubscriptionIdentifiers:(id)arg0 ;
-(id)_fetchAllActiveSubscriptionAssertionsWithCache;
-(id)_fetchAllClientActiveSubscriptionAssertions;
-(id)_recentlyReleasedTransientSubscriptionAssertionIdentifiersExcludingSubscriptionIdentifiers:(id)arg0 count:(NSInteger)arg1 databaseContext:(id)arg2 ;
-(id)_sortAndDedupeSubscriptionIdentifiers:(id)arg0 ;
-(id)_statusTypeIdentifiersRequiringSelfSubscription;
-(id)initWithDatabaseManager:(id)arg0 channelManager:(id)arg1 pushManager:(id)arg2 ;
-(void)_markCacheSubscriptionDateForChannelIdentifier:(id)arg0 ;
-(void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)allSubscriptionIdentifiersWithActiveSubscriptionsForStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id)arg0 completion:(id)arg1 ;
-(void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 client:(id)arg2 completion:(id)arg3 ;
-(void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 client:(id)arg2 completion:(id)arg3 ;
-(void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(id)arg0 ;


@end


#endif