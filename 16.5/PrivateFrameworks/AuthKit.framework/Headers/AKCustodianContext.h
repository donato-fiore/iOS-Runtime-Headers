// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKCUSTODIANCONTEXT_H
#define AKCUSTODIANCONTEXT_H

@class NSString, NSData, NSDictionary, NSArray, NSUUID, NSDate;
@protocol AKAuthenticationContext, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AKDevice.h"

@interface AKCustodianContext : NSObject <AKAuthenticationContext, NSSecureCoding, NSCopying>



@property (nonatomic) BOOL _cliMode; // ivar: _cliMode
@property (copy, nonatomic, setter=_setHeartbeatToken:) NSString *_heartbeatToken; // ivar: _heartbeatToken
@property (copy, nonatomic, setter=_setIdentityToken:) NSString *_identityToken; // ivar: _identityToken
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName; // ivar: _proxiedAppName
@property (copy, nonatomic) NSData *aaData; // ivar: _aaData
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *appProvidedContext; // ivar: _appProvidedContext
@property (copy, nonatomic) NSDictionary *appProvidedData; // ivar: _appProvidedData
@property (nonatomic) NSUInteger authenticationMode; // ivar: _authenticationMode
@property (nonatomic) NSUInteger authenticationType; // ivar: _authenticationType
@property (copy, nonatomic) NSArray *beneficiaryContacts; // ivar: _beneficiaryContacts
@property (copy, nonatomic) NSArray *beneficiaryUUIDs; // ivar: _beneficiaryUUIDs
@property (nonatomic) BOOL cliMode; // ivar: __cliMode
@property (nonatomic) NSInteger clientErrorCode; // ivar: _clientErrorCode
@property (copy, nonatomic) AKDevice *companionDevice; // ivar: _companionDevice
@property (copy, nonatomic) NSArray *custodianContacts; // ivar: _custodianContacts
@property (copy, nonatomic) NSString *custodianRecoveryToken; // ivar: _custodianRecoveryToken
@property (copy, nonatomic) NSString *custodianSetupToken; // ivar: _custodianSetupToken
@property (nonatomic, getter=isCustodianSyncAction) BOOL custodianSyncAction; // ivar: _custodianSyncAction
@property (copy, nonatomic) NSUUID *custodianUUID; // ivar: _custodianUUID
@property (copy, nonatomic) NSArray *custodianUUIDs; // ivar: _custodianUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *encryptedPRKC; // ivar: _encryptedPRKC
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *idmsData; // ivar: _idmsData
@property (copy, nonatomic) NSDate *lastDataSyncTimestamp; // ivar: _lastDataSyncTimestamp
@property (nonatomic) NSInteger notificationAction; // ivar: _notificationAction
@property (copy, nonatomic) NSString *ownerAppleID; // ivar: _ownerAppleID
@property (copy, nonatomic) NSString *ownerCustodianAltDSID; // ivar: _ownerCustodianAltDSID
@property (nonatomic) BOOL ownerDevice; // ivar: _ownerDevice
@property (copy, nonatomic) AKDevice *proxiedDevice; // ivar: _proxiedDevice
@property (copy, nonatomic) NSString *pushToken; // ivar: _pushToken
@property (copy, nonatomic) NSString *recoverySessionID; // ivar: _recoverySessionID
@property (copy, nonatomic) NSString *recoveryStep; // ivar: _recoveryStep
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *transactionID; // ivar: _transactionID
@property (copy, nonatomic) NSData *wrappingKeyRKC; // ivar: _wrappingKeyRKC


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif