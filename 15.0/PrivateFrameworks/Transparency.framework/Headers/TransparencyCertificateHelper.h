// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPARENCYCERTIFICATEHELPER_H
#define TRANSPARENCYCERTIFICATEHELPER_H


#import <Foundation/Foundation.h>


@interface TransparencyCertificateHelper : NSObject



+(BOOL)addTrustedCertificate:(id)arg0 trustedKeys:(id)arg1 error:(*id)arg2 ;
+(BOOL)verifyCertificates:(id)arg0 intermediates:(id)arg1 policy:(struct __SecPolicy *)arg2 error:(*id)arg3 ;
+(BOOL)verifyLeaf:(id)arg0 intermediates:(id)arg1 policy:(struct __SecPolicy *)arg2 error:(*id)arg3 ;
+(id)copyTrustedKeysFromDataArray:(id)arg0 error:(*id)arg1 ;
+(id)createCACertificatesArray:(id)arg0 error:(*id)arg1 ;
+(struct __SecCertificate *)certificateFromData:(id)arg0 error:(*id)arg1 ;


@end


#endif