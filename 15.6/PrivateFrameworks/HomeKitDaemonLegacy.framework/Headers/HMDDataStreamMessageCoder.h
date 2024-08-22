// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDATASTREAMMESSAGECODER_H
#define HMDDATASTREAMMESSAGECODER_H


#import <Foundation/Foundation.h>


@interface HMDDataStreamMessageCoder : NSObject



+(BOOL)_decodeOPACKFrame:(id)arg0 receivedHeader:(*id)arg1 receivedPayload:(*id)arg2 error:(*id)arg3 ;
+(BOOL)_decryptEncryptedOPACKFrame:(id)arg0 sessionEncryption:(id)arg1 receivedHeader:(*id)arg2 receivedPayload:(*id)arg3 error:(*id)arg4 ;
+(BOOL)_unpackUnencryptedOPACKFrame:(id)arg0 receivedHeader:(*id)arg1 receivedPayload:(*id)arg2 error:(*id)arg3 ;
+(BOOL)decryptEncryptedOPACKFrame:(id)arg0 sessionEncryption:(id)arg1 receivedHeader:(*id)arg2 receivedPayload:(*id)arg3 error:(*id)arg4 ;
+(BOOL)readHeaderFromPartialData:(char *)arg0 length:(NSUInteger)arg1 frameType:(*unsigned char)arg2 payloadLength:(*NSUInteger)arg3 ;
+(BOOL)readHeaderFromPartialData:(id)arg0 frameType:(*unsigned char)arg1 payloadLength:(*NSUInteger)arg2 ;
+(BOOL)unpackUnencryptedOPACKFrame:(id)arg0 receivedHeader:(*id)arg1 receivedPayload:(*id)arg2 error:(*id)arg3 ;
+(id)_buildUnencryptedOPACKHeader:(id)arg0 payload:(id)arg1 error:(*id)arg2 ;
+(id)_encodeOPACKHeader:(id)arg0 payload:(id)arg1 error:(*id)arg2 ;
+(id)_encryptEncryptedOPACKHeader:(id)arg0 payload:(id)arg1 sessionEncryption:(id)arg2 error:(*id)arg3 ;
+(id)buildUnencryptedOPACKHeader:(id)arg0 payload:(id)arg1 error:(*id)arg2 ;
+(id)encryptEncryptedOPACKHeader:(id)arg0 payload:(id)arg1 sessionEncryption:(id)arg2 error:(*id)arg3 ;
+(id)eventHeaderForProtocol:(id)arg0 topic:(id)arg1 ;
+(id)requestHeaderForProtocol:(id)arg0 topic:(id)arg1 identifier:(id)arg2 ;
+(id)responseHeaderForRequestHeader:(id)arg0 status:(unsigned short)arg1 ;


@end


#endif