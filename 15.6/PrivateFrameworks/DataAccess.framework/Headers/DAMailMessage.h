// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAMAILMESSAGE_H
#define DAMAILMESSAGE_H

@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface DAMailMessage : NSObject <NSCoding>





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
-(id)clientID;
-(id)conversationId;
-(id)conversationIndex;
-(id)date;
-(id)displayTo;
-(id)folderID;
-(id)from;
-(id)initWithCoder:(id)arg0 ;
-(id)instanceID;
-(id)longID;
-(id)meetingRequestMetaData;
-(id)meetingRequestUUID;
-(id)messageClass;
-(id)preview;
-(id)remoteID;
-(id)replyTo;
-(id)rfc822Data;
-(id)sender;
-(id)serverID;
-(id)subject;
-(id)threadTopic;
-(id)to;
-(int)bodySize;
-(int)bodyTruncated;
-(int)bodyType;
-(int)importance;
-(int)lastVerb;
-(int)smimeType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif