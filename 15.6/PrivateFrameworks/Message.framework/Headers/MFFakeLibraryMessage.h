// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFFAKELIBRARYMESSAGE_H
#define MFFAKELIBRARYMESSAGE_H



#import "MFLibraryMessage.h"
#import "MFMailboxUid.h"
#import "MFMailMessageLibrary.h"
#import "MailAccount.h"

@interface MFFakeLibraryMessage : MFLibraryMessage {
    MFMailboxUid *_mailboxUid;
    MFMailMessageLibrary *_library;
    MailAccount *_account;
}




+(id)messageWithRFC822Data:(id)arg0 mailboxUid:(id)arg1 library:(id)arg2 ;
+(id)messageWithRFC822Data:(id)arg0 mailboxUid:(id)arg1 library:(id)arg2 account:(id)arg3 ;
-(id)account;
-(id)initWithMailboxUid:(id)arg0 library:(id)arg1 account:(id)arg2 ;
-(id)library;
-(id)mailbox;


@end


#endif