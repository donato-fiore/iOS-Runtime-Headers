// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPOPULATESENDERSTABLEMIGRATIONSTEP_H
#define EDPOPULATESENDERSTABLEMIGRATIONSTEP_H


#import <Foundation/Foundation.h>


@interface EDPopulateSendersTableMigrationStep : NSObject



+(BOOL)_clearSendersAddressesTableWithConnection:(id)arg0 ;
+(BOOL)_clearSendersTableWithConnection:(id)arg0 ;
+(BOOL)_insertGroupedSendersWithoutContact:(id)arg0 withConnection:(id)arg1 ;
+(BOOL)_insertSenderWithAddresses:(id)arg0 contact:(id)arg1 connection:(id)arg2 error:(*id)arg3 ;
+(BOOL)_insertSendersGroupedByContact:(id)arg0 withConnection:(id)arg1 ;
+(BOOL)runWithConnection:(id)arg0 sentMailboxURLs:(id)arg1 contactStore:(id)arg2 ;
+(id)_addressesForSenderIDs:(id)arg0 withConnection:(id)arg1 ;
+(id)_allSenderAddressIDsWithConnection:(id)arg0 sentMailboxURLStrings:(id)arg1 ;
+(id)_combineDictionary:(id)arg0 withDictionary:(id)arg1 ;
+(id)_senderIDsGroupedByContactsForEmailAddressesByContact:(id)arg0 withConnection:(id)arg1 ;
+(id)_senderIDsGroupedByContactsForSenderAddressesToIDs:(id)arg0 withContactStore:(id)arg1 unmatchedEmailAddresses:(*id)arg2 otherEmailAddressesByContact:(*id)arg3 ;
+(id)_senderIDsGroupedBySimpleAddressForEmailAddresses:(id)arg0 senderIDsByEmailAddress:(id)arg1 ;


@end


#endif