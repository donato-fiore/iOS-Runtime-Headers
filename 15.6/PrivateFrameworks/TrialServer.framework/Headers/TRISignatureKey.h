// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRISIGNATUREKEY_H
#define TRISIGNATUREKEY_H


#import <Foundation/Foundation.h>


@interface TRISignatureKey : NSObject {
    *__SecKey _key;
}




+(id)keyFromData:(id)arg0 ;
+(struct __SecKey *)_keyFromCertificateChain:(id)arg0 ;
-(BOOL)_validateBase64Signature:(id)arg0 data:(id)arg1 algorithm:(struct __CFString *)arg2 ;
-(BOOL)_validateSignature:(id)arg0 data:(id)arg1 algorithm:(struct __CFString *)arg2 ;
-(BOOL)validateBase64Signature:(id)arg0 data:(id)arg1 ;
-(BOOL)validateBase64Signature:(id)arg0 forFile:(id)arg1 ;
-(id)init;
-(id)initWithKey:(struct __SecKey *)arg0 ;
-(void)dealloc;


@end


#endif