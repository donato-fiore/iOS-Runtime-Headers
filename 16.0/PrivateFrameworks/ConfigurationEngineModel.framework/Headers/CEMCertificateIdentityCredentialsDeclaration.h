// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMCERTIFICATEIDENTITYCREDENTIALSDECLARATION_H
#define CEMCERTIFICATEIDENTITYCREDENTIALSDECLARATION_H

@class NSData;


#import "CEMPayloadBase.h"

@interface CEMCertificateIdentityCredentialsDeclaration : CEMPayloadBase

@property (copy, nonatomic) NSData *payloadCertificate; // ivar: _payloadCertificate


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithCertificate:(id)arg0 ;
+(id)buildWithCertificate:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif