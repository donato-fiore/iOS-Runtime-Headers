// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTATTESTATIONREQUEST_H
#define PKACCOUNTATTESTATIONREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PKSecureElementCertificateSet.h"

@interface PKAccountAttestationRequest : NSObject

@property (copy, nonatomic) NSString *anonymizationSalt; // ivar: _anonymizationSalt
@property (retain, nonatomic) PKSecureElementCertificateSet *casdCertificate; // ivar: _casdCertificate


+(id)_keychainItemWrapper;
+(id)createAnonymizationSalt;
+(id)defaultAnonymizationSaltWithError:(*id)arg0 ;
+(id)keychainDataWithError:(*id)arg0 ;
+(id)setDefaultAnonymizationSalt:(id)arg0 ;
+(void)removeAccountAttesationData;
+(void)removeLocalAccountAttesationData;


@end


#endif