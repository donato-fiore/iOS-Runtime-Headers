// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMCREATEMAILBOXCHANGEACTION_H
#define EMCREATEMAILBOXCHANGEACTION_H

@class NSString;


#import "EMMailboxChangeAction.h"

@interface EMCreateMailboxChangeAction : EMMailboxChangeAction

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailboxName:(id)arg0 parentMailbox:(id)arg1 ;
-(id)initWithMailboxName:(id)arg0 parentMailboxID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif