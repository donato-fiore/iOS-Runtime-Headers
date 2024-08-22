// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCMSSIGNERINFO_H
#define MSCMSSIGNERINFO_H

@class NSData, NSArray, NSNumber;

#import <Foundation/Foundation.h>

#import "MSCMSSignedData.h"
#import "MSAlgorithmIdentifier.h"
#import "MSCMSMutableAttributeArray.h"

@interface MSCMSSignerInfo : NSObject

@property (retain) NSData *LAContext; // ivar: _LAContext
@property (readonly) NSArray *certificates;
@property (weak) MSCMSSignedData *containingSignedData; // ivar: _containingSignedData
@property BOOL contentChanged; // ivar: _contentChanged
@property (retain) MSAlgorithmIdentifier *digestAlgorithm; // ivar: _digestAlgorithm
@property *SignerInfo encodedSignerInfo; // ivar: _encodedSignerInfo
@property (retain) NSData *identifierData; // ivar: _identifierData
@property (retain) MSCMSMutableAttributeArray *protectedAttributes; // ivar: _protectedAttributes
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (retain) MSAlgorithmIdentifier *signatureAlgorithm; // ivar: _signatureAlgorithm
@property (readonly) BOOL signatureCalculated; // ivar: _signatureCalculated
@property (retain) NSData *signedAttrsData; // ivar: _signedAttrsData
@property *__SecCertificate signerCertificate; // ivar: _signerCertificate
@property *__SecKey signerPrivKey; // ivar: _signerPrivKey
@property (retain) MSCMSMutableAttributeArray *unprotectedAttributes; // ivar: _unprotectedAttributes
@property (retain) NSData *unsignedAttrsData; // ivar: _unsignedAttrsData
@property (retain) NSNumber *version; // ivar: _version


+(?)decodeSignerInfo:(?)arg0 certificates:(?)arg1 LAContexterror;
-(?)encodeSignerInfoerror;
-(BOOL)createRequiredAttributes:(*id)arg0 ;
-(BOOL)sign:(*id)arg0 ;
-(BOOL)verifyContentTypeAttribute:(*id)arg0 ;
-(BOOL)verifyCountersignatures:(*id)arg0 ;
-(BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg0 verifyTime:(id)arg1 anchorCertificates:(id)arg2 error:(*id)arg3 ;
-(BOOL)verifyMessageDigestAttribute:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifySignature:(*id)arg0 ;
-(BOOL)verifySignatureAndSignerWithPolicies:(id)arg0 verifyTime:(id)arg1 anchorCertificates:(id)arg2 error:(*id)arg3 ;
-(BOOL)verifyTimestamps:(*id)arg0 ;
-(id)calculateSignatureDigestWithAlgorithm:(id)arg0 error:(*id)arg1 ;
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
-(struct __SecTrust *)createTrustObjectWithPolicies:(id)arg0 verifyTime:(id)arg1 anchorCertificates:(id)arg2 error:(*id)arg3 ;
-(void)addCounterSignerAttribute:(id)arg0 ;
-(void)addProtectedAttribute:(id)arg0 ;
-(void)dealloc;


@end


#endif