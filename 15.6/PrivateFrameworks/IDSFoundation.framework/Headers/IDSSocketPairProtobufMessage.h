// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSOCKETPAIRPROTOBUFMESSAGE_H
#define IDSSOCKETPAIRPROTOBUFMESSAGE_H

@class NSData, NSDate, NSString;
@protocol IDSSocketPairMessage;


#import "IDSSocketPairMessage.h"

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage <IDSSocketPairMessage>

 {
    NSUInteger _payloadOffset;
    NSUInteger _payloadLength;
}


@property (nonatomic) BOOL compressed; // ivar: _compressed
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) BOOL didWakeHint; // ivar: _didWakeHint
@property (readonly, nonatomic) BOOL expectsPeerResponse; // ivar: _expectsPeerResponse
@property (retain, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly, nonatomic) unsigned short isResponse; // ivar: _isResponse
@property (readonly, nonatomic) NSString *messageUUID; // ivar: _messageUUID
@property (readonly, nonatomic) NSString *peerResponseIdentifier; // ivar: _peerResponseIdentifier
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) unsigned short streamID; // ivar: _streamID
@property (readonly, nonatomic) unsigned short type; // ivar: _type
@property (readonly, nonatomic) BOOL wantsAppAck; // ivar: _wantsAppAck


-(id)_nonHeaderData;
-(id)initWithCommand:(unsigned char)arg0 underlyingData:(id)arg1 ;
-(id)initWithSequenceNumber:(unsigned int)arg0 streamID:(unsigned short)arg1 expectsPeerResponse:(BOOL)arg2 wantsAppAck:(BOOL)arg3 compressed:(BOOL)arg4 didWakeHint:(BOOL)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 expiryDate:(id)arg8 protobuf:(id)arg9 ;
-(unsigned char)command;


@end


#endif