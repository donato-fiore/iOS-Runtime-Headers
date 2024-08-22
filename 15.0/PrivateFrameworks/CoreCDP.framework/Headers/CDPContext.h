// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPCONTEXT_H
#define CDPCONTEXT_H

@class NSString, NSDictionary, NSUUID, NSData, NSNumber, KCAESGCMDuplexSession, AKCircleRequestContext, CUMessageSession;
@protocol NSSecureCoding, NSCopying, CDPAuthProviderInternal;

#import <Foundation/Foundation.h>

#import "CDPCustodianRecoveryInfo.h"

@interface CDPContext : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL _alwaysCreateEscrowRecord; // ivar: __alwaysCreateEscrowRecord
@property (retain, nonatomic) NSObject<CDPAuthProviderInternal> *_authProvider; // ivar: __authProvider
@property (nonatomic) BOOL _ignoreLockAssertErrors; // ivar: __ignoreLockAssertErrors
@property (copy, nonatomic) NSString *_recoveryToken; // ivar: __recoveryToken
@property (nonatomic) BOOL _skipEscrowFetches; // ivar: __skipEscrowFetches
@property (nonatomic) BOOL _supportsCustodianRecovery; // ivar: __supportsCustodianRecovery
@property (nonatomic) BOOL _useSecureBackupCachedPassphrase; // ivar: __useSecureBackupCachedPassphrase
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSDictionary *authenticationResults; // ivar: _authenticationResults
@property (copy, nonatomic) NSUUID *beneficiaryIdentifier; // ivar: _beneficiaryIdentifier
@property (retain, nonatomic) NSData *beneficiaryWrappedKeyData; // ivar: _beneficiaryWrappedKeyData
@property (copy, nonatomic) NSString *cachedLocalSecret; // ivar: _cachedLocalSecret
@property (nonatomic) NSUInteger cachedLocalSecretType; // ivar: _cachedLocalSecretType
@property (retain, nonatomic) CDPCustodianRecoveryInfo *custodianRecoveryInfo; // ivar: _custodianRecoveryInfo
@property (nonatomic) BOOL didUseSMSVerification; // ivar: _didUseSMSVerification
@property (copy, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (retain, nonatomic) KCAESGCMDuplexSession *duplexSession; // ivar: _duplexSession
@property (nonatomic) BOOL failSignInOnError; // ivar: _failSignInOnError
@property (copy) NSString *findMyiPhoneUUID; // ivar: _findMyiPhoneUUID
@property (nonatomic) BOOL guestMode; // ivar: _guestMode
@property (nonatomic) BOOL idmsMasterKeyRecovery; // ivar: _idmsMasterKeyRecovery
@property (nonatomic) BOOL idmsRecovery; // ivar: _idmsRecovery
@property (nonatomic) BOOL isBeneficiaryAccount; // ivar: _isBeneficiaryAccount
@property (nonatomic) BOOL isFederatedAccount; // ivar: _isFederatedAccount
@property (nonatomic) BOOL isHSA2Account; // ivar: _isHSA2Account
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *passwordEquivToken; // ivar: _passwordEquivToken
@property (retain, nonatomic) AKCircleRequestContext *resumeContext; // ivar: _resumeContext
@property (retain, nonatomic) CUMessageSession *sharingChannel; // ivar: _sharingChannel
@property BOOL supportsSkipSignIn; // ivar: _supportsSkipSignIn
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)preflightContext:(id)arg0 ;
-(BOOL)desiresAllRecords;
-(id)cliqueConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAuthenticationResults:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)augmentWithCredentialsFromContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)purgeResumeData;
-(void)updateWithAuthenticationResults:(id)arg0 ;


@end


#endif