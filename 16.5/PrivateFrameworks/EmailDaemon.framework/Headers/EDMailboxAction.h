// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDMAILBOXACTION_H
#define EDMAILBOXACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface EDMailboxAction : NSObject

@property (readonly, nonatomic) NSInteger actionID; // ivar: _actionID
@property (readonly, nonatomic) NSInteger actionType; // ivar: _actionType
@property (readonly, copy, nonatomic) NSString *mailboxName; // ivar: _mailboxName
@property (readonly, copy, nonatomic) NSString *renamedMailboxName; // ivar: _renamedMailboxName


+(id)actionWithID:(NSInteger)arg0 toCreateMailbox:(id)arg1 ;
+(id)actionWithID:(NSInteger)arg0 toDeleteMailbox:(id)arg1 ;
+(id)actionWithID:(NSInteger)arg0 toRenameMailbox:(id)arg1 toName:(id)arg2 ;
-(id)initWithID:(NSInteger)arg0 actionType:(NSInteger)arg1 mailboxName:(id)arg2 renamedMailboxName:(id)arg3 ;


@end


#endif