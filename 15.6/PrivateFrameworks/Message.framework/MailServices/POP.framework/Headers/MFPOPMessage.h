// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPOPMESSAGE_H
#define MFPOPMESSAGE_H

@class MFMailMessage, NSData, NSString;



@interface MFPOPMessage : MFMailMessage {
    NSData *_messageData;
    BOOL _messageDataIsComplete;
    NSUInteger _size;
    NSString *_accountURL;
}


@property (retain, nonatomic) NSData *messageData;
@property (copy, nonatomic) NSString *messageID; // ivar: _messageID
@property (nonatomic) NSInteger messageNumber; // ivar: _messageNumber


-(BOOL)messageData:(*id)arg0 messageSize:(*NSUInteger)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(BOOL)messageDataHolder:(*id)arg0 messageSize:(*NSUInteger)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(NSUInteger)messageSize;
-(id)headers;
-(id)headersIfAvailable;
-(id)originalMailboxURL;
-(id)remoteMailboxURL;
-(void)setAccountURL:(id)arg0 ;
-(void)setMessageSize:(NSUInteger)arg0 ;


@end


#endif