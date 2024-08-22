// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFFAKEMAILMESSAGE_H
#define MFFAKEMAILMESSAGE_H

@class MFMessageHeaders;


#import "MFMailMessage.h"
#import "MailAccount.h"
#import "MFMailboxUid.h"

@interface MFFakeMailMessage : MFMailMessage

@property (retain, nonatomic) MailAccount *account; // ivar: _account
@property (retain, nonatomic) MFMessageHeaders *headers; // ivar: _headers
@property (retain, nonatomic) MFMailboxUid *mailbox; // ivar: _mailbox




@end


#endif