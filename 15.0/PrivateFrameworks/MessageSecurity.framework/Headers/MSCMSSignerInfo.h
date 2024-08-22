// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSCMSSIGNERINFO_H
#define MSCMSSIGNERINFO_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>

#import "MSCMSSignedData.h"
#import "MSAlgorithmIdentifier.h"
#import "MSCMSMutableAttributeArray.h"

@interface MSCMSSignerInfo : NSObject

@property (retain) NSData *LAContext; // ivar: _LAContext
@property (weak) MSCMSSignedData *containingSignedData; // ivar: _containingSignedData
@property (retain) MSAlgorithmIdentifier *digestAlgorithm; // ivar: _digestAlgorithm
@property *SignerInfo encodedSignerInfo; // ivar: _encodedSignerInfo
@property (retain) MSCMSMutableAttributeArray *protectedAttributes; // ivar: _protectedAttributes
@property (retain) NSData *signature; // ivar: _signature
@property (retain) MSAlgorithmIdentifier *signatureAlgorithm; // ivar: _signatureAlgorithm
@property SignerInfo_signedAttrs signedAttrsStruct; // ivar: _signedAttrsStruct
@property *__SecCertificate signerCertificate; // ivar: _signerCertificate
@property (retain) NSData *signerIssuerSequence; // ivar: _signerIssuerSequence
@property *__SecKey signerPrivKey; // ivar: _signerPrivKey
@property (retain) NSData *signerSerialNumber; // ivar: _signerSerialNumber
@property (retain) MSCMSMutableAttributeArray *unprotectedAttributes; // ivar: _unprotectedAttributes
@property SignerInfo_unsignedAttrs unsignedAttrsStruct; // ivar: _unsignedAttrsStruct
@property (retain) NSNumber *version; // ivar: _version


+(id)decodeSignerInfo:(struct SignerInfo *)arg0 certificates:(id)arg1 LAContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)encodeSignerInfo:(struct SignerInfo *)arg0 error:(*id)arg1 ;
-(BOOL)sign:(*id)arg0 ;
-(BOOL)verifyContentTypeAttribute:(*id)arg0 ;
-(BOOL)verifyCountersignatures:(*id)arg0 ;
-(BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg0 verifyTime:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifyMessageDigestAttribute:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifySignature:(*id)arg0 ;
-(BOOL)verifySignatureAndSignerWithPolicies:(id)arg0 verifyTime:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifyTimestamps:(*id)arg0 ;
-(id)calculateSignedAttributesDigest:(*id)arg0 ;
-(id)calculateSignerInfoDigest:(*id)arg0 ;
-(id)getAttributesWithType:(id)arg0 ;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 error:(*id)arg1 ;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 recipientsAlgorithmCapabilities:(id)arg1 error:(*id)arg2 ;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 signatureAlgorithm:(id)arg1 error:(*id)arg2 ;
-(id)initWithEmail:(id)arg0 LAContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithEmail:(id)arg0 recipientsAlgorithmCapabilities:(id)arg1 LAContext:(id)arg2 error:(*id)arg3 ;
-(id)initWithEmail:(id)arg0 signatureAlgorithm:(id)arg1 LAContext:(id)arg2 error:(*id)arg3 ;
-(id)initWithIdentity:(struct __SecIdentity *)arg0 error:(*id)arg1 ;
-(id)initWithIdentity:(struct __SecIdentity *)arg0 recipientsAlgorithmCapabilities:(id)arg1 error:(*id)arg2 ;
-(id)initWithIdentity:(struct __SecIdentity *)arg0 signatureAlgorithm:(id)arg1 error:(*id)arg2 ;
-(id)verifyTime:(id)arg0 ;
-(struct __SecTrust *)createTrustObjectWithPolicies:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif