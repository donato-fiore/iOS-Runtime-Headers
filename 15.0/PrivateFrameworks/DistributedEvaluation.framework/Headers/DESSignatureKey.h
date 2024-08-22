// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DESSIGNATUREKEY_H
#define DESSIGNATUREKEY_H


#import <Foundation/Foundation.h>


@interface DESSignatureKey : NSObject {
    *__SecKey _key;
}




+(id)keyFromData:(id)arg0 ;
+(struct __SecKey *)keyFromCertificateChain:(id)arg0 ;
+(void)initialize;
-(BOOL)validateBase64Signature:(id)arg0 data:(id)arg1 ;
-(BOOL)validateBase64Signature:(id)arg0 data:(id)arg1 algorithm:(struct __CFString *)arg2 ;
-(BOOL)validateSignature:(id)arg0 data:(id)arg1 algorithm:(struct __CFString *)arg2 ;
-(id)init;
-(id)initWithKey:(struct __SecKey *)arg0 ;
-(void)dealloc;


@end


#endif