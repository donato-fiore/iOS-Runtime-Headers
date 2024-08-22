// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMNICKNAMEENCRYPTIONHELPERS_H
#define IMNICKNAMEENCRYPTIONHELPERS_H


#import <Foundation/Foundation.h>


@interface IMNicknameEncryptionHelpers : NSObject



+(id)_decryptAndVerifyCipherFields:(id)arg0 withPreKey:(id)arg1 recordTagToVerify:(id)arg2 error:(*id)arg3 ;
+(id)_decryptCipherField:(id)arg0 withFieldEncryptionKey:(id)arg1 fieldTaggingKey:(id)arg2 error:(*id)arg3 ;
+(id)_decryptCipherFields:(id)arg0 withFieldEncryptionKey:(id)arg1 fieldTaggingKey:(id)arg2 error:(*id)arg3 ;
+(id)_encryptAndTagPlainFields:(id)arg0 withPreKey:(id)arg1 returningRecordTag:(*id)arg2 error:(*id)arg3 ;
+(id)_encryptPlainField:(id)arg0 withFieldEncryptionKey:(id)arg1 fieldTaggingKey:(id)arg2 error:(*id)arg3 ;
+(id)_encryptPlainFields:(id)arg0 withFieldEncryptionKey:(id)arg1 fieldTaggingKey:(id)arg2 error:(*id)arg3 ;
+(id)_fieldTagForFieldName:(id)arg0 cipherData:(id)arg1 IV:(id)arg2 fieldTaggingKey:(id)arg3 error:(*id)arg4 ;
+(id)_hmacForData:(id)arg0 key:(id)arg1 ;
+(id)_performOperation:(unsigned int)arg0 onData:(id)arg1 withFieldEncryptionKey:(id)arg2 iv:(id)arg3 error:(*id)arg4 ;
+(id)_randomBytesWithLength:(NSUInteger)arg0 error:(*id)arg1 ;
+(id)_recordTagForCipherFields:(id)arg0 recordTaggingKey:(id)arg1 error:(*id)arg2 ;
+(id)_tagForData:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(id)decryptAndVerifyCipherFields:(id)arg0 withPreKey:(id)arg1 recordTagToVerify:(id)arg2 error:(*id)arg3 ;
+(id)encryptAndTagPlainFields:(id)arg0 withPreKey:(id)arg1 returningRecordTag:(*id)arg2 error:(*id)arg3 ;


@end


#endif