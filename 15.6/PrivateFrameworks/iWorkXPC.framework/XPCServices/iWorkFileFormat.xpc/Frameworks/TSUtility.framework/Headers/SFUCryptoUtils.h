// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUCRYPTOUTILS_H
#define SFUCRYPTOUTILS_H


#import <Foundation/Foundation.h>


@interface SFUCryptoUtils : NSObject



+(BOOL)checkKey:(id)arg0 againstPassphraseVerifier:(id)arg1 ;
+(BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg0 ;
+(id)decodePassphraseHint:(id)arg0 ;
+(id)encodePassphraseHint:(id)arg0 ;
+(id)generatePassphraseVerifierForKey:(id)arg0 verifierVersion:(unsigned short)arg1 ;
+(id)generateRandomSalt;
+(id)generateRandomSaltWithLength:(NSUInteger)arg0 ;
+(id)hashForPassphrase:(id)arg0 withSalt:(id)arg1 ;
+(id)newBufferedInputStreamForDecryptingFile:(id)arg0 key:(id)arg1 isDeflated:(BOOL)arg2 zipStream:(*id)arg3 ;
+(id)newBufferedInputStreamForDecryptingZippedBundle:(id)arg0 key:(id)arg1 zipArchive:(id)arg2 isDeflated:(BOOL)arg3 zipStream:(*id)arg4 ;
+(id)saltForSageFiles;
+(id)saltFromVerifier:(id)arg0 saltLength:(NSUInteger)arg1 ;
+(id)sha1HashFromStorage:(id)arg0 ;
+(id)sha256HashFromData:(id)arg0 ;
+(id)sha256HashFromStorage:(id)arg0 ;
+(id)sha256HashFromString:(id)arg0 ;
+(unsigned int)iterationCountFromPassphraseVerifier:(id)arg0 ;
+(unsigned int)ivLengthForKey:(id)arg0 ;


@end


#endif