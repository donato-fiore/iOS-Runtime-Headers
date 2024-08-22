// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACMONITOREDACCOUNTSTORE_H
#define ACMONITOREDACCOUNTSTORE_H

@class NSSet, NSMutableDictionary, NSHashTable, NSString, NSArray;
@protocol ACRemoteAccountStoreSessionDelegate, NSObject;


#import "ACAccountStore.h"

@interface ACMonitoredAccountStore : ACAccountStore <ACRemoteAccountStoreSessionDelegate>

 {
    NSSet *_accountTypesToMonitor;
    NSMutableDictionary *_accountsByID;
    NSHashTable *_delegates;
    id<NSObject> *_credentialsDidChangeObserver;
    id<NSObject> *_remoteAccountDidChangeObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *monitoredAccounts;
@property (readonly) Class superclass;


-(id)connectionDelegate;
-(id)initWithAccountTypes:(id)arg0 delegate:(id)arg1 ;
-(id)initWithWithRemoteEndpoint:(id)arg0 effectiveBundleID:(id)arg1 accountTypes:(id)arg2 delegate:(id)arg3 ;
-(id)monitoredAccountWithIdentifier:(id)arg0 ;
-(void)_accountsListPopulated:(id)arg0 ;
-(void)_processAccountsListForNotifications:(id)arg0 ;
-(void)_registerAccountMonitorSynchronouslyWithCompletion:(id)arg0 ;
-(void)_registerAccountMonitorWithCompletion:(id)arg0 ;
-(void)_registerForCredentialChangedNotifications;
-(void)_reregister;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasModified:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)connectionClosed;
-(void)credentialsChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)registerSynchronouslyWithError:(*id)arg0 ;
-(void)registerWithCompletion:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif