// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLJALISCODAAPCLIENT_H
#define BLJALISCODAAPCLIENT_H

@class NSNumber, NSMutableSet, NSPersistentHistoryToken, NSString, NSManagedObjectContext, NSMutableDictionary;
@protocol BLPurchaseDAAPServerDelegate, BUUserAccountObserving, OS_dispatch_queue, BLJaliscoDAAPClientDelegate, BLImageManager;

#import <Foundation/Foundation.h>


@interface BLJaliscoDAAPClient : NSObject <BLPurchaseDAAPServerDelegate, BUUserAccountObserving>

 {
    NSNumber *_currentAccountNumber;
    NSMutableSet *_completionHandlers;
    NSMutableSet *_familyCompletionHandlers;
    BOOL _skipLoadingCheck;
    NSObject<OS_dispatch_queue> *_serverWorkerQueue;
    NSUInteger _timebombRetries;
    os_unfair_lock_s _authenticationLock;
    BOOL _storeAuthenticationRequired;
}


@property (readonly, nonatomic) NSPersistentHistoryToken *currentJaliscoHistoryToken;
@property (nonatomic) NSUInteger currentServerGeneration; // ivar: _currentServerGeneration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLJaliscoDAAPClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dsidQueue; // ivar: _dsidQueue
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<BLImageManager> *imageManagerDelegate; // ivar: _imageManagerDelegate
@property (readonly, nonatomic, getter=isInitiallyLoadingJalisco) BOOL initiallyLoadingJalisco; // ivar: _initiallyLoadingJalisco
@property (retain, nonatomic) NSManagedObjectContext *moc; // ivar: _moc
@property (nonatomic) NSUInteger pendingUpdateGeneration; // ivar: _pendingUpdateGeneration
@property (retain, nonatomic) NSMutableSet *purchaseDAAPSyncsInFlight; // ivar: _purchaseDAAPSyncsInFlight
@property (copy, nonatomic) id *resetJaliscoStatusHandler; // ivar: _resetJaliscoStatusHandler
@property (nonatomic) BOOL storeAuthenticationRequired;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *swqDSIDToDAAPServer; // ivar: _swqDSIDToDAAPServer


+(BOOL)isSupported;
+(BOOL)workaround_18397698;
+(id)sharedClient;
+(void)initialize;
+(void)preWarmSync;
-(BOOL)resetPoliteTimers;
-(id)_allPurchaseDAAPServers;
-(id)_currentPurchaseDAAPServers;
-(id)_dsids;
-(id)_familyPurchaseDAAPServers;
-(id)_fetchItemsForNeedsImport:(BOOL)arg0 ;
-(id)_fetchRequestForNotInStoreAccountIDs:(id)arg0 ;
-(id)fetchAllBookletIDsWithParentStoreIDs:(id)arg0 ;
-(id)fetchItemsForStoreIDs:(id)arg0 ;
-(id)fetchRequestForAllStoreIDs:(id)arg0 ;
-(id)fetchRequestForAllStoreIDsWithNonEmptyPurchasedToken:(id)arg0 ;
-(id)fetchRequestForBookletItems:(id)arg0 ;
-(id)fetchRequestForBuyParameters:(id)arg0 ;
-(id)fetchRequestForStoreID:(id)arg0 ;
-(id)fetchRequestForStoreIDIncludingHidden:(id)arg0 ;
-(id)fetchRequestForStoreIDs:(id)arg0 ;
-(id)init;
-(id)newManagedObjectContext;
-(id)newManagedObjectContextWithPrivateQueueConcurrency;
-(id)persistentStoreCoordinator;
-(id)predicateForBookletItems:(BOOL)arg0 ;
-(id)predicateForItems:(BOOL)arg0 ;
-(void)_addPurchaseServerForCurrentUser;
-(void)_processFamilyCircleAdded:(id)arg0 removed:(id)arg1 unchanged:(id)arg2 completion:(id)arg3 ;
-(void)_resetPurchaseDAAPServersWithQueue:(id)arg0 ;
-(void)_sendCompletionHandlersWithSuccess:(BOOL)arg0 generation:(NSUInteger)arg1 ;
-(void)_startObservingNotifications;
-(void)_stopObservingNotifications;
-(void)dealloc;
-(void)deleteItemsWithStoreIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchItemsForBuyParameters:(id)arg0 completion:(id)arg1 ;
-(void)fetchItemsForStoreIDs:(id)arg0 completion:(id)arg1 ;
-(void)forceJaliscoArtworkUpdateWithCompletion:(id)arg0 ;
-(void)hideItemsWithStoreIDs:(id)arg0 completion:(id)arg1 ;
-(void)jaliscoArtworkTimebombed;
-(void)purchaseServerHandleClientExpired;
-(void)purchaseServerRequestITunesAuthentication;
-(void)refreshSignInStatus;
-(void)refreshStoreWithCompletion:(id)arg0 ;
-(void)resetPurchasedTokenForStoreIDs:(id)arg0 completion:(id)arg1 ;
-(void)resetStaleJaliscoDatabaseWithCompletion:(id)arg0 ;
-(void)setItemHidden:(BOOL)arg0 forStoreID:(id)arg1 completion:(id)arg2 ;
-(void)storeIDsWithNonEmptyPurchasedToken:(id)arg0 completion:(id)arg1 ;
-(void)updateFamilyPolitely:(BOOL)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateFamilyPolitely:(BOOL)arg0 reason:(NSInteger)arg1 completionWithError:(id)arg2 ;
-(void)updatePolitely:(BOOL)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updatePolitely:(BOOL)arg0 reason:(NSInteger)arg1 completionWithError:(id)arg2 ;
-(void)updatePolitelyAfterSignIn:(BOOL)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updatePolitelyAfterSignOut:(BOOL)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)userAccount:(NSUInteger)arg0 didChangeWithReason:(NSUInteger)arg1 ;


@end


#endif