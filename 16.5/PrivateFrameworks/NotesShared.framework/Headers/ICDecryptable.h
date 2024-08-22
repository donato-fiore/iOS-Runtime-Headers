// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDECRYPTABLE_H
#define ICDECRYPTABLE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ICDecryptable : NSObject

@property (retain, nonatomic) NSData *cryptoInitializationVector; // ivar: _cryptoInitializationVector
@property (retain, nonatomic) NSData *cryptoTag; // ivar: _cryptoTag
@property (retain, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (retain, nonatomic) NSData *fallbackCryptoInitializationVector; // ivar: _fallbackCryptoInitializationVector
@property (retain, nonatomic) NSData *fallbackCryptoTag; // ivar: _fallbackCryptoTag
@property (readonly, nonatomic) BOOL isValid;


-(id)initWithEncryptedData:(id)arg0 cryptoTag:(id)arg1 cryptoInitializationVector:(id)arg2 ;
-(id)initWithEncryptedData:(id)arg0 cryptoTag:(id)arg1 cryptoInitializationVector:(id)arg2 fallbackCryptoTag:(id)arg3 fallbackCryptoInitializationVector:(id)arg4 ;


@end


#endif