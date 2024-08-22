// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSUSERACCOUNTREGISTRY_H
#define VSUSERACCOUNTREGISTRY_H

@class NSString, NSDate, NSOperationQueue;
@protocol VSUserAccountUpdateManagerDelegate, VSUserAccountServiceProtocol, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "VSUserAccountPersistentContainer.h"
#import "VSPrivacyFacade.h"
#import "VSRemoteNotifier.h"
#import "VSUserAccountUpdateManager.h"

@interface VSUserAccountRegistry : NSObject <VSUserAccountUpdateManagerDelegate, VSUserAccountServiceProtocol>



@property (retain, nonatomic) VSUserAccountPersistentContainer *container; // ivar: _container
@property (nonatomic) BOOL currentUpdateSessionIsForced; // ivar: _currentUpdateSessionIsForced
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastUpdateTime; // ivar: _lastUpdateTime
@property (retain, nonatomic) VSPrivacyFacade *privacyFacade; // ivar: _privacyFacade
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (retain, nonatomic) VSUserAccountUpdateManager *updateManager; // ivar: _updateManager


-(BOOL)_isValidForUpdateQueryForCurrentTask;
-(BOOL)_isValidForUpdateQueryForCurrentTask:(id)arg0 ;
-(NSInteger)_deviceCategoryFromDeviceType:(NSUInteger)arg0 ;
-(id)_legacySubscriptionForUserAccount:(id)arg0 ;
-(id)_legacySubscriptionInfoForUserAccount:(id)arg0 ;
-(id)_predicateForQueryRequestWithOptions:(NSInteger)arg0 ;
-(id)_securityTaskForCurrentConnection;
-(id)_userAccountForLegacySubscription:(id)arg0 ;
-(id)_userAccountForPersistentUserAccount:(id)arg0 ;
-(id)init;
-(void)_deleteUserAccount:(id)arg0 completion:(id)arg1 ;
-(void)_insertUserAccount:(id)arg0 completion:(id)arg1 ;
-(void)_populatePersistentUserAccount:(id)arg0 withUserAccount:(id)arg1 ;
-(void)_queryPersistentUserAccountsWithOptions:(NSInteger)arg0 predicate:(id)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)_queryUserAccountsWithOptions:(NSInteger)arg0 predicate:(id)arg1 completion:(id)arg2 ;
-(void)_update;
-(void)deleteUserAccount:(id)arg0 completion:(id)arg1 ;
-(void)fetchActiveSubscriptionsWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)forceUpdateUserAccountsWithCompletion:(id)arg0 ;
-(void)insertLegacySubscription:(id)arg0 completion:(id)arg1 ;
-(void)queryUserAccountsWithOptions:(NSInteger)arg0 completion:(id)arg1 ;
-(void)registerSubscription:(id)arg0 ;
-(void)removeSubscriptions:(id)arg0 ;
-(void)updateManager:(id)arg0 updateRequestDidFinish:(id)arg1 ;
-(void)updateManagerDidFinish:(id)arg0 ;
-(void)updateUserAccount:(id)arg0 completion:(id)arg1 ;


@end


#endif