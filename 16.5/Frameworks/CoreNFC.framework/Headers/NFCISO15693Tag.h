// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFCISO15693TAG_H
#define NFCISO15693TAG_H

@class NSString, NSData;
@protocol NFCISO15693Tag, NFCReaderSession;


#import "NFCTag.h"

@interface NFCISO15693Tag : NFCTag <NFCISO15693Tag>



@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger icManufacturerCode;
@property (readonly, copy, nonatomic) NSData *icSerialNumber;
@property (readonly, copy, nonatomic) NSData *identifier;
@property (readonly, weak, nonatomic) NSObject<NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)_generateRequestHeader:(unsigned char)arg0 flags:(unsigned char)arg1 ;
-(id)_parseResponseErrorWithData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_wtxRetryWithCommnand:(id)arg0 maxRetry:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)authenticateWithRequestFlags:(unsigned char)arg0 cryptoSuiteIdentifier:(NSInteger)arg1 message:(id)arg2 completionHandler:(id)arg3 ;
-(void)challengeWithRequestFlags:(unsigned char)arg0 cryptoSuiteIdentifier:(NSInteger)arg1 message:(id)arg2 completionHandler:(id)arg3 ;
-(void)customCommandWithRequestFlag:(unsigned char)arg0 customCommandCode:(NSInteger)arg1 customRequestParameters:(id)arg2 completionHandler:(id)arg3 ;
-(void)extendedFastReadMultipleBlocksWithRequestFlag:(unsigned char)arg0 blockRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)extendedGetMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg0 blockRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)extendedLockBlockWithRequestFlags:(unsigned char)arg0 blockNumber:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)extendedReadMultipleBlocksWithRequestFlags:(unsigned char)arg0 blockRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)extendedReadSingleBlockWithRequestFlags:(unsigned char)arg0 blockNumber:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)extendedWriteMultipleBlocksWithRequestFlags:(unsigned char)arg0 blockRange:(struct _NSRange )arg1 dataBlocks:(id)arg2 completionHandler:(id)arg3 ;
-(void)extendedWriteSingleBlockWithRequestFlags:(unsigned char)arg0 blockNumber:(NSInteger)arg1 dataBlock:(id)arg2 completionHandler:(id)arg3 ;
-(void)fastReadMultipleBlocksWithRequestFlag:(unsigned char)arg0 blockRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)getMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg0 blockRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)getSystemInfoAndUIDWithRequestFlag:(unsigned char)arg0 completionHandler:(id)arg1 ;
-(void)getSystemInfoWithRequestFlag:(unsigned char)arg0 completionHandler:(id)arg1 ;
-(void)keyUpdateWithRequestFlags:(unsigned char)arg0 keyIdentifier:(NSInteger)arg1 message:(id)arg2 completionHandler:(id)arg3 ;
-(void)lockAFIWithRequestFlag:(unsigned char)arg0 completionHandler:(id)arg1 ;
-(void)lockBlockWithRequestFlags:(unsigned char)arg0 blockNumber:(unsigned char)arg1 completionHandler:(id)arg2 ;
-(void)lockDFSIDWithRequestFlag:(unsigned char)arg0 completionHandler:(id)arg1 ;
-(void)lockDSFIDWithRequestFlag:(unsigned char)arg0 completionHandler:(id)arg1 ;
-(void)readBufferWithRequestFlags:(unsigned char)arg0 completionHandler:(id)arg1 ;
-(void)readMultipleBlocksWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)readMultipleBlocksWithRequestFlags:(unsigned char)arg0 blockRange:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)readSingleBlockWithRequestFlags:(unsigned char)arg0 blockNumber:(unsigned char)arg1 completionHandler:(id)arg2 ;
-(void)resetToReadyWithRequestFlags:(unsigned char)arg0 completionHandler:(id)arg1 ;
-(void)selectWithRequestFlags:(unsigned char)arg0 completionHandler:(id)arg1 ;
-(void)sendCustomCommandWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendRequestWithFlag:(NSInteger)arg0 commandCode:(NSInteger)arg1 data:(id)arg2 completionHandler:(id)arg3 ;
-(void)stayQuietWithCompletionHandler:(id)arg0 ;
-(void)writeAFIWithRequestFlag:(unsigned char)arg0 afi:(unsigned char)arg1 completionHandler:(id)arg2 ;
-(void)writeDSFIDWithRequestFlag:(unsigned char)arg0 dsfid:(unsigned char)arg1 completionHandler:(id)arg2 ;
-(void)writeMultipleBlocksWithRequestFlags:(unsigned char)arg0 blockRange:(struct _NSRange )arg1 dataBlocks:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeSingleBlockWithRequestFlags:(unsigned char)arg0 blockNumber:(unsigned char)arg1 dataBlock:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif