// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSMESSAGELISTITEMSELECTION_H
#define MSMESSAGELISTITEMSELECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MSMessageListItemSelection : NSObject

@property (readonly, nonatomic) BOOL isSelectAll; // ivar: _isSelectAll
@property (readonly, nonatomic) NSArray *mailboxes; // ivar: _mailboxes
@property (readonly, nonatomic) NSArray *messageListItems; // ivar: _messageListItems


-(id)initWithMailboxes:(id)arg0 excludedMessageListItems:(id)arg1 ;
-(id)initWithMessageListItems:(id)arg0 ;


@end


#endif