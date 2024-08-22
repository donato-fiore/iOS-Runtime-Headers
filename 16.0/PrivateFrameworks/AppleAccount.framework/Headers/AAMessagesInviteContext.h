// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAMESSAGESINVITECONTEXT_H
#define AAMESSAGESINVITECONTEXT_H

@class NSString, NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface AAMessagesInviteContext : NSObject

@property (copy, nonatomic) NSString *action; // ivar: _action
@property (copy, nonatomic) NSURL *inviteURL; // ivar: _inviteURL
@property (copy, nonatomic) NSString *messageBody; // ivar: _messageBody
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (copy, nonatomic) NSString *secondaryTitle; // ivar: _secondaryTitle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)description;


@end


#endif