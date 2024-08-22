// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEENDPOINT_H
#define SEENDPOINT_H

@class NSData, NSArray, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SEEndPointPrivacyEncryptResponse.h"
#import "SEEndPointConfiguration.h"

@interface SEEndPoint : NSObject <NSSecureCoding>



@property (readonly) NSData *appletIdentifier; // ivar: _appletIdentifier
@property (readonly) NSArray *authorizedKeys; // ivar: _authorizedKeys
@property (copy) NSData *bleAddress; // ivar: _bleAddress
@property (copy) NSData *bleDCKIdentifier; // ivar: _bleDCKIdentifier
@property (copy) NSData *bleIntroKey; // ivar: _bleIntroKey
@property (copy) NSData *bleOOBKey; // ivar: _bleOOBKey
@property (copy) NSData *bleOOBMasterKey; // ivar: _bleOOBMasterKey
@property (copy) NSNumber *blePairingRequest; // ivar: _blePairingRequest
@property (copy) NSString *bleUUID; // ivar: _bleUUID
@property (retain, nonatomic) SEEndPointPrivacyEncryptResponse *carOEMProprietaryData; // ivar: _carOEMProprietaryData
@property (readonly) NSArray *certificates; // ivar: _certificates
@property (readonly) NSNumber *confidentialMailBoxSize; // ivar: _confidentialMailBoxSize
@property (readonly) SEEndPointConfiguration *configuration; // ivar: _configuration
@property (readonly) NSNumber *counter; // ivar: _counter
@property (copy) NSData *deviceConfiguration; // ivar: _deviceConfiguration
@property (readonly) NSInteger endPointType; // ivar: _endPointType
@property (copy) NSString *environment; // ivar: _environment
@property (copy) NSString *friendlyName; // ivar: _friendlyName
@property (copy) NSData *hupData; // ivar: _hupData
@property (copy) NSNumber *hupDone; // ivar: _hupDone
@property (readonly) NSString *identifier; // ivar: _identifier
@property (copy) NSString *invitationIdentifier; // ivar: _invitationIdentifier
@property (readonly, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (readonly, nonatomic) NSData *keyIdentifier; // ivar: _keyIdentifier
@property (copy) NSData *longTermSharedSecret; // ivar: _longTermSharedSecret
@property (copy) NSData *mailboxMapping; // ivar: _mailboxMapping
@property (copy) NSData *ownerEphemeralKey; // ivar: _ownerEphemeralKey
@property (copy) NSString *ownerIDSIdentifier; // ivar: _ownerIDSIdentifier
@property (readonly, nonatomic) NSString *privacyKeyIdentifier; // ivar: _privacyKeyIdentifier
@property (readonly) NSData *privacyPublicKey; // ivar: _privacyPublicKey
@property (readonly) NSData *privacyPublicKeyIdentifier; // ivar: _privacyPublicKeyIdentifier
@property (readonly) NSNumber *privateMailBoxSize; // ivar: _privateMailBoxSize
@property (readonly) NSData *publicKey; // ivar: _publicKey
@property (readonly) NSData *publicKeyIdentifier; // ivar: _publicKeyIdentifier
@property (readonly) NSData *readerIdentifier; // ivar: _readerIdentifier
@property (copy) NSString *readerInfo; // ivar: _readerInfo
@property (copy) NSData *readerLongTermPublicKeyCertificate; // ivar: _readerLongTermPublicKeyCertificate
@property (readonly) NSData *readerPublicKey; // ivar: _readerPublicKey
@property (retain, nonatomic) NSData *revocationAttestation; // ivar: _revocationAttestation
@property (copy) NSData *sharingAttestationData; // ivar: _sharingAttestationData
@property (copy) NSData *sharingEncryptedData; // ivar: _sharingEncryptedData
@property (copy) NSArray *sharingRecords; // ivar: _sharingRecords
@property (copy) NSString *sharingSessionUUID; // ivar: _sharingSessionUUID
@property (copy) NSNumber *sharingTokenAvailabilityBitmap; // ivar: _sharingTokenAvailabilityBitmap
@property (readonly) NSString *subjectIdentifier; // ivar: _subjectIdentifier
@property (copy) NSArray *supportedRKEFunctions; // ivar: _supportedRKEFunctions
@property (retain, nonatomic) NSString *terminatedByTaskID; // ivar: _terminatedByTaskID
@property (copy) NSData *trackingReceipt; // ivar: _trackingReceipt
@property (copy) NSData *trackingRequest; // ivar: _trackingRequest


+(BOOL)supportsSecureCoding;
+(id)decodeWithData:(id)arg0 error:(*id)arg1 ;
+(id)endPointWithType:(NSInteger)arg0 appletIdentifier:(id)arg1 identifier:(id)arg2 certificateData:(id)arg3 error:(*id)arg4 ;
+(id)revokedEndpointWithPublicKeyIdentifier:(id)arg0 appletIdentifier:(id)arg1 revocationAttestation:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)getEndpointUser;
-(id)configurePrivateData:(id)arg0 confidentialData:(id)arg1 contaclessPersistentVisibility:(id)arg2 wiredPersistentVisibility:(id)arg3 nfcExpressOnlyInLPM:(id)arg4 ;
-(id)decryptPrivacyData:(id)arg0 serverPrivacyPublicKeyData:(id)arg1 plainText:(*id)arg2 ;
-(id)deleteEndPointLongTermPrivacyKey;
-(id)description;
-(id)dumpState;
-(id)encodeWithError:(*id)arg0 ;
-(id)encryptPrivacyData:(id)arg0 serverPrivacyPublicKeyData:(id)arg1 ephemeralPublicKeyData:(*id)arg2 cipherText:(*id)arg3 ;
-(id)generateEndPointPrivacyLongTermPrivacyKey;
-(id)initWithCoder:(id)arg0 ;
-(id)validateAuthorizedEndpointConfig:(id)arg0 ;
-(void)configurePrivateDataOffset:(unsigned short)arg0 privateDataLength:(unsigned short)arg1 confidentialDataOffset:(unsigned short)arg2 confidentialDataLength:(unsigned short)arg3 contaclessVisibility:(BOOL)arg4 wiredVisibility:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prependCertificateChain:(id)arg0 ;


@end


#endif