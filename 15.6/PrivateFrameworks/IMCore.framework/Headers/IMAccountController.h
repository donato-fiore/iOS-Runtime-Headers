// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMACCOUNTCONTROLLER_H
#define IMACCOUNTCONTROLLER_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "IMAccount.h"

@interface IMAccountController : NSObject {
    BOOL _isReadOnly;
    BOOL _cachesEnabled;
    NSArray *_operationalAccountsCache;
    NSMutableDictionary *_serviceToActiveAccountsMap;
    NSMutableDictionary *_serviceToAccountsMap;
    NSMutableDictionary *_serviceToConnectedAccountsMap;
    NSMutableDictionary *_serviceToOperationalAccountsMap;
    NSMutableDictionary *_accountMap;
}


@property (copy) NSArray *accounts; // ivar: _accounts
@property (readonly, nonatomic) NSArray *activeAccounts;
@property (readonly, nonatomic) IMAccount *activeIMessageAccount;
@property (readonly, nonatomic) IMAccount *activeSMSAccount;
@property (readonly, nonatomic) id *bestAccountForStatus;
@property (readonly, nonatomic) NSArray *connectedAccounts;
@property (nonatomic) BOOL networkDataAvailable; // ivar: _networkDataAvailable
@property (readonly, nonatomic) int numberOfAccounts;
@property (readonly, nonatomic) NSArray *operationalAccounts;


+(id)bestAccountFromAccounts:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_deactivateAccount:(id)arg0 ;
-(BOOL)_deactivateAccounts:(id)arg0 ;
-(BOOL)_shouldPerformDeferredSetup;
-(BOOL)accountActive:(id)arg0 ;
-(BOOL)accountConnected:(id)arg0 ;
-(BOOL)accountConnecting:(id)arg0 ;
-(BOOL)activateAccount:(id)arg0 ;
-(BOOL)activateAccount:(id)arg0 force:(BOOL)arg1 ;
-(BOOL)activateAccount:(id)arg0 force:(BOOL)arg1 locally:(BOOL)arg2 ;
-(BOOL)activateAccount:(id)arg0 locally:(BOOL)arg1 ;
-(BOOL)activateAccounts:(id)arg0 ;
-(BOOL)activateAccounts:(id)arg0 force:(BOOL)arg1 locally:(BOOL)arg2 ;
-(BOOL)activateAndHandleReconnectAccount:(id)arg0 ;
-(BOOL)activateAndHandleReconnectAccounts:(id)arg0 ;
-(BOOL)addAccount:(id)arg0 ;
-(BOOL)addAccount:(id)arg0 atIndex:(int)arg1 ;
-(BOOL)addAccount:(id)arg0 atIndex:(int)arg1 locally:(BOOL)arg2 ;
-(BOOL)addAccount:(id)arg0 locally:(BOOL)arg1 ;
-(BOOL)canActivateAccount:(id)arg0 ;
-(BOOL)canActivateAccounts:(id)arg0 ;
-(BOOL)canDeleteAccount:(id)arg0 ;
-(BOOL)deactivateAccount:(id)arg0 ;
-(BOOL)deactivateAccount:(id)arg0 withDisable:(BOOL)arg1 ;
-(BOOL)deactivateAccounts:(id)arg0 ;
-(BOOL)deactivateAccounts:(id)arg0 withDisable:(BOOL)arg1 ;
-(BOOL)deleteAccount:(id)arg0 ;
-(BOOL)deleteAccount:(id)arg0 locally:(BOOL)arg1 ;
-(BOOL)metionedHandleMatchesMeCard:(id)arg0 ;
-(BOOL)readOnly;
-(BOOL)receiverIsMyMention:(id)arg0 ;
-(id)__iCloudSystemAccountForService:(id)arg0 ;
-(id)_bestAccountForAddresses:(id)arg0 ;
-(id)_bestOperationalAccountForSendingForService:(id)arg0 ;
-(id)accountAtIndex:(int)arg0 ;
-(id)accountForUniqueID:(id)arg0 ;
-(id)accountsForService:(id)arg0 ;
-(id)accountsWithCapability:(NSUInteger)arg0 ;
-(id)activeAccountsForService:(id)arg0 ;
-(id)aimAccount;
-(id)bestAccountForService:(id)arg0 ;
-(id)bestAccountForService:(id)arg0 login:(id)arg1 guid:(id)arg2 ;
-(id)bestAccountForService:(id)arg0 withLogin:(id)arg1 ;
-(id)bestAccountWithCapability:(NSUInteger)arg0 ;
-(id)bestActiveAccountForService:(id)arg0 ;
-(id)bestActiveAccountForService:(id)arg0 withLogin:(id)arg1 ;
-(id)bestConnectedAccountForService:(id)arg0 ;
-(id)bestConnectedAccountForService:(id)arg0 withLogin:(id)arg1 ;
-(id)bestOperationalAccountForService:(id)arg0 ;
-(id)bestOperationalAccountForService:(id)arg0 withLogin:(id)arg1 ;
-(id)connectedAccountsForService:(id)arg0 ;
-(id)connectedAccountsWithCapability:(NSUInteger)arg0 ;
-(id)iMessageAccountForLastAddressedHandle:(id)arg0 simID:(id)arg1 ;
-(id)init;
-(id)jabberAccount;
-(id)mostLoggedInAccount;
-(id)operationalAccountsForService:(id)arg0 ;
-(id)operationalAccountsWithCapability:(NSUInteger)arg0 ;
-(void)_accountRegistrationStatusChanged:(id)arg0 ;
-(void)_activeAccountChanged:(id)arg0 ;
-(void)_disableCache;
-(void)_enableCache;
-(void)_rebuildOperationalAccountsCache:(BOOL)arg0 ;
-(void)_requestNetworkDataAvailability;
-(void)accountLoginComplete:(id)arg0 ;
-(void)autoLogin;
-(void)dealloc;
-(void)deferredSetup;
-(void)setReadOnly:(BOOL)arg0 ;


@end


#endif