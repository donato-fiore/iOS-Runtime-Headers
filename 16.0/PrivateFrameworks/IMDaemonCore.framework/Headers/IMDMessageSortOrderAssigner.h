// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDMESSAGESORTORDERASSIGNER_H
#define IMDMESSAGESORTORDERASSIGNER_H


#import <Foundation/Foundation.h>


@interface IMDMessageSortOrderAssigner : NSObject



-(id)copyOfMessagesWithReplyToGUID:(id)arg0 ;
-(id)messageWithGUID:(id)arg0 ;
-(void)assignAndPersistSortIDForIncomingMessage:(id)arg0 onChat:(id)arg1 ;
-(void)assignSortIDToIncomingMessage:(id)arg0 onChat:(id)arg1 ;
-(void)assignSortIDToIncomingMessageWithNoExistingMessagesWithSameReplyToGUID:(id)arg0 onChat:(id)arg1 ;
-(void)compareMessageToOtherMessagesWithSameReplyToGUIDAndAssignSortID:(id)arg0 existingMessagesWithSameReplyToGUID:(id)arg1 ;
-(void)persistMessage:(id)arg0 ;


@end


#endif