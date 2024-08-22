// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPAIRINGSESSION_H
#define SPPAIRINGSESSION_H

@class NSData, NSUUID, NSString, CLLocation;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPPairingSession : NSObject <NSSecureCoding>



@property (nonatomic) BOOL ackSuccess; // ivar: _ackSuccess
@property (copy, nonatomic) NSData *attestation; // ivar: _attestation
@property (copy, nonatomic) NSData *baaIntermediateCert; // ivar: _baaIntermediateCert
@property (copy, nonatomic) NSData *baaLeaftCert; // ivar: _baaLeaftCert
@property (nonatomic) NSInteger batteryLevel; // ivar: _batteryLevel
@property (copy, nonatomic) NSUUID *beaconId; // ivar: _beaconId
@property (copy, nonatomic) NSData *chipId; // ivar: _chipId
@property (copy, nonatomic) NSData *collaborativeKeyC1; // ivar: _collaborativeKeyC1
@property (copy, nonatomic) NSData *collaborativeKeyC2; // ivar: _collaborativeKeyC2
@property (copy, nonatomic) NSData *collaborativeKeyC3; // ivar: _collaborativeKeyC3
@property (copy, nonatomic) NSData *confirmSignature; // ivar: _confirmSignature
@property (copy, nonatomic) NSData *ecid; // ivar: _ecid
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) BOOL isZeus; // ivar: _isZeus
@property (copy, nonatomic) NSData *keyGenerationStatus; // ivar: _keyGenerationStatus
@property (copy, nonatomic) NSString *maskedAppleID; // ivar: _maskedAppleID
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (copy, nonatomic) CLLocation *pairingLocation; // ivar: _pairingLocation
@property (nonatomic) BOOL pairingUsingTool; // ivar: _pairingUsingTool
@property (copy, nonatomic) NSData *payloadSignature; // ivar: _payloadSignature
@property (nonatomic) NSInteger productId; // ivar: _productId
@property (copy, nonatomic) NSData *refKeyPublicKey; // ivar: _refKeyPublicKey
@property (copy, nonatomic) NSString *roleEmoji; // ivar: _roleEmoji
@property (nonatomic) NSInteger roleId; // ivar: _roleId
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSData *serverPublicKey; // ivar: _serverPublicKey
@property (copy, nonatomic) NSData *serverSeed; // ivar: _serverSeed
@property (copy, nonatomic) NSData *serverSignature; // ivar: _serverSignature
@property (copy, nonatomic) NSData *systemPublicKey; // ivar: _systemPublicKey
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (copy, nonatomic) NSString *userMessage; // ivar: _userMessage
@property (nonatomic) NSInteger vendorId; // ivar: _vendorId


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 nonce:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAckSuccess:(BOOL)arg0 ;
-(void)updateBeaconId:(id)arg0 ;
-(void)updateName:(id)arg0 roleId:(NSInteger)arg1 roleEmoji:(id)arg2 ;
-(void)updatePairingLocation:(id)arg0 ;
-(void)updateToPairingUsingTool;
-(void)updateWithConfiguration:(id)arg0 ;
-(void)updateWithPayloadSignature:(id)arg0 attestation:(id)arg1 collaborativeKey:(id)arg2 systemVersion:(id)arg3 vendorId:(NSInteger)arg4 productId:(NSInteger)arg5 ecid:(id)arg6 chipId:(id)arg7 serialNumber:(id)arg8 ;
-(void)updateWithSeed:(id)arg0 collaborativeKeyC2:(id)arg1 serverSignature:(id)arg2 serverPublicKey:(id)arg3 maskedAppleID:(id)arg4 userMessage:(id)arg5 baaIntermediateCert:(id)arg6 baaLeafCert:(id)arg7 ;


@end


#endif