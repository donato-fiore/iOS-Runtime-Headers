// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMMESSAGETRANSFERALLACTION_H
#define EMMESSAGETRANSFERALLACTION_H

@class NSArray;


#import "EMMessageTransferAction.h"

@interface EMMessageTransferAllAction : EMMessageTransferAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs; // ivar: _mailboxObjectIDs


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailboxes:(id)arg0 messageListItemsToExclude:(id)arg1 destinationMailbox:(id)arg2 copyMessages:(BOOL)arg3 ;
-(id)initWithMailboxes:(id)arg0 messageListItemsToExclude:(id)arg1 specialDestinationMailboxType:(NSInteger)arg2 flagChange:(id)arg3 copyMessages:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif