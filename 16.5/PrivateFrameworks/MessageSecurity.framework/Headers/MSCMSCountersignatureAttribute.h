// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCMSCOUNTERSIGNATUREATTRIBUTE_H
#define MSCMSCOUNTERSIGNATUREATTRIBUTE_H

@class NSArray;
@protocol MSCMSAttributeCoder;

#import <Foundation/Foundation.h>

#import "MSOID.h"
#import "MSCMSSignerInfo.h"

@interface MSCMSCountersignatureAttribute : NSObject <MSCMSAttributeCoder>



@property (retain) NSArray *additionalCertificates; // ivar: _additionalCertificates
@property (readonly, retain) MSOID *attributeType;
@property NSUInteger chainMode; // ivar: _chainMode
@property (weak, nonatomic) MSCMSSignerInfo *containingSignerInfo; // ivar: _containingSignerInfo
@property (readonly) NSArray *signers; // ivar: _signers


-(BOOL)verifyCountersignatures:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg0 verifyTime:(id)arg1 anchorCertificates:(id)arg2 signature:(id)arg3 error:(*id)arg4 ;
-(id)encodeAttributeWithError:(*id)arg0 ;
-(id)initWithAttribute:(id)arg0 LAContext:(id)arg1 error:(*id)arg2 ;
-(id)initWithAttribute:(id)arg0 certificates:(id)arg1 LAContext:(id)arg2 containingSignerInfo:(id)arg3 error:(*id)arg4 ;
-(id)initWithAttribute:(id)arg0 certificates:(id)arg1 LAContext:(id)arg2 error:(*id)arg3 ;
-(id)initWithAttribute:(id)arg0 error:(*id)arg1 ;
-(id)initWithSignerInfo:(id)arg0 ;
-(id)initWithSignerInfo:(id)arg0 additionalCertificates:(id)arg1 ;
-(id)initWithSignerInfo:(id)arg0 signerChainMode:(NSUInteger)arg1 ;
-(id)initWithSignerInfo:(id)arg0 signerChainMode:(NSUInteger)arg1 additionalCertificates:(id)arg2 ;
-(void)addSigner:(id)arg0 ;
-(void)addSigner:(id)arg0 withCertificates:(id)arg1 ;
-(void)addSigner:(id)arg0 withChainMode:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)removeSignerCertificatesWithIndexes:(id)arg0 ;
-(void)removeSignersWithCertificate:(struct __SecCertificate *)arg0 error:(*id)arg1 ;
-(void)removeSignersWithEmailAddress:(id)arg0 error:(*id)arg1 ;
-(void)removeSignersWithIdentity:(struct __SecIdentity *)arg0 error:(*id)arg1 ;
-(void)removeSignersWithIndexes:(id)arg0 error:(*id)arg1 ;


@end


#endif