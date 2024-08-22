// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EMUSERACTIONSTATE_H
#define _EMUSERACTIONSTATE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>

#import "EMObjectID.h"
#import "EMMailboxScope.h"
#import "EMMessageObjectID.h"

@interface _EMUserActionState : NSObject

@property (copy, nonatomic) NSString *cellStyle; // ivar: _cellStyle
@property (copy, nonatomic) EMObjectID *key; // ivar: _key
@property (retain, nonatomic) EMMailboxScope *mailboxScope; // ivar: _mailboxScope
@property (copy, nonatomic) NSString *messageListType; // ivar: _messageListType
@property (retain, nonatomic) EMMessageObjectID *messageObjectID; // ivar: _messageObjectID
@property (nonatomic) NSInteger row; // ivar: _row
@property (nonatomic) BOOL scrolledToEnd; // ivar: _scrolledToEnd
@property (retain, nonatomic) NSDate *viewingStarted; // ivar: _viewingStarted




@end


#endif