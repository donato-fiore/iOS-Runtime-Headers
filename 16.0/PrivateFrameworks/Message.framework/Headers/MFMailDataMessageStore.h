// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILDATAMESSAGESTORE_H
#define MFMAILDATAMESSAGESTORE_H

@class MFDataMessageStore;
@protocol MFMailMessageStore;


#import "MailAccount.h"
#import "MFMailboxUid.h"

@interface MFMailDataMessageStore : MFDataMessageStore <MFMailMessageStore>



@property (readonly, nonatomic) MailAccount *account;
@property (readonly, nonatomic) MFMailboxUid *mailbox;
@property (readonly, nonatomic) MFMailboxUid *mailboxUid;


+(Class)classForMimePart;
-(BOOL)shouldDownloadBodyDataForMessage:(id)arg0 ;
-(id)storageLocationForAttachment:(id)arg0 withMessage:(id)arg1 ;
-(id)storeData:(id)arg0 forMimePart:(id)arg1 isComplete:(BOOL)arg2 ;


@end


#endif