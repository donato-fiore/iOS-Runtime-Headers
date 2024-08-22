// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSURLSECURITYPOLICY_H
#define AMSURLSECURITYPOLICY_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface AMSURLSecurityPolicy : NSObject

@property (retain, nonatomic) NSSet *pinnedCertificates; // ivar: _pinnedCertificates
@property (nonatomic) NSInteger trustMode; // ivar: _trustMode


+(id)defaultPolicy;
-(BOOL)_evaluateExtendedValidationWithTrust:(struct __SecTrust *)arg0 forTask:(id)arg1 ;
-(BOOL)_evaluatePinnedCertificatesWithTrust:(struct __SecTrust *)arg0 forTask:(id)arg1 ;
-(BOOL)_shouldSkipValidation;
-(BOOL)evaluateTrust:(struct __SecTrust *)arg0 forTask:(id)arg1 ;
-(id)initWithTrustMode:(NSInteger)arg0 ;
-(id)initWithTrustMode:(NSInteger)arg0 pinnedCertificated:(id)arg1 ;


@end


#endif