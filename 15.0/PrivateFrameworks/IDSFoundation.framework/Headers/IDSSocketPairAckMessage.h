// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSOCKETPAIRACKMESSAGE_H
#define IDSSOCKETPAIRACKMESSAGE_H

@class NSData, NSDate, NSString;
@protocol IDSSocketPairMessage;


#import "IDSSocketPairMessage.h"

@interface IDSSocketPairAckMessage : IDSSocketPairMessage <IDSSocketPairMessage>



@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (retain, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) NSString *messageUUID;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) BOOL wantsAppAck;


-(id)_nonHeaderData;
-(id)initWithCommand:(unsigned char)arg0 underlyingData:(id)arg1 ;
-(id)initWithSequenceNumber:(unsigned int)arg0 ;
-(unsigned char)command;


@end


#endif