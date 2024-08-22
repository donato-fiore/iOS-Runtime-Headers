// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCOMPOSEMAILMESSAGE_H
#define MFCOMPOSEMAILMESSAGE_H

@class MFMailMessage, EMMessage, EMMessageRepository;



@interface MFComposeMailMessage : MFMailMessage

@property (retain, nonatomic) EMMessage *emailMessageRepresentation; // ivar: _emailMessageRepresentation
@property (readonly, nonatomic) EMMessageRepository *messageRepository;


+(id)legacyMessageWithMessage:(id)arg0 mailboxUid:(id)arg1 ;
+(id)legacyMessageWithMessage:(id)arg0 mailboxUid:(id)arg1 skipAttachmentDownload:(BOOL)arg2 ;
-(id)account;
-(id)documentID;
-(void)markAsForwarded;
-(void)markAsReplied;
-(void)markAsViewed;


@end


#endif