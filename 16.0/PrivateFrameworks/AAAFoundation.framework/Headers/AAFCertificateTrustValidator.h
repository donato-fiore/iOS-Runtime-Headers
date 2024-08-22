// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAFCERTIFICATETRUSTVALIDATOR_H
#define AAFCERTIFICATETRUSTVALIDATOR_H


#import <Foundation/Foundation.h>


@interface AAFCertificateTrustValidator : NSObject



-(BOOL)_checkPinningPolicy:(id)arg0 type:(NSUInteger)arg1 ;
-(BOOL)_trySSLPinning:(id)arg0 ;
-(NSInteger)validateCertificateTrustWithChallenge:(id)arg0 type:(NSUInteger)arg1 ;
-(struct __SecPolicy *)_policyForType:(NSUInteger)arg0 host:(id)arg1 ;


@end


#endif