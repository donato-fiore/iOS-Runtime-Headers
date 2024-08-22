// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSOCKETPAIROTRENCRYPTEDMESSAGE_H
#define IDSSOCKETPAIROTRENCRYPTEDMESSAGE_H

@class NSData, NSDate, NSString;
@protocol IDSSocketPairMessage;


#import "IDSSocketPairMessage.h"

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage <IDSSocketPairMessage>

 {
    NSUInteger _offset;
    NSData *_data;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) BOOL encrypted; // ivar: _encrypted
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (retain, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) BOOL fileXfer; // ivar: _fileXfer
@property (readonly, nonatomic) NSString *messageUUID;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) unsigned short priority; // ivar: _priority
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) unsigned short streamID; // ivar: _streamID
@property (readonly, nonatomic) unsigned char versionNumber; // ivar: _versionNumber
@property (readonly, nonatomic) BOOL wantsAppAck;


-(id)_nonHeaderData;
-(id)description;
-(id)initWithCommand:(unsigned char)arg0 underlyingData:(id)arg1 ;
-(id)initWithVersion:(unsigned char)arg0 encrypted:(BOOL)arg1 streamID:(unsigned short)arg2 priority:(unsigned short)arg3 sequenceNumber:(unsigned int)arg4 fileXfer:(BOOL)arg5 data:(id)arg6 ;
-(unsigned char)command;


@end


#endif