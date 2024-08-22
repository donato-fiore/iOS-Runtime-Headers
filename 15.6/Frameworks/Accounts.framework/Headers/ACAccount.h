// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACACCOUNT_H
#define ACACCOUNT_H

@class NSString, NSMutableDictionary, NSURL, NSDate, NSArray, NSMutableSet, NSDictionary, NSSet;
@protocol ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding, NSObject;

#import <Foundation/Foundation.h>

#import "ACAccountStore.h"
#import "ACAccountType.h"
#import "ACAccountCredential.h"
#import "ACAccount.h"
#import "ACTrackedSet.h"

@interface ACAccount : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding>

 {
    ACAccountStore *_accountStore;
    NSString *_identifier;
    NSString *_accountDescription;
    NSString *_owningBundleID;
    NSString *_username;
    NSString *_authenticationType;
    NSString *_credentialType;
    NSString *_clientToken;
    ACAccountType *_accountType;
    ACAccountCredential *_credential;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_dataclassProperties;
    NSURL *_objectID;
    NSDate *_date;
    NSDate *_lastCredentialRenewalRejectionDate;
    NSString *_modificationID;
    ACAccount *_parentAccount;
    NSArray *_childAccounts;
    NSMutableSet *_dirtyProperties;
    NSMutableSet *_dirtyAccountProperties;
    NSMutableSet *_dirtyDataclassProperties;
    id<NSObject> *_credentialsDidChangeObserver;
    BOOL _haveCheckedForClientToken;
    BOOL _accountAccessAvailable;
    BOOL _authenticated;
    BOOL _active;
    BOOL _warmingUp;
    BOOL _supportsAuthentication;
    BOOL _visible;
    BOOL _haveCheckedForChildAccounts;
}


@property (copy, nonatomic) NSString *accountDescription;
@property (readonly, weak, nonatomic) NSDictionary *accountProperties;
@property (copy) id *accountPropertiesTransformer; // ivar: _accountPropertiesTransformer
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) ACAccountType *accountType;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (readonly, nonatomic) NSString *authenticationType;
@property (readonly, nonatomic) NSArray *childAccounts;
@property (readonly, nonatomic) NSString *clientToken;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) ACAccountCredential *credential;
@property (readonly, nonatomic) NSString *credentialType;
@property (readonly, weak, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly, nonatomic) NSSet *dirtyAccountProperties;
@property (readonly, nonatomic) NSSet *dirtyDataclassProperties;
@property (readonly, nonatomic) NSSet *dirtyProperties;
@property (readonly, weak, nonatomic) ACAccount *displayAccount;
@property (retain, nonatomic) NSMutableSet *enabledDataclasses;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSString *identifier;
@property (readonly, nonatomic) ACAccountCredential *internalCredential;
@property (retain, nonatomic) NSDate *lastCredentialRenewalRejectionDate;
@property (retain) NSString *managingOwnerIdentifier;
@property (retain) NSString *managingSourceName;
@property (readonly, nonatomic) NSString *modificationID;
@property (readonly, nonatomic) NSURL *objectID;
@property (retain, nonatomic) ACAccount *parentAccount;
@property (readonly, nonatomic) NSString *parentAccountIdentifier;
@property (retain, nonatomic) NSMutableSet *provisionedDataclasses;
@property (readonly, nonatomic) NSString *shortDebugName;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAuthentication;
@property (readonly, nonatomic) BOOL supportsPush;
@property (copy, nonatomic) ACTrackedSet *trackedEnabledDataclasses; // ivar: _trackedEnabledDataclasses
@property (copy, nonatomic) ACTrackedSet *trackedProvisionedDataclasses; // ivar: _trackedProvisionedDataclasses
@property (readonly, nonatomic) NSString *userFullName;
@property (copy, nonatomic) NSString *username;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic, getter=isWarmingUp) BOOL warmingUp;
@property (readonly, nonatomic) BOOL wasEnabledDataclassesReset; // ivar: _wasEnabledDataclassesReset
@property (readonly, nonatomic) BOOL wasProvisionedDataclassesReset; // ivar: _wasProvisionedDataclassesReset


+(BOOL)supportsSecureCoding;
+(id)keypathsRequiredForInitialization;
-(BOOL)_isDifferentFrom:(id)arg0 ;
-(BOOL)_useParentForCredentials;
-(BOOL)addClientToken:(id)arg0 ;
-(BOOL)authenticated;
-(BOOL)correctPersonaScopedForAccount;
-(BOOL)isDataSeparatedAccount;
-(BOOL)isEnabledForDataclass:(id)arg0 ;
-(BOOL)isEnabledToSyncDataclass:(id)arg0 ;
-(BOOL)isPropertyDirty:(id)arg0 ;
-(BOOL)isProvisionedForDataclass:(id)arg0 ;
-(id)_encodeProtobuf;
-(id)_encodeProtobufData;
-(id)_initWithProtobuf:(id)arg0 ;
-(id)_initWithProtobufData:(id)arg0 ;
-(id)accountByCleaningThirdPartyTransformations;
-(id)accountPropertyForKey:(id)arg0 ;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg0 ;
-(id)childCardDAVAccountIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)credentialWithError:(*id)arg0 ;
-(id)defaultAutodiscoverDomainForChildType:(id)arg0 ;
-(id)fullDescription;
-(id)init;
-(id)initWithAccountType:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithManagedAccount:(id)arg0 ;
-(id)initWithManagedAccount:(id)arg0 accountStore:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)owningBundleID;
-(id)personaIdentifier;
-(id)portableCopy;
-(id)propertiesForDataclass:(id)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(id)qualifiedUsername;
-(id)secCertificates;
-(struct __SecIdentity *)copySecIdentity;
-(void)_applyDirtyStateFromAccount:(id)arg0 ;
-(void)_clearCachedChildAccounts;
-(void)_clearCachedCredentials;
-(void)_clearDirtyProperties;
-(void)_installCredentialsChangedObserver;
-(void)_loadAllCachedProperties;
-(void)_markAccountPropertyDirty:(id)arg0 ;
-(void)_markCredentialDirty;
-(void)_markDataclassPropertyDirty:(id)arg0 ;
-(void)_markPropertyDirty:(id)arg0 ;
-(void)_unsafe_markAccountPropertyDirty:(id)arg0 ;
-(void)_unsafe_markDataclassPropertyDirty:(id)arg0 ;
-(void)_unsafe_markPropertyDirty:(id)arg0 ;
-(void)credentialsChanged:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markAllPropertiesDirty;
-(void)refresh;
-(void)reload;
-(void)setAccountProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setChildCardDAVAccountIdentifier:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 forDataclass:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;
-(void)setOwningBundleID:(id)arg0 ;
-(void)setProperties:(id)arg0 forDataclass:(id)arg1 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 ;
-(void)setProvisioned:(BOOL)arg0 forDataclass:(id)arg1 ;
-(void)setSecCertificates:(id)arg0 ;
-(void)setSecIdentity:(struct __SecIdentity *)arg0 ;
-(void)takeValuesFromModifiedAccount:(id)arg0 ;


@end


#endif