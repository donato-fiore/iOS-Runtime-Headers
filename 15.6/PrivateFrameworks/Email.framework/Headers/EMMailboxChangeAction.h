// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMMAILBOXCHANGEACTION_H
#define EMMAILBOXCHANGEACTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "EMMailboxObjectID.h"

@interface EMMailboxChangeAction : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) EMMailboxObjectID *mailboxObjectID; // ivar: _mailboxObjectID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMailbox:(id)arg0 ;
-(id)initWithMailboxObjectID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif