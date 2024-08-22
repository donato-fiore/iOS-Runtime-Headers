// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHEALTHWRAPENCRYPTOR_H
#define HKHEALTHWRAPENCRYPTOR_H

@class NSOutputStream, NSMutableData, NSUUID;

#import <Foundation/Foundation.h>

#import "HKHealthWrapCodableMessageHeader.h"

@interface HKHealthWrapEncryptor : NSObject {
    NSOutputStream *_outputStream;
    *__SecCertificate _certificate;
    unsigned int _algorithm;
    unsigned int _options;
    unsigned int _keySize;
    *_CCCryptor _cryptor;
    unsigned int _hmacAlgorithm;
    ? _hmacContext;
    CC_SHA256state_st _sha256Context;
    NSMutableData *_buffer;
    NSUUID *_studyUUID;
    NSUUID *_uuid;
    HKHealthWrapCodableMessageHeader *_header;
    BOOL _compressionEnabled;
    NSUInteger _encryptedBytesCount;
}




-(BOOL)_appendEncryptedBytes:(char *)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_finalizeCryptorWithError:(*id)arg0 ;
-(BOOL)_startCryptorWithError:(*id)arg0 ;
-(BOOL)_updateCryptorWithData:(id)arg0 error:(*id)arg1 ;
-(BOOL)_updateHeaderWithKey:(id)arg0 iv:(id)arg1 hmacKey:(id)arg2 error:(*id)arg3 ;
-(BOOL)_writeStream:(char *)arg0 length:(NSUInteger)arg1 hash:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)appendData:(id)arg0 error:(*id)arg1 ;
-(BOOL)finalizeWithError:(*id)arg0 ;
-(BOOL)startWithError:(*id)arg0 ;
-(id)_encryptData:(id)arg0 withCertificate:(struct __SecCertificate *)arg1 error:(*id)arg2 ;
-(id)initWithOutputStream:(id)arg0 certificate:(struct __SecCertificate *)arg1 algorithm:(unsigned int)arg2 options:(unsigned int)arg3 keySize:(unsigned int)arg4 uuid:(id)arg5 studyUUID:(id)arg6 compressionEnabled:(BOOL)arg7 ;
-(struct __SecKey *)_copyAndVerifyPublicKeyFromCertificate:(struct __SecCertificate *)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif