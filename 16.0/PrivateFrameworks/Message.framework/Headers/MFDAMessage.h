// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFDAMESSAGE_H
#define MFDAMESSAGE_H

@class MFMessage, NSString, DAMailMessage;


#import "MFMailMessage.h"
#import "MFMailboxUid.h"

@interface MFDAMessage : MFMailMessage {
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
}


@property (readonly, nonatomic) DAMailMessage *DAMailMessage; // ivar: _DAMailMessage


-(BOOL)messageData:(*id)arg0 messageSize:(*NSUInteger)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(BOOL)messageDataHolder:(*id)arg0 messageSize:(*NSUInteger)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(NSUInteger)messageFlags;
-(NSUInteger)messageSize;
-(id)externalConversationID;
-(id)headers;
-(id)headersIfAvailable;
-(id)initWithDAMailMessage:(id)arg0 mailbox:(id)arg1 ;
-(id)mailbox;
-(id)messageBody;
-(id)remoteID;
-(id)remoteMailboxURL;


@end


#endif