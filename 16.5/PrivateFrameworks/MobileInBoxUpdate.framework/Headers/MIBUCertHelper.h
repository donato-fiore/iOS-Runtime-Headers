// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIBUCERTHELPER_H
#define MIBUCERTHELPER_H


#import <Foundation/Foundation.h>


@interface MIBUCertHelper : NSObject



+(BOOL)SUCertPresent;
+(id)_getCertDataFromPath:(id)arg0 error:(*id)arg1 ;
+(id)_parseDERCertificates:(id)arg0 error:(*id)arg1 ;
+(id)certificatesFromData:(id)arg0 error:(*id)arg1 ;
+(struct __SecKey *)suCertKeyFromData:(id)arg0 isSEPKey:(BOOL)arg1 error:(*id)arg2 ;
+(void)deleteSUCert:(*id)arg0 ;
+(void)readSUIdentityWithCompletion:(id)arg0 ;
+(void)trustCertificatesWithCompletion:(id)arg0 ;


@end


#endif