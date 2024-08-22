// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSERVERMESSAGEPERSISTENCE_H
#define EDSERVERMESSAGEPERSISTENCE_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"
#import "EDGmailLabelPersistence.h"

@interface EDServerMessagePersistence : NSObject <EFLoggable>



@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence; // ivar: _gmailLabelPersistence
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mailboxID; // ivar: _mailboxID
@property (readonly, nonatomic) unsigned int maximumIMAPUID;
@property (readonly, nonatomic) NSUInteger messageCount;
@property (readonly, nonatomic) unsigned int minimumIMAPUID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsLabels; // ivar: _supportsLabels
@property (readonly, nonatomic) NSUInteger undeletedMessageCount;
@property (readonly, nonatomic) NSUInteger unreadMessageCount;
@property (readonly, nonatomic) BOOL useNumericSearch; // ivar: _useNumericSearch


+(id)log;
+(id)serverLabelsTableSchema;
+(id)serverMessagesTableSchema;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(BOOL)_addLabels:(id)arg0 removeLabels:(id)arg1 forUID:(unsigned int)arg2 connection:(id)arg3 ;
-(BOOL)addLabels:(id)arg0 removeLabels:(id)arg1 toMessagesWithRemoteIDs:(id)arg2 ;
-(BOOL)addServerMessage:(id)arg0 invalidMessage:(*BOOL)arg1 duplicateRemoteID:(*BOOL)arg2 ;
-(BOOL)applyFlagChange:(id)arg0 toMessagesWithRemoteIDs:(id)arg1 ;
-(BOOL)applySortedFlags:(id)arg0 ;
-(BOOL)attachMessage:(NSInteger)arg0 toServerMessageWithRemoteID:(id)arg1 ;
-(BOOL)clearRemoteIDsForAllMessages;
-(BOOL)deleteAllServerMessagesInMailbox;
-(BOOL)deleteServerMessagesWithRemoteIDs:(id)arg0 ;
-(id)_remoteIDStringForRemoteIDArray:(id)arg0 ;
-(id)_serverMessageForRow:(id)arg0 connection:(id)arg1 ;
-(id)_serverMessagesWithWhereClause:(id)arg0 limitClause:(id)arg1 returnLastEntries:(BOOL)arg2 ;
-(id)deleteAllClearedUIDMessages;
-(id)init;
-(id)initWithDatabase:(id)arg0 gmailLabelPersistence:(id)arg1 mailboxID:(NSInteger)arg2 useNumericSearch:(BOOL)arg3 supportsLabels:(BOOL)arg4 ;
-(id)serverMessagesForIMAPUIDs:(id)arg0 limit:(NSUInteger)arg1 returnLastEntries:(BOOL)arg2 ;
-(id)serverMessagesForMessageIDHeaders:(id)arg0 ;
-(id)serverMessagesForRemoteIDs:(id)arg0 ;
-(void)assignUIDsToServerMessages:(id)arg0 ;
-(void)enumerateUIDsInRanges:(id)arg0 withBlock:(id)arg1 ;


@end


#endif