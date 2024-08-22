// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMMESSAGEDELETEALLACTION_H
#define EMMESSAGEDELETEALLACTION_H

@class NSArray;


#import "EMMessageChangeAction.h"

@interface EMMessageDeleteAllAction : EMMessageChangeAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs; // ivar: _mailboxObjectIDs


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailboxes:(id)arg0 messageListItemsToExclude:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif