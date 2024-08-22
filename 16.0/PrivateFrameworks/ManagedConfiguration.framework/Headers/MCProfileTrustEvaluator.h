// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPROFILETRUSTEVALUATOR_H
#define MCPROFILETRUSTEVALUATOR_H


#import <Foundation/Foundation.h>


@interface MCProfileTrustEvaluator : NSObject



-(BOOL)_verifyCerts:(id)arg0 policy:(struct __SecPolicy *)arg1 ;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)arg0 ;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)arg0 ;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg0 ;


@end


#endif