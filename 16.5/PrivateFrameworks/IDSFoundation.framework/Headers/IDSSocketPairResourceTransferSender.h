// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSOCKETPAIRRESOURCETRANSFERSENDER_H
#define IDSSOCKETPAIRRESOURCETRANSFERSENDER_H

@class NSString, NSDictionary, NSDate, NSData;
@protocol IDSSocketPairMessage;


#import "IDSSocketPairMessage.h"

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage <IDSSocketPairMessage>

 {
    NSString *_resourcePath;
    NSDictionary *_metadata;
    NSDictionary *_resourceAttributes;
    int _fileDescriptor;
    BOOL _expectsPeerResponse;
    BOOL _wantsAppAck;
    BOOL _compressPayload;
    BOOL _compressed;
    BOOL _didWakeHint;
    NSString *_peerResponseIdentifier;
    NSDate *_expiryDate;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (retain, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) BOOL isDone; // ivar: _done
@property (nonatomic) unsigned int maxChunkSize; // ivar: _maxChunkSize
@property (readonly, nonatomic) NSString *messageUUID; // ivar: _messageUUID
@property (nonatomic) NSUInteger nextByte; // ivar: _nextByte
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (nonatomic) BOOL resumeResourceTransfers; // ivar: _resumeResourceTransfers
@property (readonly, nonatomic) BOOL sentFirstMessage; // ivar: _sentFirstMessage
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) unsigned short streamID; // ivar: _streamID
@property (readonly, nonatomic) NSUInteger totalBytes; // ivar: _totalBytes
@property (readonly, nonatomic) BOOL wantsAppAck;


-(BOOL)readNextBytes:(*id)arg0 byteOffset:(*NSUInteger)arg1 ;
-(id)description;
-(id)initWithResourceAtPath:(id)arg0 metadata:(id)arg1 sequenceNumber:(unsigned int)arg2 streamID:(unsigned short)arg3 expectsPeerResponse:(BOOL)arg4 wantsAppAck:(BOOL)arg5 compressPayload:(BOOL)arg6 compressed:(BOOL)arg7 didWakeHint:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 expiryDate:(id)arg11 ;
-(id)nextMessage;
-(id)nextMessage_old;
-(id)readNextBytes;
-(unsigned char)command;
-(void)closeFileAndMarkDone;
-(void)dealloc;
-(void)reset;


@end


#endif