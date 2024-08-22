// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXCHANGEACCOUNT_H
#define EXCHANGEACCOUNT_H



#import "IMAPAccount.h"

@interface ExchangeAccount : IMAPAccount



+(id)accountTypeString;
-(BOOL)_syncOnly_defaultValueForShouldStoreJunkOnServer;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg0 ;
-(BOOL)storeDraftsOnServer;
-(BOOL)storeSentMessagesOnServer;
-(Class)connectionClass;
-(id)_defaultSpecialMailboxNameForType:(int)arg0 ;
-(void)_filterMailboxList:(id)arg0 forMailboxWithPath:(id)arg1 iisServer:(id)arg2 ;
-(void)filterMailboxList:(id)arg0 forMailbox:(id)arg1 options:(int)arg2 ;


@end


#endif