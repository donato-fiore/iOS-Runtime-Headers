// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMMOVEMAILBOXCHANGEACTION_H
#define EMMOVEMAILBOXCHANGEACTION_H



#import "EMMailboxChangeAction.h"
#import "EMMailboxObjectID.h"

@interface EMMoveMailboxChangeAction : EMMailboxChangeAction

@property (readonly, copy, nonatomic) EMMailboxObjectID *parentMailboxID; // ivar: _parentMailboxID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailbox:(id)arg0 newParent:(id)arg1 ;
-(id)initWithMailboxObjectID:(id)arg0 newParentMailboxID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif