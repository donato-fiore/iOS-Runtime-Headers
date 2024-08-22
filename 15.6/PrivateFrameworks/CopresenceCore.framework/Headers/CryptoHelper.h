// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRYPTOHELPER_H
#define CRYPTOHELPER_H


#import <Foundation/Foundation.h>


@interface CryptoHelper : NSObject {
    unsigned char _chacha_key;
    unsigned char _chacha_nonce;
}




+(id)decryptAES:(id)arg0 ;
+(id)encryptAES:(id)arg0 ;
-(id)decrypt:(id)arg0 ;
-(id)encrypt:(id)arg0 ;
-(id)initWithKey:(id)arg0 nonce:(id)arg1 ;


@end


#endif