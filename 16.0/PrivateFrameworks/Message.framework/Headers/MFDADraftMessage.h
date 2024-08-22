// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFDADRAFTMESSAGE_H
#define MFDADRAFTMESSAGE_H

@class DAMailMessage, NSString;


#import "MFMailMessage.h"

@interface MFDADraftMessage : DAMailMessage {
    MFMailMessage *_message;
    NSUInteger _clientID;
    NSString *_bodyData;
}




-(id)bcc;
-(id)body;
-(id)cc;
-(id)clientID;
-(id)date;
-(id)from;
-(id)initWithMailMessage:(id)arg0 clientID:(NSUInteger)arg1 ;
-(id)messageIDHeader;
-(id)replyTo;
-(id)serverID;
-(id)subject;
-(id)to;
-(int)bodyType;
-(void)setClientID:(NSUInteger)arg0 ;


@end


#endif