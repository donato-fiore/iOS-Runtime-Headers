// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASTLEIMAPACCOUNT_H
#define CASTLEIMAPACCOUNT_H

@class MFLock, ACAccount, DeliveryAccount, NSMutableDictionary, NSString, ACAccountStore, NSURL, EDiCloudAliasSupport;
@protocol OS_dispatch_queue;


#import "IMAPAccount.h"

@interface CastleIMAPAccount : IMAPAccount {
    MFLock *_appleAccountLock;
    ACAccount *_appleAccount;
    DeliveryAccount *_deliveryAccount;
    BOOL _readyForPushRegistration;
    NSMutableDictionary *_aliasChanges;
    NSString *_updatedDefaultEmail;
    NSObject<OS_dispatch_queue> *_aliasUpdateQueue;
}


@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) NSURL *aliasLookupURL; // ivar: _aliasLookupURL
@property (readonly, nonatomic) EDiCloudAliasSupport *aliasSupport; // ivar: _aliasSupport
@property (readonly, nonatomic) ACAccount *appleAccount;
@property (readonly, retain, nonatomic) NSString *authToken;
@property (readonly, retain, nonatomic) NSString *clientInfo;
@property (readonly, nonatomic) NSString *deliveryHostname;
@property (readonly, nonatomic) unsigned int deliveryPortNumber;
@property (readonly, nonatomic) BOOL deliveryUsesSSL;
@property (readonly, retain, nonatomic) NSString *personID;


+(BOOL)isPredefinedAccountType;
+(BOOL)primaryDeliveryAccountIsDynamic;
+(BOOL)usernameIsEmailAddress;
+(id)accountTypeIdentifier;
+(id)accountTypeString;
+(id)defaultPathNameForAccountWithHostname:(id)arg0 username:(id)arg1 ;
+(id)displayedAccountTypeString;
+(id)emailAddressHostPart;
+(id)newChildAccountWithParentAccount:(id)arg0 error:(*id)arg1 ;
+(void)initialize;
-(BOOL)_updateEmailAddressAndAliases;
-(BOOL)allowsTrustPrompt;
-(BOOL)canAttemptPushRegistration;
-(BOOL)canReceiveNewMailNotifications;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(BOOL)isEnabledForDataclass:(id)arg0 ;
-(BOOL)isEquivalentTo:(id)arg0 hostname:(id)arg1 username:(id)arg2 ;
-(BOOL)shouldDisplayHostnameInErrorMessages;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg0 ;
-(BOOL)shouldFetchRemoteLinksWithDateReceived:(id)arg0 ;
-(BOOL)shouldRegisterForPush;
-(BOOL)supportsArchiving;
-(BOOL)updateEmailAliases;
-(BOOL)usesSSL;
-(NSUInteger)credentialAccessibility;
-(id)_aliasesFromData:(id)arg0 ;
-(id)_aliasesFromOldData:(id)arg0 ;
-(id)_defaultEmailAddressFromData:(id)arg0 ;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg0 ;
-(id)_emailsFromData:(id)arg0 ;
-(id)_fromEmailAddressesIncludingDisabled:(BOOL)arg0 ;
-(id)_headerStringFromDate:(id)arg0 ;
-(id)_mailPropertyFromAppleAccountForKey:(id)arg0 ;
-(id)_prepareAliasData;
-(id)anisetteDataWithError:(*id)arg0 ;
-(id)authTokenWithError:(*id)arg0 ;
-(id)displayName;
-(id)displayUsername;
-(id)emailAddressStrings;
-(id)emailAddressesAndAliasesList;
-(id)firstEmailAddress;
-(id)fromEmailAddresses;
-(id)fromEmailAddressesIncludingDisabled;
-(id)hostname;
-(id)iconString;
-(id)initWithLibrary:(id)arg0 persistentAccount:(id)arg1 ;
-(id)passwordFromKeychain;
-(id)preferredAuthScheme;
-(id)statisticsKind;
-(id)uniqueIdForPersistentConnection;
-(id)username;
-(unsigned int)portNumber;
-(void)_accountsChanged:(id)arg0 ;
-(void)_removePasswordInKeychain;
-(void)dealloc;
-(void)handleAlertResponse:(id)arg0 ;
-(void)handleOverQuotaResponse:(id)arg0 ;
-(void)persistentAccountDidChange:(id)arg0 previousAccount:(id)arg1 ;
-(void)pushUpdateForAliasData;
-(void)setDefaultEmailAddress:(id)arg0 ;
-(void)setDisplayName:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 forEmailAddress:(id)arg1 ;
-(void)setHostname:(id)arg0 ;
-(void)setLocalDefaultEmailAddress:(id)arg0 ;
-(void)setLocallyEnabled:(BOOL)arg0 forEmailAddress:(id)arg1 ;
-(void)setPasswordInKeychain:(id)arg0 ;
-(void)setPortNumber:(unsigned int)arg0 ;
-(void)setUsername:(id)arg0 ;
-(void)setUsesSSL:(BOOL)arg0 ;
-(void)startListeningForNotifications;


@end


#endif