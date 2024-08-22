// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCNEWSLETTERMANAGER_H
#define FCNEWSLETTERMANAGER_H

@class NSDate, NSString, NSHashTable, NFPromise;
@protocol FCNewsletterManager, FCAppActivityObserving, FCAppleAccountObserver, FCNewsAppConfigurationManager, FCAppleAccount, FCBundleSubscriptionManagerType;

#import <Foundation/Foundation.h>

#import "FCCKPrivateDatabase.h"
#import "FCCommandQueue.h"
#import "FCNewsletterEndpointConnection.h"

@interface FCNewsletterManager : NSObject <FCNewsletterManager, FCAppActivityObserving, FCAppleAccountObserver>



@property (readonly, nonatomic) NSInteger activeNewsletter;
@property (readonly, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfig; // ivar: _appConfig
@property (readonly, nonatomic) NSObject<FCAppleAccount> *appleAccount; // ivar: _appleAccount
@property (readonly, nonatomic) NSObject<FCBundleSubscriptionManagerType> *bundleSubscriptionManager; // ivar: _bundleSubscriptionManager
@property (retain, nonatomic) NSDate *cacheExpiration; // ivar: _cacheExpiration
@property (retain, nonatomic) NSString *cachedVector; // ivar: _cachedVector
@property (readonly, nonatomic) BOOL canSubscribe;
@property (readonly, nonatomic) BOOL canUnsubscribe;
@property (readonly, nonatomic) FCCKPrivateDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) FCCommandQueue *endpointCommandQueue; // ivar: _endpointCommandQueue
@property (readonly, nonatomic) FCNewsletterEndpointConnection *endpointConnection; // ivar: _endpointConnection
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger includeOptions; // ivar: _includeOptions
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) NSInteger subscription; // ivar: _subscription
@property (readonly) Class superclass;
@property (retain, nonatomic) NFPromise *updateSubscriptionPromise; // ivar: _updateSubscriptionPromise


-(BOOL)canOptIntoIssues;
-(BOOL)canSubscribeToNewsletter:(NSInteger)arg0 ;
-(BOOL)isOptedIntoIssues;
-(BOOL)shouldSubmitPersonalizationVector;
-(CGFloat)cacheTimeout;
-(NSInteger)issueOptinStatus;
-(NSInteger)subscriptionStatusForNewsletter:(NSInteger)arg0 ;
-(id)forceUpdateSubscription;
-(id)initWithEndpointConnection:(id)arg0 endpointCommandQueue:(id)arg1 appleAccount:(id)arg2 appConfig:(id)arg3 bundleSubscriptionManager:(id)arg4 database:(id)arg5 ;
-(id)updateSubscription;
-(void)activityObservingApplicationDidBecomeActive;
-(void)addObserver:(id)arg0 ;
-(void)deletePersonalizationVector;
-(void)notifyObservers;
-(void)notifyObserversWithPreviousSubscription:(NSInteger)arg0 ;
-(void)optIntoIssues;
-(void)optOutOfIssues;
-(void)removeObserver:(id)arg0 ;
-(void)saveToCloudKitSubscribedChannels:(id)arg0 ;
-(void)submitPersonalizationVector:(id)arg0 subscribedBundleChannelIDs:(id)arg1 ;
-(void)subscribe;
-(void)subscribeTo:(NSInteger)arg0 ;
-(void)subscribeTo:(NSInteger)arg0 includeOptions:(NSInteger)arg1 ;
-(void)unsubscribe;
-(void)updateCacheWithNewsletterString:(id)arg0 includeArray:(id)arg1 ;


@end


#endif