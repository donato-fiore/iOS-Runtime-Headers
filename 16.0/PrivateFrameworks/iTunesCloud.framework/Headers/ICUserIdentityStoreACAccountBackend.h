// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICUSERIDENTITYSTOREACACCOUNTBACKEND_H
#define ICUSERIDENTITYSTOREACACCOUNTBACKEND_H

@class ACMonitoredAccountStore, NSMutableDictionary, ACAccount, NSNumber, NSString;
@protocol ACMonitoredAccountStoreDelegateProtocol, ICUserIdentityStoreBackend, OS_dispatch_queue, ICUserIdentityStoreBackendDelegate;

#import <Foundation/Foundation.h>


@interface ICUserIdentityStoreACAccountBackend : NSObject <ACMonitoredAccountStoreDelegateProtocol, ICUserIdentityStoreBackend>

 {
    ACMonitoredAccountStore *_accountStore;
    NSMutableDictionary *_identityPropertiesCache;
    NSMutableDictionary *_allStoreAccountsByDSID;
    ACAccount *_primaryICloudAccount;
    NSNumber *_activeAccountDSID;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_accountStoreDelegateQueue;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICUserIdentityStoreBackendDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)disableLockerAccountDSID:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceIdentityProperties:(id)arg0 forDSID:(id)arg1 error:(*id)arg2 ;
-(BOOL)setIdentityProperties:(id)arg0 forDSID:(id)arg1 error:(*id)arg2 ;
-(BOOL)setLocalStoreAccountProperties:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateActiveAccountDSID:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateActiveLockerAccountDSID:(id)arg0 error:(*id)arg1 ;
-(id)_activeStoreAccountWithError:(*id)arg0 ;
-(id)_allStoreAccountsWithError:(*id)arg0 ;
-(id)_newLocalStoreAccountPropertiesFromAccount:(id)arg0 ;
-(id)_newUserIdentityPropertiesForAccount:(id)arg0 ;
-(id)_primaryAppleAccountWithError:(*id)arg0 ;
-(id)_registerAndLoadAccountsIfNecessary;
-(id)_storeAccountForDSID:(id)arg0 error:(*id)arg1 ;
-(id)_userIdentityPropertiesForAccount:(id)arg0 ;
-(id)activeAccountDSIDWithError:(*id)arg0 ;
-(id)activeLockerAccountDSIDWithError:(*id)arg0 ;
-(id)allManageableStoreAccountDSIDsWithError:(*id)arg0 ;
-(id)allStoreAccountDSIDsWithError:(*id)arg0 ;
-(id)allStoreAccountsWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identityPropertiesForDSID:(id)arg0 error:(*id)arg1 ;
-(id)identityPropertiesForPrimaryICloudAccountWithError:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localStoreAccountPropertiesWithError:(*id)arg0 ;
-(id)localStoreAccountWithError:(*id)arg0 ;
-(id)storeAccountForDSID:(id)arg0 error:(*id)arg1 ;
-(id)verificationContextForAccountEstablishmentWithError:(*id)arg0 ;
-(id)verificationContextForDSID:(id)arg0 error:(*id)arg1 ;
-(void)_applyIdentityProperties:(id)arg0 toAccount:(id)arg1 ;
-(void)_applyLocalStoreAccountProperties:(id)arg0 toAccount:(id)arg1 ;
-(void)_postAccountsChangeNotification;
-(void)_synchronize;
-(void)accountCredentialChanged:(id)arg0 ;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasModified:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeIdentityForDSID:(id)arg0 completion:(id)arg1 ;
-(void)synchronize;


@end


#endif