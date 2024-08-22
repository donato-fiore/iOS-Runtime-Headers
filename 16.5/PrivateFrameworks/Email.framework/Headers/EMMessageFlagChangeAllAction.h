// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMMESSAGEFLAGCHANGEALLACTION_H
#define EMMESSAGEFLAGCHANGEALLACTION_H

@class NSArray;


#import "EMMessageFlagChangeAction.h"

@interface EMMessageFlagChangeAllAction : EMMessageFlagChangeAction

@property (readonly, copy, nonatomic) NSArray *mailboxObjectIDs; // ivar: _mailboxObjectIDs


+(BOOL)supportsSecureCoding;
-(NSInteger)signpostType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailboxes:(id)arg0 messageListItemsToExclude:(id)arg1 flagChange:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif