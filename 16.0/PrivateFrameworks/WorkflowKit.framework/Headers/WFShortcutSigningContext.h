// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHORTCUTSIGNINGCONTEXT_H
#define WFSHORTCUTSIGNINGCONTEXT_H

@class NSArray, SFAppleIDValidationRecord, NSDate, NSData;

#import <Foundation/Foundation.h>


@interface WFShortcutSigningContext : NSObject

@property (readonly, copy, nonatomic) NSArray *appleIDCertificateChain; // ivar: _appleIDCertificateChain
@property (readonly, nonatomic) SFAppleIDValidationRecord *appleIDValidationRecord; // ivar: _appleIDValidationRecord
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSArray *signingCertificateChain; // ivar: _signingCertificateChain
@property (nonatomic) *__SecKey signingPublicKey; // ivar: _signingPublicKey
@property (retain, nonatomic) NSData *signingPublicKeySignature; // ivar: _signingPublicKeySignature


+(id)contextWithAppleIDAccount:(id)arg0 signingKey:(struct __SecKey *)arg1 ;
+(id)contextWithAuthData:(id)arg0 ;
+(id)contextWithSigningCertificateChain:(id)arg0 ;
-(BOOL)validateAppleIDCertificatesWithError:(*id)arg0 ;
-(BOOL)validateSigningCertificateChainWithICloudIdentifier:(*id)arg0 error:(*id)arg1 ;
-(BOOL)validateWithSigningMethod:(*NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)validateWithSigningMethod:(*NSInteger)arg0 iCloudIdentifier:(*id)arg1 error:(*id)arg2 ;
-(id)generateAuthData;
-(id)initWithAppleIDValidationRecord:(id)arg0 appleIDCertificateChain:(id)arg1 signingPublicKey:(struct __SecKey *)arg2 signingPublicKeyData:(id)arg3 ;
-(id)initWithSigningCertificateChain:(id)arg0 ;
-(struct __SecKey *)copyPublicKey;
-(void)dealloc;
-(void)validateAppleIDValidationRecordWithCompletion:(id)arg0 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif