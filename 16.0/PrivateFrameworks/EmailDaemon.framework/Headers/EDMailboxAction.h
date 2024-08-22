// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDMAILBOXACTION_H
#define EDMAILBOXACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EDMailboxAction : NSObject

@property (nonatomic) NSInteger actionID; // ivar: _actionID
@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (copy, nonatomic) NSString *mailboxName; // ivar: _mailboxName
@property (copy, nonatomic) NSString *renamedMailboxName; // ivar: _renamedMailboxName




@end


#endif