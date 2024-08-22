// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMACCOUNTREPOSITORY_H
#define EMACCOUNTREPOSITORY_H

@class NSMutableDictionary, NSArray, NSString;
@protocol EFLoggable, EMAccountRepositoryObserver, EFScheduler, EFCancelable;


#import "EMRepository.h"
#import "EMRemoteConnection.h"

@interface EMAccountRepository : EMRepository <EFLoggable, EMAccountRepositoryObserver>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_accounts;
    EMRemoteConnection *_connection;
    id<EFScheduler> *_recoveryHandlerScheduler;
    id<EFScheduler> *_observerScheduler;
    id<EFCancelable> *_cancelable;
}


@property (readonly, nonatomic) NSArray *allAccounts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *deliveryAccounts;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *receivingAccounts;
@property (readonly) Class superclass;


+(id)log;
+(id)remoteInterface;
-(id)_currentAccountsByObjectIDMap;
-(id)accountForAccountIdentifier:(id)arg0 ;
-(id)accountForIdentifier:(id)arg0 ;
-(id)initInternal;
-(id)initWithRemoteConnection:(id)arg0 ;
-(void)_fetchAccountsAndObserveChanges;
-(void)_postAccountChangedNotification;
-(void)accountsAdded:(id)arg0 ;
-(void)accountsChanged:(id)arg0 ;
-(void)accountsRemoved:(id)arg0 ;
-(void)dealloc;
-(void)didBeginObserving;
-(void)didEndObserving;
-(void)requestAccounts;


@end


#endif