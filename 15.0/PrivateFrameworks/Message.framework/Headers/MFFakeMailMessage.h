// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFFAKEMAILMESSAGE_H
#define MFFAKEMAILMESSAGE_H

@class NSString, MFMessageHeaders;


#import "MFMailMessage.h"
#import "MailAccount.h"
#import "MFMailboxUid.h"

@interface MFFakeMailMessage : MFMailMessage {
    NSString *_persistentID;
}


@property (retain, nonatomic) MailAccount *account; // ivar: _account
@property (retain, nonatomic) MFMessageHeaders *fakeHeaders; // ivar: _fakeHeaders
@property (retain, nonatomic) MFMessageHeaders *headers;
@property (retain, nonatomic) MFMailboxUid *mailbox; // ivar: _mailbox


-(id)init;
-(id)persistentID;


@end


#endif