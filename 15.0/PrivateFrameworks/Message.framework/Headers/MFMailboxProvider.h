// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILBOXPROVIDER_H
#define MFMAILBOXPROVIDER_H

@class EDMailboxProvider;


#import "MFMailboxUidTransformer.h"

@interface MFMailboxProvider : EDMailboxProvider

@property (retain, nonatomic) MFMailboxUidTransformer *mailboxUidTransformer; // ivar: _mailboxUidTransformer


-(id)_transformMailbox:(id)arg0 legacyMailboxToMailboxMap:(id)arg1 objectIDToLegacyMailboxMap:(id)arg2 ;
-(id)initWithAccountsProvider:(id)arg0 ;
-(id)legacyMailboxForObjectID:(id)arg0 ;
-(void)_fetchMailboxesForAccount:(id)arg0 ;


@end


#endif