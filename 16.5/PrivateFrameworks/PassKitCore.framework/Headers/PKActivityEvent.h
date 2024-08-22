// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACTIVITYEVENT_H
#define PKACTIVITYEVENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface PKActivityEvent : NSObject

@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *eventType; // ivar: _eventType
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isUnread) BOOL unread; // ivar: _unread


+(id)eventsWithTransactions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToActivityEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentifier:(id)arg0 date:(id)arg1 unread:(BOOL)arg2 ;


@end


#endif