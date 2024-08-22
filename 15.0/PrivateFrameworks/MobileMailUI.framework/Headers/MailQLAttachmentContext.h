// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAILQLATTACHMENTCONTEXT_H
#define MAILQLATTACHMENTCONTEXT_H

@class NSURL, EMMailboxObjectID, EMMessageObjectID, NSString, NSUserActivity;

#import <Foundation/Foundation.h>


@interface MailQLAttachmentContext : NSObject

@property (readonly, nonatomic) NSURL *attachmentURL; // ivar: _attachmentURL
@property (readonly, nonatomic, getter=isContentManaged) BOOL contentManaged; // ivar: _contentManaged
@property (readonly, nonatomic) NSInteger editBehavior; // ivar: _editBehavior
@property (readonly, nonatomic) EMMailboxObjectID *mailboxObjectID; // ivar: _mailboxObjectID
@property (readonly, nonatomic) EMMessageObjectID *messageObjectID; // ivar: _messageObjectID
@property (readonly, nonatomic) NSString *subject; // ivar: _subject
@property (readonly, copy, nonatomic) NSUserActivity *userActivity;


+(id)contextWithUserActivity:(id)arg0 ;
-(id)initWithAttachmentURL:(id)arg0 editBehavior:(NSInteger)arg1 messageObjectID:(id)arg2 mailboxObjectID:(id)arg3 subject:(id)arg4 contentManaged:(BOOL)arg5 ;


@end


#endif