// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSACCOUNT_H
#define SSACCOUNT_H

@class ACAccount, NSData, NSString, NSArray, NSDictionary, NSNumber;
@protocol SSXPCCoding, NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSAccount : NSObject <SSXPCCoding, NSCopying>

 {
    ACAccount *_backingAccount;
    NSData *_bioToken;
    BOOL _didFallbackToPassword;
}


@property (copy) NSString *ITunesPassSerialNumber;
@property NSInteger accountKind;
@property (copy) NSString *accountName;
@property NSInteger accountScope;
@property NSInteger accountSource;
@property (getter=isActive) BOOL active;
@property (getter=isActiveLockerAccount) BOOL activeLockerAccount;
@property (copy) NSString *altDSID;
@property (getter=isAuthenticated) BOOL authenticated;
@property (copy, nonatomic) NSArray *automaticDownloadKinds;
@property NSInteger availableServiceTypes;
@property (readonly, nonatomic) ACAccount *backingAccount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backingAccountAccessQueue; // ivar: _backingAccountAccessQueue
@property (copy) NSString *creditsString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDemoAccount) BOOL demoAccount;
@property (copy, nonatomic) NSString *demoAccountRawPassword;
@property (readonly, copy) NSString *description;
@property BOOL didFallbackToPassword;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property NSInteger enabledServiceTypes;
@property (copy) NSString *firstName;
@property NSInteger freeDownloadsPasswordSetting;
@property (readonly, nonatomic) BOOL hasBrokenDSID;
@property (readonly) NSUInteger hash;
@property (copy) NSString *lastName;
@property (readonly, nonatomic, getter=isLocalAccount) BOOL localAccount;
@property (readonly) NSString *localizedName;
@property (getter=isManagedAppleID) BOOL managedAppleID;
@property (getter=isNewCustomer) BOOL newCustomer;
@property NSInteger paidPurchasesPasswordSetting;
@property (copy, nonatomic) NSString *passwordEquivalentToken;
@property (copy) NSDictionary *privacyAcknowledgement;
@property (copy, nonatomic) NSString *rawPassword;
@property (copy, nonatomic) NSString *secureToken;
@property (getter=isSocialEnabled) BOOL socialEnabled;
@property (copy) NSString *storeFrontIdentifier;
@property (readonly) Class superclass;
@property (retain) NSNumber *uniqueIdentifier;


+(BOOL)backingAccountIsDemoAccount:(id)arg0 ;
+(BOOL)backingAccountIsLocalAccount:(id)arg0 ;
+(BOOL)isManagedAppleIDFromAuthenticationResponseDictionary:(id)arg0 ;
+(BOOL)isNewCustomerFromAuthenticationResponseDictionary:(id)arg0 ;
+(NSInteger)accountKindFromAuthenticationResponseDictionary:(id)arg0 ;
+(id)DSIDFromAuthenticationResponseDictionary:(id)arg0 ;
+(id)_countryCodeFromStorefrontIdentifier:(id)arg0 ;
+(id)_displayedServerPromptKeyWithIdentifier:(id)arg0 ;
+(id)_lastAttemptForServerPromptKeyWithIdentifier:(id)arg0 ;
+(id)_valueForFirstAvailableKeyPath:(id)arg0 inDictionary:(id)arg1 ;
+(id)accountNameFromAuthenticationResponseDictionary:(id)arg0 ;
+(id)altDSIDFromAuthenticationResponseDictionary:(id)arg0 ;
+(id)creditsStringFromAuthenticationResponseDictionary:(id)arg0 ;
+(id)firstNameFromAuthenticationResponseDictionary:(id)arg0 ;
+(id)lastNameFromAuthenticationResponseDictionary:(id)arg0 ;
+(id)secureTokenForIdentifier:(id)arg0 ;
+(id)serverValueForAccountPasswordSettingValue:(NSInteger)arg0 ;
+(id)storeFrontIdentifierFromURLResponse:(id)arg0 ;
-(BOOL)displayedServerPromptWithIdentifier:(id)arg0 ;
-(BOOL)isDuplicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)mergeValuesFromAccount:(id)arg0 ;
-(id)accountPropertyForKey:(id)arg0 ;
-(id)copyLockdownRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)eligibilityForService:(NSInteger)arg0 ;
-(id)init;
-(id)initWithBackingAccount:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)lastAttemptDateForServerPromptWithIdentifier:(id)arg0 ;
-(id)popBiometricToken;
-(void)_addAccountPropertyBitmask:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)_removeAccountPropertyBitmask:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)_sendMessage:(id)arg0 withReply:(id)arg1 ;
-(void)_setAccountProperty:(id)arg0 forKey:(id)arg1 ;
-(void)acceptTermsAndConditions:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)addAvailableServiceTypes:(NSInteger)arg0 ;
-(void)addEnabledServiceTypes:(NSInteger)arg0 ;
-(void)getDownloadKindsEligibleForContentRestoreWithBlock:(id)arg0 ;
-(void)getEligibilityForService:(NSInteger)arg0 completionBlock:(id)arg1 ;
-(void)getITunesMatchStatusWithCompletionBlock:(id)arg0 ;
-(void)getKeybagSyncDataWithType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getPurchasedItemsForItems:(id)arg0 completionBlock:(id)arg1 ;
-(void)getTermsAndConditionsWithBlock:(id)arg0 ;
-(void)removeAvailableServiceTypes:(NSInteger)arg0 ;
-(void)removeEnabledServiceTypes:(NSInteger)arg0 ;
-(void)resetTransientData;
-(void)setBiometricToken:(id)arg0 ;
-(void)setDisplayedServerPrompt:(BOOL)arg0 withIdentifier:(id)arg1 ;
-(void)setEligibility:(id)arg0 forServiceType:(NSInteger)arg1 ;
-(void)setLastAttemptDate:(id)arg0 forServerPromptWithIdentifier:(id)arg1 ;
-(void)setLockdownDictionary:(id)arg0 ;
-(void)updateAccountPasswordSettings:(id)arg0 ;
-(void)updateAccountPasswordSettingsWithRequestProperties:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif