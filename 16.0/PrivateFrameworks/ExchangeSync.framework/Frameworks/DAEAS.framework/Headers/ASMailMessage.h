// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASMAILMESSAGE_H
#define ASMAILMESSAGE_H

@class DAMailMessage;


#import "ASEmailItem.h"

@interface ASMailMessage : DAMailMessage {
    ASEmailItem *_ASEmailItem;
}




+(BOOL)supportsSecureCoding;
-(BOOL)flagged;
-(BOOL)flaggedIsSet;
-(BOOL)isDraft;
-(BOOL)meetingRequestIsActionable;
-(BOOL)read;
-(BOOL)readIsSet;
-(BOOL)verbIsSet;
-(id)attachments;
-(id)bcc;
-(id)body;
-(id)cc;
-(id)conversationId;
-(id)conversationIndex;
-(id)date;
-(id)description;
-(id)displayTo;
-(id)folderID;
-(id)from;
-(id)initWithASEmailItem:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)longID;
-(id)meetingRequestMetaData;
-(id)meetingRequestUUID;
-(id)messageClass;
-(id)preview;
-(id)remoteID;
-(id)replyTo;
-(id)rfc822Data;
-(id)sender;
-(id)subject;
-(id)threadTopic;
-(id)to;
-(int)bodySize;
-(int)bodyTruncated;
-(int)importance;
-(int)lastVerb;
-(int)smimeType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif