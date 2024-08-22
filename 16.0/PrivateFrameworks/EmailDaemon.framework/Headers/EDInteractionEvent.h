// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDINTERACTIONEVENT_H
#define EDINTERACTIONEVENT_H

@class NSString, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface EDInteractionEvent : NSObject

@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (nonatomic) NSInteger conversationID; // ivar: _conversationID
@property (copy, nonatomic) NSDictionary *data; // ivar: _data
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSInteger eventID; // ivar: _eventID
@property (nonatomic) NSInteger mailboxID; // ivar: _mailboxID
@property (nonatomic) NSInteger messageIDHash; // ivar: _messageIDHash
@property (nonatomic) NSInteger messagePersistentID; // ivar: _messagePersistentID
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger version; // ivar: _version


-(id)debugDescription;


@end


#endif