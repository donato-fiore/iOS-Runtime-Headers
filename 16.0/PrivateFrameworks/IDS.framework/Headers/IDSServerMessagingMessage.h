// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSERVERMESSAGINGMESSAGE_H
#define IDSSERVERMESSAGINGMESSAGE_H

@class IDSMessage, NSDate, NSData, NSString;



@interface IDSServerMessagingMessage : IDSMessage

@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSData *messageData; // ivar: _messageData
@property (retain, nonatomic) NSString *messageID; // ivar: _messageID


-(BOOL)wantsResponse;
-(NSInteger)command;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)messageBody;


@end


#endif