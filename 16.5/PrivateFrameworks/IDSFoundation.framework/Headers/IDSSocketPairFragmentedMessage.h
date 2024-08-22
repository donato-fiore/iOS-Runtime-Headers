// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSOCKETPAIRFRAGMENTEDMESSAGE_H
#define IDSSOCKETPAIRFRAGMENTEDMESSAGE_H

@class NSData, NSDate, NSString;
@protocol IDSSocketPairMessage;


#import "IDSSocketPairMessage.h"

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage <IDSSocketPairMessage>

 {
    NSUInteger _offset;
    NSData *_data;
}


@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL didWakeHint;
@property (readonly, nonatomic) BOOL expectsPeerResponse;
@property (retain, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) unsigned int fragmentIndex; // ivar: _fragmentIndex
@property (readonly, nonatomic) unsigned int fragmentedMessageID; // ivar: _fragmentedMessageID
@property (readonly, nonatomic) NSString *messageUUID;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) unsigned int totalFragmentCount; // ivar: _totalFragmentCount
@property (readonly, nonatomic) BOOL wantsAppAck;


+(id)createMessageFragmentsFromOriginalMessage:(id)arg0 withFragmentedMessageID:(unsigned int)arg1 fragmentSize:(unsigned int)arg2 ;
+(id)createOriginalMessageFromFragmentedMessages:(id)arg0 ;
-(id)_nonHeaderData;
-(id)description;
-(id)initWithCommand:(unsigned char)arg0 underlyingData:(id)arg1 ;
-(id)initWithData:(id)arg0 withFragmentedMessageID:(unsigned int)arg1 fragmentIndex:(unsigned int)arg2 totalFragmentCount:(unsigned int)arg3 ;
-(unsigned char)command;


@end


#endif