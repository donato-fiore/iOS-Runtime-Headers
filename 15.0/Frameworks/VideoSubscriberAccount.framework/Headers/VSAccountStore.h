// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSACCOUNTSTORE_H
#define VSACCOUNTSTORE_H

@class NSArray, NSString, NSOperationQueue, NSUndoManager;
@protocol VSRemoteNotifierDelegate;

#import <Foundation/Foundation.h>

#import "VSAccount.h"
#import "VSKeychainEditingContext.h"
#import "VSRemoteNotifier.h"

@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate>



@property (readonly, copy, nonatomic) NSArray *accounts;
@property (retain) VSAccount *cachedFirstAccount; // ivar: _cachedFirstAccount
@property (weak, nonatomic) id *changeObserver; // ivar: _changeObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSKeychainEditingContext *keychainEditingContext; // ivar: _keychainEditingContext
@property (retain, nonatomic) NSOperationQueue *keychainQueue; // ivar: _keychainQueue
@property BOOL needsUpdateCachedFirstAccount; // ivar: _needsUpdateCachedFirstAccount
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier; // ivar: _remoteNotifier
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUndoManager *undoManager;


+(Class)accountClass;
+(id)sharedAccountStore;
-(BOOL)_updateCachedFirstAccount;
-(BOOL)isFirstAccountLoaded;
-(id)_accountForKeychainItem:(id)arg0 simulateExpiredToken:(BOOL)arg1 developerProviderIDs:(id)arg2 ;
-(id)_keychainItemsWithLimit:(NSUInteger)arg0 ;
-(id)firstAccount;
-(id)firstAccountIfLoaded;
-(id)init;
-(void)_insertAccount:(id)arg0 inContext:(id)arg1 ;
-(void)_sendLocalNotification;
-(void)_sendRemoteNotification;
-(void)dealloc;
-(void)fetchAccountsWithCompletionHandler:(id)arg0 ;
-(void)remoteNotifier:(id)arg0 didReceiveRemoteNotificationWithUserInfo:(id)arg1 ;
-(void)removeAccounts:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)saveAccounts:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif