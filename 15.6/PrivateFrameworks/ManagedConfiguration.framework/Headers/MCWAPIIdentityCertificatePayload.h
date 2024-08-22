// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCWAPIIDENTITYCERTIFICATEPAYLOAD_H
#define MCWAPIIDENTITYCERTIFICATEPAYLOAD_H

@class NSData;


#import "MCCertificatePayload.h"

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSData *pemData; // ivar: _pemData


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)isIdentity;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)verboseDescription;
-(struct __SecCertificate *)copyCertificate;
-(struct __SecIdentity *)copyIdentityFromKeychain;


@end


#endif