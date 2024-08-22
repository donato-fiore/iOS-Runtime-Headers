// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSEARCHABLEINDEXPERSISTENCE_IOS_H
#define MFSEARCHABLEINDEXPERSISTENCE_IOS_H

@class EDSearchableIndexPersistence, NSString;
@protocol EFLoggable;



@interface MFSearchableIndexPersistence_iOS : EDSearchableIndexPersistence <EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)_verificationDataFromMessage:(id)arg0 messageIDTransactionIDDictionary:(id)arg1 ;
-(id)additionalFilterClause;
-(id)messagesWhere:(id)arg0 sortedBy:(id)arg1 limit:(NSInteger)arg2 ;
-(id)searchableIndexItemsFromMessages:(id)arg0 type:(NSInteger)arg1 ;
-(id)statistics;
-(id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg0 ;
-(void)allMailboxIdentifiersForMessage:(id)arg0 result:(id)arg1 ;
-(void)attachmentItemMetadataForAttachmentID:(id)arg0 attachmentPersistentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 mailboxID:(NSInteger)arg4 result:(id)arg5 ;
-(void)attachmentItemMetadataForAttachmentID:(id)arg0 messagePersistentID:(id)arg1 name:(id)arg2 mailboxID:(NSInteger)arg3 result:(id)arg4 ;


@end


#endif