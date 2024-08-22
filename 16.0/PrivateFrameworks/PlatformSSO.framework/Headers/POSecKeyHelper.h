// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POSECKEYHELPER_H
#define POSECKEYHELPER_H


#import <Foundation/Foundation.h>


@interface POSecKeyHelper : NSObject



+(id)dataForCertificate:(struct __SecCertificate *)arg0 ;
+(id)dataForKey:(struct __SecKey *)arg0 ;
+(id)printKey:(struct __SecKey *)arg0 ;
+(struct __SecCertificate *)certificateForData:(id)arg0 ;
+(struct __SecIdentity *)identityForKey:(struct __SecKey *)arg0 andCertificate:(struct __SecCertificate *)arg1 ;
+(struct __SecKey *)createSEPKeyForKeyType:(NSInteger)arg0 ;
+(struct __SecKey *)keyForData:(id)arg0 ;


@end


#endif