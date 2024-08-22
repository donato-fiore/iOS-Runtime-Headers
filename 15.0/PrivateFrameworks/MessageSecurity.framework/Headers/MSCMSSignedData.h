// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSCMSSIGNEDDATA_H
#define MSCMSSIGNEDDATA_H

@class NSMutableSet, NSData, NSString, NSSet, NSArray, NSNumber;
@protocol MSCMSMessage;

#import <Foundation/Foundation.h>

#import "MSOID.h"
#import "MSDecodeOptions.h"

@interface MSCMSSignedData : NSObject <MSCMSMessage>



@property (retain) NSMutableSet *certificates; // ivar: _certificates
@property BOOL contentChanged; // ivar: _contentChanged
@property (retain) MSOID *contentType; // ivar: _contentType
@property (retain, nonatomic) NSData *dataContent; // ivar: _dataContent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL detached; // ivar: _detached
@property (retain) NSSet *digestAlgorithms; // ivar: _digestAlgorithms
@property (retain) NSObject<MSCMSMessage> *embeddedContent; // ivar: _embeddedContent
@property (readonly) NSUInteger hash;
@property (retain) MSDecodeOptions *options; // ivar: _options
@property (retain) NSArray *signers; // ivar: _signers
@property (readonly) Class superclass;
@property (readonly) MSOID *type;
@property (retain) NSNumber *version; // ivar: _version


+(id)decodeMessageSecurityObject:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)addCertificatesForSigner:(id)arg0 mode:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)addSigner:(id)arg0 withChainMode:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)checkSignedPerRFC5652:(*id)arg0 ;
-(BOOL)verifySignatures:(*id)arg0 ;
-(BOOL)verifySignaturesAndSignersWithPolicies:(id)arg0 verifyTime:(id)arg1 error:(*id)arg2 ;
-(id)calculateContentDigestWithAlgorithm:(id)arg0 error:(*id)arg1 ;
-(id)encodeMessageSecurityObject:(*id)arg0 ;
-(id)initCertsOnlyWithCertificates:(id)arg0 error:(*id)arg1 ;
-(id)initWithDataContent:(id)arg0 isDetached:(BOOL)arg1 signer:(id)arg2 additionalCertificates:(id)arg3 error:(*id)arg4 ;
-(id)initWithDataContent:(id)arg0 isDetached:(BOOL)arg1 signer:(id)arg2 error:(*id)arg3 ;
-(id)initWithDataContent:(id)arg0 isDetached:(BOOL)arg1 signer:(id)arg2 signerChainMode:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)initWithEmbeddedContent:(id)arg0 signer:(id)arg1 additionalCertificates:(id)arg2 error:(*id)arg3 ;
-(id)initWithEmbeddedContent:(id)arg0 signer:(id)arg1 error:(*id)arg2 ;
-(id)initWithEmbeddedContent:(id)arg0 signer:(id)arg1 signerChainMode:(NSUInteger)arg2 error:(*id)arg3 ;
-(struct __SecCertificate *)getSignerCertificate:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)addDigestAlgorithmFromSigner:(id)arg0 ;
-(void)addSigner:(id)arg0 ;
-(void)addSigner:(id)arg0 withCertificates:(id)arg1 ;
-(void)removeSignerCertificatesWithIndexes:(id)arg0 ;
-(void)removeSignersWithCertificate:(struct __SecCertificate *)arg0 error:(*id)arg1 ;
-(void)removeSignersWithEmailAddress:(id)arg0 error:(*id)arg1 ;
-(void)removeSignersWithIdentity:(struct __SecIdentity *)arg0 error:(*id)arg1 ;
-(void)removeSignersWithIndexes:(id)arg0 error:(*id)arg1 ;


@end


#endif