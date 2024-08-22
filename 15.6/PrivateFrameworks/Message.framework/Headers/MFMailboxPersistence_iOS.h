// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMAILBOXPERSISTENCE_IOS_H
#define MFMAILBOXPERSISTENCE_IOS_H

@class EDMailboxPersistence, EDPersistenceDatabase;


#import "MFMailMessageLibrary.h"
#import "MFMailboxProvider.h"

@interface MFMailboxPersistence_iOS : EDMailboxPersistence

@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, weak, nonatomic) MFMailMessageLibrary *library; // ivar: _library
@property (retain, nonatomic) MFMailboxProvider *mailboxProvider;


-(BOOL)createMailbox:(id)arg0 parentMailboxID:(id)arg1 ;
-(BOOL)deleteMailbox:(id)arg0 ;
-(BOOL)moveMailbox:(id)arg0 newParentMailboxID:(id)arg1 ;
-(BOOL)renameMailbox:(id)arg0 newName:(id)arg1 ;
-(id)initWithMailboxProvider:(id)arg0 database:(id)arg1 library:(id)arg2 ;
-(id)mailboxDatabaseIDsForMailboxObjectIDs:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(void)serverCountsForMailboxScope:(id)arg0 block:(id)arg1 ;


@end


#endif