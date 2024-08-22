// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMCREDENTIALSCEPDECLARATION_SCEP_H
#define CEMCREDENTIALSCEPDECLARATION_SCEP_H

@class NSNumber, NSData, NSString, NSArray;


#import "CEMPayloadBase.h"
#import "CEMCredentialSCEPDeclaration_SCEPSubjectAltName.h"

@interface CEMCredentialSCEPDeclaration_SCEP : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadAllowAllAppsAccess; // ivar: _payloadAllowAllAppsAccess
@property (copy, nonatomic) NSData *payloadCAFingerprint; // ivar: _payloadCAFingerprint
@property (copy, nonatomic) NSString *payloadChallengeCredential; // ivar: _payloadChallengeCredential
@property (copy, nonatomic) NSNumber *payloadKeyIsExtractable; // ivar: _payloadKeyIsExtractable
@property (copy, nonatomic) NSString *payloadKeyType; // ivar: _payloadKeyType
@property (copy, nonatomic) NSNumber *payloadKeyUsage; // ivar: _payloadKeyUsage
@property (copy, nonatomic) NSNumber *payloadKeysize; // ivar: _payloadKeysize
@property (copy, nonatomic) NSString *payloadName; // ivar: _payloadName
@property (copy, nonatomic) NSNumber *payloadRetries; // ivar: _payloadRetries
@property (copy, nonatomic) NSNumber *payloadRetryDelay; // ivar: _payloadRetryDelay
@property (copy, nonatomic) NSArray *payloadSubject; // ivar: _payloadSubject
@property (copy, nonatomic) CEMCredentialSCEPDeclaration_SCEPSubjectAltName *payloadSubjectAltName; // ivar: _payloadSubjectAltName
@property (copy, nonatomic) NSString *payloadURL; // ivar: _payloadURL


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithURL:(id)arg0 ;
+(id)buildWithURL:(id)arg0 withName:(id)arg1 withSubject:(id)arg2 withKeysize:(id)arg3 withKeyType:(id)arg4 withKeyUsage:(id)arg5 withCAFingerprint:(id)arg6 withRetries:(id)arg7 withRetryDelay:(id)arg8 withSubjectAltName:(id)arg9 withKeyIsExtractable:(id)arg10 withChallengeCredential:(id)arg11 withAllowAllAppsAccess:(id)arg12 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif