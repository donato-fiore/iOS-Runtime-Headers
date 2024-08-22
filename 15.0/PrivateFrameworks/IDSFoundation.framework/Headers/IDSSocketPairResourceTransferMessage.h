// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSOCKETPAIRRESOURCETRANSFERMESSAGE_H
#define IDSSOCKETPAIRRESOURCETRANSFERMESSAGE_H



#import "IDSSocketPairDataMessage.h"

@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage



+(id)cancelMessageWithSequenceNumber:(unsigned int)arg0 streamID:(unsigned short)arg1 messageUUID:(id)arg2 cancelReason:(unsigned char)arg3 ;
+(id)resumeMessageWithSequenceNumber:(unsigned int)arg0 streamID:(unsigned short)arg1 messageUUID:(id)arg2 nextByteOffset:(NSUInteger)arg3 ;
-(NSUInteger)byteOffset;
-(unsigned char)cancelReason;
-(unsigned char)command;
-(unsigned char)type;


@end


#endif