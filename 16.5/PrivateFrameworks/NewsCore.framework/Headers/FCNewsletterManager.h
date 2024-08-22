// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCNEWSLETTERMANAGER_H
#define FCNEWSLETTERMANAGER_H

@class NSDate, NSString, NFPromise, NSHashTable;
@protocol FCNewsletterManager, FCAppActivityObserving, FCAppleAccountObserver, FCNewsAppConfigurationManager, FCAppleAccount, FCBundleSubscriptionManagerType;

#import <Foundation/Foundation.h>

#import "FCCKPrivateDatabase.h"
#import "FCCommandQueue.h"
#import "FCNewsletterEndpointConnection.h"
#import "FCUserInfo.h"

@interface FCNewsletterManager : NSObject <FCNewsletterManager, FCAppActivityObserving, FCAppleAccountObserver>



@property (readonly, nonatomic) NSInteger activeNewsletter;
@property (readonly, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfig; // ivar: _appConfig
@property (readonly, nonatomic) NSObject<FCAppleAccount> *appleAccount; // ivar: _appleAccount
@property (readonly, nonatomic) NSObject<FCBundleSubscriptionManagerType> *bundleSubscriptionManager; // ivar: _bundleSubscriptionManager
@property (retain, nonatomic) NSDate *cacheExpiration; // ivar: _cacheExpiration
@property (retain, nonatomic) NSString *cachedVector; // ivar: _cachedVector
@property (copy) NSString *cachedWebToken; // ivar: _cachedWebToken
@property (readonly, nonatomic) BOOL canSubscribe;
@property (readonly, nonatomic) BOOL canUnsubscribe;
@property (readonly, nonatomic) FCCKPrivateDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) FCCommandQueue *endpointCommandQueue; // ivar: _endpointCommandQueue
@property (readonly, nonatomic) FCNewsletterEndpointConnection *endpointConnection; // ivar: _endpointConnection
@property (retain, nonatomic) NFPromise *getWebTokenPromise; // ivar: _getWebTokenPromise
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includeBundleSubscribedVector;
@property (nonatomic) NSInteger includeOptions; // ivar: _includeOptions
@property (readonly, nonatomic) BOOL includeSportsVector;
@property (readonly, nonatomic) BOOL includeUserVector;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) NSUInteger signupRequestStatus; // ivar: _signupRequestStatus
@property (nonatomic) NSInteger subscription; // ivar: _subscription
@property (readonly) Class superclass;
@property (retain, nonatomic) NFPromise *updateSubscriptionPromise; // ivar: _updateSubscriptionPromise
@property (readonly, nonatomic) FCUserInfo *userInfo; // ivar: _userInfo
@property (copy) NSDate *webTokenExpiration; // ivar: _webTokenExpiration


-(BOOL)canOptIntoIssues;
-(BOOL)canSubscribeToNewsletter:(NSInteger)arg0 ;
-(BOOL)isEligibleForIssues;
-(BOOL)isOptedIntoIssues;
-(BOOL)isSignedIntoEmailAccount;
-(BOOL)shouldSubmitPersonalizationVector;
-(CGFloat)cacheTimeout;
-(NSInteger)issueOptinStatus;
-(NSInteger)subscriptionStatusForNewsletter:(NSInteger)arg0 ;
-(id)forceSubscriptionThen:(id)arg0 ;
-(id)forceUpdateSubscription;
-(id)getWebToken;
-(id)initWithEndpointConnection:(id)arg0 endpointCommandQueue:(id)arg1 appleAccount:(id)arg2 appConfig:(id)arg3 userInfo:(id)arg4 bundleSubscriptionManager:(id)arg5 privateDataContext:(id)arg6 ;
-(id)updateSubscription;
-(void)activityObservingApplicationDidBecomeActive;
-(void)addObserver:(id)arg0 ;
-(void)deletePersonalizationVector;
-(void)notifyObservers;
-(void)notifyObserversWithPreviousSubscription:(NSInteger)arg0 ;
-(void)notifyObserversWithSignupStatus:(id)arg0 ;
-(void)optIntoSports;
-(void)optOutOfIssues;
-(void)optOutOfSports;
-(void)removeObserver:(id)arg0 ;
-(void)resetCaches;
-(void)saveToCloudKitSubscribedChannels:(id)arg0 ;
-(void)submitPersonalizationVector:(id)arg0 subscribedBundleChannelIDs:(id)arg1 ;
-(void)subscribeFromPrivacyModalCTA;
-(void)subscribeTo:(NSInteger)arg0 ;
-(void)subscribeTo:(NSInteger)arg0 includeOptions:(NSInteger)arg1 ;
-(void)unsubscribe;
-(void)updateCacheWithNewsletterString:(id)arg0 includeArray:(id)arg1 ;


@end


#endif