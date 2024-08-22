// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKREQUESTCONTEXT_H
#define NNMKREQUESTCONTEXT_H

@class NSDate, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface NNMKRequestContext : NSObject

@property (retain, nonatomic) NSDate *beforeDate; // ivar: _beforeDate
@property (retain, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) BOOL hasProtectedMessages; // ivar: _hasProtectedMessages
@property (retain, nonatomic) NSArray *mailboxes; // ivar: _mailboxes
@property (nonatomic) NSUInteger messagesForSpecialMailbox; // ivar: _messagesForSpecialMailbox
@property (nonatomic) NSUInteger resendInterval; // ivar: _resendInterval




@end


#endif