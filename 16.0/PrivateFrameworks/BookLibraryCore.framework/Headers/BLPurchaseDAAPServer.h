// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLPURCHASEDAAPSERVER_H
#define BLPURCHASEDAAPSERVER_H

@class NSDate, NSMutableSet, BUBag, NSNumber;
@protocol OS_dispatch_queue, BLPurchaseDAAPServerDelegate;

#import <Foundation/Foundation.h>

#import "BKPurchaseDAAPBackoff.h"

@interface BLPurchaseDAAPServer : NSObject {
    NSDate *_lastPolledAt;
    NSDate *_DAAPReconnectAt;
    BOOL _clientExpired;
    NSInteger _requestReasonCode;
    NSMutableSet *_setupCompletionHandlers;
    BKPurchaseDAAPBackoff *_backoff;
    BUBag *_bag;
    NSObject<OS_dispatch_queue> *_updateItemsQueue;
    NSObject<OS_dispatch_queue> *_backoffQueue;
}


@property (retain, nonatomic) NSNumber *bagDatabaseID; // ivar: _bagDatabaseID
@property (weak, nonatomic) NSObject<BLPurchaseDAAPServerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (nonatomic) BOOL isServerSetup; // ivar: _isServerSetup
@property (nonatomic) BOOL isServerSetupPending; // ivar: _isServerSetupPending
@property (readonly, nonatomic, getter=isPrimaryAccount) BOOL primaryAccount; // ivar: _primaryAccount
@property (retain, nonatomic, setter=_setSessionID:) NSNumber *sessionID; // ivar: _sessionID


+(id)_clientIdentifier;
+(id)sharedSession;
-(BOOL)_canMakeDAAPRequest;
-(BOOL)_saveInMoc:(id)arg0 error:(*id)arg1 ;
-(BOOL)_updatePersistentServerRevision:(id)arg0 database:(id)arg1 items:(id)arg2 error:(*id)arg3 ;
-(id)_dataForArtRequest:(BOOL)arg0 ;
-(id)_dataForHideItemsRequestWithStoreIDs:(id)arg0 ;
-(id)_dataForItemsRequestWithLocalVersion:(id)arg0 serverVersion:(id)arg1 tokenPairs:(id)arg2 ;
-(id)_localServerDatabaseRevisionInMoc:(id)arg0 ;
-(id)_newDefaultAuthenticateOptions;
-(id)_processResponse:(id)arg0 ;
-(id)_updatePersistentDatabase:(id)arg0 server:(id)arg1 moc:(id)arg2 error:(*id)arg3 ;
-(id)_updatePersistentItems:(id)arg0 moc:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
-(id)_updatePersistentServerRevision:(id)arg0 moc:(id)arg1 error:(*id)arg2 ;
-(id)additionalAudiobookInfoKeys;
-(id)bookletKeys;
-(id)daapMetaDataFilterString;
-(id)daapQueryFilterString;
-(id)initWithDSID:(id)arg0 delegate:(id)arg1 ;
-(void)_configureWithReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_fetchDatabaseWithReason:(NSInteger)arg0 localServerRevision:(id)arg1 latestVersion:(id)arg2 completionHandler:(id)arg3 ;
-(void)_fetchDatabaseWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchItemsWithLocalVersion:(id)arg0 serverVersion:(id)arg1 reason:(NSInteger)arg2 tokenPairs:(id)arg3 completionHandler:(id)arg4 ;
-(void)_loginWithReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_loginWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)_pollLatestRevisionWithReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_preProcessResponse:(id)arg0 error:(id)arg1 responseBlock:(id)arg2 ;
-(void)_sendHandlers:(id)arg0 success:(BOOL)arg1 ;
-(void)_sendSetupConfigurationHandlersWithSuccess:(BOOL)arg0 ;
-(void)_shouldMakeRequest:(id)arg0 ;
-(void)_updateVersionAfterHideRequest:(id)arg0 ;
-(void)appRefreshesOnLaunchWithCompletionHandler:(id)arg0 ;
-(void)contextDidSave:(id)arg0 ;
-(void)databaseIDWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)fetchAllItemsPolitely:(BOOL)arg0 reason:(NSInteger)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)forcedRefreshFrequencyWithCompletionHandler:(id)arg0 ;
-(void)handleClientExpired;
-(void)hideItemsWithStoreIDs:(id)arg0 completion:(id)arg1 ;
-(void)pollingFrequencyWithCompletionHandler:(id)arg0 ;
-(void)resetWithQueue:(id)arg0 ;
-(void)serverParametersWithCompletionHandler:(id)arg0 ;
-(void)setDAAPReconnectToTimeIntervalSinceNow:(CGFloat)arg0 ;
-(void)setupWithReason:(NSInteger)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)timeIntervalFromDAAPBagKey:(id)arg0 completion:(id)arg1 ;
-(void)updateItemImageURLsIgnoringCache:(BOOL)arg0 completion:(id)arg1 ;
-(void)valueForDAAPBagKey:(id)arg0 completion:(id)arg1 ;


@end


#endif