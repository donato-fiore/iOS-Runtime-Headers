// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSENDPOINT_H
#define IDSENDPOINT_H

@class NSData, NSString, NSDate, NSError;
@protocol NSSecureCoding, NSCopying, IDSDestinationProtocol;

#import <Foundation/Foundation.h>

#import "IDSURI.h"
#import "IDSEndpointCapabilities.h"
#import "IDSFamilyEndpointData.h"
#import "IDSGameCenterData.h"
#import "IDSMPPublicDeviceIdentityContainer.h"

@interface IDSEndpoint : NSObject <NSSecureCoding, NSCopying, IDSDestinationProtocol>



@property (readonly, nonatomic) NSData *KTDeviceSignature; // ivar: _KTDeviceSignature
@property (readonly, nonatomic) NSData *KTLoggableData; // ivar: _KTLoggableData
@property (retain, nonatomic) IDSURI *URI; // ivar: _URI
@property (readonly, nonatomic) NSString *anonymizedSenderID; // ivar: _anonymizedSenderID
@property (nonatomic) *__SecKey applicationPublicDeviceIdentity; // ivar: _applicationPublicDeviceIdentity
@property (retain, nonatomic) IDSEndpointCapabilities *capabilities; // ivar: _capabilities
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expireDate; // ivar: _expireDate
@property (readonly, nonatomic) IDSFamilyEndpointData *familyEndpointData; // ivar: _familyEndpointData
@property (readonly, nonatomic) IDSGameCenterData *gameCenterData; // ivar: _gameCenterData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSError *identityContainerDeserializationError; // ivar: _identityContainerDeserializationError
@property (readonly, nonatomic) BOOL ktCapableFlag; // ivar: _ktCapableFlag
@property (readonly, nonatomic) char legacyVersion; // ivar: _legacyVersion
@property (readonly, nonatomic) BOOL mismatchedAccountFlag; // ivar: _mismatchedAccountFlag
@property (readonly, nonatomic) short ngmVersion; // ivar: _ngmVersion
@property (retain, nonatomic) IDSMPPublicDeviceIdentityContainer *publicDeviceIdentityContainer; // ivar: _publicDeviceIdentityContainer
@property (retain, nonatomic) NSData *pushToken; // ivar: _pushToken
@property (readonly, nonatomic) CGFloat queryTimeInterval; // ivar: _queryTimeInterval
@property (readonly, nonatomic) NSDate *refreshDate; // ivar: _refreshDate
@property (readonly, nonatomic) NSString *senderCorrelationIdentifier; // ivar: _senderCorrelationIdentifier
@property (readonly, nonatomic) NSData *serializedApplicationPublicKey; // ivar: _serializedApplicationPublicKey
@property (readonly, nonatomic) NSData *serializedLegacyPublicIdentity; // ivar: _serializedLegacyPublicIdentity
@property (readonly, nonatomic) NSData *serializedNGMDeviceIdentity; // ivar: _serializedNGMDeviceIdentity
@property (readonly, nonatomic) NSData *serializedNGMDevicePrekey; // ivar: _serializedNGMDevicePrekey
@property (readonly, nonatomic) NSData *serializedPublicLegacyIdentity;
@property (readonly, nonatomic) NSData *sessionToken; // ivar: _sessionToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL verifiedBusiness; // ivar: _verifiedBusiness


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEndpoint:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURI:(id)arg0 capabilities:(id)arg1 ngmVersion:(short)arg2 legacyVersion:(char)arg3 KTLoggableData:(id)arg4 KTDeviceSignature:(id)arg5 mismatchedAccountFlag:(BOOL)arg6 ktCapableFlag:(BOOL)arg7 pushToken:(id)arg8 sessionToken:(id)arg9 expireDate:(id)arg10 refreshDate:(id)arg11 anonymizedSenderID:(id)arg12 verifiedBusiness:(BOOL)arg13 serializedPublicMessageProtectionIdentity:(id)arg14 senderCorrelationIdentifier:(id)arg15 queryTimeInterval:(CGFloat)arg16 serializedNGMDeviceIdentity:(id)arg17 serializedNGMDevicePrekey:(id)arg18 serializedApplicationPublicKey:(id)arg19 familyEndpointData:(id)arg20 gameCenterData:(id)arg21 ;
-(id)initWithURI:(id)arg0 clientData:(id)arg1 KTLoggableData:(id)arg2 KTDeviceSignature:(id)arg3 mismatchedAccountFlag:(BOOL)arg4 ktCapableFlag:(BOOL)arg5 pushToken:(id)arg6 sessionToken:(id)arg7 expireDate:(id)arg8 refreshDate:(id)arg9 anonymizedSenderID:(id)arg10 verifiedBusiness:(BOOL)arg11 serializedPublicMessageProtectionIdentity:(id)arg12 senderCorrelationIdentifier:(id)arg13 queryTimeInterval:(CGFloat)arg14 serializedNGMDeviceIdentity:(id)arg15 serializedNGMDevicePrekey:(id)arg16 serializedApplicationPublicKey:(id)arg17 familyEndpointData:(id)arg18 gameCenterData:(id)arg19 ;
-(id)initWithURI:(id)arg0 clientData:(id)arg1 pushToken:(id)arg2 sessionToken:(id)arg3 expireDate:(id)arg4 refreshDate:(id)arg5 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif