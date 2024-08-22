// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSOCKETPAIROTRMESSAGE_H
#define IDSSOCKETPAIROTRMESSAGE_H

@class NSData, NSDate, NSString;
@protocol IDSSocketPairMessage;


#import "IDSSocketPairMessage.h"

@interface IDSSocketPairOTRMessage : IDSSocketPairMessage <IDSSocketPairMessage>

 {
    NSUInteger _offset;
    NSData *_data;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) BOOL encrypted; // ivar: _encrypted
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (retain, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) NSString *messageUUID;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) unsigned short priority; // ivar: _priority
@property (readonly, nonatomic) unsigned char protectionClass; // ivar: _protectionClass
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (readonly, nonatomic) BOOL shouldEncrypt; // ivar: _shouldEncrypt
@property (nonatomic) unsigned short streamID; // ivar: _streamID
@property (readonly, nonatomic) unsigned char versionNumber; // ivar: _versionNumber
@property (readonly, nonatomic) BOOL wantsAppAck;


-(id)_nonHeaderData;
-(id)description;
-(id)initWithCommand:(unsigned char)arg0 underlyingData:(id)arg1 ;
-(id)initWithVersion:(unsigned char)arg0 encrypted:(BOOL)arg1 shouldEncrypt:(BOOL)arg2 protectionClass:(unsigned char)arg3 streamID:(unsigned short)arg4 priority:(unsigned short)arg5 sequenceNumber:(unsigned int)arg6 data:(id)arg7 ;
-(unsigned char)command;


@end


#endif