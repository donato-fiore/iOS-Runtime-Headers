// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDSIGNEDSERVERPUBLICKEYURLREQUEST_H
#define CKDSIGNEDSERVERPUBLICKEYURLREQUEST_H

@class NSDate, NSURL, CKPublicKey;


#import "CKDURLRequest.h"

@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest

@property (readonly, nonatomic) *__SecPolicy certificateTrustPolicy; // ivar: _certificateTrustPolicy
@property (retain, nonatomic) NSDate *expirationDateOverride; // ivar: _expirationDateOverride
@property (readonly, nonatomic) NSURL *plistURL; // ivar: _plistURL
@property (nonatomic) BOOL requiresProtectionSource; // ivar: _requiresProtectionSource
@property (retain) CKPublicKey *verifiedPublicKey; // ivar: _verifiedPublicKey
@property (nonatomic) BOOL verifyFullIntegers; // ivar: _verifyFullIntegers


+(BOOL)serverResponseIsComplete:(id)arg0 requireProtectionSource:(BOOL)arg1 ;
+(BOOL)verifyData:(id)arg0 withSignature:(id)arg1 usingKey:(struct __SecKey *)arg2 ;
+(BOOL)verifyInteger:(NSInteger)arg0 withSignature:(id)arg1 usingKey:(struct __SecKey *)arg2 verifyFullInteger:(BOOL)arg3 ;
+(id)certificateListServerPlist:(id)arg0 ;
+(id)nearestExpirationInCertificateList:(id)arg0 ;
+(struct __SecTrust *)createTrustEvalFromCertificateList:(id)arg0 verifiedWithPolicy:(struct __SecPolicy *)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)canVerifySignedPlistValues:(id)arg0 withKey:(struct __SecKey *)arg1 ;
-(BOOL)hasRequestBody;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)requiresTokenRegistration;
-(NSInteger)partitionType;
-(NSInteger)serverType;
-(id)httpMethod;
-(id)initWithOperation:(id)arg0 plistURL:(id)arg1 verifyWithPolicy:(struct __SecPolicy *)arg2 ;
-(id)url;
-(void)dealloc;
-(void)requestDidParsePlistObject:(id)arg0 ;


@end


#endif