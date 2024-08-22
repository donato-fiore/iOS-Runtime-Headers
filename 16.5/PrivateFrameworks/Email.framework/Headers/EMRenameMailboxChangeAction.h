// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMRENAMEMAILBOXCHANGEACTION_H
#define EMRENAMEMAILBOXCHANGEACTION_H

@class NSString;


#import "EMMailboxChangeAction.h"

@interface EMRenameMailboxChangeAction : EMMailboxChangeAction

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailbox:(id)arg0 newName:(id)arg1 ;
-(id)initWithMailboxObjectID:(id)arg0 newName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif